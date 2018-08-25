/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isgraph.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: canastas <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/06 19:06:40 by canastas     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 19:08:07 by canastas    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isgraph(int c)
{
	if (c > 32 && c < 127)
		return (1);
	return (0);
}
