/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:02:14 by sadoming          #+#    #+#             */
/*   Updated: 2025/05/12 19:19:30 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <stdexcept>

template<typename T>
class	Array
{
	private:
		unsigned int	_size;
		T				*_arr;

	public:
		/*-- Constructors and Destructor	*/
		~Array()
		{
			if (_arr)
				delete[] _arr;
			_arr = NULL;
			_size = 0;
		}

		Array()
		{
			_size = 0;
			_arr = NULL;
		}
		Array(unsigned int n)
		{
			_size = n;
			_arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_arr[i] = '\0';
		}
		Array(Array const &cpy)
		{
			_size = cpy._size;
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = cpy._arr[i];
		}

		Array	&operator=(Array const &cpy)
		{
			if (this != &cpy)
			{
				if (_arr)
					delete[] _arr;
				_size = cpy._size;
				_arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_arr[i] = cpy._arr[i];
			}
			return (*this);
		}
		/**----------------------------- */

		/*-- Access operator	*/
		/* Return element in array at index `i`
			If it is out of the bounds throw an exception
		*/
		T&	operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index is out of bounds!");
			return (_arr[i]);
		}

		unsigned int	size(void)	{	return (this->_size);	}
};

#endif
