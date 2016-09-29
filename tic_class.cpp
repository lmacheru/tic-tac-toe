#include <iostream>
#include <string>
#include "tic_tac.h"
using namespace std;

void ttt::Drawboard(void)
{	
	cout<< "tic tac toe "<<endl;
	
	for(int i=0;i<3;i++)
	{
	cout<<"|"<<" ";
		for(int j=0;j<3;j++)
		{
		
		cout << arry[i][j] << " ";//this will print out all the elements..[i] represents the rows and [j] represents the colums
		}
	cout<<"|" <<endl;
	}
}

int ttt::input(void)
{
	int a;
	cout<< "press the number of the field ";
	cin >> a;
	
	if(a == 1)
	{
		if( arry[0][0] == '1')
		arry[0][0] =player;
	else
		cout<<"field is occupied "<<endl;
	}
	
	
	   if(a == 2)
        {
                if( arry[0][1] == '2')
                arry[0][1] =player;
        else    
                cout<<"field is occupied "<<endl;
        }

	   if(a == 3)
        {
                if( arry[0][2] == '3')
                arry[0][2] =player;
        else    
                cout<<"field is occupied "<<endl;
        }
	

	   if(a == 4)
        {
                if( arry[1][0] == '4')
                arry[1][0] =player;
        else    
                cout<<"field is occupied "<<endl;
        }
	
	
	   if(a == 5)
        {
                if( arry[1][1] == '5')
                arry[1][1] =player;
        else    
                cout<<"field is occupied "<<endl;
        }
	
	
	   if(a == 6)
        {
                if( arry[1][2] == '6')
                arry[1][2] =player;
        else    
                cout<<"field is occupied "<<endl;
        }

		   if(a == 7)
        {
                if( arry[2][0] == '7')
                arry[2][0] =player;
        else    
                cout<<"field is occupied "<<endl;
        }
	

	 if(a == 8)
        {
                if( arry[2][1] == '8')
                arry[2][1] =player;
        else
                cout<<"field is occupied "<<endl;
        }


           if(a == 9)
        {
                if( arry[2][2] == '9')
                arry[2][2] =player;
        else
                cout<<"field is occupied "<<endl;
        }
}	


int ttt::next_player(void)
{
	if(player == 'x')
		player ='o';
		else
			player = 'x';

}
char ttt::win(void)
{

	//first player
	//	//checks the rows
if(arry[0][0] == 'x' && arry[0][1] == 'x' && arry[0][2] == 'x' )
	return 'x';	
	if(arry[1][0] == 'x' && arry[1][1] == 'x' && arry[1][2] == 'x' )
        return 'x';
        if(arry[2][0] == 'x' && arry[2][1] == 'x' && arry[2][2] == 'x' )
        return 'x';
//check colums		
//	 //1st row&colum        2nd row&colum	     3rd row&colum
if(arry[0][0] == 'x' && arry[0][1] == 'x' && arry[0][2] == 'x' )
        return 'x';	
	if(arry[0][1] == 'x' && arry[1][1] == 'x' && arry[2][1] == 'x' )
        return 'x';
	if(arry[0][2] == 'x' && arry[2][1] == 'x' && arry[2][2] == 'x' )
        return 'x';


	//check diagonals
	if(arry[0][0] == 'x' && arry[1][1] == 'x' && arry[2][2] == 'x' )
        return 'x';
        if(arry[2][0] == 'x' && arry[1][1] == 'x' && arry[0][2] == 'x' )
        return 'x';
/* 00 01 02
 * 10 11 12
   20 21 22 */
//second player
//checks the rows
	if(arry[0][0] == 'o' && arry[0][1] == 'o' && arry[0][2] == 'o' )
        return 'o';
        if(arry[1][0] == 'o' && arry[1][1] == 'o' && arry[1][2] == 'o' )
        return 'o';
        if(arry[2][0] == 'o' && arry[2][1] == 'o' && arry[2][2] == 'o' )
        return 'o';
//check colums 
	if(arry[0][0] == 'o' && arry[0][1] == 'o' && arry[0][2] == 'o' )
        return 'o';
        if(arry[0][1] == 'o' && arry[1][1] == 'o' && arry[2][1] == 'o' )
        return 'o';
        if(arry[0][2] == 'o' && arry[2][1] == 'o' && arry[2][2] == 'o' )
        return 'o';

//check diagonals 
	if(arry[0][0] == 'o' && arry[1][1] == 'o' && arry[2][2] == 'o' )
        return 'o';
        if(arry[2][0] == 'o' && arry[1][1] == 'o' && arry[0][2] == 'o' )
        return 'o';
	
	return '/';
}












