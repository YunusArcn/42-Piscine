/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarican <yarican@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:49:26 by yarican           #+#    #+#             */
/*   Updated: 2023/02/23 09:49:27 by yarican          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}

int	main()
{
	ft_print_numbers();
}