/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:19:47 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 21:19:51 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int temp;
	t_list *cur;
	t_list *after;
	
	cur = lst;
	while (cur)
	{
		after = cur->next;
		while (after)
		{
			if(!cmp(cur->data, after->data))
			{
				temp = cur->data;
				cur->data = after->data;
				after->data = temp;
			}
			after = after->next;
		}
		cur = cur->next;
	}
	return (lst);
}
