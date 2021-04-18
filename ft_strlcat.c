/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:11:43 by mbueno-g          #+#    #+#             */
/*   Updated: 2021/04/16 09:50:19 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Appends string src to the end of dst
 * It will append at most dstsize - strlen(dst) - 1 characters
 * It will then NUL-terminate, unless dstsize is 0 or the original 
 * dst string was longer than dstsize
*/

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (!src_len && !dstsize)
		return (0);
	else if (i > dstsize - 1)
		return (dstsize + src_len);
	while ((*src != '\0') && (i < dstsize - 1) && (dstsize != 0))
	{
		*(dst + i) = *src;
		i++;
		src++;
	}
	*(dst + i) = '\0';
	return (dst_len + src_len);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len > dstsize)
		return (dstsize + ft_strlen(src));
	while (len + 1 < dstsize && *src)
		dst[len++] = *src++;
	dst[len] = '\0';
	while (*src++)
		len++;
	return (len);
}
