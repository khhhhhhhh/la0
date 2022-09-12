/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:27:15 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 10:39:05 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	char	find;
	int		idx;

	find = (unsigned char)i;
	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == find)
			return ((char *)str + idx);//찾으면 해당주소반환,형변환 왜 하는거지?
		idx++;
	}
	if (str[idx] == find)//find가 '/0'인 경우
		return ((char *)str + idx);
	return (0);//find와 일치하는 문자가 없음
}
