/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 09:40:28 by tleroux           #+#    #+#             */
/*   Updated: 2020/02/25 11:16:30 by lmamabol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

		a = 1;
	while (a <= y)
	{
		b = 1;
			while (b <= x)
			{
				if(a == 1 || a == y)
				{
					if ( b == 1 || b == x)
						ft_putchar('0');
					else
						ft_putchar('-');
				}
				else if(b == 1 || b == x)
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
				b++;
			}
		ft_putchar('\n');
		a++;
	}
}
