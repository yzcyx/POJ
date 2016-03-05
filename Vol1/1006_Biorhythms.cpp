/*
 *1006:   Biorhythms
 *
 *Description:
 *Some people believe that there are three cycles in a person's life that start the day he or she is born.
 *These three cycles are the physical, emotional, and intellectual cycles, and they have periods of lengths
 *23, 28, and 33 days, respectively. There is one peak in each period of a cycle. At the peak of a cycle,
 *a person performs at his or her best in the corresponding field (physical, emotional or mental). For example,
 *if it is the mental curve, thought processes will be sharper and concentration will be easier. Since the 
 *three cycles have different periods, the peaks of the three cycles generally occur at different times. We
 *would like to determine when a triple peak occurs (the peaks of all three cycles occur in the same day) for
 *any person. For each cycle, you will be given the number of days from the beginning of the current year at
 *which one of its peaks (not necessarily the first) occurs. You will also be given a date expressed as the 
 *number of days from the beginning of the current year. You task is to determine the number of days from the 
 *given date to the next triple peak. The given date is not counted. For example, if the given date is 10 and 
 *the next triple peak occurs on day 12, the answer is 2, not 3. If a triple peak occurs on the given date, you 
 *should give the number of days to the next occurrence of a triple peak. 
 *
 *Input:
 *You will be given a number of cases. The input for each case consists of one line of four integers p, e, i, 
 *and d. The values p, e, and i are the number of days from the beginning of the current year at which the
 *physical, emotional, and intellectual cycles peak, respectively. The value d is the given date and may be 
 *smaller than any of p, e, or i. All values are non-negative and at most 365, and you may assume that a triple
 *peak will occur within 21252 days of the given date. The end of input is indicated by a line in which p = e 
 *= i = d = -1.
 *Output:
 *For each test case, print the case number followed by a message indicating the number of days to the next triple
 *peak, in the form: 
 *Case 1: the next triple peak occurs in 1234 days. 
 *Use the plural form ``days'' even if the answer is 1.
 *
 *Sample Input:
 *   0 0 0 0
 *   0 0 0 100
 *   5 20 34 325
 *   4 5 6 7
 *   283 102 23 320
 *   203 301 203 40
 *   -1 -1 -1 -1
 *Sample Output:
 *   Case 1: the next triple peak occurs in 21252 days.
 *   Case 2: the next triple peak occurs in 21152 days.
 *   Case 3: the next triple peak occurs in 19575 days.
 *   Case 4: the next triple peak occurs in 16994 days.
 *   Case 5: the next triple peak occurs in 8910 days.
 *   Case 6: the next triple peak occurs in 10789 days.
 **************************************************************************************************************
 *Particularly,notice the following edge cases:
 *   24 29 34 0    (1)
 *   24 29 34 1    (21252)
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Case
{
	int p, e, i, d;
};

bool is_end(Case input)
{
	if (input.p == -1 && input.e == -1 && input.i == -1 && input.d == -1)
		return true;
	else
		return false;
}

int ocurrance(Case input)
{
	int m;
	unsigned occur;                        
	//d+occur=i+33*m=e+28*n=p+23*l, ocr>0
	//Get the minimun of min to keep occur positive
	m = (input.d - input.i) > 0 ?
		(input.d - input.i) / 33 + 1 : (input.d - input.i) / 33;  //Don't neglect negative integral divisions
	for (; m < 28 * 23; ++m)
	{
		if ((input.i + 33 * m - input.e) % 28 == 0
			&& (input.i + 33 * m - input.p) % 23 == 0)
		{
			occur = (input.i - input.d + 33 * m);
			if (occur == 0)                                       //Get the NEXT one
				return 23 * 28 * 33;
			else
				return occur;
		}
	}
	return (23 * 28 * 33 + input.i - input.d);
}

int main()
{
	Case CaseVal;
	int cnt = 1;
	while (cin >> CaseVal.p >> CaseVal.e >> CaseVal.i >> CaseVal.d)
	{
		if (is_end(CaseVal))
			return 0;
		else
		{
			cout << "Case " << cnt << ": the next triple peak occurs in "
				<< ocurrance(CaseVal) << " days." << endl;
			++cnt;
		}
	}
	return 0;
}