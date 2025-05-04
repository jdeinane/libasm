/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:26:04 by jubaldo           #+#    #+#             */
/*   Updated: 2025/05/04 16:38:54 by jubaldo          ###   ########.fr       */
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

	return 0;
}