/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ferre <ferre@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:26:55 by fmolenbe      #+#    #+#                 */
/*   Updated: 2024/05/26 17:25:22 by ferre         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int arg)
{
	if (arg > 64 && arg < 91)
		return (arg + 32);
	return (arg);
}
