/*
 *1000:  A+B Problem
 *
 *Description:
 *Calculate a+b
 *
 *Input:
 *Two integer a,b (0<=a,b<=10)
 *Output:
 *Output a+b
 *
 *Sample Input:
 *   1   2
 *Sample Output:
 *   3
*/
#include <iostream>

int main()
{
	int a, b;
	while (std::cin >> a >> b)
		std::cout << a + b << std::endl;
	return 0;
}