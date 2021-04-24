/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:06:54 by csapt             #+#    #+#             */
/*   Updated: 2021/04/24 15:08:04 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("VRAI strlen: %lu\n", strlen(av[1]));
	printf("FAUX strlen: %lu\n", ft_strlen(av[1]));
}