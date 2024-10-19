#include<iostream>
#include<string.h>
#include"player.h"
using namespace std;
	Player::Player()
	{
		//cout<<"\ndefualt constructor called";
		this->jerseyNo=0;
		strcpy(this->name,"pn");
		this->noOfMatches=0;
		this->noOfRuns=0;
		this->noOfWickets=0;
	}
	Player::Player(int j,const char* pn,int m,int r,int w)
	{
		//cout<<"\nparameterised constractor called";
		this->jerseyNo=j;
		strcpy(this->name,pn);
		this->noOfMatches=m;
		this->noOfRuns=r;
		this->noOfWickets=w;
	}
	void Player::setJerseyNo(int j)
	{
		this->jerseyNo=j;
	}
	void Player::setName(const char* pn)
	{
		strcpy(this->name,pn);
	}
	void Player::setNoOfMatches(int m)
	{
		this->noOfMatches=m;
	}
	void Player::setNoOfRuns(int r)
	{
		this->noOfRuns=r;
	}
	void Player::setNoOfWickets(int w)
	{
		this->noOfWickets=w;
	}
	int Player::getJerseyNo()
	{
		return this->jerseyNo;
	}
	char* Player::getName()
	{
		return this->name;
	}
	int Player::getNoOfMatches()
	{
		return this->noOfMatches;
	}
	int Player::getNoOfRuns()
	{
		return this->noOfRuns;
	}
	int Player::getNoOfWickets()
	{
		return this->noOfWickets;
	}
	void Player::display()
	{
	    //cout<<"\n***********************************************";
     	cout<<"\nthe jersey no of player="<<this->jerseyNo;
		cout<<"\nthe name of player="<<this->name;
		cout<<"\nthe no. of matches="<<this->noOfMatches;
		cout<<"\nthe no. of runs="<<this->noOfRuns;
		cout<<"\nthe no. of wickets="<<this->noOfWickets;
		cout<<"\n***********************************************";
	}