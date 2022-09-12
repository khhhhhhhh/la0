/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:56:30 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 13:17:07 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//길이 n-1만큼 dest에 복사해준다..단 '/0'을 만나면 중단
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	while (src[i] != '\0' && i < (n - 1))//-1을 한이유는 n에는 '/0'의 자리포함이기 때문이다.
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';//마지막에 널값넣어주기
	return (src_len);
}
