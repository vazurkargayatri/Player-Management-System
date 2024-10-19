#include<iostream>
using namespace std;
class Player
{
	int jerseyNo;
	char name[20];
	int noOfMatches;
	int noOfRuns;
	int noOfWickets;
	
	public:
	Player();
	Player(int,const char*,int,int,int);
	void setJerseyNo(int);
	void setName(const char*);
	void setNoOfMatches(int);
	void setNoOfRuns(int);
	void setNoOfWickets(int);
	int getJerseyNo();
	char* getName();
	int getNoOfMatches();
	int getNoOfRuns();
	int getNoOfWickets();
	void display();

};