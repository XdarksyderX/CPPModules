/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:40:54 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 19:44:47 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "RPN.hpp"
#include <iostream>

RPN::RPN(const std::string &expression) : result(0)
{
    try {
        std::istringstream iss(expression);
        std::string token;
        while (iss >> token)
		{
            if (isdigit(token[0]))
			{
                std::istringstream numberStream(token);
                double number;
                numberStream >> number;
                stack.push(number);
			}
            else if (token == "+")
                add();
            else if (token == "-")
                sub();
            else if (token == "*")
                mul();
            else if (token == "/")
                div();
            else
                throw RPNException();
        }
        if (stack.size() != 1)
		{
            throw RPNException();
        }
        result = stack.top();
    }
    catch (const std::exception& e)
    {
        throw RPNException();
    }
}

RPN::RPN(const RPN &other)
{
    stack = other.stack;
    result = other.result;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        stack = other.stack;
        result = other.result;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::push(double value)
{
    stack.push(value);
}

void RPN::mul()
{
    if (stack.size() < 2) throw RPNException();
    double a = stack.top();
    stack.pop();
    double b = stack.top();
    stack.pop();
    stack.push(a * b);
}

void RPN::div()
{
    if (stack.size() < 2) throw RPNException();
    double a = stack.top();
    stack.pop();
    double b = stack.top();
    stack.pop();
    if (b == 0) throw RPNException();
    stack.push(b / a);
}

void RPN::add()
{
    if (stack.size() < 2) throw RPNException();
    double a = stack.top();
    stack.pop();
    double b = stack.top();
    stack.pop();
    stack.push(a + b);
}

void RPN::sub()
{
    if (stack.size() < 2) throw RPNException();
    double a = stack.top();
    stack.pop();
    double b = stack.top();
    stack.pop();
    stack.push(b - a);
}

double RPN::getResult() const
{
    return result;
}

const char *RPN::RPNException::what() const throw()
{
	return "Error: Invalid expression";
}