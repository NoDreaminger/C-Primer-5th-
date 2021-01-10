//
// Created by s on 2021/1/10.
//
/**
 * 程序：接收两个整数，输出两个整数的和
 */

#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0,v2 = 0;
    std::cin>> v1 >> v2;
    std::cout << "The sum of " << v1 << "and" << v2 << "is" << v1+v2 << std::endl;
    return 0;
}
