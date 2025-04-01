#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

string p1_s,p2_s,p1,p2;
char token_s='x',token='x';
bool tie=false,final_win=false,tie_1=false,tie_2=false,tie_3=false,tie_4=false,tie_5=false,tie_6=false,tie_7=false,tie_8=false,tie_9=false;
int row_s,col_s,digit_s,row,col,mr,mc,digit,game_u,win_1=0,win_2=0,win_3=0,win_4=0,win_5=0,win_6=0,win_7=0,win_8=0,win_9=0,t_win1_s=0,t_win2_s=0,t_win1=0,t_win2=0;
char eg[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char game[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;

char a1[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a2[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a3[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a4[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a5[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a6[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a7[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a8[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char a9[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

char b1[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b2[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b3[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b4[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b5[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b6[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b7[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b8[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b9[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void structure_s_s()
{
	cout<<"\n"<<" "<<eg[0][0]<<" | "<<eg[0][1]<<" | "<<eg[0][2];
	cout<<"\n---|---|---";
	cout<<"\n"<<" "<<eg[1][0]<<" | "<<eg[1][1]<<" | "<<eg[1][2];
	cout<<"\n---|---|---";
	cout<<"\n"<<" "<<eg[2][0]<<" | "<<eg[2][1]<<" | "<<eg[2][2];
}

void structure_s()
{
	cout<<"\n"<<" "<<game[0][0]<<" | "<<game[0][1]<<" | "<<game[0][2];
	cout<<"\n---|---|---";
	cout<<"\n"<<" "<<game[1][0]<<" | "<<game[1][1]<<" | "<<game[1][2];
	cout<<"\n---|---|---";
	cout<<"\n"<<" "<<game[2][0]<<" | "<<game[2][1]<<" | "<<game[2][2];
}

void structure_u()
{
	cout<<"\n"<<" "<<b1[0][0]<<" | "<<b1[0][1]<<" | "<<b1[0][2]<<"   | "<<" "<<b2[0][0]<<" | "<<b2[0][1]<<" | "<<b2[0][2]<<"   | "<<" "<<b3[0][0]<<" | "<<b3[0][1]<<" | "<<b3[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b1[1][0]<<" | "<<b1[1][1]<<" | "<<b1[1][2]<<"   | "<<" "<<b2[1][0]<<" | "<<b2[1][1]<<" | "<<b2[1][2]<<"   | "<<" "<<b3[1][0]<<" | "<<b3[1][1]<<" | "<<b3[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b1[2][0]<<" | "<<b1[2][1]<<" | "<<b1[2][2]<<"   | "<<" "<<b2[2][0]<<" | "<<b2[2][1]<<" | "<<b2[2][2]<<"   | "<<" "<<b3[2][0]<<" | "<<b3[2][1]<<" | "<<b3[2][2];
	cout<<"\n             |              |            ";
	cout<<"\n-------------|--------------|------------";
	cout<<"\n             |              |            ";
	cout<<"\n"<<" "<<b4[0][0]<<" | "<<b4[0][1]<<" | "<<b4[0][2]<<"   | "<<" "<<b5[0][0]<<" | "<<b5[0][1]<<" | "<<b5[0][2]<<"   | "<<" "<<b6[0][0]<<" | "<<b6[0][1]<<" | "<<b6[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b4[1][0]<<" | "<<b4[1][1]<<" | "<<b4[1][2]<<"   | "<<" "<<b5[1][0]<<" | "<<b5[1][1]<<" | "<<b5[1][2]<<"   | "<<" "<<b6[1][0]<<" | "<<b6[1][1]<<" | "<<b6[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b4[2][0]<<" | "<<b4[2][1]<<" | "<<b4[2][2]<<"   | "<<" "<<b5[2][0]<<" | "<<b5[2][1]<<" | "<<b5[2][2]<<"   | "<<" "<<b6[2][0]<<" | "<<b6[2][1]<<" | "<<b6[2][2];
	cout<<"\n             |              |            ";
	cout<<"\n-------------|--------------|------------";
	cout<<"\n             |              |            ";
	cout<<"\n"<<" "<<b7[0][0]<<" | "<<b7[0][1]<<" | "<<b7[0][2]<<"   | "<<" "<<b8[0][0]<<" | "<<b8[0][1]<<" | "<<b8[0][2]<<"   | "<<" "<<b9[0][0]<<" | "<<b9[0][1]<<" | "<<b9[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b7[1][0]<<" | "<<b7[1][1]<<" | "<<b7[1][2]<<"   | "<<" "<<b8[1][0]<<" | "<<b8[1][1]<<" | "<<b8[1][2]<<"   | "<<" "<<b9[1][0]<<" | "<<b9[1][1]<<" | "<<b9[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<b7[2][0]<<" | "<<b7[2][1]<<" | "<<b7[2][2]<<"   | "<<" "<<b8[2][0]<<" | "<<b8[2][1]<<" | "<<b8[2][2]<<"   | "<<" "<<b9[2][0]<<" | "<<b9[2][1]<<" | "<<b9[2][2];
}

void structure()
{
	cout<<"\n"<<" "<<a1[0][0]<<" | "<<a1[0][1]<<" | "<<a1[0][2]<<"   | "<<" "<<a2[0][0]<<" | "<<a2[0][1]<<" | "<<a2[0][2]<<"   | "<<" "<<a3[0][0]<<" | "<<a3[0][1]<<" | "<<a3[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a1[1][0]<<" | "<<a1[1][1]<<" | "<<a1[1][2]<<"   | "<<" "<<a2[1][0]<<" | "<<a2[1][1]<<" | "<<a2[1][2]<<"   | "<<" "<<a3[1][0]<<" | "<<a3[1][1]<<" | "<<a3[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a1[2][0]<<" | "<<a1[2][1]<<" | "<<a1[2][2]<<"   | "<<" "<<a2[2][0]<<" | "<<a2[2][1]<<" | "<<a2[2][2]<<"   | "<<" "<<a3[2][0]<<" | "<<a3[2][1]<<" | "<<a3[2][2];
	cout<<"\n             |              |            ";
	cout<<"\n-------------|--------------|------------";
	cout<<"\n             |              |            ";
	cout<<"\n"<<" "<<a4[0][0]<<" | "<<a4[0][1]<<" | "<<a4[0][2]<<"   | "<<" "<<a5[0][0]<<" | "<<a5[0][1]<<" | "<<a5[0][2]<<"   | "<<" "<<a6[0][0]<<" | "<<a6[0][1]<<" | "<<a6[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a4[1][0]<<" | "<<a4[1][1]<<" | "<<a4[1][2]<<"   | "<<" "<<a5[1][0]<<" | "<<a5[1][1]<<" | "<<a5[1][2]<<"   | "<<" "<<a6[1][0]<<" | "<<a6[1][1]<<" | "<<a6[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a4[2][0]<<" | "<<a4[2][1]<<" | "<<a4[2][2]<<"   | "<<" "<<a5[2][0]<<" | "<<a5[2][1]<<" | "<<a5[2][2]<<"   | "<<" "<<a6[2][0]<<" | "<<a6[2][1]<<" | "<<a6[2][2];
	cout<<"\n             |              |            ";
	cout<<"\n-------------|--------------|------------";
	cout<<"\n             |              |            ";
	cout<<"\n"<<" "<<a7[0][0]<<" | "<<a7[0][1]<<" | "<<a7[0][2]<<"   | "<<" "<<a8[0][0]<<" | "<<a8[0][1]<<" | "<<a8[0][2]<<"   | "<<" "<<a9[0][0]<<" | "<<a9[0][1]<<" | "<<a9[0][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a7[1][0]<<" | "<<a7[1][1]<<" | "<<a7[1][2]<<"   | "<<" "<<a8[1][0]<<" | "<<a8[1][1]<<" | "<<a8[1][2]<<"   | "<<" "<<a9[1][0]<<" | "<<a9[1][1]<<" | "<<a9[1][2];
	cout<<"\n---|---|---  | ---|---|---  | ---|---|---";
	cout<<"\n"<<" "<<a7[2][0]<<" | "<<a7[2][1]<<" | "<<a7[2][2]<<"   | "<<" "<<a8[2][0]<<" | "<<a8[2][1]<<" | "<<a8[2][2]<<"   | "<<" "<<a9[2][0]<<" | "<<a9[2][1]<<" | "<<a9[2][2];
}

void reset_s()
{
	for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            game[i][j] = ' ';
        }
    }
    
    token_s = 'x';
    tie = false;
}

void reset()
{
	for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            a1[i][j] = ' ';
            a2[i][j] = ' ';
            a3[i][j] = ' ';
            a4[i][j] = ' ';
            a5[i][j] = ' ';
            a6[i][j] = ' ';
            a7[i][j] = ' ';
            a8[i][j] = ' ';
            a9[i][j] = ' ';
        }
    }
    
    final_win=false;
    token = 'x';
    tie_1 = false;
    tie_2 = false;
    tie_3 = false;
    tie_4 = false;
    tie_5 = false;
    tie_6 = false;
    tie_7 = false;
    tie_8 = false;
    tie_9 = false;
}

void intro_s()
{
	fflush(stdin);
	cout<<"\nEnter Name Of Player 1 : ";
	getline(cin,p1_s);
	
	cout<<"\nEnter Name Of Player 2 : ";
	getline(cin,p2_s);
	
	cout<<endl<<endl<<p1_s<<" Will Enter First";
	cout<<endl<<p2_s<<" Will Enter Second";
}

void intro()
{
	fflush(stdin);
	cout<<"\nEnter Name Of Player 1 : ";
	getline(cin,p1);
	
	cout<<"\nEnter Name Of Player 2 : ";
	getline(cin,p2);
	
	cout<<endl<<endl<<p1<<" Will Enter First";
	cout<<endl<<p2<<" Will Enter Second";
}

bool valid_s()
{
	for(int i=0;i<3;i++)
	{
		if(game[i][0]!=' ' && game[i][0] == game[i][1] && game[i][1] == game[i][2])
        {
            return true;
        }
        if(game[0][i]!=' ' && game[0][i] == game[1][i] && game[1][i] == game[2][i])
        {
            return true;
        }
	}
	if(game[0][0]!=' ' && game[0][0] == game[1][1] && game[1][1] == game[2][2])
    {
        return true;
    }
    if(game[0][2]!=' ' && game[0][2] == game[1][1] && game[1][1] == game[2][0])
    {
        return true;
    }
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(game[i][j] == ' ')
            {
				return false;
            }
		}
	}
	tie=true;
	return true;
}

bool valid_1()
{
	if(c1==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a1[i][0]!=' ' && a1[i][0]==a1[i][1] && a1[i][1]==a1[i][2] || a1[0][i]!=' ' && a1[0][i]==a1[1][i] && a1[1][i]==a1[2][i])
			{
				if(token=='x')
				{
					win_1=1;
					c1=1;
				}
				else if(token=='o')
				{
					win_1=2;
					c1=1;
				}
				return true;
			}
		}
		if(a1[0][0]!=' ' && a1[0][0]==a1[1][1] && a1[1][1]==a1[2][2] || a1[0][2]!=' ' && a1[0][2]==a1[1][1] && a1[1][1]==a1[2][0])
		{
			if(token=='x')
			{
				win_1=1;
				c1=1;
			}
			else if(token=='o')
			{
				win_1=2;
				c1=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a1[i][j]!='x' && a1[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_1=true;
		return true;
	}
}

bool valid_2()
{
	if(c2==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a2[i][0]!=' ' && a2[i][0]==a2[i][1] && a2[i][1]==a2[i][2] ||a2[0][i]!=' ' &&  a2[0][i]==a2[1][i] && a2[1][i]==a2[2][i])
			{
				if(token=='x')
				{
					win_2=1;
					c2=1;
				}
				else if(token=='o')
				{
					win_2=2;
					c2=1;
				}
				return true;
			}
		}
		if(a2[0][0]!=' ' && a2[0][0]==a2[1][1] && a2[1][1]==a2[2][2] || a2[0][2]!=' ' && a2[0][2]==a2[1][1] && a2[1][1]==a2[2][0])
		{
			if(token=='x')
			{
				win_2=1;
				c2=1;
			}
			else if(token=='o')
			{
				win_2=2;
				c2=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a2[i][j]!='x' && a2[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_2=true;
		return true;
	}
}

bool valid_3()
{
	if(c3==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a3[i][0]!=' ' && a3[i][0]==a3[i][1] && a3[i][1]==a3[i][2] || a3[0][i]!=' ' && a3[0][i]==a3[1][i] && a3[1][i]==a3[2][i])
			{
				if(token=='x')
				{
					win_3=1;
					c3=1;
				}
				else if(token=='o')
				{
					win_3=2;
					c3=1;
				}
				return true;
			}
		}
		if(a3[0][0]!=' ' && a3[0][0]==a3[1][1] && a3[1][1]==a3[2][2] || a3[0][2]!=' ' && a3[0][2]==a3[1][1] && a3[1][1]==a3[2][0])
		{
			if(token=='x')
			{
				win_3=1;
				c3=1;
			}
			else if(token=='o')
			{
				win_3=2;
				c3=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a3[i][j]!='x' && a3[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_3=true;
		return true;
	}
}

bool valid_4()
{
	if(c4==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a4[i][0]!=' ' && a4[i][0]==a4[i][1] && a4[i][1]==a4[i][2] || a4[0][i]!=' ' && a4[0][i]==a4[1][i] && a4[1][i]==a4[2][i])
			{
				if(token=='x')
				{
					win_4=1;
					c4=1;
				}
				else if(token=='o')
				{
					win_4=2;
					c4=1;
				}
				return true;
			}
		}
		if(a4[0][0]!=' ' && a4[0][0]==a4[1][1] && a4[1][1]==a4[2][2] || a4[0][2]!=' ' && a4[0][2]==a4[1][1] && a4[1][1]==a4[2][0])
		{
			if(token=='x')
			{
				win_4=1;
				c4=1;
			}
			else if(token=='o')
			{
				win_4=2;
				c4=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a4[i][j]!='x' && a4[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_4=true;
		return true;
	}
}

bool valid_5()
{
	if(c5==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a5[i][0]!=' ' && a5[i][0]==a5[i][1] && a5[i][1]==a5[i][2] || a5[0][i]!=' ' && a5[0][i]==a5[1][i] && a5[1][i]==a5[2][i])
			{
				if(token=='x')
				{
					win_5=1;
					c5=1;
				}
				else if(token=='o')
				{
					win_5=2;
					c5=1;
				}
				return true;
			}
		}
		if(a5[0][0]!=' ' && a5[0][0]==a5[1][1] && a5[1][1]==a5[2][2] || a5[0][2]!=' ' && a5[0][2]==a5[1][1] && a5[1][1]==a5[2][0])
		{
			if(token=='x')
			{
				win_5=1;
				c5=1;
			}
			else if(token=='o')
			{
				win_5=2;
				c5=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a5[i][j]!='x' && a5[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_5=true;
		return true;
	}
}

bool valid_6()
{
	if(c6==0)
	{	
		for(int i=0;i<3;i++)
		{
			if(a6[i][0]!=' ' && a6[i][0]==a6[i][1] && a6[i][1]==a6[i][2] || a6[0][i]!=' ' && a6[0][i]==a6[1][i] && a6[1][i]==a6[2][i])
			{
				if(token=='x')
				{
					win_6=1;
					c6=1;
				}
				else if(token=='o')
				{
					win_6=2;
					c6=1;
				}
				return true;
			}
		}
		if(a6[0][0]!=' ' && a6[0][0]==a6[1][1] && a6[1][1]==a6[2][2] || a6[0][2]!=' ' && a6[0][2]==a6[1][1] && a6[1][1]==a6[2][0])
		{
			if(token=='x')
			{
				win_6=1;
				c6=1;
			}
			else if(token=='o')
			{
				win_6=2;
				c6=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a6[i][j]!='x' && a6[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_6=true;
		return true;
	}
}

bool valid_7()
{
	if(c7==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a7[i][0]!=' ' && a7[i][0]==a7[i][1] && a7[i][1]==a7[i][2] || a7[0][i]!=' ' && a7[0][i]==a7[1][i] && a7[1][i]==a7[2][i])
			{
				if(token=='x')
				{
					win_7=1;
					c7=1;
				}
				else if(token=='o')
				{
					win_7=2;
					c7=1;
				}
				return true;
			}
		}
		if(a7[0][0]!=' ' && a7[0][0]==a7[1][1] && a7[1][1]==a7[2][2] || a7[0][2]!=' ' && a7[0][2]==a7[1][1] && a7[1][1]==a7[2][0])
		{
			if(token=='x')
			{
				win_7=1;
				c7=1;
			}
			else if(token=='o')
			{
				win_7=2;
				c7=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a7[i][j]!='x' && a7[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_7=true;
		return true;
	}
}

bool valid_8()
{
	if(a8==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a8[i][0]!=' ' && a8[i][0]==a8[i][1] && a8[i][1]==a8[i][2] || a8[0][i]!=' ' && a8[0][i]==a8[1][i] && a8[1][i]==a8[2][i])
			{
				if(token=='x')
				{
					win_8=1;
					c8=1;
				}
				else if(token=='o')
				{
					win_8=2;
					c8=1;
				}
				return true;
			}
		}
		if(a8[0][0]!=' ' && a8[0][0]==a8[1][1] && a8[1][1]==a8[2][2] || a8[0][2]!=' ' && a8[0][2]==a8[1][1] && a8[1][1]==a8[2][0])
		{
			if(token=='x')
			{
				win_8=1;
				c8=1;
			}
			else if(token=='o')
			{
				win_8=2;
				c8=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a8[i][j]!='x' && a8[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_8=true;
		return true;
	}
}

bool valid_9()
{
	if(c9==0)
	{
		for(int i=0;i<3;i++)
		{
			if(a9[i][0]!=' ' && a9[i][0]==a9[i][1] && a9[i][1]==a9[i][2] || a9[0][i]!=' ' && a9[0][i]==a9[1][i] && a9[1][i]==a9[2][i])
			{
				if(token=='x')
				{
					win_9=1;
					c9=1;
				}
				else if(token=='o')
				{
					win_9=2;
					c9=1;
				}
				return true;
			}
		}
		if(a9[0][0]!=' ' && a9[0][0]==a9[1][1] && a9[1][1]==a9[2][2] || a9[0][2]!=' ' && a9[0][2]==a9[1][1] && a9[1][1]==a9[2][0])
		{
			if(token=='x')
			{
				win_9=1;
				c9=1;
			}
			else if(token=='o')
			{
				win_9=2;
				c9=1;
			}
			return true;
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a9[i][j]!='x' && a9[i][j]!='o')
				{
					return false;
				}
			}
		}
		tie_9=true;
		return true;
	}
}

void final()
{
	valid_1();
	valid_2();
	valid_3();
	valid_4();
	valid_5();
	valid_6();
	valid_7();
	valid_8();
	valid_9();
	if ((win_1 == 1 && win_2 == 1 && win_3 == 1) || (win_4 == 1 && win_5 == 1 && win_6 == 1) || (win_7 == 1 && win_8 == 1 && win_9 == 1) || (win_1 == 1 && win_4 == 1 && win_7 == 1) || (win_2 == 1 && win_5 == 1 && win_8 == 1) || (win_3 == 1 && win_6 == 1 && win_9 == 1) || (win_1 == 1 && win_5 == 1 && win_9 == 1) || (win_3 == 1 && win_5 == 1 && win_7 == 1)) 
	{	
    	cout<<"\n\n***** "<<p2<<" WINS *****";
    	t_win2++;
    	final_win=true;
	} 
	
	else if ((win_1 == 2 && win_2 == 2 && win_3 == 2) || (win_4 == 2 && win_5 == 2 && win_6 == 2) || (win_7 == 2 && win_8 == 2 && win_9 == 2) || (win_1 == 2 && win_4 == 2 && win_7 == 2) || (win_2 == 2 && win_5 == 2 && win_8 == 2) || (win_3 == 2 && win_6 == 2 && win_9 == 2) || (win_1 == 2 && win_5 == 2 && win_9 == 2) || (win_3 == 2 && win_5 == 2 && win_7 == 2)) 
	{
		cout<<"\n\n***** "<<p1<<" WINS *****";
		t_win1++;
		final_win=true;
	}
}

void start_s()
{	
	if(token_s=='x')
	{
		cout<<endl<<p1_s<<" Please Enter : ";
		cin>>digit_s;
	}
	if(token_s=='o')
	{
		cout<<endl<<p2_s<<" Please Enter : ";
		cin>>digit_s;
	}
	
	if(digit_s<1 || digit_s>9)
	{
		cout<<"\n\nPlease Enter A Valid Input\n";
        start_s();
        return;
	}
	
	if(digit_s==1)
	{
		row_s=0;
		col_s=0;
	}
	if(digit_s==2)
	{
		row_s=0;
		col_s=1;
	}
	if(digit_s==3)
	{
		row_s=0;
		col_s=2;
	}
	if(digit_s==4)
	{
		row_s=1;
		col_s=0;
	}
	if(digit_s==5)
	{
		row_s=1;
		col_s=1;
	}
	if(digit_s==6)
	{
		row_s=1;
		col_s=2;
	}
	if(digit_s==7)
	{
		row_s=2;
		col_s=0;
	}
	if(digit_s==8)
	{
		row_s=2;
		col_s=1;
	}
	if(digit_s==9)
	{
		row_s=2;
		col_s=2;
	}
	
	if(game[row_s][col_s]!='x' && game[row_s][col_s]!='o')
	{
		game[row_s][col_s] = token_s;
		token_s = (token_s == 'x') ? 'o' : 'x';
	}
	
	else
	{
		cout<<"\n\nThere Is No Empty Spaces";
		start_s();
	}
}

void start_c_s()
{	
	if(token_s=='x')
	{
		cout<<endl<<p1_s<<" Please Enter : ";
		cin>>digit_s;
	}
	if(token_s=='o')
	{
		do
        {
            digit_s=rand()%9+1;
            row_s=(digit_s-1)/3;
            col_s=(digit_s-1)%3;
            /*if(game[1][1]==' ')
            {
            	digit=5;
			}
			for(int i=0;i<3;i++)
			{
				if(game[i][0]=='x' && game[i][1]=='x')
				{
					digit=
				}
			}*/
        } 
		while (game[row_s][col_s]!=' ');
        
        cout<<endl<<p2<<" Has Chosen : "<<digit_s;
	}
	
	if(digit_s<1 || digit_s>9)
	{
		cout<<"\n\nPlease Enter A Valid Input\n";
        start_c_s();
        return;
	}
	
	if(digit_s==1)
	{
		row_s=0;
		col_s=0;
	}
	if(digit_s==2)
	{
		row_s=0;
		col_s=1;
	}
	if(digit_s==3)
	{
		row_s=0;
		col_s=2;
	}
	if(digit_s==4)
	{
		row_s=1;
		col_s=0;
	}
	if(digit_s==5)
	{
		row_s=1;
		col_s=1;
	}
	if(digit_s==6)
	{
		row_s=1;
		col_s=2;
	}
	if(digit_s==7)
	{
		row_s=2;
		col_s=0;
	}
	if(digit_s==8)
	{
		row_s=2;
		col_s=1;
	}
	if(digit_s==9)
	{
		row_s=2;
		col_s=2;
	}
	
	if(game[row_s][col_s]!='x' && game[row_s][col_s]!='o')
	{
		game[row_s][col_s] = token_s;
		token_s = (token_s == 'x') ? 'o' : 'x';
	}
	
	else
	{
		cout<<"\n\nThere Is No Empty Spaces";
		start_c_s();
	}
}

void start()
{
	if(token=='x')
	{
		cout<<endl<<p1<<" Please Enter(In The "<<game_u<<" Smaller Tic-Tac-Toe) : ";
		cin>>digit;
	}
	if(token=='o')
	{
		cout<<endl<<p2<<" Please Enter(In The "<<game_u<<" Smaller Tic-Tac-Toe) : ";
		cin>>digit;
	}
	
	if(digit<1 || digit>9)
	{
		cout<<"\n\nPlease Enter A Valid Input\n";
        start();
        return;
	}
	
	if(digit==1)
	{
		row=0;
		col=0;
	}
	if(digit==2)
	{
		row=0;
		col=1;
	}
	if(digit==3)
	{
		row=0;
		col=2;
	}
	if(digit==4)
	{
		row=1;
		col=0;
	}
	if(digit==5)
	{
		row=1;
		col=1;
	}
	if(digit==6)
	{
		row=1;
		col=2;
	}
	if(digit==7)
	{
		row=2;
		col=0;
	}
	if(digit==8)
	{
		row=2;
		col=1;
	}
	if(digit==9)
	{
		row=2;
		col=2;
	}
	if(game_u==1)
	{
		if(a1[row][col]!='x' && a1[row][col]!='o')
		{
			a1[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==2)
	{
		if(a2[row][col]!='x' && a2[row][col]!='o')
		{
			a2[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==3)
	{
		if(a3[row][col]!='x' && a3[row][col]!='o')
		{
			a3[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==4)
	{
		if(a4[row][col]!='x' && a4[row][col]!='o')
		{
			a4[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==5)
	{
		if(a5[row][col]!='x' && a5[row][col]!='o')
		{
			a5[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==6)
	{
		if(a6[row][col]!='x' && a6[row][col]!='o')
		{
			a6[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==7)
	{
		if(a7[row][col]!='x' && a7[row][col]!='o')
		{
			a7[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==8)
	{
		if(a8[row][col]!='x' && a8[row][col]!='o')
		{
			a8[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
	else if(game_u==9)
	{
		if(a9[row][col]!='x' && a9[row][col]!='o')
		{
			a9[row][col] = token;
			token = (token == 'x') ? 'o' : 'x';
			game_u=digit;
		}
		
		else
		{
			cout<<"\n\nThere Is No Empty Spaces";
			start();
		}
	}
}

void case_1_1()
{
	cout<<"\nWelcome To Tic-Tac-Toe\n\n";
	
	reset_s();
	intro_s();
	cout<<endl;
	structure_s_s();
	cout<<endl<<endl;
	while(!valid_s())
	{
		start_s();
		cout<<endl;
		structure_s();
		cout<<endl;
	}
	
	if(tie)
	{
		cout<<"\nIt's A Draw";
	}
	else if(token_s=='x')
	{
		cout<<"\n"<<p2_s<<" WINS";
		t_win2_s++;
	}
	else if(token_s=='o')
	{
		cout<<"\n"<<p1_s<<" WINS";
		t_win1_s++;
	}
}

void case_2_1()
{
	cout<<"\nWelcome To Tic-Tac-Toe\n\n";
				
	reset_s();
	fflush(stdin);
	cout<<"\nEnter Name Of Player : ";
	getline(cin,p1_s);
	p2_s="Computer";
	
	cout<<endl;
	structure_s_s();
	cout<<endl<<endl;
	while(!valid_s())
	{
		start_c_s();
		cout<<endl;
		structure_s();
		cout<<endl;
	}
	
	if(tie)
	{
		cout<<"\nIt's A Draw";
	}
	else if(token_s=='x')
	{
		cout<<"\n"<<p2_s<<" WINS";
		t_win2_s++;
	}
	else if(token_s=='o')
	{
		cout<<"\n"<<p1_s<<" WINS";
		t_win1_s++;
	}
}

void how_to_play_s()
{
    system("cls");
    cout << "********** HOW TO PLAY TIC-TAC-TOE **********\n\n";
    
    cout << "1. The game is played on a 3x3 grid.\n";
    cout << "2. Players take turns to enter their move.\n";
    cout << "   - Player 1 uses 'X'\n";
    cout << "   - Player 2 (or Computer) uses 'O'\n";
    cout << "3. To make a move, enter a number (1-9) corresponding to the grid position:\n\n";
    
    cout << "   1 | 2 | 3 \n";
    cout << "  ---|---|---\n";
    cout << "   4 | 5 | 6 \n";
    cout << "  ---|---|---\n";
    cout << "   7 | 8 | 9 \n\n";
    
    cout << "4. The game ends when a player gets three of their marks in a row:\n";
    cout << "   - Horizontally, Vertically, or Diagonally.\n";
    cout << "5. If all 9 squares are filled and no player has won, it's a draw.\n";
    cout << "6. To win, a player must match three symbols ('X' or 'O') in a line.\n\n";
    
    cout << "Example Winning Combinations:\n";
    cout << "   X | X | X      O |   |    \n";
    cout << "  ---|---|---    ---|---|---  \n";
    cout << "     | O |        O | O | O  \n";
    cout << "  ---|---|---    ---|---|---  \n";
    cout << "     |   | O      X |   | X  \n\n";
    
}

void how_to_play()
{
	    system("cls");
    cout << "********** HOW TO PLAY ULTIMATE TIC-TAC-TOE **********\n\n";

    cout << "1. The game consists of a 3x3 grid of smaller Tic-Tac-Toe boards.\n";
    cout << "2. Each turn, a player marks a cell in one of the smaller boards.\n";
    cout << "   - Player 1 uses 'X'\n";
    cout << "   - Player 2 uses 'O'\n";
    cout << "3. The placement of your move determines where your opponent plays next:\n";
    cout << "   - If you mark position (row, col) in a smaller board, your opponent must play\n";
    cout << "     in the corresponding board (row, col) in the larger grid.\n";
    cout << "   - If that board is already won or full, the opponent can choose any free board.\n\n";

    cout << "4. Each smaller board is won like regular Tic-Tac-Toe:\n";
    cout << "   - Get 3 marks in a row, column, or diagonal to win that board.\n";
    cout << "5. The game is won by claiming three smaller boards in a row, column, or diagonal.\n";
    cout << "6. If all boards are full and no player has won, the game is a draw.\n\n";

    cout << "GRID REPRESENTATION:\n";
    cout << "Each small board is a Tic-Tac-Toe grid, and they are arranged in a larger 3x3 grid:\n";

    structure_u();

    cout << "\n\n7. Players enter their move by selecting a number (1-81), corresponding to the board position.\n";
    cout << "8. Keep track of both small board wins and the overall large board strategy!\n\n";

    cout << "Winning the game requires both skill and strategy in multiple boards.\n";
    cout << "Good luck and have fun!\n";

}

void case_1_2()
{
	cout<<"\nWelcome To Ultimate Tic-Tac-Toe\n\n";
	
	reset();
	intro();
	cout<<endl;

	structure_u();
	cout<<endl<<endl<<p1<<" Please Enter The Starting Main Row And Main Column : ";
	cin>>mr>>mc;
	game_u=(mr*3)+(mc+1);
	cout<<endl;
	
	while(!final_win)
	{
		start();
		cout<<endl;
		structure();
		final();
	}
}

void case_1()
{
	int ch;
	cout<<endl<<"*******TIC-TAC-TOE*******";
	while(1)
	{
		cout<<"\n\nMenu:\n1.Play With A Friend \n2.Play With Computer \n3.How To Play \n4.Back To Main Menu \n\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				system("cls");
				case_1_1();
				break;
				
			case 2:
				system("cls");
				case_2_1();
				break;
				
			case 3:
				system("cls");
				how_to_play_s();
				break;
				
			case 4:
				return;
				
			default:
				cout<<"\n\n***Please Enter A Valid Input***";
				break;
		}
	}
}

void case_2()
{
	int ch;
	cout<<endl<<"*******ULTIMATE TIC-TAC-TOE*******";
	while(1)
	{
		cout<<"\n\nMenu:\n1.Play With A Friend \n2.How To Play \n3.Back To Main Menu \n\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				system("cls");
				case_1_2();
				break;
				
			case 2:
				system("cls");
				how_to_play();
				break;
				
			case 3:
				return;
				
			default:
				cout<<"\n\n***Please Enter A Valid Input***";
				break;
		}
	}
}

void scoreboard()
{
	cout<<"\n***Simple Tic Tac Toe***\n";
	cout<<"------------------------------------------------";
	cout<<"\nPlayer Name"<<setw(25)<<"Wins"<<endl;
	cout<<"------------------------------------------------\n";
	cout<<p1_s<<setw(30)<<t_win1_s<<endl;
	cout<<p2_s<<setw(30)<<t_win2_s;
	
	cout<<"\n\n\n***Ultimate Tic Tac Toe***\n";
	cout<<"------------------------------------------------";
	cout<<"\nPlayer Name"<<setw(25)<<"Wins"<<endl;
	cout<<"------------------------------------------------\n";
	cout<<p1<<setw(30)<<t_win1<<endl;
	cout<<p2<<setw(30)<<t_win2;
}

int main()
{
	int ch;
	cout<<endl<<"*******TIC-TAC-TOE*******";
	while(1)
	{
		cout<<"\n\nMenu:\n1.Play Simple Tic-Tac-Toe \n2.Play Ultimate Tic-Tac-Toe \n3.Scoreboard \n4.Exit \n\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				system("cls");
				case_1();
				break;
				
			case 2:
				system("cls");
				case_2();
				break;
				
			case 3:
				system("cls");
				scoreboard();
				break;	
				
			case 4:
				exit(1);
				
			default:
				cout<<"\n\n***Please Enter A Valid Input***";
				break;
		}
	}
}
