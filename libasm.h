/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:25:49 by jubaldo           #+#    #+#             */
/*   Updated: 2025/05/04 21:06:04 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_h
#define LIBASM_H

/* /!\ ATTENTION: NE PAS OUBLIER DE GERER LES ERREURS PLUS TARD /!\ */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dest, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t count);

#endif