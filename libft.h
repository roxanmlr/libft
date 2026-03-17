/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmilando <lmilando@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:00:17 by lmilando          #+#    #+#             */
/*   Updated: 2026/03/17 17:41:46 by lmilando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef unsigned char	t_byte;

typedef struct s_array {
	t_byte		*arr;
	size_t		cap;
}				t_array;

t_array		*ft_alloc_array(size_t cap);
t_array		*ft_memset_array(t_array *dest, t_byte byte);
t_array		*ft_memmove_array(t_array *dest, t_array *src, size_t len);
#endif
