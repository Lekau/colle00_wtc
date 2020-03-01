/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmamabol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:01:52 by lmamabol          #+#    #+#             */
/*   Updated: 2020/02/25 11:20:37 by lmamabol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    ft_putchar(char c);

void    rush(int x, int y)
{
    int k; 
    int i;

    k = 1;
	i = 1;
    while(k <= x)
    {
        i = 1;
        while(i <= y)
        {
            if ((k == 1 && i == 1) || (k == x && i == y))
            {
                ft_putchar('A');
            } 
            else if ((i == y && k == 1) || (k == x && i == 1)) 
            {
                ft_putchar('C');
            }
            else if ( i > 1 && i < y && k > 1 && k < x)
            { 
            ft_putchar(' ');
            }
            else 
            {
                ft_putchar('B');
            }
            i++;
        }
        ft_putchar('\n');
        k++;
    }
}
