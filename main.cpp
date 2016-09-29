#include <cstdlib>
#include <iostream>
#include "tic_tac.h"

using namespace std;
int main()
{
	ttt a;
	int n;	
		
	
while(1)
{
	n++;//counter to check if they played 9 times which recults to a draw	
	
	system("clear");
	a.Drawboard();
	a.input();

	if(a.win() == 'x')
		{
		cout<<"player 1 wins "<<endl;
		break;//breaks out the loop if there's a winner
		}
	else
			if(a.win() == 'o')
			{
			cout<<"player 2 wins"<<endl;
			break;
			}
else
				if(a.win() == '/' && n== 19)
				{
				cout<<"its a draw "<<endl;
				break;
				}
	a.next_player();
}
	return 0;

}
	
