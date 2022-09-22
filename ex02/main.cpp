/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:18:10 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 14:22:50 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
  {
    MutantStack<int> ms;

    ms.push(20);
    ms.push(40);
    ms.push(87);
    ms.push(45);
    ms.push(1337);
    ms.push(42);
    ms.pop();
    std::cout << "begin : " << *(ms.begin()) << " end : " << *(ms.rbegin()) << std::endl;

    std::cout << "\033[1;33miterating over MutantStack \033[0m" << std::endl;

    std::cout << "[";
    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
      std::cout << " " << *(it) << " ";
    std::cout << "]" << std::endl;
  }
  std::cout << "\033[1;32mtesting the same data in list \033[0m" << std::endl;
  {
    std::list<int> ms;

    ms.push_back(20);
    ms.push_back(40);
    ms.push_back(87);
    ms.push_back(45);
    ms.push_back(1337);
    ms.push_back(42);
    ms.pop_back();
    std::cout << "begin : " << *(ms.begin()) << " end : " << *(ms.rbegin()) << std::endl;

    std::cout << "\033[1;33miterating over list \033[0m" << std::endl;

    std::cout << "[";
    for (std::list<int>::iterator it = ms.begin(); it != ms.end(); it++)
      std::cout << " " << *(it) << " ";
    std::cout << "]" << std::endl;
  }
  return 0;
}

// int main()
// {
//   MutantStack<int> mstack;
//   mstack.push(5);
//   mstack.push(17);
//   std::cout << mstack.top() << std::endl;
//   mstack.pop();
//   std::cout << mstack.size() << std::endl;
//   mstack.push(3);
//   mstack.push(5);
//   mstack.push(737);
//   //[...]
//   mstack.push(0);
//   MutantStack<int>::iterator it = mstack.begin();
//   MutantStack<int>::iterator ite = mstack.end();
//   ++it;
//   --it;
//   while (it != ite)
//   {
//     std::cout << *it << std::endl;
//     ++it;
//   }
//   std::stack<int> s(mstack);
//   return 0;
// }