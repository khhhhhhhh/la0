/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimhwang <gimhwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:00:55 by donchoi           #+#    #+#             */
/*   Updated: 2022/08/27 22:15:35 by gimhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));//f의 가공을 받은 content를 필드로 가진 노드가 형성 후 temp로 감
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);//result의 주소를 넘기면 이중포인터를 인자로 받는거네..위에서 만들어진 temp라는 노드를 result라는 연결리스트의 맨 마지막에 추가
		temp = temp->next;//temp는 다시 빈 노드로 만들고
		lst = lst->next;//lst의 다음 노드로 이동
	}
	return (result);//최종적으로 입력받은 lst의 각 노드의 content를 f로 가공해서 temp로 옮긴 후 순차저으로 붙인 새로운 연결리스트 result를 반환
}
