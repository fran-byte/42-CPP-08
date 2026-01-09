/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:11:15 by frromero          #+#    #+#             */
/*   Updated: 2026/01/09 20:19:15 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main()
{

    std::vector<int> myContainer0; /* Void*/

    std::cout << std::endl
              << " TESTING [VECTOR] Simple Iterator Template with EMPTY vector<int>" << std::endl
              << " ----------------------------------------------------------"
              << std::endl;

    try
    {
        std::vector<int>::iterator it = easyfind(myContainer0, 6000);

        std::cout << GREEN << " Found value: " << RESET << *it << std::endl
                  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl
                  << std::endl;
    }

    std::vector<int> myContainer1;

    for (int i = 0; i <= 1000; i += 200)
        myContainer1.push_back(i);

    std::cout << std::endl
              << " TESTING [VECTOR] Simple Iterator Template with vector<int>" << std::endl
              << " ----------------------------------------------------------"
              << std::endl;

    try
    {
        std::vector<int>::iterator it = easyfind(myContainer1, 600);

        std::cout << GREEN << " Found value: " << RESET << *it << std::endl
                  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl
                  << std::endl;
    }

    try
    {
        std::vector<int>::iterator it = easyfind(myContainer1, 500);

        std::cout << GREEN << " Found value: " << RESET << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl
                  << std::endl;
    }

    std::cout << std::endl
              << " TESTING [LIST] Simple Iterator Template with list<int>" << std::endl
              << " ------------------------------------------------------"
              << std::endl;

    std::list<int> myContainer2;

    for (int i = 0; i <= 10; i += 2)
        myContainer2.push_back(i);

    try
    {
        std::list<int>::iterator it = easyfind(myContainer2, 6);

        std::cout << GREEN << " Found value: " << RESET << *it << std::endl
                  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl
                  << std::endl;
    }

    try
    {
        std::list<int>::iterator it = easyfind(myContainer2, 500);

        std::cout << GREEN << " Found value: " << RESET << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl
                  << std::endl;
    }

    return 0;
}
