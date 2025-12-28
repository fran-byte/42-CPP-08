/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:54:08 by frromero          #+#    #+#             */
/*   Updated: 2025/12/28 17:15:50 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TPP
#define ITERATOR_TPP

#include <cstdlib>
#include <exception>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    
    if (it != container.end())
        return it;
    else
        throw std::runtime_error(" Value not found in container !!");
}

#endif
