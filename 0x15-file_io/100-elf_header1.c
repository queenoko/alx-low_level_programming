#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * print_osabi - prints OS/ABI of an ELF header.
 * @e_ident: Pointer to array which contains the ELF version
 *
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                           ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints ABI version of ELF header file
 * @e_ident: Pointer to array which contains the ELF ABI version
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                           %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Type of ELF header
 * @e_type: ELF type
 * @e_ident: Pointer to array which contains the ELF class
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
        if (e_ident[EI_DATA] == ELFDATA2MSB)
                e_type >>= 8;

        printf("  Type:                           ");

        switch (e_type)
        {
                case ET_NONE:
                        printf("NONE (None)\n");
                        break;
                case ET_REL:
                        printf("REL (Relocate File)\n");
                        break;
                case ET_EXEC:
                        printf("EXEC (Executablemfile)\n");
                        break;
                case ET_DYN:
                        printf("DYN (Shared Object file)\n");
                        break;
                case ET_CORE:
                        printf("CORE (Core file)\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_type);
        }
}

/**
 * print_entry - prints entry point of ELF header
 * @e_entry: address of ELF entry point
 * @e_ident: Pointer to array which contains the ELF class
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
        printf("  Entry point address:                    ");

        if (e_ident[EI_DATA] == ELFDATA2MSB)
        {
                e_entry = ((e_entry << 8) & 0xFF00FF00) |
                        ((e_entry >> 8) & 0xFF00FF);
                e_entry = (e_entry << 16) | (e_entry >> 16);
        }

        if (e_ident[EI_CLASS] == ELFCLASS32)
                printf("%#x\n", (unsigned int)e_entry);

	else
                printf("%#lx\n", e_entry);
}


/**
 * close_elf - Closes ELF file
 * @elf: File descriptor of ELF file
 *
 * Desc: Exit with code 98, if file can't close
 */
void close_elf(int elf)
{
        if (close(elf) == -1)
        {
                dprintf(STDERR_FILENO,
                                "Error: Can't close fd %d\n", elf);

                exit(98);
        }
}

/**
 * main - Shows information inside the ELF header at the start of
 * ELF file
 * @argc: No of argument given to the program
 * @argv: Array of pointers to argument
 *
 * Return: success 0
 * Desc: exit at 98 if is not an ELF file or function fails
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
        Elf64_Ehdr *header;
        int op, rd;

        op = open(argv[1], O_RDONLY);
        if (op == -1)
        {
                dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
                exit(98);
        }
        header = malloc(sizeof(Elf64_Ehdr));
        if (header == NULL)
        {
                close_elf(op);
                dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
                exit(98);
        }
        rd = read(op, header, sizeof(Elf64_Ehdr)); if (rd == -1)
        {
                free(header);
                close_elf(op);
                dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
                exit(98);
        }

        check_elf(header->e_ident);
        printf("ELF Header:\n");
        print_magic(header->e_ident);
        print_class(header->e_ident);
        print_data(header->e_ident);
        print_version(header->e_ident);
        print_osabi(header->e_ident);
        print_abi(header->e_ident);
        print_type(header->e_type, header->e_ident);
        print_entry(header->e_entry, header->e_ident);

        free(header);
        close_elf(op);
        return (0);
}
