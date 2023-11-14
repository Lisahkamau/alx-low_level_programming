#include <stdlib.h>

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is a whitespace character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0; /* Flag to indicate if currently in a word */

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * word_length - Calculates the length of a word in a string.
 * @str: The input string.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int length = 0;

	while (*str && !is_space(*str))
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words). NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (is_space(*str))
			str++;

		words[i] = malloc((word_length(str) + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; !is_space(*str) && *str != '\0'; j++)
		{
			words[i][j] = *str;
			str++;
		}
		words[i][j] = '\0';
	}

	words[num_words] = NULL;

	return (words);
}

