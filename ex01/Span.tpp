/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:11:03 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/09 20:26:07 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

#include <iterator>
#include <stdexcept>

/*
 * @brief Adds a range of numbers to the container.
 *
 * Copies all elements from the iterator range [begin, end) into the container.
 * Throws an exception if adding the range would exceed the maximum capacity.
 *
 * @tparam InputIterator Any iterator type pointing to integer-like elements.
 * @param begin Iterator pointing to the first element to add.
 * @param end Iterator pointing past the last element to add.
 */
template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end)
{
    size_t dist = std::distance(begin, end);
    if (_container.size() + dist > _maxN)
        throw std::length_error("Span would exceed maximum capacity");
    _container.insert(_container.end(), begin, end);
}

#endif