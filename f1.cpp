#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct FlightInfo {

	char* destination;
	char* date;
};

void fillFlightInfo(*flights, char array1[], char array2[]);

int main(void) {

	int numberOfPairs = 10;
	int maxNumberOfCharacters = 30; 
	int i = 0; 
	char nameOfTheDestination[maxNumberOfCharacters];
	char dateOfFlight[maxNumberOfCharacters];
	struct FlightInfo flights[numberOfPairs];

	for (i = 0; i < numberOfPairs; i++) {
		printf("Please enter the name of the destination: ");
		fgets(nameOfTheDestination, maxNumberOfCharacters, stdin);
		printf("\nPlease enter the date of your flight(DD/MM/YYYY): ");
		fgets(dateOfFlight, maxNumberOfCharacters, stdin);

		fillFlightInfo(&flights[i], nameOfTheDestination, dateOfFlight);
	}

	

	return 0;
}

void fillFlightInfo(*flights, char array1[], char array2[]) {

	flights->destination = malloc((strlen(array1) + 1) * sizeof(char));
	strcpy(flights->destination, array1);

	flights->date = malloc((strlen(array2) + 1) * sizeof(char));
	strcpy(flights->date , array2);
}