/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 23:38:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/07/11 23:40:43 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	res *= ft_recursive_factorial(nb - 1);
	return (res);
}

int		main()
{
	printf("%d", ft_recursive_factorial(3));
}
