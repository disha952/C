#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void qui ();
void pass();
void pass1();
void shoot();
void cross();
int pac;
int main ()
{   
	char s[100];
	printf("\t \t \tWELCOME\n");
	printf("+               RULES FOR PLAYING HAND FOOTBALL               +\n");
	printf("1. The player must first pass, cross and then shoot the ball for scoring a goal\n");
	printf("2. For passing, the player must put any number from 1 to 3, three times\n");
	printf("3. For crossing, the player must either put 4 to 6, one time\n");
	printf("4. For scoring a goal, the player must either put 7 or 8, one time\n"); 
	printf(" computer and vice-versa\n");
	printf("6. After the goal is scored by anyone, the ball will be automatically given to the opponent\n");
	printf("7. If the player puts the wrong number while passing, crossing or shooting, penalty will be given to the opponent\n");
	printf("8. In case of a penalty, the player must put 9 or 10 to score a goal\n");
	printf("9. Whoever scores the first goal will be the winner\n");
	printf("IF YOU WANT TO QUIT AT ANY TIME IN THE GAME, TYPE '111'\n");
	printf("NOTE:- (pa)=pass\n");
	printf("       (c) =cross\n");
	printf("       (s) =shoot\n");
	printf("       (pe)=penalty\n");
	printf("****\n");
	printf("ALL THE BEST!!!!!\n");
	printf("****\n");
	printf("===============================================================================\n");
	printf("LET'S START THE GAME\n");
	printf("Type 'START' to play the game\n");
	scanf("%s",s);
	strlwr(s);
	int i=strcmp(s,"start");
	if (i==0)
		pass();
	else
		puts("Invalid Option!!!!!!\n");
}
void qui()
{
                printf("Enter 1 to PLAY AGAIN\n");
                printf("Enter 2 to QUIT\n");
                int n3;
				scanf("%d",&n3);
                if (n3==1)
					pass();
				else if (n3==2)
				{
					printf("Thanks for playing\n BYE BYE!!!!!!!!\n GOOD DAY!!!! XD");
					exit(0);
				}
				else
				{
					puts("Entered wrong input\n Please try again.\n");
					qui();
				}
 }
void penalty()
    {
        
        printf("***********\n");
        printf("(pe)Enter your number: ");
        int np;
		scanf("%d",&np);
        if(np==111)
			qui();
        int nc=rand();
        if(nc<9 || nc>10)
        {
            if(nc==0 || nc%2==0)
                nc=9;
            else nc=10;
        }
        printf("(pe) Computer's number: %d\n",nc);
        if(np!=nc)
        {
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("======================================\n");
            printf("♦      OOOOOOPPPPPPPSSS!!!!!       ♦\n");
            printf("The computer has scored a goal!!!!!!!\n");
            printf("You have lost the match\n");
            printf("BETTER LUCK NEXT TIME\n");
            printf("======================================\n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("______________________\n");
			qui();
        }
        else
        {
            printf("******************\n");
            printf("The computer has lost the ball\n");
            printf("Now you have the ball\n");
            pass();
        }
    }


void pass()
{
	pac=0;
	for(int i=1;i<=3;i++)
	{ 
		printf(".%d (Pa)Enter your number: ",i);
		int np;
		scanf("%d",&np);
		if(np==111)
			qui();
		else if(np<1 || np>3)
        {
            printf("You have entered the wrong number\n");
            printf("The computer gets a penalty\n");
            penalty();
        }

        int nc=rand();
        if(nc<1 || nc>3)
        {
            if(nc==0)
                nc=1;
            else if(nc%2==0)
                nc=3;
            else nc=2;
        }
        printf("(Pa)Computer's number: %d\n",nc);
        printf("******************\n");
        if(np==nc)
        {
            pass1();
        }
    }
    printf("You have successfully finished passing\n");
    printf("Now it is time for you to give a cross\n");
	cross();
	
}
void pass1()
{
	
	pac=0;
	printf("You have lost the ball\n");
	printf("Now the computer has the ball\n");
	for(int i1=1;i1<=3;i1++,pac++)
	{
		printf(".%d (Pa)Enter your number: ",i1);
		int np;
		scanf("%d",&np);
		if(np==111)
			qui();
		else if(np<1 || np>3)
		{
			printf("You have entered the wrong number\n");
			printf("The computer gets a penalty\n");
			penalty();
		}

		int nc=rand();
		if(nc<1 || nc>3)
		{
			if(nc==0)
				nc=1;
			else if(nc%2==0)
				nc=3;
			else 
				nc=2;
        }
		printf("(Pa)Computer's number: %d\n",nc);
		printf("******************\n");
		if(nc==np)
		{
			printf("The computer has lost the ball\n");
			printf("Now you have the ball\n");
			pass();
		}
	}
	printf("The computer has successfully finished passing\n");
	printf("Now it is time for the computer to give a cross\n");
    cross();
}

void cross()
{
	if (pac==3)
	{
            printf("1. (c) Enter your number: ");
            int np;
			scanf("%d",&np);
            if(np==111)
				qui();
            
            else if(np<4 || np>6)
            {
                printf("You have entered the wrong number\n");
			printf("The computer gets a penalty\n");
			penalty();
            }

            int nc=rand();
            if(nc<4 || nc>6)
            {
                if(nc==0)
				nc=4;
			else if(nc%2==0)
				nc=5;
			else 
				nc=6;
            }
            printf("(Pa)Computer's number: %d\n",nc);
		printf("******************\n");
		if(nc==np)
            {
                printf("The computer has lost the ball\n");
			printf("Now you have the ball\n");
			pass();
            }
            printf("The computer has successfully finished crossing\n");
            printf("Now it is time for it to score a goal\n");            
            shoot();
        }
    else 
        {
            pac=0;
            printf("1. (c) Enter your number: ");
            int np;
			scanf("%d",&np);
            if(np==111)
				qui();
            
            else if(np<4 || np>6)
            {
                printf("You have entered the wrong number\n");
			printf("The computer gets a penalty\n");
			penalty();
            }

            int nc=rand();
            if(nc<4 || nc>6)
            {
                if(nc==0)
				nc=4;
			else if(nc%2==0)
				nc=5;
			else 
				nc=6;
            }
            printf("(Pa)Computer's number: %d\n",nc);
        printf("******************\n");
        if(np==nc)
        {
            pass1();
        }
            printf("You have successfully completed crossing\n");
            printf("Now it is time for you to go for a shoot\n");
            shoot();
        }
}

void shoot()
{
	
        if(pac==3)
        {
            printf("1. (c) Enter your number: ");
            int np;
			scanf("%d",&np);
            if(np==111)
				qui();
            
            else if(np<7 || np>8)
            {
                printf("You have entered the wrong number\n");
			printf("The computer gets a penalty\n");
			penalty();
            }

            int nc=rand();
            if(nc<7 || nc>8)
            {
                if(nc%2==0)
				nc=7;
			else 
				nc=8;
            }
            printf("(Pa)Computer's number: %d\n",nc);
		printf("******************\n");
		if(nc==np)
            {
                printf("The computer has lost the ball\n");
			printf("Now you have the ball\n");
			pass();
            }
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("======================================\n");
            printf("☻      OOOOOOPPPPPPPSSS!!!!!       ☻\n");
            printf("The computer has scored a goal!!!!!!!\n");
            printf("You have lost the match\n");
            printf("BETTER LUCK NEXT TIME\n");
            printf("======================================\n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("______________________\n");
            qui();
        }
        else 
        {
            pac=0;
            printf("1. (c) Enter your number: ");
            int np;
			scanf("%d",&np);
            if(np==111)
				qui();
            
            else if(np<7 || np>8)
            {
                printf("You have entered the wrong number\n");
			printf("The computer gets a penalty\n");
			penalty();
            }

            int nc=rand();
            if(nc<7 || nc>8)
            {
                if(nc%2==0)
					nc=7;
				else 
					nc=8;
            }
            printf("(Pa)Computer's number: %d\n",nc);
        printf("******************\n");
        if(np==nc)
        {
            pass1();
        }

            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("======================================\n");
            printf("☺          GOAL!!!!!         ☺\n");
            printf("You have scored a goal!!!!!!!\n");
            printf("You have defeated the mighty computer\n");
            printf("CONGRATULATIONS!!!!!!!\n");
            printf("======================================\n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("______________________\n");
            qui();
        }
    }