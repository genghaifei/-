#include <iostream>

using namespace std;

bool isExist(int num[],int row,int field,int key)
{
	int i = 0;
	int j = field;
	while(i < row && j >= 0)
	{
		if (key == num[i*field+j])
		{
			return true;
		}
		if (key < num[i*field+j])
		{
			j--;
		}
		if (key > num[i*field+j])
		{
			i++;
		}
	}

	return false;
}



int main()
{
	int num[3][3] = {1,2,3,4,5,6,7,8,9};
	bool result = isExist((int*)num,3,3,5);
	if (result)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;

	return 0;
}

