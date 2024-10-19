#include"node.h"
template<class G>
Node<G>::Node(G d)
{
	data=d;
	next=NULL;
}
template<class G>
G Node<G>::getData()
{
	return data;
}
template<class G>
Node<G> *Node<G>::getNext()
{
	return next;
}
template<class G>
void Node<G>::setData(G d)
{
	data=d;
}
template<class G>
void Node<G>::setNext(Node *nt)
{
	next=nt;
}