/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:51:11 by frromero          #+#    #+#             */
/*   Updated: 2025/12/30 16:22:42 by frromero         ###   ########.fr       */
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
    int shortestSpan() const;
    int longestSpan() const;
    class SpanFullException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class NoSpanException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif