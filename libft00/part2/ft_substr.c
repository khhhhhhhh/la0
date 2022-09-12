/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:43:31 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:37:07 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//원본 문자열에서 입력받은 start인덱스부터 문자열 끝까지를 할당받은 메모리에 넣어서 반환
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);//start부터 끝나는 지점까지 문자열의 길이를 반환
	if (new_len < len)
		len = new_len;
	substr = malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
