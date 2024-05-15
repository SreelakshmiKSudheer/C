#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[20],Player_1[20],Player_2[20],Toss_1,Toss_2,choice_1,choice_2;
int t,p1 = 0,p2 = 0,i,j,choice_valid;
char ch;
void string()								// function to input string
{
	scanf(" %[^\n]",str);
}

int toss()										// Toss idal
{
	printf("\nHead or Tail(h/t): ");
	
	printf("\nPlayer 1, Enter your choice: ");
	scanf(" %c",&Toss_1);
	printf("\nPlayer 2, Enter your choice: ");
	scanf(" %c",&Toss_2);
	
	switch(Toss_1)
	{
		case 'h':
		case 'H': t = 1;
				break;
		case 't':
		case 'T': t = 0;
				break;
		default: printf("Invalid input!");
				toss();
			
	}
		
	toss_decision();
	
	return 0;
}

int toss_decision()								// toss decision: who will play first
{
	int toss_dec_int = (rand()%2);				// rand()%n chooses a number from 0 to n randomly, excluding n
	printf("%d\n",toss_dec_int);
	if(t == toss_dec_int)
		t = 1;		
	else
		t = 2;
	
	return t;
}

char choice()						//r/p/s selection
{
	
	ch = getch();
	
	char C[] = {'r','R','p','P','s','S'};
	for(j = 0;j < 6; j++)
	{
		choice_valid = 0;
		if(ch == C[j])
		{
			choice_valid = 1;
			break;
		}		
	}
	if(choice_valid == 0)
	{
		printf("Invalid Choice!\nEnter Again: ");
		choice();
	}
	
	return ch;
}

int main()
{
	
		//Initialization GAME :)
	char players[2][50];
		
	printf("Player 1: ");
	string();
	strcpy(players[0],str);					// gets player 1 name
	
	printf("Player 2: ");
	string();
	strcpy(players[1],str);

	sleep(1);
	printf("Players are:\nPlayer 1: %sPlayer 2: %s\n",players[0],players[1]);
	
	printf("How the game works?\n\t1. 5 plays.\n\t2. Scores will be displyed after each play.\n\t3. Player with high score will be the winner.");
	sleep(1);
	printf("\nHow the scores are awarded?\n\t2 pts : Win\n\t1 pts : Draw\n\t0 pts : Loss");
	sleep(1);
	toss();

	int PF = toss_decision();					// toss is random. The one whose choice matches the toss will play first		
											
	if(PF == 1)										// allotes first and second players
	{
		strcpy(Player_1,players[0]);
		strcpy(Player_2,players[1]);
	}
	else
	{
		strcpy(Player_1,players[1]);
		strcpy(Player_2,players[0]);
	}	
	printf("\n%s will play first",Player_1);

	for(i = 0;i < 5;i++)							// rps
	{
		printf("\nRock Paper Scissor");
		
		printf("\n%s, enter (r/p/s): ",Player_1);
		choice_1 = choice();
		
		printf("\n%s, enter (r/p/s): ",Player_2);
		choice_2 = choice();
		
		switch(choice_1)							// first players choice is checked against second players and computes score
		{
			case 'r':
			case 'R': if(choice_2 == 'r' || choice_2 == 'R')
						{
							p1 += 1;
							p2 += 1;		
						}
					
					else if(choice_2 == 'p' || choice_2 == 'P')
						{
							p1 += 0;
							p2 += 2;
						}
					else if(choice_2 == 's' || choice_2 == 'S')
						{
							p1 += 2;
							p2 += 0;
						}
					break;
			case 'p':
			case 'P': if(choice_2 == 'r' || choice_2 == 'R')
						{
							p1 += 2;
							p2 += 0;		
						}
						else if(choice_2 == 'p' || choice_2 == 'P')
						{
							p1 += 1;
							p2 += 1;
						}
						else if(choice_2 == 's' || choice_2 == 'S')
						{
							p1 += 0;
							p2 += 2;
						}
					break;
			case 's':
			case 'S': if(choice_2 == 'r' || choice_2 == 'R')
						{
							p1 += 0;
							p2 += 2;		
						}
						else if(choice_2 == 'p' || choice_2 == 'P')
						{
							p1 += 2;
							p2 += 0;
						}
						else if(choice_2 == 's' || choice_2 == 'S')
						{
							p1 += 1;
							p2 += 1;
						}
					break;
		
		}
		printf("Score: \n%s: %d\n%s: %d\n",Player_1,p1,Player_2,p2);
	}
		
	
		if(p1 == p2)								// Winner
			printf("DRAW");			
		else if(p1 > p2)
			printf("%s WINs",Player_1);
		else
			printf("%s WINs",Player_2);
		
	}
	
	

