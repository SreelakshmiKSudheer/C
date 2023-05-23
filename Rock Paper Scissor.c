#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[20],Player_1[20],Player_2[20],Toss_1,Toss_2,choice_1,choice_2;
int t,p1 = 0,p2 = 0,i,j,choice_valid;
char* string()								// function to input string
{
	
	char* string = fgets(str,20,stdin);		//gets(str); // both works 
	return string;
}

char choice()						//r/p/s selection
{
	char ch;
	scanf("  %c",&ch);
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


int toss_decision()								// toss decision: who will play first
{
	int toss_dec_int = (rand()%2);				// rand()%n chooses a number from 0 to n randomly, excluding n
	if(t == toss_dec_int)
		t = 1;		
	else
		t = 2;
	
	return t;
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



int main()
{
	{												// Initialization GAME :)
		printf("Player 1: ");
	strcpy(Player_1,string());
	//char* Player_1 = string();	// doesn't work
	
	printf("Player 2: ");
	strcpy(Player_2,string());
	//char* Player_2 = string();	// doesn't work
	
	printf("Players are:\nPlayer 1: %sPlayer 2: %s\n",Player_1,Player_2);
	
	printf("How the game works?\n\t1. 5 plays.\n\t2. Scores will be displyed after each play.\n\t3. Player with high score will be the winner.");
	printf("\nHow the scores are awarded?\n\t2 pts : Win\n\t1 pts : Draw\n\t0 pts : Loss");
	toss();
	}
	
	int PF = toss_decision();
	printf("\nPlayer %d will play first",PF);		// Who will play first
	
	int PS = 1;
	if(PF == 1)
		PS = 2;
	
	for(i = 0;i < 5;i++)							// rps
	{
		printf("\nRock Paper Scissor");
		
		printf("\nPlayer %d, enter (r/p/s): ",PF);
		choice_1 = choice();
		
		printf("\nPlayer %d, enter (r/p/s): ",PS);
		choice_2 = choice();
		
		switch(choice_1)							// score
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
		printf("Score: \nPlayer 1: %d\nPlayer 1: %d\n",p1,p2);
	}
		
	
		if(p1 == p2)								// Winner
			printf("DRAW");			
		else if(p1 > p2)
			printf("Player 1 WIns");
		else
			printf("Player 2 WIns");
		
	}
	
	

