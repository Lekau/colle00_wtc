/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmamabol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:58:19 by lmamabol          #+#    #+#             */
/*   Updated: 2020/02/25 11:21:19 by lmamabol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void    rush(int x, int y)
{
    int k; 
    int i;

    k = 1;
	i = 1;
    while(k <= x)
    {
   		i = 1;    
        while (i <= y)
        {
            if ((i == 1 && k == 1) || (i == y && k == x))
            {
                ft_putchar('/');
            } 
            else if ((i == y && k == 1) || (i == 1 && k == x))
            {
                ft_putchar('\\');
            }
            else if (i > 1 && i < y && k > 1 && k < x)
            { 
            ft_putchar(' ');
            }
            else 
            {
                ft_putchar('*');
            }
            i++;
        }
        ft_putchar('\n');
        k++;
    }
}
