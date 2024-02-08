/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:34:46 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 23:38:29 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(0, 4);
    Point c(4, 0);

    // Punto dentro del triángulo
    Point inside(1, 1);
    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;

    // Punto fuera del triángulo
    Point outside(5, 5);
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;

    // Punto en un vértice del triángulo
    Point vertexA(0, 0);
    std::cout << "Vertex A: " << bsp(a, b, c, vertexA) << std::endl;

    // Punto en un borde del triángulo
    Point onEdge(2, 0);
    std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;

    // Punto en una línea de extensión de un borde
    Point onExtendedLine(5, -1);
    std::cout << "On Extended Line: " << bsp(a, b, c, onExtendedLine) << std::endl;

    // Puntos colineales con dos vértices del triángulo
    Point colinearOutside(-1, -1);
    std::cout << "Colinear Outside: " << bsp(a, b, c, colinearOutside) << std::endl;

    // Punto coincidente con otro punto que no es vértice
    Point coincidentPoint(1, 1);
    std::cout << "Coincident Point: " << bsp(a, b, c, coincidentPoint) << std::endl;

    return 0;
}