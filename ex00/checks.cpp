/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:40:23 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/24 18:49:51 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool    isspace(char c)
{
    if( c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
            || c == '\r')
        return(1);
    return(0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

static int  ft_dprint(int c)
{
    if ((c >= ' ' && c <= '/') || (c >= ':' && c <= '@')
        || (c >= '[' && c <= '`') || (c >= '{' && c <= 126))
        return (1);
    return (0);
}

int ft_isprint(int c)
{
    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')
        || (c <= '9' && c >= '0') || ft_dprint(c))
        return (1);
    return (0);
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

