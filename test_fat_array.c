/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fat_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmilando <lmilando@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:04:09 by lmilando          #+#    #+#             */
/*   Updated: 2026/03/17 18:47:29 by lmilando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_array		*ft_alloc_array(size_t cap);
void		ft_free_array(t_array *arr);
t_array		*ft_memset_array(t_array *dest, t_byte byte);
t_array		*ft_memmove_array(t_array *dest, t_array *src, size_t len);

void	*test_alloc_array(void)
{
	size_t	i;
	t_array *arr;

	i = 0;
	while (i < 6890)
	{
		arr = ft_alloc_array(i);
		if (i != 0)
		{
			(arr->arr)[i-1] = 1;
			ft_free_array(arr);
		}
		i++;
	}
	arr = ft_alloc_array(i);
	return ((void *)arr);
}

int main(int argc, char **argv)
{
	t_array *arr;

	(void)argc;
	(void)argv;
	arr = test_alloc_array();
	ft_free_array(arr);
}
