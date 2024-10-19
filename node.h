#include<iostream>
using namespace std;
#include "player.h"
template<class G>
class Node
{
   Player data;
	Node * next;
	public:
		Node( G);
		G getData();
		Node*getNext();
		void setData(G);
		void setNext(Node*);
};