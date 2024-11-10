/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:24:12 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/11/10 21:16:40 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
int		ft_atoi(const char *str);
int		ft_lstsize(t_list *lst);
int		ft_strlen(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		str_len(char *str);
int		ft_wordcount(char const *s, char c);
int		ft_wordsize(char const *str, char c);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strnew(size_t size);
char	*ft_itoa(int num);
char	*ft_strdup(const char *s1);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_putchar(char c);
void	to_upper(char *str);
void	to_lower(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int nb, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

#endif