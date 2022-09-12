/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:09:55 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 10:12:47 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*mem;

	mem = malloc(nmemb * n);
	if (!(mem))
		return (NULL);
	ft_bzero(mem, (nmemb * n));//할당 받은 메모리를 0이라는 값으로 초기화
	return (mem);
}
