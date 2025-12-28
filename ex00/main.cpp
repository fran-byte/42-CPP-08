/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:11:15 by frromero          #+#    #+#             */
/*   Updated: 2025/12/28 18:40:31 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#define RED "\033[31m"
#define GREEN "\033[32m"


#define RESET "\033[0m"

int main()
{
    std::vector<int> myContainer;
    
    for(int i = 0; i <=1000 ; i+=200)
        myContainer.push_back(i);

    std::cout << std::endl << " TESTING Simple Iterator Template " << std::endl << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(myContainer, 600);

        std::cout << GREEN <<" Found value: " << RESET << *it << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl << std::endl;
    }


    try
    {
        std::vector<int>::iterator it = easyfind(myContainer, 500);

        std::cout << GREEN <<" Found value: " << RESET << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << std::endl << std::endl;
    }

    return 0;
}
