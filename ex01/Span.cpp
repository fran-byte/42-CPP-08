/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:15:31 by frromero          #+#    #+#             */
/*   Updated: 2025/12/31 16:21:40 by p4c0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <climits>

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

void Span::addNumber(int number)
{
    if (_container.size() >= _maxN)
        throw std::length_error("Span is already full");
    _container.push_back(number);
}

int Span::shortestSpan()
{
    if (_container.size() < 2)
        throw std::runtime_error("Not enough elements to calculate span");
    int shortNb = INT_MAX;

    std::sort(_container.begin(), _container.end());
    for (std::vector<int>::iterator it = _container.end()-1; it != _container.begin(); --it)
    {
        if ((*it - *(it -1) ) < shortNb)
            shortNb = (*it - *(it -1) ) ;
    }
    return shortNb;
    
}

int Span::longestSpan()
{
     if (_container.size() < 2)
        throw std::runtime_error("Not enough elements to calculate span");
    std::sort(_container.begin(), _container.end());
    return *(_container.end() - 1) - *(_container.begin());

}