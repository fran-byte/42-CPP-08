/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:15:31 by frromero          #+#    #+#             */
/*   Updated: 2025/12/31 13:34:23 by p4c0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _maxN(0) {}

Span::Span(unsigned int maxN) : _maxN(maxN)
{
    if (_maxN > 0)
        _container.reserve(_maxN);

}

Span::Span(Span const &copy) 
    : _maxN(copy._maxN), _container(copy._container) 
{}

Span::~Span(void){}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        _maxN = other._maxN;
        _container = other._container;
    }
    return *this;
}