#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
void showboard();
int checkForWin();
void welcomeMessage();
int main()
{
 system("color 0b");
welcomeMessage();
int player=1,choice,i;
char mark;//x or o
do
{
    showboard();
    player=(player%2)?1:2;
    printf("\n\n\t\t\t\t\tPlayer %d turn: ",player);
    scanf("%d",&choice);
    mark=(player==1) ? 'X':'O';


        if (choice == 1 && arr[1] == '1')
            arr[1] = mark;
        else if (choice == 2 && arr[2] == '2')
            arr[2] = mark;
        else if (choice == 3 && arr[3] == '3')
            arr[3] = mark;
        else if (choice == 4 && arr[4] == '4')
            arr[4] = mark;
        else if (choice == 5 && arr[5] == '5')
            arr[5] = mark;
        else if (choice == 6 && arr[6] == '6')
            arr[6] = mark;
        else if (choice == 7 && arr[7] == '7')
            arr[7] = mark;
        else if (choice == 8 && arr[8] == '8')
            arr[8] = mark;
        else if (choice == 9 && arr[9] == '9')
            arr[9] = mark;

     else
        {
        printf("\t\t\t\t\tInvalid value\n");
     player--;
     getch();
        }
        i= checkForWin();
        player++;
}
while(i==-1);

    if(i==1)
{
    printf("\n\n\t\t\t\t\t*************************\n");
    printf("\t\t\t\t\t**player %d is won......**",player-1);
    printf("\n\t\t\t\t\t*************************\n");
}
else
   { printf("\n\n\t\t\t\t\t*************************\n");
    printf("\t\t\t\t\t**......Game Draw......**");
    printf("\n\t\t\t\t\t*************************\n");
   }
    getch();
return 0;

}

showboard()
{   system("cls");
printf("\t\t\t\t****************************************\n");
printf("\t\t\t\t*                                      *\n");
printf(" \t\t\t\t*             Tic Tac Toe Game!        *\n");
printf("\t\t\t\t*                                      *\n");
printf("\t\t\t\t****************************************\n");
printf("\n\n");
 printf("\t\t\t\t\t       |       |       \n");
 printf("\t\t\t\t\t   %c   |   %c   |    %c   \n",arr[1],arr[2],arr[3]);
 printf("\t\t\t\t\t       |       |       \n");
 printf("\t\t\t\t\t-------|-------|-------\n");
 printf("\t\tPlayer 1=X\t\t       |       |       \n");
 printf("\t\tPlayer 2=O\t\t   %c   |   %c   |    %c   \n",arr[4],arr[5],arr[6]);
 printf("\t\t\t\t\t       |       |       \n");
 printf("\t\t\t\t\t-------|-------|-------\n");
 printf("\t\t\t\t\t       |       |       \n");
 printf("\t\t\t\t\t   %c   |   %c   |    %c   \n",arr[7],arr[8],arr[9]);
 printf("\t\t\t\t\t       |       |       \n");


}

int checkForWin()
{
    system("cls");
    showboard();
 if (arr[1]==arr[2] && arr[2]==arr[3])
 return 1;
 else if(arr[4]==arr[5] && arr[5]==arr[6])
 return 1;
  else if(arr[7]==arr[8] && arr[8]==arr[9])
 return 1;

  else if(arr[1]==arr[3] && arr[3]==arr[7])
 return 1;
  else if(arr[2]==arr[5] && arr[5]==arr[8])
 return 1;
   else if(arr[3]==arr[6] && arr[6]==arr[9])
 return 1;
   else if(arr[1]==arr[5] && arr[5]==arr[9])
 return 1;
   else if(arr[3]==arr[5] && arr[5]==arr[7])

 return 1;
 else if(arr[1]!='1'&& arr[2]!='2'&& arr[3]!='3'&& arr[4]!='4'&& arr[5]!='5'&& arr[6]!='6'&& arr[7]!='7'&& arr[8]!='8'&&arr[9]!='9')
 return 0;

else
    return -1;
}

void welcomeMessage()
{
    system("cls");
     // Clear the screen before displaying welcome message
    printf("\t\t\t\t\t****************************************\n");
     printf("\t\t\t\t\t*                                      *\n");
    printf(" \t\t\t\t\t*  Welcome to Tic Tac Toe Game!        *\n");
    printf("\t\t\t\t\t*                                      *\n");
    printf("\t\t\t\t\t****************************************\n");
    printf("\n\n");
    printf("\t\t\t\t\tPress any key to start......");
    getch();  // Wait for the user to press a key
}

