/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icebeci <icebeci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 03:10:54 by icebeci           #+#    #+#             */
/*   Updated: 2025/11/02 03:10:54 by icebeci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char  letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
