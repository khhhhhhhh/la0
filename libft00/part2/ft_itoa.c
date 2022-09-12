/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:25:35 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 10:21:56 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//정적으로 반환받는 이유?
static long int	ft_abs(long int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}//양으로 변환

static int	ft_len(long int nbr)
{
	int	len;

	if (nbr <= 0)
		len = 1;//부호 자리1개
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);//자리수 반환
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	c = malloc(sizeof(char) * len + 1);
	if (!(c))
		return (0);
	c[len] = '\0';//맨뒤에 미리 문자열 널값 넣어주고
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(n % 10);//뒤에 있는값부터 문자로 변환해서 넣어줌
		n = ft_abs(n / 10);//뒤에 자리 잘라서 n에 넣어줌
		len--;
	}
	if (sign == -1)
		c[0] = '-';//-였으면 맨 처음자리에 -부호 넣어줌
	return (c);
}
