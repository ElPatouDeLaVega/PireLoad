/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:14:56 by pdelord           #+#    #+#             */
/*   Updated: 2016/11/07 17:12:41 by pdelord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	sqrt;
	int	gap;
	int	square;
	
	sqrt = 1;
	gap = 1;
	square = 1;
	while (square <= nb && square >= 0)
	{
		gap += 2;
		square += gap;
		sqrt++;
	}
	return (sqrt - 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_sqrt(atoi(av[1])));
}
