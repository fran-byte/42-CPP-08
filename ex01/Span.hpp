/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:51:11 by frromero          #+#    #+#             */
/*   Updated: 2026/01/01 13:16:40 by p4c0             ###   ########.fr       */
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
    int shortestSpan();
    int longestSpan();
    size_t getSize() const;
    void addRange(int min, int max);
    void addArray(const int* array, size_t size);
};

#endif