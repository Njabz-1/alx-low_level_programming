#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - recursively calls itself with the updated indices
 * @s: string to evaluate
 * @start: starting index
 * @end: ending index
 * Return: the resulting square root
 */

int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return (1);
    if (s[start] != s[end])
        return (0);
    return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
    int len = strlen(s);
    return (check_palindrome(s, 0, len - 1));
}
