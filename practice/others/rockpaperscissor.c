/*Rock Paper Scissor (also known as Stone Paper Scissor) is a classic hand game played between two people. 
Each player simultaneously forms one of three shapes: Rock, Paper, or Scissors. 
The winner is determined based on simple rules that have made this game a timeless favorite:

Rock vs Paper -> Paper wins (because paper can cover rock).
Rock vs Scissors -> Rock wins (because rock can crush scissors).
Paper vs Scissors -> Scissors wins (because scissors can cut paper).
In this Rock Paper Scissor project, users are asked to make a choice between these three options. 
The computer will also randomly choose one of the three shapes. Once both the user and the computer have made their choices, 
the result will be displayed, showing who won the round along with the choices of both players.*/

#include<Stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int computersturn();
void game();
char humansturn();

int main(){
    game();    
  
}

void game(){
    bool status = 1; // keeps the player in the game menu
    int choice = 1; // cheoice
     while(status){
        printf("\n-------------------------------------------\n");
        printf("\nWelcome to the Rock Paper Scissors Game\n");
        printf("\n Select Any Option\n"
            "1 to start the game\n" 
            "0 to exit the game\n"
            "\nEnter Your Choice:");
        scanf("%d",&choice); // bug fixed was using
        printf("\n");
        
        switch (choice){
            case 0:
            printf("Game EXITED!\n");
            status = 0; 
            break;

            case 1:
            printf("Game STARTED!\n");
            humansturn(); // calls for humans turn
            srand(time(NULL));
            break; 

            default:
            printf("Select Correct Option\n");
        }
    }
}
int computersturn(){
    int CValue = rand()%3;
    return CValue;
}

char humansturn(){
            char humansChoice;
            int Cvalue;
            printf("R for Rock, P for Paper, S for Scissors \n"
            "\nEnter Your Choice: ");
            scanf(" %c",&humansChoice);
            switch(humansChoice){
                case 'R': // Human Chose Rock
                printf("\nYou chose Rock! Wait for the computer's turn...\n");
                Cvalue = computersturn(); // 0 is for rock as user's input
                if(Cvalue == 0){
                    printf("\n Computer Chose ROCK! It's a tie");
                } else if(Cvalue ==1){
                    printf("\n Computer Chose Paper! You Lose");
                }else if(Cvalue ==2){
                    printf("\n Computer Chose Scissors! You Won");
                } 
                break;
                case 'P': // Human Chose Paper
                printf("\nYou chose Paper! Wait for the computer's turn...\n");
                Cvalue = computersturn(); // 1 is for Paper as user's input
                if(Cvalue == 0){
                    printf("\n Computer Chose ROCK! You Won");
                } else if(Cvalue ==1){
                    printf("\n Computer Chose Paper! It's a tie");
                }else if(Cvalue ==2){
                    printf("\n Computer Chose Scissors! You Lose");
                } 
                break;
                case 'S': // Human Chose Scissors
                printf("\nYou chose Rock! Wait for the computer's turn...\n");
                Cvalue = computersturn(); // 2 is for Scissors
                  if(Cvalue == 0){
                    printf("\n Computer Chose ROCK! You Won");
                } else if(Cvalue ==1){
                    printf("\n Computer Chose Paper! You Lose");
                }else if(Cvalue ==2){
                    printf("\n Computer Chose Scissors! It's A Tie ");
                }
                break;

                default:
                printf("\n ENTER CORRECT CHOICE \n");
            }
            return humansChoice;
}