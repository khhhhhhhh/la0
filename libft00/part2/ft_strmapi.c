/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:29:30 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:25:33 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//입력받은 문자열의 문자하나하나에 함수 f를 적용시킨후 새로운 문자열 반환
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	len;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!(newstr))
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
