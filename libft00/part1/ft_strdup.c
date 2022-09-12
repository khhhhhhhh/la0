/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:15:44 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 13:14:42 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자열을 새로운 메모리를 할당하여 그곳에 복사하는 함수
char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*new_str;

	i = 0;
	len = 0;
	while (str[len])//len은 str의 길이값을 가지게된다.
		len++;
	new_str = malloc(sizeof(char) * (len + 1));//문자열 끝포함 해서 len+1만큼 메모리 할당받고
	if (!(new_str))//널가드
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];//하나씩 복사
		i++;
	}
	new_str[i] = '\0';//끝에 널 넣어주고
	return (new_str);//복사한 애 반환
}
