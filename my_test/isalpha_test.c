/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:24:34 by zsmith            #+#    #+#             */
/*   Updated: 2016/09/27 19:07:08 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
// when src is larger than dest both functions "zsh: abort"

int		main(void)
{
	char	test[10];
	int		i;
	int		check;

	check = 0;
	i = 0;
	printf("\n-------------- test 1 --------------\n");
	printf("**isalpha\n\n");

	while (i < 256)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("test letter: %c, ft: %d, sys: %d\n", i, ft_isalpha(i), isalpha(i));
			
		}
		check = check + (ft_isalpha(i) - isalpha(i));
		i++;
	}
	if (check == 0)
		printf("todo bien!\n");
	return (0);
}
