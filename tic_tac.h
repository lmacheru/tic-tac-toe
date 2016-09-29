#include <iostream>

class ttt
{
private:
char arry[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'x';
int n;
int a;
public:
void Drawboard(void);
int input(void);
int next_player(void);
char win(void);
int check(void);
};

