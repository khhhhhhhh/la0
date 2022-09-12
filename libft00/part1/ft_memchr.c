/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:15:38 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:12:12 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//src에서 n만큼 c값을 찾는다.
void	*ft_memchr(const void *src, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)src == (unsigned char)c)
			return ((void *)src);//c를 찾으면 함수종료
		src++;
		n--;
	}
	return (0);
}
˙