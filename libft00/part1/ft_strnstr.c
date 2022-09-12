/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:25:18 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 13:30:20 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//n의 길이내 에서 big에 little의 문자열이 존재하는 탐색하는 함수
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	b_len;
	size_t	l_len;
	size_t	size;

	if (*little == '\0')
		return ((char *)big);

	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	if (b_len < l_len || n < l_len)
		return (0);//little를 찾을 수 없는 경우 이므로 예외처리
	if (b_len > n)//b_len이 n보다 크면 (b문자열의 n길이내에서):여기서 b의 첫문자부터 n길이 이내를 의마함 l문자열을 찾는거고
		size = n;
	else
		size = b_len;//그게 아니면 b에서 그냥 l을 찾는 거임
	while (size >= l_len)//
	{
		if (ft_memcmp(big, little, l_len) == 0)//이 함수는 두 문자열을 l_len만큼 비교했을떄 동일하면 0반환

			return ((char *)big);//ft_memcmp에서 0이 반환되면 big에서 little를 찾았으므로 big의 첫 주소를 반환
		big++;//big의 인덱스를 하나씩 증가
		size--;//
	}
	return (0);
}
