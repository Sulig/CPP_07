/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:02:14 by sadoming          #+#    #+#             */
/*   Updated: 2025/05/08 19:52:58 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>

template<typename T, size_t N>
class	Array
{
	private:
		N	_size;
		T	_arr[N];
	public:
		~Array()
		Array();
		Array(N);
		Array(Array const &cpy);

		Array	&operator=(Array const &cpy);

		T&	operator[](size_t i);
		N	size(void);
};

# include "Array.tpp"

#endif
