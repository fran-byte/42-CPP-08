/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:11:48 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/09 20:23:03 by frromero         ###   ########.fr       */
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
{
}

Span::~Span(void) {}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        _maxN = other._maxN;
        _container = other._container;
    }
    return *this;
}

/* Adds a number to the container */
void Span::addNumber(int number)
{
    if (_container.size() >= _maxN)
        throw std::length_error("Span is already full");
    _container.push_back(number);
}

/* Returns the shortest span (smallest difference) between any two numbers */
int Span::shortestSpan() const
{
    if (_container.size() < 2)
        throw std::runtime_error("Not enough elements to calculate span");
    int shortNb = INT_MAX;
    std::vector<int> cpContainer = _container;

    std::sort(cpContainer.begin(), cpContainer.end());
    for (std::vector<int>::const_iterator it = cpContainer.begin() + 1; it != cpContainer.end(); ++it)
    {
        int diff = *it - *(it - 1);
        if (diff < shortNb)
            shortNb = diff;
    }
    return shortNb;
}

/* Returns the longest span (largest difference) between any two numbers */
int Span::longestSpan() const
{
    if (_container.size() < 2)
        throw std::runtime_error("Not enough elements to calculate span");
    std::vector<int> cpContainer = _container;

    std::sort(cpContainer.begin(), cpContainer.end());
    return *(cpContainer.end() - 1) - *(cpContainer.begin());
}

size_t Span::getSize() const
{
    return _container.size();
}