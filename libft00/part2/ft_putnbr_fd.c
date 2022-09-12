/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:35:24 by donchoi           #+#    #+#             */
/*   Updated: 2022/09/12 12:58:25 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	show_nbr(int n, int fd)
{
	if (n >= 10)
		show_nbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);//잘라서 앞에서부터 출력하는 함수
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)//해당 수 따로 예외처리
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)//0보다 작으면 -출력하고 shownbr로 넘겨버리기
	{
		write(fd, "-", 1);
		n *= -1;
	}
	show_nbr(n, fd);
}
