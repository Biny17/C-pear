/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_after_return.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgallet <tgallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:32:47 by tgallet           #+#    #+#             */
/*   Updated: 2025/05/22 00:10:35 by tgallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*foo()
{
	char	arr[4];
	char	*idk;

	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = '\0';
	idk = arr;
	printf("%s\n", idk);
	return (idk);
}

int	main(void)
{
	char	*p;

	p = foo();
	printf("%s\n", p);
}
