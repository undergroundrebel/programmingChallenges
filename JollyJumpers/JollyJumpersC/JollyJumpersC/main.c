#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 3000
main()
{
	//
	// Dave:  The Abs array can be of type bool -- it might also be better named since it has the same name as the abs function
	// Michelle: done
	//
	int numInts, i, a, Var[MAXSIZE];
	bool AbsValue[MAXSIZE] = { 0 };

	while (scanf("%d", &numInts) == 1) {				//while not end of file
		//
		// Dave:  You shouldn't need a pass to read in the numbers and a second pass to calculate the difference.
		//        Reading in the values and calculating the difference can be done in one pass.
		// Michelle: Will fix in the c++ & C# versions.
		//
		for (i = 0; i < numInts; i++)					// for the number of items on the line
		{
			scanf("%d", &Var[i]);				//shove that number into the variable array
			AbsValue[i] = 0;							//set the memory for it in the absolute array to 0 - no one likes bad memory bits
		}
		for (i = 0; i < (numInts - 1); i++) {
			AbsValue[abs(Var[i] - Var[i + 1])] = 1;	// loop through the var array, store a 1 at the location of the absolute difference between the values
		}

		//
		// Dave:  This might be cleaner with the test of Abs[i] in the conditional of the for loop and then check to see if 
		//        i equals n after the loop to determine Jolly.
		// Michelle: not understanding what you are suggesting. 
		//
		a = 1;
		for (i = 1; i < numInts; i++) {
			if (!AbsValue[i])
			{
				a = 0;
				break;
			}
		}
		if (a)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
}
