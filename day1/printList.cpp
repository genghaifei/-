#include <iostream>
#include <stack>
using namespace std;

struct listNode
{
	int value;
	listNode *next;
};

int printList(listNode *head stack<int> &st)
{
	while(head != NULL)
	{
		st.push(head->m_nValue);
		head = head->next;
	}

	while( !st.empty())
	{
		cout<<st.pop()<<endl;
	}
}


