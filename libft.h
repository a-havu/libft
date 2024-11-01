/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:13:05 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 15:59:30 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// BOOL FUNCTIONS //
int		ft_isalnum(int c); /*is c a digit or an alphabetic character*/
int		ft_isalpha(int c); /*is c an alphabetic character*/
int		ft_isascii(int c); /*is c an ASCII character*/
int		ft_isdigit(int c); /*is c a digit*/
int		ft_isprint(int c); /*is c a printable character*/

// STRING FUNCTIONS //
char	*ft_strchr(const char *s, int c); /*searches the first occurrence of c in s and returns a pointer to it*/
char	*ft_strdup(const char *s); /*returns a pointer to a new string which is a duplicate of s*/
size_t	ft_strlcat(char *dst, const char *src, size_t size); /*appends a NUL-terminated string at the end of dst, up to size*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size); /*copies src to dst up to size*/
size_t	ft_strlen(const char *s); /*returns the length of a strng*/
int		ft_strncmp(const char *s1, const char *s2, size_t n); /*compares s1 and s2, returning the difference*/
char	*ft_strnstr(const char *big, const char *little, size_t len); /*searches the first occurence of little in big, returns a pointer to it*/
char	*ft_strrchr(const char *s, int c); /*searches the last occurrence of c in s ad returns a pointer to it*/

// MEMORY FUNCTIONS //
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n); /*searches the first occurence of byte c and returns a pointer to it*/
int		ft_memcmp(const void *s1, const void *s2, size_t n); /*compares the first n bytes of memory areas s1 & s2*/
void	*ft_memcpy(void *dest, const void *src, size_t n); /*copies n bytes from src to dest*/
void	*ft_memmove(void *dest, const void *src, size_t n); /*copies n bytes from src to dest, handling overlapping*/
void    *ft_memset(void *s, int c, size_t n); /*fills the first n bytes with c*/

// CONVERSION FUNCTIONS //
int		ft_atoi(const char *nptr); /*converts a string into a numeric value*/
void	ft_bzero(void *s, size_t n); /*erases the first n bytes of an array and replaces them with 0*/
int		ft_tolower(int c); /*converts uppercase alphabets in a string to lowercase*/
int		ft_toupper(int c); /*converts lowercase alphabets in a astring to uppercase*/

