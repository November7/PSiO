
#include "pch.h"
#include <iostream>
using namespace std;

class CNode
{
public:
	CNode* pNext;
	int number;

	CNode()
	{
		pNext = NULL;
		number = 0;
	}

	~CNode()
	{		
		if (pNext)
			delete pNext;
		//cout << "deleting item with data: " << number << endl;
	}
};

class CList
{
public:
	CNode *root;
	int length;
	CList()
	{
		root = NULL;
		length = 0;
	}
	~CList()
	{
		if (root)
			delete root;
	}

	void DelItem(int n)
	{
		CNode *pN, *p;
		if (n > length - 1) return;
		if (n == 0)
		{
			pN = root->pNext;
			root->pNext = NULL;
			delete root;
			root = pN;			
		}
		else
		{
			p = root;
			for (int i = 0; i < n - 1 && p->pNext != NULL; i++)
			{
				p = p->pNext;
			}
			pN = p->pNext;
			p->pNext = pN->pNext;
			pN->pNext = NULL;
			delete pN;
		}
		

		length--;
	}

	void AddItem(int d, int n=-1)
	{
		if (n == -1) n = length;
		if (root == NULL)
		{
			root = new CNode;
			root->number = d;
			length = 1;
		}
		else
		{
			
			CNode *pN = new CNode();
			pN->number = d;

			if (n == 0)
			{				
				pN->pNext = root;
				root = pN;
			}
			else
			{
				CNode *p = root;
				for (int i = 0; i < n-1 && p->pNext != NULL; i++)
				{
					p = p->pNext;
				}

				CNode *pNext = p->pNext;
				p->pNext = pN;
				pN->pNext = pNext;
				
			}
			length++;
		}
	}

	void Print()
	{
		if (root == NULL) return;
		CNode *p = root;
		while (p)
		{
			cout << p->number << endl;
			p = p->pNext;
		}
		cout << "--end--" << endl;
	}
	
};

int main()
{
	CList A;
	A.AddItem(3);
	A.AddItem(4);
	A.AddItem(7);
	A.AddItem(10,1);
	A.AddItem(9,1);
	
	A.Print();
	A.DelItem(4);
	A.Print();
	
}


