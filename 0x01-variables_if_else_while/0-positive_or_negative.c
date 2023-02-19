#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

cout << "Enter the number: \n";
cin >> n;
if (n > 0)
cout << "n is positive\n";
else if (n < 0)
cout << "n is negative\n";
else 
	| cout << "n is zero\n";

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}

