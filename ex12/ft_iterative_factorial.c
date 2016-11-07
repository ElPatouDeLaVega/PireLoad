/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:05:08 by pdelord           #+#    #+#             */
/*   Updated: 2016/11/07 16:10:19 by pdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	facto;

	if (nb < 0 || nb > 12)
		return (0);
	facto = 1;
	while (nb > 0)
	{
		facto *= nb;
		nb--;
	}
	return (facto);
}
