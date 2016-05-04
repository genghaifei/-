#include <iostream>
#include <string.h>
using namespace std;

char* fillBlank(char *src)
{
	int space = 0;
	char* tmp = src;
	while(*tmp++ != '\0')
	{
		if (*tmp == ' ')
			space++;
	}

	int length = strlen(src);
	int end = length+space*2;
	char* p1 = src+length; 
	char* p2 = src+end;
	while(p1 != p2)
	{
		if (*p1 != ' ')
			*p2-- = *p1--;
		else
		{
			p1--;
			*p2-- = '0';
			*p2-- = '2';
			*p2-- = '%';
		}
	}

	return src;
}


int main()
{
	char arr[30] = "we are happy";
	cout<<fillBlank(arr)<<endl;
	return 0;
}
