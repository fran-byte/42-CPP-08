/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:51:11 by frromero          #+#    #+#             */
/*   Updated: 2025/12/31 16:17:08 by p4c0             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <exception>

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
};

#endif