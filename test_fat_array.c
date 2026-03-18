/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fat_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmilando <lmilando@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:04:09 by lmilando          #+#    #+#             */
/*   Updated: 2026/03/18 08:19:58 by lmilando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*test_alloc_array(void)
{
	size_t	i;
	t_array	*arr;

	i = 0;
	while (i < 6890)
	{
		arr = ft_alloc_array(i, malloc, free);
		if (i != 0)
		{
			(arr->arr)[i - 1] = 1;
			ft_free_array(arr, free);
		}
		i++;
	}
	arr = ft_alloc_array(i, malloc, free);
	return ((void *)arr);
}

int	main(int argc, char **argv)
{
	t_array	*arr;

	(void)argc;
	(void)argv;
	arr = test_alloc_array();
	ft_free_array(arr, free);
}
