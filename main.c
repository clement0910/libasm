/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:06:54 by csapt             #+#    #+#             */
/*   Updated: 2021/04/24 18:16:43 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(int ac, char **av)
{
	int fd;
	if (ac != 2)
	{
		printf("Need file in argv for test read thx\n");
		return 0;
	}
	if ((fd = open(av[1], O_RDONLY)) == -1)
	{
		perror(av[1]);
		return 0;
	}
	char str[] = "";
	char str1[] = "bonjour";
	char str2[] = "bonjour\n";
	char str4[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
	char dst[100];
	char dst2[1000];
	char dst3[] = "";
	printf("LIBASM TEST:\n");
	printf("VRAI FUNCTION PREFIX: 1\n");
	printf("FONCTION REFAITE PREFIX 2\n");
	printf("-------------------------------\n");
	printf("STRLEN:\n");
	printf("1: %lu\n", strlen(str));
	printf("2: %lu\n", ft_strlen(str));
	printf("--\n");
	printf("1: %lu\n", strlen(str1));
	printf("2: %lu\n", ft_strlen(str1));
	printf("--\n");
	printf("1: %lu\n", strlen(str2));
	printf("2: %lu\n", ft_strlen(str2));
	printf("--\n");
	printf("1: %lu\n", strlen(str4));
	printf("2: %lu\n", ft_strlen(str4));
	printf("--\n");
	printf("-------------------------------\n");
	printf("STRCPY:\n");
	printf("1: %s\n", strcpy(dst, str));
	printf("2: %s\n", ft_strcpy(dst, str));
	printf("--\n");
	printf("1: %s\n", strcpy(dst, str1));
	printf("2: %s\n", ft_strcpy(dst, str1));
	printf("--\n");
	printf("1: %s\n", strcpy(dst, str1));
	printf("2: %s\n", ft_strcpy(dst, str1));
	printf("--\n");
	printf("1: %s\n", strcpy(dst2, str4));
	printf("2: %s\n", ft_strcpy(dst2, str4));
	printf("--\n");
	printf("1: %s\n", strcpy(dst3, str));
	printf("2: %s\n", ft_strcpy(dst3, str));
	printf("-------------------------------\n");
	printf("STRCMP:\n");
	printf("1: %d\n", strcmp("hello", "hello"));
	printf("2: %d\n", ft_strcmp("hello", "hello"));
	printf("--\n");
	printf("1: %d\n", strcmp(dst3, str));
	printf("2: %d\n", ft_strcmp(dst3, str));
	printf("--\n");
	printf("1: %d\n", strcmp(str4, str2));
	printf("2: %d\n", ft_strcmp(str4, str2));
	printf("--\n");
	printf("1: %d\n", strcmp(str1, str2));
	printf("2: %d\n", ft_strcmp(str1, str2));
	printf("--\n");
	printf("1: %d\n", strcmp(str1, dst3));
	printf("2: %d\n", ft_strcmp(str1, dst3));	
	printf("-------------------------------\n");
	printf("WRITE:\n");
	printf("1: %zd\n", write(1, str2, strlen(str2)));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_write(1, str2, strlen(str2)));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", write(5, str2, strlen(str2)));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_write(5, str2, strlen(str2)));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", write(1, str2, 0));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_write(1, str2, 0));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", write(1, str4, 15 * 2));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_write(1, str4, 15 * 2));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", write(1, NULL, 1));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_write(1, NULL, 1));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("-------------------------------\n");
	printf("READ:\n");
	printf("Pls enter input:\n");
	printf("1: %zd\n", read(1, dst, 100));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("Pls enter input:\n");
	printf("2: %zd\n", ft_read(1, dst, 100));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", read(5, dst, 100));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_read(5, dst, 100));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", read(fd, dst, 10));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_read(fd, dst, 10));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", read(fd, dst, 0));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_read(fd, dst, 0));
	printf("%s\n", dst);
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("----------\n");
	printf("1: %zd\n", read(fd, NULL, 15));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("--\n");
	printf("2: %zd\n", ft_read(fd, NULL, 15));
	printf("%s\n", strerror(errno));
	errno = 0;
	printf("WARNING !! TEST CAN SEGFAULT AND HAVE DIFFERENT OUTPUT !\n");
	printf("-------------------------------\n");
	printf("STRDUP:\n");
	printf("1: %s\n", strdup(str));
	printf("2: %s\n", ft_strdup(str));
	printf("--\n");
	printf("1: %s\n", strdup(str4));
	printf("2: %s\n", ft_strdup(str4));
	printf("--\n");
	printf("1: %s\n", strdup("???\\n"));
	printf("2: %s\n", ft_strdup("???\\n"));
	printf("--\n");
	return 0;
}