/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:16:54 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 12:49:46 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words_num(char const *str, char c)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)//단어의 첫문자로 이동
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && str[i] != c)//구분자가 아닌 문자들이 등장하면 인덱스와 cnt값 계속증가
			i++;
		cnt++;//cnt는 단어개수를 의미하는 변수
	}
	return (cnt);//단어 개수 반환
}

static char	*split_word(char const *str, int len)//단어의 첫 주소 반환
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (word == 0)
		return (0);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	free_words(char **words, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(words[i++]);//작은거 할당해제하고
	free(words);//큰거 할당해제
	return (0);
}

static void	split_word_list(char const *s, char c, char **words)//문자열에서 단어를 구분자를 기준으로 잘라서 2차워 문자열에 하나씩 넣어줌
{
	int	start;
	int	i;
	int	word_n;

	i = 0;
	word_n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)//단어의 첫 문자로 이동
			i++;
		if (s[i] == '\0')
			break ;
		start = i;//단어의 첫 문자의 인덱스값을 start에 넣어주고
		while (s[i] != c && s[i] != '\0')
			i++;
		words[word_n] = split_word(s + start, i - start);//단어의 첫주소와 단어의 길이를 입력값으로 받아서 해당단어를 2차원 문자열에 넣어줌
		if (words[word_n] == 0)//널가드
		{
			free_words(words, word_n);
			return ;
		}
		word_n++;
	}
	words[word_n] = 0;//2차원 배열의 마지막에 널값 채워주고
}

char	**ft_split(char const *s, char c)
{
	char	**words;//2차원 문자열 하나 선언하고

	if (s == NULL)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (count_words_num(s, c) + 1));//단어개수 +1만큼의 공간을 할당받음
	if (words == 0)
		return (0);
	split_word_list(s, c, words);//단어를 잘라서 위에서 선언한 2차원 문자열에 넣음
	return (words);
}
