/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:40:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 16:48:29 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat luigi("Luigi", 50);
	luigi.incrementGrade();
	std::cout << luigi << std::endl;

	try
	{
		Bureaucrat superluigi("Super Luigi", 300);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat poorluigi("Poor Luigi", 0);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
