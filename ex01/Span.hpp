/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:08:34 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/02 15:25:15 by p4c0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <cstddef>

class Span
{
private:
    unsigned int _maxN;
    std::vector<int> _container;

public:
    Span(void);
    Span(unsigned int maxN);
    Span(Span const &copy);
    ~Span(void);
    Span &operator=(Span const &other);
    
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    size_t getSize() const;
    
    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end);
};

#include "Span.tpp"

#endif