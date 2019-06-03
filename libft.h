/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:44:32 by vkosi             #+#    #+#             */
/*   Updated: 2019/05/31 15:17:26 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr(const char *str);
void	ft_putstr_fd(const char *str, int fd);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	ft_strcmp(char s1, char s2);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isupper(int c);
int	ft_putchar(char c);
int	ft_strequ(char const *s1, char const *s2);
int	ft_strlen(int *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);

# endif
