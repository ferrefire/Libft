/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ferre <ferre@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:42:07 by fmolenbe      #+#    #+#                 */
/*   Updated: 2024/06/03 20:04:46 by ferrefire     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    int i;
    
    if (!dst || !src)
        return (ft_strlen(dst) + ft_strlen(src));
    i = -1;
    len = ft_strlen(dst);
    while (src[++i] && (len + i + 1) < dstsize)
        dst[len + i] = src[i];
    dst[len + i] = '\0';
    return (len + ft_strlen(src));
}
