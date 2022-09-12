/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:08:10 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 10:44:23 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)//set에 s[i]와 같지 않은 문자가 등장하면 반복문 종료하고
			break ;
		i++;
	}
	return (i);//해당 인덱스값 반환
}

static int	ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);//set에 없는 문자열이 등장한 인덱스 보다 1이큰 값을 반환한다.0이 반환되면 s1과,set은 같은 문자열
}
//set에 포함되지 않는 문자가 오른쪽과 왼쪽에서 나올때까지 자른다
char	*ft_strtrim(char const *s1, char const *set)//잘라낼 원본과 잘라질 애들을 매개변수로 받음
{
	int		start;
	int		end;
	char	*newstr;

	if (!(s1))
		return (NULL);
	if (!(set))
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);//앞에서 set에 포함되지않는 문자열이 처음으로 등자하는 인덱스값
	end = ft_getend(s1, set);//뒤에서 set에 포함되지않는 문자열이 처음으로 등장하는 인덱스 값+1
	if (start >= end)
		return (ft_strdup(""));
	newstr = malloc(sizeof(char) * (end - start + 1));//잘리고 남은 문자열 길이+1만큼의 공간을 할당
	if (!(newstr))
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);//nwestr에 잘리고 남은 문자열을 복사해주고
	return (newstr);//해당 newstr반환
}
