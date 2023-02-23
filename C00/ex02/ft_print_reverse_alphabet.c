/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarican <yarican@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:49:16 by yarican           #+#    #+#             */
/*   Updated: 2023/02/23 09:49:17 by yarican          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	 c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		 c--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
}