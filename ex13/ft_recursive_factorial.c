/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:10:52 by pdelord           #+#    #+#             */
/*   Updated: 2016/11/07 16:13:27 by pdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	return ((nb == 1) ? 1 : ft_recursive_factorial(nb - 1) * nb);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
}
