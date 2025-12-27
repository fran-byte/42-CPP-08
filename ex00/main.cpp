/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:11:15 by frromero          #+#    #+#             */
/*   Updated: 2025/12/27 21:28:20 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

std::vector<int> v; // vector de enteros vacío

int main()
{
    std::vector<int> myContainer;
    myContainer.push_back(100);
    myContainer.push_back(200);
    myContainer.push_back(300);
    myContainer.push_back(400);
    myContainer.push_back(500);

    std::vector<int>::iterator it = easyfind(myContainer, 3000);

    std::cout << "the iterator point to : " << *it << std::endl;
    return 0;
}
