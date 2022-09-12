/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:12:27 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:16:28 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//memset함수는 1바이트(8비트) 단위로 값을 초기화 하기때문에 4바이트인 int형 정수를 제대로 나타낼 수 없다.
//memset함수는 입력받은 c로 배열을 초기화해서 반환하는 함수
void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	src;//부호를 위한 메모리를 모두 값으로 표현하기 위한 공간으로 사용 최대 128개가 더 늘어남
	size_t			i;

	new_dest = dest;
	src = c;//unsigned로 캐스팅(묵시적 형변환) c라는 정수에 대응되는 아스키 문자가 저장됨
	i = 0;
	while (i++ < n)
		*new_dest++ = src;//src 값으로 new dest(배열)를 n만큼 초기화
	return (dest);//성공하면 dest의 주소 반환
}
