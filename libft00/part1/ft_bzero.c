/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:35:59 by donchoi           #+#    #+#             */
/*   Updated: 2022/08/29 19:51:08 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//void포인터 d를 n만큼 0이라는 값으로 초기화한다.
//더이상 사용하지 않는 함수라고 함
void	ft_bzero(void *d, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = d;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}