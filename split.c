#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c =='\n');
}

int	count_words(char *str)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!in_word && !is_sep(*str))
		{
			in_word = 1;
			count++;
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

char	*word_dup(char *str, int len)
{
	char *word;
	int i;

	word = malloc(len +1);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **tab;
	int i;
	int len;
	int word_len;

	word_len = count_words(str);
	tab  = malloc((word_len + 1) * sizeof(char *));
	i = 0;
	if (!tab)
		return NULL;
	while (*str)
	{
		if (!is_sep(*str))
		{
			len = 0;
			while (str[len] && !is_sep(str[len]))
				len++;
			tab[i++] = word_dup(str, len);
			str = str + len;
		}
		else
			str++;
	}
	tab[i] = NULL;
	return (tab);
}

int main ()
{
	char *words = "Hello how are you";
	char **res;

	res = ft_split(words);

	int i;

	i = 0;
	//while(res[i])
	//{
	//	printf("%s\n", res[i]);
	//	i++;
	//}

	printf("%s",  res[0]);
	return 0;
}
