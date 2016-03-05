## [Exersize 1001](https://github.com/yzcyx/POJ/blob/master/Vol1/1000_A%2BB%20Problem.cpp) : A+B Problem
* source: [http://poj.org/problem?id=1000](http://poj.org/problem?id=1000)

> Description:

> Calculate a+b

> Input: Two integer a,b (0<=a,b<=10)

> Output: Output a+b

> Sample Input:

> 1 2

> Sample Output:

> 3

> ---

> Hint:

> Q: Where are the input and the output? 

> A: Your program shall always read input from stdin (Standard Input) and write output to stdout (Standard Output). For example, you can use 'scanf' in C or 'cin' in C++ to read from stdin, and use 'printf' in C or 'cout' in C++ to write to stdout. 

> You shall not output any extra data to standard output other than that required by the problem, otherwise you will get a "Wrong Answer". 
It's important that the return type of main() must be int when you use G++/GCC,or you may get }

## [Exercise 1003](https://github.com/yzcyx/POJ/blob/master/Vol1/1003_Hangover.cpp) : Hangover
* source: http://poj.org/problem?id=1000

> Description:

> How far can you make a stack of cards overhang a table? If you have one card, you can create a maximum overhang of half a card length. (We're assuming that the cards must be perpendicular to the table.) With two cards you can make the top card overhang the bottom one by half a card length, and the bottom one overhang the table by a third of a card length, for a total maximum overhang of 1/2 + 1/3 = 5/6 card lengths. In general you can make n cards overhang by 1/2 + 1/3 + 1/4 + ... + 1/(n + 1) card lengths, where the top card overhangs the second by 1/2, the second overhangs tha third by 1/3, the third overhangs the fourth by 1/4, etc., and the bottom card overhangs the table by 1/(n + 1). This is illustrated in the figure below.

> ![]({{site.baseurl}}/http://raw.githubusercontent.com/yzcyx/POJ/master/Vol1/hangover.jpg)
[hangover.jpg](http://raw.githubusercontent.com/yzcyx/POJ/master/Vol1/hangover.jpg)

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

##[Exercise 1004](https://github.com/yzcyx/POJ/blob/master/Vol1/1004_Financial%20Management.cpp) : Financial Management
* source: http://poj.org/problem?id=1004

> Description:

> Larry graduated this year and finally has a job. He's making a lot of money, but somehow never seems to have enough. Larry has decided that he needs to grab hold of his financial portfolio and solve his financing problems. The first step is to figure out what's been going on with his money. Larry has his bank account statements and wants to see how much money he has. Help Larry by writing a program to take his closing balance from each of the past twelve months and calculate his average account balance.

> Input:

> The input will be twelve lines. Each line will contain the closing balance of his bank account for a particular month. Each number will be positive and displayed to the penny. No dollar sign will be included.

> Output:

> The output will be a single number, the average (mean) of the closing balances for the twelve months. It will be rounded to the nearest penny, preceded immediately by a dollar sign, and followed by the end-of-line. There will be no other spaces or characters in the output.

>Sample Input:

> 100.00

> 489.12

> 12454.12

> 1234.10

> 823.05

> 109.20

> 5.27

> 1542.25

> 839.18

> 83.99

> 1295.01

> 1.75

> Sample Output:

>$1581.42

#[Exercise 1005](https://github.com/yzcyx/POJ/blob/master/Vol1/1005_I%20Think%20I%20Need%20a%20Houseboat.cpp) : I Think I Need a Houseboat
* source: http://poj.org/problem?id=1005

> Description:

> Fred Mapper is considering purchasing some land in Louisiana to build his house on. In the process of investigating the land, he learned that the state of Louisiana is actually shrinking by 50 square miles each year, due to erosion caused by the Mississippi River. Since Fred is hoping to live in this house the rest of his life, he needs to know if his land is going to be lost to erosion. 

> After doing more research, Fred has learned that the land that is being lost forms a semicircle. This semicircle is part of a circle centered at (0,0), with the line that bisects the circle being the X axis. Locations below the X axis are in the water. The semicircle has an area of 0 at the beginning of year 1. (Semicircle illustrated in the Figure.)  

> ![]({{site.baseurl}}/http://poj.org/images/1005/semicircle.GIF)
[semicircle.gif](https://raw.githubusercontent.com/yzcyx/POJ/master/Vol1/semicircle.GIF)

> Input:

> The first line of input will be a positive integer indicating how many data sets will be included (N). Each of the next N lines will contain the X and Y Cartesian coordinates of the land Fred is considering. These will be floating point numbers measured in miles. The Y coordinate will be non-negative. (0,0) will not be given.

> Output:

> For each data set, a single line of output should appear. This line should take the form of: “Property N: This property will begin eroding in year Z.” Where N is the data set (counting from 1), and Z is the first year (start from 1) this property will be within the semicircle AT THE END OF YEAR Z. Z must be an integer. After the last data set, this should print out “END OF OUTPUT.”

> Sample Input:

> 2

> 1.0 1.0

> 25.0 0.0

> Sample Output

> Property 1: This property will begin eroding in year 1.

> Property 2: This property will begin eroding in year 20.

> END OF OUTPUT.

> ---

>Hint:

>1. No property will appear exactly on the semicircle boundary: it will either be inside or outside. 
2. This problem will be judged automatically. Your answer must match exactly, including the capitalization, punctuation, and white-space. This includes the periods at the ends of the lines.
3. All locations are given in miles.

##[Exercise 1006](https://github.com/yzcyx/POJ/blob/master/Vol1/1006_Biorhythms.cpp) : Biorhythms
* source: http://poj.org/problem?id=1006

> Description:

> Some people believe that there are three cycles in a person's life that start the day he or she is born. These three cycles are the physical, emotional, and intellectual cycles, and they have periods of lengths 23, 28, and 33 days, respectively. There is one peak in each period of a cycle. At the peak of a cycle, a person performs at his or her best in the corresponding field (physical, emotional or mental). For example, if it is the mental curve, thought processes will be sharper and concentration will be easier. 

> Since the three cycles have different periods, the peaks of the three cycles generally occur at different times. We would like to determine when a triple peak occurs (the peaks of all three cycles occur in the same day) for any person. For each cycle, you will be given the number of days from the beginning of the current year at which one of its peaks (not necessarily the first) occurs. You will also be given a date expressed as the number of days from the beginning of the current year. You task is to determine the number of days from the given date to the next triple peak. The given date is not counted. For example, if the given date is 10 and the next triple peak occurs on day 12, the answer is 2, not 3. If a triple peak occurs on the given date, you should give the number of days to the next occurrence of a triple peak. 

> Input:

> You will be given a number of cases. The input for each case consists of one line of four integers p, e, i, and d. The values p, e, and i are the number of days from the beginning of the current year at which the physical, emotional, and intellectual cycles peak, respectively. The value d is the given date and may be smaller than any of p, e, or i. All values are non-negative and at most 365, and you may assume that a triple peak will occur within 21252 days of the given date. The end of input is indicated by a line in which p = e = i = d = -1.

> Output:

> For each test case, print the case number followed by a message indicating the number of days to the next triple peak, in the form: 

> Case 1: the next triple peak occurs in 1234 days. 

> Use the plural form ``days'' even if the answer is 1.

> Sample Input:

> 0 0 0 0

> 0 0 0 100

>5 20 34 325

> 4 5 6 7

> 283 102 23 320

> 203 301 203 40

> -1 -1 -1 -1

> Sample Output:

> Case 1: the next triple peak occurs in 21252 days.

> Case 2: the next triple peak occurs in 21152 days.

> Case 3: the next triple peak occurs in 19575 days.

> Case 4: the next triple peak occurs in 16994 days.

> Case 5: the next triple peak occurs in 8910 days.

> Case 6: the next triple peak occurs in 10789 days.




























