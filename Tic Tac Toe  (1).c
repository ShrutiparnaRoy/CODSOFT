#include<stdio.h>
include<stdlib.h>
char player1[50];
char player2[50];
const char o='O';
const char x='X';
char c[9]={'1','2','3','4','5','6','7','8','9'};
void "player_name()";
void "print_boad"();
int wincheck();
void print_result();
void play();
int player = 1;
int main ()
{
system ("color fd");
player_name();
fflush(stdin);
printf("Start the game");
getchar();
print_board();
play_game();
return 0;
}
void "player_name ()"
{
printf ("player1 :");
scanf("%s", "player1");
printf ("player2 :");
scanf("%s", "player2");
}
 void print_board()
 {
 int i;
 system("cls");
 printf("\t Tic Tac Toe");
 printf("\t%s:-(%c)\n",player1,o);
 printf("\t%s:-(%c)\n",player2,x );
 printf("\n\n\n\n");
 printf("\t%c|%c|%c\n",c[0],c[1],c[2]);
 printf("\t    |    |    \n");
 printf("\t----|----|----\n");
 printf("\t  %c|  %c|  %c\n",c[3],c[4],c[5]);
 printf("\t    |    |    \n");
 printf("\t  %c|  %c|  %c\n",c[6],c[7],c[8]);
 printf("\t    |    |    \n");
 }
 int wincheck()
 {
 if (c[0]==c[1]&&c[1]==c[2])
 return 1;
 else if (c[3]==c[4]&&c[4]==c[5])
 return 1;
 else if (c[6]==c[7]&&c[7]==c[8])
 return 1;
 else if (c[0]==c[3]&&c[3]==c[6])
 return 1;
 else if (c[1]==c[4]&&c[4]==c[7])
 return 1;
 else if (c[2]==c[5]&&c[5]==c[8])
 return 1;
 else if (c[0]==c[4]&&c[4]==c[8])
 return 1;
 else if (c[2]==c[4]&&c[4]==c[6])
 return 1;
 else if (c[0]!='1'&&c[1]!='2'&&c[2]!='3'&&c[3]!='4'&&c[4]!='5'&&c[5]!='6'&&c[6]!='7'&&c[7]!='8'&&c[8]!='9')
 return 0;
 else
 return -1;
 }
 void print_result(int score)
 {
 if (score ==1)
 {
 if (player==1)
 {
 printf ("\n\n\t%s Wins!",player1);
 getchar();
 }
 else 
 {
 printf("\n\n\t%s Wins!",player2);
 getchar();
 }
 }
 else
 {
 printf("\n\n\t Game Drawn!");
 getchar();
 }
 }
 void play_game()
 {
 int choice , score= -1;
 char symbol ;
 while (score==-1)
 {
 player=((player%2)?1:2);
 symbol ((player==1)?o:x);
 if (player==1)
 printf ("\t%s Select 1-9:," player1);
 else
 printf ("\t%s Select 1-9:,"player2);
 fflush(stdlin);
 scanf("%d,"&choice);
 if (choice==1&&c[0]=='1')
 c[0]=symbol;
 else if (choice==2&&c[1]=='2')
 c[1]=symbol ;
 else if(choice==3&&c[2]=='3')
 c[2]=symbol;
 else if(choice==4&&c[3]=='4')
 c[3]=symbol;
 else if (choice==5&&c[4]=='5')
 c[4]=symbol;
 else if (choice ==6&&c[5]=='6')
 c[5]=symbol;
 else if (choice ==7&&c[6]=='7')
 c[6]=symbol;
 else if(choice ==8&&c[7]=='8')
 c[7]=symbol;
 else if (choice==9&&c[8]=='9')
 c[8]=symbol;
 else
 {
 printf("\t Wrong selection \n")
 continue ;
 }
 print_board();
 score=wincheck();
 if (score==1||score==0)
 {
 print_result(score);
 return;
 }
 player++;
 }
 }