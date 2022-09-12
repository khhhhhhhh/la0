/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:51 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:46:56 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자열 str에 i가 있으면 해당 주소를 반환
//뒤에서 부터 찾음(rear)
char	*ft_strrchr(const char *str, int i)
{
	char	*last;
	char	find;
	size_t	idx;

	last = (char *)str;
	find = (char)i;
	idx = 0;
	idx = ft_strlen(str);
	while (idx > 0)
	{
		if (last[idx] == find)
			return (last + idx);//find가 존재하는 주소를 반환
		idx--;
	}
	// unsigned 형이기 때문에 idx가 -1이 될 수가 없어서 막기위해? find가 0번째 인덱스에 존재할때 따로 예외처리
	if (last[idx] == find)
		return (last);
	return (0);
}
