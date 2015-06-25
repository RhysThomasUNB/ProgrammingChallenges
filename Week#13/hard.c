#include <stdio.h>
#include <stdlib.h>

enum plays
{
  Rock,
  Paper,
  Scissors
};

int main()
{
  int i;
  int player1Score = 0;
  int player2Score = 0;
  for(i = 0; i < 3; i++)
  {
     int player1 = rand() % 3;
     int player2 = rand() % 3;
     if(player1 == 0)
     {
       printf("Player 1: Rock\n");
       if(player2 == 1)
       { 
         printf("Player 2: Paper\n Player 2 Wins!!\n\n");
         player2Score++;
       }
       else if(player2 == 2)
       {
         printf("Player 2: Scissors\n Player 1 Wins!!\n\n");
         player1Score++;
       }
       else
       {
         printf("DRAW\n\n");
       }
     }

     else if(player1 == 1)
     {
        printf("Player 1: Paper\n");
        if(player2 == 0)
        {
           printf("Player 2: Rock\n Player 1 Wins!!\\n\n");
           player1Score++;
        }
        else if(player2 == 2)
        {
           printf("Player 2: Scissors\n Player 2 Wins!!\n\n");
           player2Score++;
        }
        else
        {
           printf("DRAW\n\n");
        }
     }
     else
     {
       printf("Player 1: Scissors\n");
       if(player2 == 0)
       {
         printf("Player 2: Rock\n Player 1 Wins!!\n\n");
         player1Score++;
       }
       else if(player2 == 1)
       {
         printf("Player 2: Paper\n Player 2 Wins!!\n\n");
         player2Score++;
       }
       else
       {
         printf("DRAW\n\n");
       }
     }//else
   }//for
  printf("player1: %d, player2: %d", player1Score, player2Score);
  return 0;
}
