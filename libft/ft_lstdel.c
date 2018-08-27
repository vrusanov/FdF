/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:55:38 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/25 18:02:52 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *lst;
	t_list *next;

	lst = *alst;
	if (!alst || !*alst || !del)
		return ;
	while (lst)
	{
		next = lst->next;
		(*del)(lst->content, lst->content_size);
		free(lst);
		lst = next;
	}
	*alst = NULL;
}
