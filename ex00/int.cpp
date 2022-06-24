/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:52:17 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/24 19:18:43 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casts.hpp"

void    dispint(char *argv);

bool is_int(char *argv)
{
	int i = 0;
	while(argv[i] && isspace(argv[i]))
		i++;
	if(argv[i] == '+' || argv[i] == '-')
		i++;
	while(argv[i] && isdigit(argv[i]))
		i++;
	if(argv[i])
		return(0);
	char *endp;
	if(strtol(argv, &endp, 10) > INT_MAX || strtoll(argv, &endp, 10) < INT_MIN)
		return(0);
	dispint(argv);
	return(1);
}
void	dispint(char *argv)
{
	int n = atoi(argv);
	char c = static_cast<char>(n);
	float f = static_cast<float>(n);
	double d = static_cast<double>(n);

	if(!ft_isascii(n))
		std::cout << "char: impossible\n";
	else if(!isprint(n))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char:" << c << std::endl;
	std::cout << "int: " << n << std::endl;
	if(n >= 1000000)
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
}
