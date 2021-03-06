/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:31:45 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/19 15:09:48 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t len);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memchr(const void *str, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t len);
char				*ft_strchr(const char *str, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
char				*ft_strnstr(const char *str, const char *to_find,
	size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

char				*ft_substr(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *str, char const *set);
char				**ft_split(char const *str, char c);
char				*ft_itoa(int nb);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nb, int fd);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void*));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void*),
	void (*del)(void*));

#endif
