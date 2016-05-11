#include <iostream>
#include <stdio.h>

using namespace std;

int find_min(int a[],int length)
{

	if (a[0] < a[length-1])
	{
		return a[0];
	}
	else
	{
		int i = 0;
		while(i <= length)
		{
			if (a[i] > a[i+1])
				return a[i];
			if (a[length-1] < a[length-2])
				return a[length-1];
			i++;
			length--;
		}
	}
}

int main()
{
	int a[] = {2,3,4,5,6,0,1};
	int ret = find_min(a,sizeof(a)/sizeof(a[0]));
	printf("the min is %d\n",ret);
	return 0;
}
