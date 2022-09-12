/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:04:26 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:22:17 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//n=초기 dest길이+붙일데이터 길이+1(널값자리)
//strlcat은 입력받은 dest의 문자열에 src의 문자를 하나씩 붙이면서 dest의 길이가 n-1이 되면 마지막에 널값넣어 주면서 마무리
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (n < dest_len + 1)
		return (n + src_len);
	if (n > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len + i + 1 < n)//dest_len + i + 1은 src에서 하나씩 가져와서 붙인후 dest의 길이값 반복문을 빠져나오면 src의 i인덱스의 값이 널값이 아니면 dest의 길이는 n-1이고 i의 인덱스가 가지는 값은 비어있음
		{
			dest[dest_len + i] = src[i];//dest의 문자가 존재하는 마지막인덱스 다음부터 src를 붙여넣음
			i++;             
		}
	}
	dest[dest_len + i] = '\0';//최종적으로 비어있는 인덱스에 널값을 넣어준다.
	return (dest_len + src_len);
}
