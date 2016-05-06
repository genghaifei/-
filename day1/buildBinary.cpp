#include <iostream>
using namespace std;


struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

int buildBinary(int* preOrder,int* midOrder,int length)
{
	if (perOrder == NULL || midOrder == NULL || length == 0)
		return -1;
	_buildBinary(perOrder,perOrder+length-1,midOrder,midOrder+length-1);
}


BinaryTreeNode _buildBinary(int* start_preOrder,int* end_preOrder, int* start_midOrder,int end_midOrder)
{
	int rootValue = preOrder[0];
	BinaryTreeNode* root = new BinaryTreeNode();
	root->m_nValue = rootValue;
	root->m_pLeft = NULL;
	root->m_pRight = NULL;

	if (start_preOrder == end_preOrder)
	{
		if (start_midOrder == end_midOrder && *start_midOrder == *start_preOrder)
		{
			return root;
		}
	}
	int *root_midOrder = start_preOrder;
	int length = 0;
	while(*root_midOrder != *start_midOrder++ && root_midOrder <= end_midOrder)
		length++;
	if (length == (start_preOrder-end_preOrder))//一直遍历到了序列尾都没有找到root节点，那么肯定是序列出错
		return NULL;
	if (length > 0)//构建左子树
		_buildBinary(start_preOrder+1,start_preOrder+length,start_midOrder,start_midOrder+length-1);
	if (length < start_preOrder - end_preOrder)//构建右子树
		_buildBinary(start_preOrder+length+1,end_preOrder,start_midOrder+length+1,end_midOrder);
	return root;

}
