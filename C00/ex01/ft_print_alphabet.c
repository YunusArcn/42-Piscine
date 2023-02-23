/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarican <yarican@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:49:03 by yarican           #+#    #+#             */
/*   Updated: 2023/02/23 09:49:07 by yarican          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	 c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		 c++;
	}
}
int	main()
{
	ft_print_alphabet();
	return (0);
}