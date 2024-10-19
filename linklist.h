#include "node.cpp"
//#include"player.h"
template<class G>
class Linklist
{
	Node<G> * start;
	public:
		Linklist();
		void insertPlayer(G,int);
        void deletePlayer(int);
         Node<G>* SearchByJerseyNo(int);
         Node <G>* SearchByName(char*);
         void  updatePlayer(int);
         void sortByRuns();
         void sortByWickts();
         void readData(char*);
         void writeData(char*);
	   	void display();
};
