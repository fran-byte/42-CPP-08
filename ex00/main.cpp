/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:11:15 by frromero          #+#    #+#             */
/*   Updated: 2025/12/28 16:34:35 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

std::vector<int> v; // vector de enteros vacío

int main()
{
    std::vector<int> myContainer;
    std::vector<char> myContainer2;
    
    for(int i = 0; i <10 ; i=i+2)
        myContainer.push_back(i*2);
    
    for(int i = 32; i < 127; i++)
          myContainer2.push_back(static_cast<char>(i));


    std::vector<int>::iterator it = easyfind(myContainer, 8);

    std::vector<char>::iterator it2 = easyfind(myContainer2, 'a');

    std::cout << "myContainer <int>  iterator point to : " << *it << std::endl;
    std::cout << "myContainer <char> iterator point to : " << *it2 << std::endl;
    return 0;
}
