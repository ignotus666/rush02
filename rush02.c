/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:22:07 by ggallego          #+#    #+#             */
/*   Updated: 2025/07/12 15:55:29 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_cabecera(int x)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x >= 2)
		ft_putchar('A');
	ft_putchar('\n');
}

void	ft_cuerpo(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y - 2)
	{
		if (x >= 1)
			ft_putchar('B');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x >= 2)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	ft_ultima(int x, int y)
{
	int	i;

	i = 0;
	if (y < 2)
		return ;
	if (x >= 1)
		ft_putchar('C');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x >= 2)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_cabecera(x);
	ft_cuerpo(x, y);
	ft_ultima(x, y);
}
