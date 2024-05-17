#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct FlightInfo {

	char* destination;
	char* date;
};

int main(void) {

	int numberOfPairs = 10;
	int maxNumberOfCharacters = 30; 
	int i = 0; 
	char nameOfTheDestination[numberOfPairs][maxNumberOfCharacters];
	char dateOfFlight[numberOfPairs][maxNumberOfCharacters];

	for (i = 0; i < numberOfPairs; i++) {
		printf("Please enter the name of the destination: ");
		fgets(nameOfTheDestination[i], maxNumberOfCharacters, stdin);
		printf("\nPlease enter the date of your flight(DD/MM/YYYY): ");
		fgets(dateOfFlight[i], maxNumberOfCharacters, stdin);
	}

	return 0;
}