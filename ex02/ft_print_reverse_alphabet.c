/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icebeci <icebeci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 03:14:51 by icebeci           #+#    #+#             */
/*   Updated: 2025/11/02 03:14:51 by icebeci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a' && letter <= 'z')
	{
		write(1, &letter, 1);
		letter--;
	}
}

/*
EVO

void	ft_rusu_alphabet(char letter)
{
	while (letter >= 'a' && letter <= 'z')
	{
		write(1, &letter, 1);
		letter--;
	}
}
*/