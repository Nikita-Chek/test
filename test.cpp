#include <iostream>
#include <math.h>
#include <cmath>
#include <time.h>
#include <iomanip>
using namespace std;

void fun(int &min, int &max)
{
	min = 4;
	max = 3;
}

int main()
{
	int min = 0, max = 1;
	fun(min, max);
	cout<<max<<" "<<min;
	int x=0;
	return 0;
}