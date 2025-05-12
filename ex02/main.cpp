/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:01:55 by sadoming          #+#    #+#             */
/*   Updated: 2025/05/12 19:02:38 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int	main()
{
	/// Constructor section
	Array<std::string>	str_arr(3);
	Array<int>	int_arr(5);
	Array<char>	char_arr(4);
	Array<char>	empty_arr;
	Array<char>	empty_arr2(0);

	// Fill the arrays
	str_arr[0] = "Hello";
	str_arr[1] = "World";
	str_arr[2] = "42";
	//*** */
	int_arr[0] = 42;
	int_arr[1] = 43;
	int_arr[2] = 0;
	int_arr[3] = -42;
	int_arr[4] = 2147483647;
	/****** */

	// Try to access out of bounds
	try
	{
		std::cout << str_arr[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/****** */

	std::cout << std::endl;

	/// Size section
	std::cout << "Size of str_arr: " << str_arr.size() << std::endl;
	std::cout << "Size of int_arr: " << int_arr.size() << std::endl;
	std::cout << "Size of char_arr: " << char_arr.size() << std::endl;
	std::cout << "Size of empty_arr: " << empty_arr.size() << std::endl;
	std::cout << "Size of empty_arr2: " << empty_arr2.size() << std::endl;
	/****** */

	std::cout << std::endl;

	/// Copy constructor section
	Array<std::string>	str_arr2(str_arr);

	for (unsigned int i = 0; i < str_arr2.size(); i++)
	{
		std::cout << "Org:\t|" << str_arr[i] << std::endl;
		std::cout << "Cpy:\t|" << str_arr2[i] << std::endl;
	}
	/****** */

	std::cout << std::endl;

	/// Assignment operator section
	Array<std::string>	str_arr3;
	str_arr3 = str_arr2;

	for (unsigned int i = 0; i < str_arr3.size(); i++)
	{
		std::cout << "Org:\t|" << str_arr2[i] << std::endl;
		std::cout << "Cpy:\t|" << str_arr3[i] << std::endl;
	}
	/****** */

	std::cout << std::endl;
	return (0);
}
