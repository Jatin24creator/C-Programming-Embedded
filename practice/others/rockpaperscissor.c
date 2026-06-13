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

int computersturn(int n);
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
            "\nRules: After the game begins,\n" 
            "You'll be asked to choose:\n"
            "R for Rock, P for Paper, S for Scissors\n"
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
            break; 

            default:
            printf("Select Correct Option\n");
        }
    }
}

int computersturn(int n){ // int n (humans choice)

    int c =2;
    int value = rand()%(c+1);


    // logic 0 R, 1 P, 2 S;
    // rock vs paper -> paper
    // rock vs scissor -> rock
    // paper vs scissor -> scissor
    switch(value){
                case 0: // Computer Chose Rock
                if(n==0){ // rock - rock
                    printf("\nComputer Chose ROCK and You Chose ROCK! It's A TIE\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n==1){ // rock - paper
                     printf("\nComputer Chose ROCK and You Chose PAPER! YOU WON!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n ==2){
                    printf("\nComputer Chose ROCK and You Chose SCISSORS! YOU LOST!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                }
                break;
                case 1: // Computer Chose Paper
                int choice_paper = 1;
                 if(n==0){ // paper - rock
                    printf("\nComputer Chose PAPER and You Chose ROCK! YOU LOST!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n==1){ // paper - paper
                     printf("\nComputer Chose PAPER and You Chose PAPER! It's A TIE\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n ==2){ // paper - scissor
                    printf("\nComputer Chose PAPER and You Chose SCISSORS! YOU WON!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                }
              
                break;
                case 2: // Computer Chose Scissors
                int choice_scissor = 2;
                 if(n==0){ // scissor - rock
                    printf("\nComputer Chose SCISSOR and You Chose ROCK! YOU WON!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n==1){ // scissor - paper
                     printf("\nComputer Chose SCISSOR and You Chose PAPER! YOU LOST!!!!!!\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                } else if(n ==2){ // scissor - scissor
                    printf("\nComputer Chose SCISSOR and You Chose SCISSOR! It's A TIE\n" 
                        "Press 1 to TRY AGAIN * to EXIT from Main Menu\n");
                    int option;
                    scanf("%d",&option);
                    (option == 1)?humansturn():game(); 
                }
                break;

            }
}

char humansturn(){
            char humansChoice;
            printf("R for Rock, P for Paper, S for Scissors, * for Return to Main Menu\n"
            "\nEnter Your Choice: ");
            scanf(" %c",&humansChoice);
            switch(humansChoice){
                case 'R': // Human Chose Rock
                int choice_rock = 0; // for Rock
                printf("\nYou chose Rock! Wait for the computer's turn...\n");
                computersturn(choice_rock);
                break;
                case 'P': // Human Chose Paper
                int choice_paper = 1;
                printf("\nYou chose Paper! Wait for the computer's turn...\n");
                computersturn(choice_paper);
                break;
                case 'S': // Human Chose Scissors
                int choice_scissor = 2;
                printf("\nYou chose Rock! Wait for the computer's turn...\n");
                computersturn(choice_scissor);
                break;

                case '*': // Return to main menu
                game();
                break;

                default:
                printf("\n ENTER CORRECT CHOICE \n");
            }
            return humansChoice;
}