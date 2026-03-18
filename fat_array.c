/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fat_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmilando <lmilando@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:05:50 by lmilando          #+#    #+#             */
/*   Updated: 2026/03/18 08:21:41 by lmilando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_array	*ft_alloc_array(size_t cap, void *(*malloc)(size_t), \
						void (*free)(void *))
{
	t_array	*ret;
	size_t	i;

	if (cap == 0)
		return (NULL);
	ret = (t_array *) malloc(sizeof(t_array));
	if (ret == NULL)
		return (NULL);
	ret->arr = malloc(sizeof(t_byte) * cap);
	if (ret->arr == NULL)
		return (free(ret), NULL);
	i = 0;
	while (i < cap)
	{
		(ret->arr)[i] = 0;
		i++;
	}
	return (ret);
}

void	ft_free_array(t_array *arr, void (*free)(void *))
{
	if (arr == NULL)
		return ;
	free(arr->arr);
	arr->arr = NULL;
	free(arr);
}

t_array	*ft_memset_array(t_array *dest, t_byte byte)
{
	size_t	i;

	if (dest == NULL || dest->arr == NULL)
		return (dest);
	i = 0;
	while (i < dest->cap)
	{
		(dest->arr)[i] = byte;
		i++;
	}
	return (dest);
}

static size_t	ft_min_size(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

t_array	*ft_memmove_array(t_array *dest, t_array *src, size_t len)
{
	size_t	i;

	if (dest == NULL || dest->arr == NULL || src == NULL || src->arr == NULL)
		return (dest);
	len = ft_min_size(len, ft_min_size(dest->cap, src->cap));
	if (len == 0)
		return (0);
	i = 0;
	while (dest <= src && i < len)
	{
		(dest->arr)[i] = (src->arr)[i];
		i++;
	}
	i = len - 1;
	while (dest > src)
	{
		(dest->arr)[i] = (src->arr)[i];
		if (i == 0)
			break ;
		i--;
	}
	return (dest);
}
