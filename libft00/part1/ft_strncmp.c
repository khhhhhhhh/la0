/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:10:58 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 09:43:53 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//두 문자열을 n만큼 비교하면서 차이가 발생시 양 또는 음을 반환 n비교하는동안 모두 다 같으면 0반환
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	*b1;
	unsigned char	*b2;

	idx = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while (n)
	{
		if (b1[idx] != b2[idx] || b1[idx] == 0 || b2[idx] == 0)
			return (b1[idx] - b2[idx]);
		idx++;
		n--;
	}
	return (0);
}
