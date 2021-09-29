#include <iostream>
using namespace std;
#define ROWS 8
#define COLS 8
#define ROWS2 16
#define COLS2 16
#define ROWS3 12
#define COLS3 12
char swape(int a);
void print8x8(int d[][COLS]);
void board8x8();
void print12x12(int d[][COLS3]);
void board12x12();
void print16x16(int d[][COLS2]);
void board16x16();
void gameplay8x8();
void gameplay12x12();
void gameplay16x16();
int swape2(char a);
class board
{
public:
    void board8x8();
    void board12x12();
    void board16x16();
private:
  char swape(int a);
  void print8x8(int d[][COLS]);
  void print12x12(int d[][COLS3]);
  void print16x16(int d[][COLS2]);
};
class player
{
  public:
      string Player_name;
      string difficulty_level;
      int win_matches;
      int played_matches;
};
class checker
{
   public:
   int swape2(char a);
   void gameplay8x8();
   void gameplay12x12();
   void gameplay16x16();
   void king8x8(int b[][COLS]);

};
int main()
{
    cout<<"Please Enter Player1 Name:";
    player name1,name2,level;
    getline(cin,name1.Player_name);
    cout<<"Please Enter Player2 Name:";
    getline(cin,name2.Player_name);
    cout<<"Enter Your Difficulty Level:";
    cout<<"1.Easy"<<" "<<"2.Medium"<<" "<<"3.Hard"<<endl;
    cin>>level.difficulty_level;
    if(level.difficulty_level=="Easy" || level.difficulty_level=="easy")
        {
        board8x8();
        gameplay8x8();
        }
    else if(level.difficulty_level=="Medium" || level.difficulty_level=="medium")
    {
        board12x12();
        gameplay12x12();
    }
    else if(level.difficulty_level=="Hard" || level.difficulty_level=="hard")
    {
        board16x16();
        gameplay16x16();
    }
    return 0;
}
void board8x8()
{
    int b[ROWS][COLS]=
    {{0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,0}
    };
    print8x8(b);


}
void print8x8(int d[][COLS])
{
     cout<<"  a   b   c   d   e   f   g   h"<<endl;
  for(int x=0;x<ROWS;x++)
     {
      cout<<"  --------------------------------"<<endl;
      cout<<x+1<<"|";
      for(int y=0;y<COLS;y++) cout<<" "<<swape(d[x][y])<<" |";
      cout<<endl;
    }
  cout<<"  --------------------------------"<<endl;
     cout<<"  a   b   c   d   e   f   g   h";
}
char swape(int a)
{
     switch (a)
     {
         case 0: return ' ';
         case 1: return 'o';
         case 2: return '*';
         case 3: return 'O';
         case 4: return 'Q';
     }
}
void board16x16()
{
    int b[ROWS2][COLS2]=
    {{0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}
    };
    print16x16(b);
}
void print16x16(int d[][COLS2])
{
  cout<<"   a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p"<<endl;
  for(int x=0;x<ROWS2;x++)
     {
      cout<<"  ----------------------------------------------------------------"<<endl;
      cout<<x+1<<"|";
      for(int y=0;y<COLS2;y++) cout<<" "<<swape(d[x][y])<<" |";
      cout<<endl;
    }
      cout<<"  -----------------------------------------------------------------"<<endl;
      cout<<"    a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p"<<endl;
}
void board12x12()
{
    int b[][12]=
    {{0,2,0,2,0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,1,0,1,0,1}
    };
    print12x12(b);
}
void print12x12(int d[][COLS3])
{
  cout<<"   a   b   c   d   e   f   g   h   i   j   k   l"<<endl;
  for(int x=0;x<ROWS3;x++)
     {
      cout<<"  -----------------------------------------------"<<endl;
      cout<<x+1<<"|";
      for(int y=0;y<COLS3;y++) cout<<" "<<swape(d[x][y])<<" |";
      cout<<endl;
    }
  cout<<"  ------------------------------------------------"<<endl;
  cout<<"    a   b   c   d   e   f   g   h   i   j   k   l"<<endl;
}
void gameplay8x8()
{
  int b[8][8]=
    {{0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,0}
     };
   int n=8;
     for(;;)
     {
        for(;;)
         {
             char col1,col2;
             int  row01,row02;
         //player 1
         cout<<endl;
         cout<<"Player01-"<<endl;
         cout<<"Your piece is o"<<endl;
         cout<<"Enter the piece you want to move(Row)(Column):";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position(Row)(Column):";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
         if(b[row1][l]==1)
         {
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print8x8(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print8x8(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print8x8(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print8x8(b);
             continue;
             }
         }
         else if(b[row1][l]==3)
         {         //forward right corner                                   forward left corner                          backward right corner                          backward left corner
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2 || row2==(row1+1) && m==(l+1) && b[row2][m]!=2 || row2==(row1+1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print8x8(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)//forward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print8x8(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)//forward right eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print8x8(b);
             break;
             }
              else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==2 && b[row2][m]==0)//backward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//right
              print8x8(b);
              break;
             }
             else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==2 && b[row2][m]==0)//backward left eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//left
             print8x8(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print8x8(b);
             continue;
             }
         }
      }//player 1 end
         for (int i = 0; i < 8; i++)//finding queen
         {
            if (b[0][i]==1)
            {
             b[0][i]=3;
            }

           if (b[7][i]==2)
           {
            b[7][i]=4;
           }
         }
        int counter1=0,counter2=0;//making decision about winning
        for(int i=0;i<8;i++)
         {
            for(int j=0;j<8;j++)
            {
                if(b[i][j]==2 || b[i][j]==4) counter1++;

            }
         }
         if(counter1==0)
         {
             cout<<endl;
             cout<<"Player 1 Wins";
             break;
         }

         //player 2
         for(;;)
         {
         char col1,col2;
         int  row01,row02;
         cout<<endl;
         cout<<"Player02-"<<endl;
         cout<<"Your piece is *"<<endl;
         cout<<"Enter the piece you want to move(Row)(Column):";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position(Row)(Column):";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
         if(b[row1][l]==2)
           {
              if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1)
             {
             swap(b[row1][l],b[row2][m]);
             print8x8(b);
             break;
             }
             else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 && b[row2][m]==0)
            {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//left
              print8x8(b);
              break;
            }
            else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 && b[row2][m]==0)
            {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//right
             print8x8(b);
             break;
            }
            else
            {
             cout<<"invalid move"<<endl;
             print8x8(b);
             continue;
            }
          }
            else if(b[row1][l]==4)
            {                //forward right corner                   forward left                                    backward left corner                              backward right corner
                if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1 ||row2==(row1-1) && m==(l+1) && b[row2][m]!=1 || row2==(row1-1) && m==(l-1) && b[row2][m]!=1)
                {
                swap(b[row1][l],b[row2][m]);
                print8x8(b);
                break;
                }
                else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 || b[row1+1][l+1]==3 && b[row2][m]==0)//forward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l+1]=0;//left
                print8x8(b);
                break;
                }
                else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 || b[row1+1][l-1]==3 && b[row2][m]==0)//forward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l-1]=0;//right
                print8x8(b);
                break;
                }
                else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==1 || b[row1-1][l+1]==3 && b[row2][m]==0)//backward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l+1]=0;//left
                print8x8(b);
                break;
                }
                else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==1 || b[row1-1][l-1]==3 && b[row2][m]==0)//backward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l-1]=0;//right
                print8x8(b);
                break;
                }
                else
                {
                cout<<"invalid move"<<endl;
                print8x8(b);
                continue;
                }
            }

        }//player 2 end
         for (int i = 0; i < 8; i++)//finding queen
         {
            if (b[0][i]==1)
            {
            b[0][i]=3;
            }

            if (b[7][i]==2)
            {
            b[7][i]=4;
            }
        }
         for(int i=0;i<8;i++)//making decision about winning
         {
            for(int j=0;j<8;j++)
            {
                if(b[i][j]==1 || b[i][j]==3) counter2++;

            }
         }
         if(counter2==0)
         {
             cout<<endl;
             cout<<"Player 2 Wins";
             break;
         }
     }
}
int swape2(char a)
{
     switch (a)
     {
         case 'a': return 0;
         case 'b': return 1;
         case 'c': return 2;
         case 'd': return 3;
         case 'e': return 4;
         case 'f': return 5;
         case 'g': return 6;
         case 'h': return 7;

     }
}
void gameplay12x12()
{
  int b[12][12]=
    {{0,2,0,2,0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,1,0,1,0,1}
    };
     for(;;)
     {
        for(;;)
         {
             char col1,col2;
             int  row01,row02;
         //player 1
         cout<<endl;
         cout<<"Player01-"<<endl;
         cout<<"Your piece is o"<<endl;
         cout<<"Enter the piece you want to move(Row)(Column):";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position(Row)(Column):";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
         if(b[row1][l]==1)
         {
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print12x12(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print12x12(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print12x12(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print12x12(b);
             continue;
             }
         }
         else if(b[row1][l]==3)
         {         //forward right corner                                   forward left corner                          backward right corner                          backward left corner
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2 || row2==(row1+1) && m==(l+1) && b[row2][m]!=2 || row2==(row1+1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print12x12(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)//forward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print12x12(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)//forward right eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print12x12(b);
             break;
             }
              else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==2 && b[row2][m]==0)//backward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//right
              print12x12(b);
              break;
             }
             else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==2 && b[row2][m]==0)//backward left eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//left
             print12x12(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print12x12(b);
             continue;
             }
         }//player 1 end
         for (int i = 0; i < 12; i++)//finding queen
           {
            if (b[0][i]==1)
              {
               b[0][i]=3;
              }

           if (b[7][i]==2)
             {
              b[7][i]=4;
             }
           }
        int counter2=0;
        for(int i=0;i<12;i++)//making decision on winning
         {
            for(int j=0;j<12;j++)
            {
                if(b[i][j]==2 || b[i][j]==4) counter2++;

            }
         }
         if(counter2==0)
         {
              cout<<endl;
             cout<<"Player 1 Wins";
             break;
         }


         //player 2
         for(;;)
         {
         char col1,col2;
         int  row01,row02;
         cout<<endl;
         cout<<"Player02-"<<endl;
         cout<<"Your piece is *"<<endl;
         cout<<"Enter the piece you want to move:";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position:";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
         if(b[row1][l]==2)
           {
              if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1)
             {
             swap(b[row1][l],b[row2][m]);
             print12x12(b);
             break;
             }
             else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 && b[row2][m]==0)
            {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//left
              print12x12(b);
              break;
            }
            else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 && b[row2][m]==0)
            {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//right
             print12x12(b);
             break;
            }
            else
            {
             cout<<"invalid move"<<endl;
             print12x12(b);
             continue;
            }
          }
            else if(b[row1][l]==4)
            {                //forward right corner                   forward left                                    backward left corner                              backward right corner
                if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1 ||row2==(row1-1) && m==(l+1) && b[row2][m]!=1 || row2==(row1-1) && m==(l-1) && b[row2][m]!=1)
                {
                swap(b[row1][l],b[row2][m]);
                print12x12(b);
                break;
                }
                else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 || b[row1+1][l+1]==3 && b[row2][m]==0)//forward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l+1]=0;//left
                print12x12(b);
                break;
                }
                else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 || b[row1+1][l-1]==3 && b[row2][m]==0)//forward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l-1]=0;//right
                print12x12(b);
                break;
                }
                else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==1 || b[row1-1][l+1]==3 && b[row2][m]==0)//backward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l+1]=0;//left
                print12x12(b);
                break;
                }
                else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==1 || b[row1-1][l-1]==3 && b[row2][m]==0)//backward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l-1]=0;//right
                print12x12(b);
                break;
                }
                else
                {
                cout<<"invalid move"<<endl;
                print12x12(b);
                continue;
                }
            }

        }//player 2 end
         for (int i = 0; i < 12; i++)//finding queen
         {
            if (b[0][i]==1)
            {
            b[0][i]=3;
            }

            if (b[7][i]==2)
            {
            b[7][i]=4;
            }
        }
         for(int i=0;i<12;i++)//making decision about winning
         {
            for(int j=0;j<12;j++)
            {
                if(b[i][j]==1 || b[i][j]==3) counter2++;

            }
         }
         if(counter2==0)
         {
             cout<<endl;
             cout<<"Player 2 Wins";
             break;
         }
     }
   }

}
void gameplay16x16()
{
     int b[16][16]=
    {{0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
     {2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0},
     {0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},
     {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
     {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}
    };
     for(;;)
     {
        for(;;)
         {
             char col1,col2;
             int  row01,row02;
         //player 1
         cout<<endl;
         cout<<"Player01-"<<endl;
         cout<<"Your piece is o"<<endl;
         cout<<"Enter the piece you want to move(Row)(Column):";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position(Row)(Column):";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
         if(b[row1][l]==1)
         {
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print16x16(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print16x16(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print16x16(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print16x16(b);
             continue;
             }
         }
         else if(b[row1][l]==3)
         {         //forward right corner                                   forward left corner                          backward right corner                          backward left corner
             if(row2==(row1-1) && m==(l+1) && b[row2][m]!=2|| row2==(row1-1) && m==(l-1) && b[row2][m]!=2 || row2==(row1+1) && m==(l+1) && b[row2][m]!=2 || row2==(row1+1) && m==(l-1) && b[row2][m]!=2)
             {
             swap(b[row1][l],b[row2][m]);
             print16x16(b);
             break;
             }
             else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==2 && b[row2][m]==0)//forward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1-1][l+1]=0;//right
              print16x16(b);
              break;
             }
             else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==2 && b[row2][m]==0)//forward right eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1-1][l-1]=0;//left
             print16x16(b);
             break;
             }
              else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==2 && b[row2][m]==0)//backward right eat
             {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//right
              print16x16(b);
              break;
             }
             else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==2 && b[row2][m]==0)//backward left eat
             {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//left
             print16x16(b);
             break;
             }
             else
             {
             cout<<"invalid move"<<endl;
             print16x16(b);
             continue;
             }
         }//player 1 end
         for (int i = 0; i < 16; i++)//finding queen
           {
            if (b[0][i]==1)
              {
               b[0][i]=3;
              }

           if (b[7][i]==2)
             {
              b[7][i]=4;
             }
           }
        int counter1=0,counter2=0;
         for(int i=0;i<16;i++)//making decision for win
         {
            for(int j=0;j<16;j++)
            {
                if(b[i][j]==2 || b[i][j]==4) counter2++;

            }
         }
         if(counter2==0)
         {
             cout<<endl;
             cout<<"Player 1 Wins";
             break;
         }

         //player 2
         for(;;)
         {
         char col1,col2;
         int  row01,row02;
         cout<<endl;
         cout<<"Player02-"<<endl;
         cout<<"Your piece is *"<<endl;
         cout<<"Enter the piece you want to move(Row)(Column):";
         cin>>row01>>col1;
         cout<<endl;
         cout<<"Enter the position(Row)(Column):";
         cin>>row02>>col2;
         cout<<endl;
         int row1=row01-1;
         int row2=row02-1;
         int l=swape2(col1);
         int m=swape2(col2);
          if(b[row1][l]==2)
           {
              if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1)
             {
             swap(b[row1][l],b[row2][m]);
             print16x16(b);
             break;
             }
             else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 && b[row2][m]==0)
            {
              swap(b[row1][l],b[row2][m]);
              b[row1+1][l+1]=0;//left
              print16x16(b);
              break;
            }
            else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 && b[row2][m]==0)
            {
             swap(b[row1][l],b[row2][m]);
             b[row1+1][l-1]=0;//right
             print16x16(b);
             break;
            }
            else
            {
             cout<<"invalid move"<<endl;
             print16x16(b);
             continue;
            }
          }
            else if(b[row1][l]==4)
            {                //forward right corner                   forward left                                    backward left corner                              backward right corner
                if(row2==(row1+1) && m==(l-1) && b[row2][m]!=1|| row2==(row1+1) && m==(l+1) && b[row2][m]!=1 ||row2==(row1-1) && m==(l+1) && b[row2][m]!=1 || row2==(row1-1) && m==(l-1) && b[row2][m]!=1)
                {
                swap(b[row1][l],b[row2][m]);
                print16x16(b);
                break;
                }
                else if(row2==(row1+2) && m==(l+2) && b[row1+1][l+1]==1 || b[row1+1][l+1]==3 && b[row2][m]==0)//forward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l+1]=0;//left
                print16x16(b);
                break;
                }
                else if(row2==(row1+2) && m==(l-2) && b[row1+1][l-1]==1 || b[row1+1][l-1]==3 && b[row2][m]==0)//forward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1+1][l-1]=0;//right
                print16x16(b);
                break;
                }
                else if(row2==(row1-2) && m==(l+2) && b[row1-1][l+1]==1 || b[row1-1][l+1]==3 && b[row2][m]==0)//backward left eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l+1]=0;//left
                print16x16(b);
                break;
                }
                else if(row2==(row1-2) && m==(l-2) && b[row1-1][l-1]==1 || b[row1-1][l-1]==3 && b[row2][m]==0)//backward right eat
                {
                swap(b[row1][l],b[row2][m]);
                b[row1-1][l-1]=0;//right
                print16x16(b);
                break;
                }
                else
                {
                cout<<"invalid move"<<endl;
                print16x16(b);
                continue;
                }
            }

        }//player 2 end
         for (int i = 0; i < 16; i++)//finding queen
           {
            if (b[0][i]==1)
              {
               b[0][i]=3;
              }

           if (b[7][i]==2)
             {
              b[7][i]=4;
             }
           }
         for(int i=0;i<16;i++)
         {
            for(int j=0;j<16;j++)
            {
                if(b[i][j]==1 || b[i][j]==3) counter1++;

            }
         }
         if(counter1==0)
         {
             cout<<endl;
             cout<<"Player 2 Wins";
             break;
         }
     }
    }
}
