/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icebeci <icebeci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 03:19:02 by icebeci           #+#    #+#             */
/*   Updated: 2025/11/02 03:19:02 by icebeci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	number1;
	char	number2;

	number1 = (n / 10) + 48;
	number2 = (n % 10) + 48;
	write(1, &number1, 1);
	write(1, &number2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if (a != b)
			{
				print_number(a);
				write(1, " ", 1);
				print_number(b);
				if (a == 98 && b == 99)
					continue ;
			else
				write(1, ", ", 2);
			}
		b++;
		}
	a++;
	}
}
