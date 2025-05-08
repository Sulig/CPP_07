/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:49:50 by sadoming          #+#    #+#             */
/*   Updated: 2025/05/08 17:49:23 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void	print_it(char ch)
{
	std::cout << ch;
}

void	print_int(int ch)
{
	std::cout << ch;
}

int	main()
{
	std::string	str = "|String Type|";
	char	ch_arr[15] = "|Char array||\0";
	int		int_arr[5] = {42,43,44,45,46};

	std::cout << "Normal string" << std::endl;
	iter(str.data(), str.length(), print_it);

	std::cout << std::endl << std::endl << "Char array" << std::endl;
	iter(ch_arr, 13, print_it);

	std::cout << std::endl << std::endl << "Int array" << std::endl;
	iter(int_arr, 5, print_int);
	std::cout << std::endl;
	iter(int_arr, 5, print_it);

	std::cout << std::endl << std::endl << "No len" << std::endl;
	iter(ch_arr, 0, print_it);

	//iter((void *)ch_arr, 1, print_it); // Compilation error
	return (0);
}
