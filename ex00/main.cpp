/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:14:39 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/20 11:54:33 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include <deque>

template<typename T>
void check(T container, int x)
{
    
    try {
      typename T::iterator it = easyfind(container, x);
      std::cout << "value has been found : "<< *it << std::endl;
    } catch (std::exception &e) {
      std::cout << "not found" << std::endl;
    }
}

int main() {
  
   std::cout << "\033[1;31m----------------------------------------------------" << std::endl;
  std::cout << "----------------------------------------------------\033[0m\n" << std::endl;
  
  {
      std::deque<int> container;
    
    for (int i = 1; i <= 10; i++)
      container.push_back(i);
    std::cout << "dequeue has been created and initialized with values from 0 to 10" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing dequeue with not found value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 15);
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing dequeue with existing value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 5);
  }
    std::cout << "\033[1;31m----------------------------------------------------" << std::endl;
    std::cout << "----------------------------------------------------\033[0m\n" << std::endl;
  {
      std::vector<int> container;
    
    for (int i = 1; i <= 10; i++)
      container.push_back(i);
    std::cout << "vector has been created and initialized with values from 0 to 10" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing vector with not found value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 15);
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing vector with existing value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 5);
  }
    std::cout << "\033[1;31m----------------------------------------------------" << std::endl;
    std::cout << "----------------------------------------------------\033[0m\n" << std::endl;
  { 
    std::list<int> container;
    
    for (int i = 1; i <= 10; i++)
      container.push_back(i);
    std::cout << "list has been created and initialized with values from 0 to 10" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing list with not found value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 15);
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "testing list with existing value : " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    check(container, 5);
  }

  std::cout << "\033[1;31m----------------------------------------------------" << std::endl;
  std::cout << "----------------------------------------------------\033[0m\n" << std::endl;

  return 0;
}
