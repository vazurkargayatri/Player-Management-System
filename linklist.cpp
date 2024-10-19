#include"linklist.h"
#include<fstream>

template<class G>
Linklist<G>::Linklist()
{
	start=NULL;
}
//////////////////////////////////////////////////////
template<class G>
void Linklist<G>::display()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to print";
	}
	else
	{
		Node <G>* p=start;
		while(p!=NULL)
		{
			p->getData().display();
			p=p->getNext();
		}
	}
}
/////////////////////////////////////////////////////////
template<class G>
void Linklist<G>::insertPlayer( G data ,int pos)
{
	//create a new node
	  Node<G>* temp=new Node<G>(data);// or any relevant attribute of Player

	//Empty list
	//Insert at the beginning
	if(pos==1 || pos==1)
	{
		temp->setNext(start);
		start=temp;
		return;
	}
	//we need to traverse
	Node<G> *p=start;
	int i=1;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
	//This will work for any position including (last)
	//Attach the new node first
	temp->setNext(p->getNext());
	p->setNext(temp);
}
template<class G>
void Linklist<G>::deletePlayer(int j )
{
	if(start==NULL)
	{
		cout<<"\n Linked list id empty!!";
	}
	if(start->getData().getJerseyNo()==j)
	{
		Node<G>* p=start;
		start=start->getNext();
		delete p;
		cout<<"\n Data delated suceesfuly";
		return;
	}
	if(start->getNext()==NULL)
	{
		cout<<"\n Player not found";
		return;
	}
	Node<G>* p = start;
	//int i=1;
   G pl =start->getNext()->getData();
	while(pl.getJerseyNo() !=j && p->getNext()->getNext()!=NULL)
	{
		p=p->getNext();
	pl=p->getNext()->getData();
	
}
if(pl.getJerseyNo()==j)
{
	Node <G>* q=p->getNext();
	p->setNext(q->getNext());
	delete q;
	cout<<"\n Data deletd suceesfully!!";
	return;
	}
	else{
		cout<<"Player not Found!!";
	}
   
}
template<class G>
Node<G> * Linklist<G>::SearchByJerseyNo(int JerseyNo)
{
	Node<G>*p=start;
	//Node<G>*res;
	while(p!=NULL)
	{
		if(p->getData().getJerseyNo()==JerseyNo)
		{
			return p;
		}
		p=p->getNext();
	}
	return NULL;
}
///////////////////////////////////////////////////
template<class G>
Node<G> * Linklist<G>::SearchByName(char* name)
{
	Node<G>*p=start;
	//Node*res;
	while(p!=NULL)
	{
		if(strcasecmp(p->getData().getName(),name)==0)
		{
			return p;
		}
		p=p->getNext();
	}
	return NULL;
}
/////////////////////////////////////////////////////////
template<class G>
void Linklist<G>::updatePlayer(int JerseyNo)
{
	Node<G>* p=SearchByJerseyNo( JerseyNo);
	if(p==NULL)
	{
		cout<<"\n player not found!!!";
	}
	int m,r,w;
	cout<<"\n Enter current no.of matches ";
	cin>>m;
	cout<<"\n Enter current no.of runs";
	cin>>r;
	cout<<"\n Enter current no.of wickets ";
	cin>>w;
	G p1=p->getData();
	p1.setNoOfMatches(m);
	p1.setNoOfRuns(r);
	p1.setNoOfWickets(w);
	p->setData(p1);
	cout<<"\n player info update suceesfully!!";
		
}
////////////////////////////////////////////////////////
template<class G>
 void  Linklist<G>::sortByRuns()
 {
 	if(start==NULL)
 	{
 		cout<<"\n Linkedlist is empty";
 		return;
	 }
 	for(Node<G>* p=start;p!=NULL;p=p->getNext())
 	{
 		for(Node<G>* q =p->getNext();q!=NULL;q=q->getNext())
 		{
 			if(p->getData().getNoOfRuns() < q->getData().getNoOfRuns())
 			{
 				//descending order
 				G temp= p->getData();
 				p->setData(q->getData());
 				q->setData(temp);
			 }
		 }
	 }
		cout<<"\n===== Sort By RUNS =====\n";

	 display();
 }
///////////////////////////////////////////////////////////////
template<class G>
 void Linklist<G>:: sortByWickts()
 {
 	if(start==NULL)
 	{
 		cout<<"\n Linkedlist is empty";
 		return;
	 }
 	for(Node<G>* p=start;p!=NULL;p=p->getNext())
 	{
 		

 		for(Node<G>* q =p->getNext();q!=NULL;q=q->getNext())
 		{
 			if(p->getData().getNoOfWickets() < q->getData().getNoOfWickets())
 			{
 				//descending order
 				G temp= p->getData();
 				p->setData(q->getData());
 				q->setData(temp);
			 }
		 }
	 }
	 cout<<"\n===== Sort By Wickts =====\n";

	 display();
 }
 ///////////////////////////////////////////////////////////////////////////////
 template<class G>
 void Linklist<G>:: readData(char* fn)
 {
 	G data;
 	ifstream in(fn,ios_base::binary);
 	
 	while(in.read((char*)&data,sizeof(data)))
 	{
 		 insertPlayer(data,1);
 		 
	 }
	 in.close();
 	
 }
 ///////////////////////////////////////////////////////////////////
 template<class G>
 void Linklist<G>::writeData(char* fn)
 {
 	ofstream out(fn,ios_base::binary);
 	Node<G>*p=start;
 	while(p!=NULL)
 	{
 		G data=p->getData();
 		out.write((char*)&data,sizeof(data));
 		p=p->getNext();
	 }
 	out.close();
 }
