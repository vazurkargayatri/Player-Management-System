#include <iostream>
using namespace std;
#include"linklist.cpp"
//#include "player.h"

int main() 
{
    Linklist<Player> pll; 
	pll.readData("object.bin");
    int choice, pos, j,res;
    char name[20];
    do {
        
        cout<<"*****************Player Managemnet systeam*************************";
		cout <<"\n1. Add player\n";
        cout << " 2. Delete player\n";
        cout << " 3. Search by jersey number\n";
        cout << " 4. Search by Name \n";
        cout<<  " 5. update player\n";
        cout<<  " 6. sortByrus player \n";
        cout<<  " 7. sortByWickts player\n";
        cout << " 8. display all player \n";
		cout << " 9. Exit\n";
		cout<<"*********************************************************************";
        cout << "\nEnter the Choice:";
        cin >> choice;
        switch (choice)
		 {
            case 1: {
                int m, r, w;
                char pn[20];
                cout << "\nEnter the jersey number: ";
                cin >> j;
                fflush(stdin);
                cout << "\nEnter the name: ";
                cin >> pn;
                cout << "\nEnter the matches: ";
                cin >> m;
                cout << "\nEnter the runs: ";
                cin >> r;
                cout << "\nEnter the number of wickets: ";
                cin >> w;
                Player p(j, pn, m, r, w);
                cout << "Enter the position: ";
                cin >> pos;
                pll.insertPlayer(p, pos);
                break;
            }
            case 2: {
                cout << "\nEnter the jersey number to delete: ";
                cin >> j;
                pll.deletePlayer(j);
                break;
            }
            case 3: {
                cout << "\nEnter the jersey number to search: ";
                cin >> j;
                Node <Player>* res = pll.SearchByJerseyNo(j);
                if (res == NULL) 
				{
                    cout << "Player not found:\n";
                } else 
				{
                   res->getData().display();
                }
                break;
            }
            case 4:
			{
            	fflush(stdin);
            	cout<<"enter the name of player:";
				gets(name);
				Node <Player>* res=pll.SearchByName(name);
				if (res == NULL) 
				{
                    cout << "Player not found\n";
                } 
				else {
                    res->getData().display();


                }
				
				break;
			}
		
		
				case 5:
					{
						cout << "\nEnter the jersey number to search: ";
						cin>>j;
						pll.updatePlayer(j);
						break;
					}
					
			 case  6:
			 	{
			 		//cout<<"\n===== Sort By Runs =====\n";
			 		pll.sortByRuns();
			 		break;
				 }
				 	case 7:
			 		{
			 				//cout<<"\n===== Sort By Wickts =====\n";
			 		   pll.sortByWickts();
						break;	
					 }
			 		case 8:
				{
					pll.display();	
					break;
				}
            case 9: 
			{
                cout << "Exiting...\n";
                break;
            }
            case 0:
            	{
            		pll.writeData("object.bin");
				}
            default:
                cout << "Invalid choice\n";
                break;
        }
    }  while (choice != 9);  

    return 0;
}
