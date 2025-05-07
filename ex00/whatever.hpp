/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:33:08 by sadoming          #+#    #+#             */
/*   Updated: 2025/05/07 19:21:53 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template	<typename T>
void	swap(T& a, T& b)
{
	T	c = a;
	a = b;
	b = c;
}

template	<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template	<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
#endif
