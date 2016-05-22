// JollyJumpersCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 3000
using namespace std;


int main()
{
	int numInts = 0, state =1, intA, intB, intC, var[MAXSIZE] = { 0 };
	bool absVal[MAXSIZE] = { 0 };	
	string jolly = "Jolly"; 
	string notJolly = "Not Jolly";
	while (cin) {
		cin >> numInts;
		long long i = 0;
			while (i < numInts)
			{
				cin >> var[i];
				i++;
			}
			for (int i = 0; i < numInts; i++) {
				absVal[abs(var[i] - var[i + 1])] = 1;
			}

			/*	while (i < numInts) {
					cin >> intA;
					i++;
					if (i < numInts) {
						cin >> intB;
						intC = abs(intA - intB);
						absVal[intC] = 1;
					}
				}*/
			state = 1;
			for (i = 1; i < (numInts); i++) {
				if (!absVal[i])
				{
					state = 0;
					break;

				}

			}
			if (state)
				cout << jolly << endl;
			else
				cout << notJolly << endl;
		}


	
	return 0;
}
 
