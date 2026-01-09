/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:52:50 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/09 20:39:43 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main()
{
    /* Subject Test */
    std::cout << std::endl
              << GREEN << "Subject Test:" << RESET << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    /* Performance Test with 500,000 numbers */
    std::cout << std::endl
              << GREEN << "Performance Test (500,000 numbers):" << RESET << std::endl;
    try
    {
        Span sp = Span(500000);
        for (int i = 0; i < 500000; ++i)
            sp.addNumber(i * 2);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    /* Test addRange with various containers */
    std::cout << std::endl
              << CYAN << "Testing addRange with different containers:" << RESET << std::endl;

    std::cout << GREEN << std::endl
              << "1. Pointers are iterators:" << RESET << std::endl;
    try
    {
        Span sp(10);
        int arr[] = {100, 200, 300, 400, 500};
        sp.addRange(arr, arr + 5); /* Pointers as iterators */
        std::cout << "Added 5 elements from array. Size: " << sp.getSize() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << GREEN << std::endl
              << "2. std::vector:" << RESET << std::endl;
    try
    {
        Span sp(15);
        std::vector<int> vec;
        for (int i = 1; i <= 10; ++i)
            vec.push_back(i * 10);

        sp.addRange(vec.begin(), vec.end()); /*Iterates a vector vec*/
        std::cout << "Added 10 elements from vector. Size: " << sp.getSize() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << GREEN << std::endl
              << "3. std::list:" << RESET << std::endl;
    try
    {
        Span sp(8);
        std::list<int> lst;
        lst.push_back(7);
        lst.push_back(14);
        lst.push_back(21);
        lst.push_back(28);

        sp.addRange(lst.begin(), lst.end()); /*Iterates a list<int> lst*/
        std::cout << "Added 4 elements from list. Size: " << sp.getSize() << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << GREEN << std::endl
              << "4. Error test (exceeding capacity):" << RESET << std::endl;
    try
    {
        Span sp(5);
        std::deque<int> deq;
        deq.push_back(1);
        deq.push_back(2);
        deq.push_back(3);
        deq.push_back(4);
        deq.push_back(5);
        deq.push_back(6); /*FAil*/

        sp.addRange(deq.begin(), deq.end());
        std::cout << "Size: " << sp.getSize() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Expected error: " << e.what() << RESET << std::endl;
    }

    std::cout << GREEN << std::endl
              << "5. Mixed usage (addNumber + addRange):" << RESET << std::endl;
    try
    {
        Span sp(20);
        sp.addNumber(42);
        sp.addNumber(84); /* + 2 */

        std::vector<int> moreNumbers;
        moreNumbers.push_back(126);
        moreNumbers.push_back(168);
        moreNumbers.push_back(210); /* + 3 */

        sp.addRange(moreNumbers.begin(), moreNumbers.end());

        int arr[] = {252, 212, 336}; /* + 3 */
        sp.addRange(arr, arr + 3);

        std::cout << "Final size: " << sp.getSize() << std::endl; /* = 8 */
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }
    return 0;
}