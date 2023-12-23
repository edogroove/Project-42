/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:22:10 by enanni            #+#    #+#             */
/*   Updated: 2023/11/14 18:50:01 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettera;

	lettera = 'z';
	while (lettera >= 'a')
	{
		write(1, &lettera, 1);
		lettera--;
	}
}
