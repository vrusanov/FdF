/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:48:46 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/23 16:40:56 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;
	t_list *ret;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	ret = new;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		new->next = tmp;
		new = new->next;
		lst = lst->next;
	}
	return (ret);
}
