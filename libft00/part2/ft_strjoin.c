/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:53:52 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 17:23:00 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//입력받은 두 문자열을 붙여주는 함수
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1))
		return (ft_strdup(s2));
	else if (!(s2))
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!(new_str))
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len + 1);//문자를 복사해준다.
	ft_strlcat(new_str + s1_len, s2, s2_len + 1);//newstr의 널문자부터 s2문자열+널문자를 붙인다. 
	return (new_str);
}
