/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpysmak <arpysmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:22:07 by ggallego          #+#    #+#             */
/*   Updated: 2025/07/13 15:59:28 by arpysmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_cabecera(int x)
{
	int	i;

	if (x >= 1)
		ft_putchar('/');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
		ft_putchar('\\');
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
			ft_putchar('*');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x >= 2)
			ft_putchar('*');
		ft_putchar('\n');
		j++;
	}
}

void	ft_ultima(int x, int y)
{
	int	i;

	if (y < 2)
		return ;
	if (x >= 1)
		ft_putchar('\\');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
		ft_putchar('/');
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
