/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:22:10 by enanni            #+#    #+#             */
/*   Updated: 2023/11/14 17:39:02 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lettera;

	lettera = 'a';
	while (lettera <= 'z')
	{
		write(1, &lettera, 1);
		lettera++;
	}
}
