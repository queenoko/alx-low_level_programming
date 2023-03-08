/*
 * File: 100-is_palindrome.c
 * Author: Queensly Udongwo
 */

#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of a string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);

}
/**
 * check_palindrome - checks if a string is a palindrome
 * @s: The string to be checked
 * @len: the length of s
 * @index: the index of the string
 *
 * Return: -1 if string is a palindrome
 *          0 if string is not palindrome
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: -1 if string is a palindrome
 *          0 if string is not palindrome
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
