## [Exersize 1001](https://github.com/yzcyx/POJ/blob/master/Vol1/1000_A%2BB%20Problem.cpp) : A+B Problem
* source:[http://poj.org/problem?id=1000](http://poj.org/problem?id=1000)

> Description:

> Calculate a+b

> Input: Two integer a,b (0<=a,b<=10)

> Output: Output a+b

> Sample Input:

> 1 2

> Sample Output:

> 3

> Hint:

> Q: Where are the input and the output? 

> A: Your program shall always read input from stdin (Standard Input) and write output to stdout (Standard Output). For example, you can use 'scanf' in C or 'cin' in C++ to read from stdin, and use 'printf' in C or 'cout' in C++ to write to stdout. 

> You shall not output any extra data to standard output other than that required by the problem, otherwise you will get a "Wrong Answer". 
It's important that the return type of main() must be int when you use G++/GCC,or you may get }

## [Exercise 1003](https://github.com/yzcyx/POJ/blob/master/Vol1/1003_Hangover.cpp) : Hangover
* source: http://poj.org/problem?id=1000](http://poj.org/problem?id=1000)


> Description:

> How far can you make a stack of cards overhang a table? If you have one card, you can create a maximum overhang of half a card length. (We're assuming that the cards must be perpendicular to the table.) With two cards you can make the top card overhang the bottom one by half a card length, and the bottom one overhang the table by a third of a card length, for a total maximum overhang of 1/2 + 1/3 = 5/6 card lengths. In general you can make n cards overhang by 1/2 + 1/3 + 1/4 + ... + 1/(n + 1) card lengths, where the top card overhangs the second by 1/2, the second overhangs tha third by 1/3, the third overhangs the fourth by 1/4, etc., and the bottom card overhangs the table by 1/(n + 1). This is illustrated in the figure below.

> ![]({{site.baseurl}}https://raw.githubusercontent.com/yzcyx/POJ/master/Vol1/hangover.jpg

> Input:

> The input consists of one or more test cases, followed by a line containing the number 0.00 that signals the end of the input. Each test case is a single line containing a positive floating-point number c whose value is at least 0.01 and at most 5.20; c will contain exactly three digits.

> Output:

> For each test case, output the minimum number of cards necessary to achieve an overhang of at least c card lengths. Use the exact output format shown in the examples.

> Sample Input:

> 1.00

> 3.71

> 0.04

> 5.19

> 0.00

> Sample Output:

> 3 card(s)

> 61 card(s)

> 1 card(s)

> 273 card(s)
