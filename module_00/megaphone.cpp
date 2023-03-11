/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:57:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/11 17:03:26 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	std::string input;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			input = argv[i];
			while (input[j])
				std::cout << (char)toupper(input[j++]);
			i++;
		}
		std::cout << " ";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
