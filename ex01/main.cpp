/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:00:29 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 14:05:24 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int main()
{

  try
  {
    Span s(10);

    std::cout << "\033[1;33mfilling span using int array number\033[0m" << std::endl;
    int intsec[] = {10, 15, 16, 22};
    s.insertRange(intsec, intsec + 4);
    std::cout << "the shortest span is : " << s.shortestSpan() << std::endl;
    std::cout << "the longest span is : " << s.longestSpan() << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    Span s(10);

    std::cout << "\033[1;33mfilling span using vector iterators\033[0m" << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(22);
    s.insertRange<std::vector<int>>(vec.begin(), vec.end());
    std::cout << "the shortest span is : " << s.shortestSpan() << std::endl;
    std::cout << "the longest span is : " << s.longestSpan() << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    Span s(12000);
    std::cout << "\033[1;33mgenerating a span with a sequence from 0 to 12000 number\033[0m" << std::endl;
    s.insertRange(0, 12000);
    try
    {
      std::cout << "the destance is : " << s.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << "there is no element or only one element in the span "
                << std::endl;
    }
    try
    {
      std::cout << "the shortest span is : " << s.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << "there is no element or only one element in the span "
                << std::endl;
    }
  }
  catch (std::exception &e)
  {
    std::cout << "Span is full" << std::endl;
  }

  try
  {
    std::cout << "\033[1;33mgenerating a span with a values 4, 9, 100, 17 number\033[0m" << std::endl;
    Span sp(23);
    sp.addNumber(4);
    sp.addNumber(9);
    sp.addNumber(100);
    sp.addNumber(17);
    std::cout << "the shortest span is : " << sp.shortestSpan() << std::endl;
    std::cout << "the longest span is : " << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << "ERROR" << std::endl;
  }

  return 0;
}

// int main()
// {
//   Span sp = Span(5);
//   sp.addNumber(6);
//   sp.addNumber(3);
//   sp.addNumber(17);
//   sp.addNumber(9);
//   sp.addNumber(11);
//   std::cout << sp.shortestSpan() << std::endl;
//   std::cout << sp.longestSpan() << std::endl;
//   return 0;
// }
