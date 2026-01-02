/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:11:03 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/02 14:11:06 by p4c0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

#include <iterator>
#include <stdexcept>

template <typename InputIterator>
void Span::addNumbers(InputIterator begin, InputIterator end)
{
    size_t dist = std::distance(begin, end);
    if (_container.size() + dist > _maxN)
        throw std::length_error("Span would exceed maximum capacity");
    _container.insert(_container.end(), begin, end);
}

#endif