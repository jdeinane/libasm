/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:26:04 by jubaldo           #+#    #+#             */
/*   Updated: 2025/05/04 21:16:52 by jubaldo          ###   ########.fr       */
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

	printf("----- FT_WRITE TEST -----\n");
	printf("ft_write: %zd\n", ft_write(1, "Hello World!\n", 13));
	printf("write: %zd\n", write(1, "Hello World!\n", 13));
	
	printf("----- FT_READ TEST -----\n");
	char buf1[100] = {0};
	char buf2[100] = {0};

	printf("Write something:\n");
	ssize_t ret1 = ft_read(0, buf1, 99);
	printf("ft_read: %zd characters\n", ret1);
	printf("ft_read buffer : %s\n", buf1);

	printf("Write the same thing to compare the two functions:\n");
	ssize_t ret2 = read(0, buf2, 99);
	printf("read: %zd characters\n", ret2);
	printf("read buffer : %s\n", buf2);

	return 0;
}