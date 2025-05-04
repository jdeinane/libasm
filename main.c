/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:26:04 by jubaldo           #+#    #+#             */
/*   Updated: 2025/05/04 20:39:45 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(void) {
	printf("----- FT_STRLEN TEST -----\n");
	
	printf("ft_strlen: %zu\n", ft_strlen("Hello World!"));
	printf("strlen: %zu\n", strlen("Hello World!"));

	printf("----- FT_STRCPY TEST -----\n");
	
	char dest[100] = "";
	printf("ft_strcpy: %s\n", ft_strcpy(dest, "Hello!"));
	printf("strcpy: %s\n", strcpy(dest, "Hello!"));

	printf("----- FT_STRCMP TEST -----\n");
	printf("ft_strcmp: %d\n", ft_strcmp("abd", "abc"));
	printf("strcmp: %d\n", strcmp("abd", "abc"));

	return 0;
}