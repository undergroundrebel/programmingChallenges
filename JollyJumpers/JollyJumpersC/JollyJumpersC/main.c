#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 3000

void printJolly(int amI);

main()
{
	//
	// Dave:  The Abs array can be of type bool -- it might also be better named since it has the same name as the abs function
	// Michelle: done
	//
	int numInts = 0, i = 0, intA = 0, intB = 0, jollyNotJolly = 0;
	bool AbsValue[MAXSIZE] = { 0 };

	while (scanf_s("%d", &numInts) == 1) //while not end of file
		{		
			if (numInts > 3000 || numInts < 0 || numInts == 0 )
			{
				while ((i = getchar()) != '\n') 
				{
					jollyNotJolly = 0;
				}
			}
			else 
			{
				for (i = 0; i < numInts; i++)
				{
					scanf_s("%d", &intA);
					if (i != 0)
					{
						AbsValue[abs(intA - intB)] = 1;
					}
					intB = intA;
				}
				//
				// Dave:  This might be cleaner with the test of Abs[i] in the conditional of the for loop and then check to see if 
				//        i equals n after the loop to determine Jolly.
				// Michelle: not understanding what you are suggesting. 
				//
				jollyNotJolly = 1;
				for (i = 1; i < numInts; i++)
				{
					if (!AbsValue[i])
					{
						jollyNotJolly = 0;
						break;
					}
				}
			
			}
			printJolly(jollyNotJolly);
	}
}

void printJolly(int amI)
{
	if (amI)
	{
		printf("Jolly\n");
	}
	else
	{
		printf("Not jolly\n");
	}
}
