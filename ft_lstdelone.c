/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:38:00 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:38:09 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void	*del(void *content)
{
	free(content);
	return (0);
}

int main(void)
{
    t_list *node1,*node2;

    node1 = (t_list *)malloc(sizeof(t_list));
    node2 = (t_list *)malloc(sizeof(t_list));
    node1->content = node2;
    node1->content = ft_strdup("42Kocaeli");
    node2->content = ft_strdup("42TR");
    node2->next = NULL;

    ft_lstdelone(node1,(void *)(*del));

    printf("%s\n",(char *)node1->content);
    printf("%s\n",(char *)node2->content);
} */

// fonksiyona gelen structın contentini (del) fonksiyonu ile siler
// ve (free) fonksiyonu ile parametreden gelen lst structı silinir.
// lst'nin bağlı olduğu sonraki struct yapısı silinmez.
