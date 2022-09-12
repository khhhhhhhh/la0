/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:42:52 by donchoi           #+#    #+#             */
/*   Updated: 2022/08/29 19:56:00 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//dest,src가 겹치면 동작하지 않는다
//char배열로 복사하는 경우 '/0'도 해야함
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if (!dest && !src)
		return (0);//둘중에 하나라도 없으면 0 반환
	new_dest = dest;
	new_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_src++;//src를 n만큼 dest에 복사
	return (dest);//복사에 성공하면 dest 반환 포인터로 다루니깐 dest 반환해도 돈케어
}
