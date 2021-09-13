/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:35:23 by nhamdan           #+#    #+#             */
/*   Updated: 2021/09/13 15:29:10 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
