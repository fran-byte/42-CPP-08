/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:54:08 by frromero          #+#    #+#             */
/*   Updated: 2025/12/28 11:49:55 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TPP
#define ITERATOR_TPP

#include <cstdlib>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;

    for (it = container.begin(); it != container.end(); ++it)
    {
        if (*it == value)
            return it;
    }

    throw std::exception();
}

#endif
