/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:18:10 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 08:12:55 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {

  MutantStack<int> ms;

  ms.push(20);
  ms.push(40);
  std::cout << "begin : " << *(ms.begin()) << " end : " << *(ms.rbegin())
            << std::endl;
  return 0;
}
