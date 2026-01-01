/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:15:31 by frromero          #+#    #+#             */
/*   Updated: 2026/01/01 13:16:01 by p4c0             ###   ########.fr       */
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
    for (std::vector<int>::iterator it = _container.begin() + 1; it != _container.end(); ++it)
    {
        int diff = *it - *(it - 1);
        if (diff < shortNb)
            shortNb = diff;
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

size_t Span::getSize() const 
{ 
    return _container.size();
}

void Span::addRange(int min, int max)
{
    if (min > max)
        throw std::invalid_argument("Invalid range: min > max");
    
    size_t count = max - min + 1;
    if (_container.size() + count > _maxN)
        throw std::length_error("Span would exceed maximum capacity");
    
    for (int i = min; i <= max; ++i)
        _container.push_back(i);
}

void Span::addArray(const int* array, size_t size)
{
    if (!array)
        throw std::invalid_argument("Null array pointer");
    
    if (_container.size() + size > _maxN)
        throw std::length_error("Span would exceed maximum capacity");
    
    _container.insert(_container.end(), array, array + size);
}