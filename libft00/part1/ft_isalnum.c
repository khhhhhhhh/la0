/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:00:52 by donchoi           #+#    #+#             */
/*   Updated: 2022/08/29 18:59:10 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//알파벳이나 숫자가 들어오면 참을 반환
int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}
