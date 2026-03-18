/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmilando <lmilando@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:00:17 by lmilando          #+#    #+#             */
/*   Updated: 2026/03/18 08:21:43 by lmilando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef unsigned char	t_byte;

typedef struct s_array {
	t_byte		*arr;
	size_t		cap;
}				t_array;

t_array		*ft_alloc_array(size_t cap, void *(*malloc)(size_t), \
							void (*free)(void *));
void		ft_free_array(t_array *arr, void (*free)(void *));
t_array		*ft_memset_array(t_array *dest, t_byte byte);
t_array		*ft_memmove_array(t_array *dest, t_array *src, size_t len);
#endif
