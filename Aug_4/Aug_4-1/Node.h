#include<iostream>
using namespace std;
class node
{
private:
	int data;
	node* next;
public:
	node();
	node(int d);
	friend class cLinkList;
};