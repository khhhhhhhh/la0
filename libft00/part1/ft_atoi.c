/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:28:03 by hwankim           #+#    #+#             */
/*   Updated: 2022/08/27 21:32:14 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)//처음 공백을 건너뛰는 함수
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long		nbr;
	long		sign;
	size_t		idx;

	nbr = 0;
	sign = 1;
	idx = 0;
	while (str[idx] != '\0' && ft_isspace(str[idx]) == 1)//들어온 인자를 구성하는 인덱스값들이 끝이아니고 공백이면 인덱스 증가
		idx++;
	if (str[idx] == '-')//-부호 있으면 sign에 곱해주고
		sign = -1;
	if (str[idx] == '-' || str[idx] == '+')//또 나오면 무시
		idx++;
	while (str[idx] != '\0' && str[idx] >= '0' && str[idx] <= '9')//문자형 숫자들이 있으면
	{
		nbr = (nbr * 10) + (str[idx] - '0');//숫자로 변형하고 nbr에 십진법으로 만들어서 넣는다
		//정수형 범위를 벗어나는 경우 케이스에 따라서 1,-1을 반환
		if (nbr > 2147483647 && sign == 1)
			return (-1);
		if (nbr > 2147483648 && sign == -1)
			return (0);
		idx++;
	}
	//정상적으로 변환이 이루어진 경우 해당 값을 반환한다.
	return (sign * nbr);
}
