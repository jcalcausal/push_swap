/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:27:14 by jalcausa          #+#    #+#             */
/*   Updated: 2025/01/17 19:37:07 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Double linked list */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prv;
	struct s_node	*next;
}	t_node;