#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Program checks the type of a credit card based
// on it's number specified in the input

// Checks the length of the user specified card number
int cardEval(long cardNo){
	int counter = 0;
	while(cardNo > 0){
		cardNo /= 10;
		counter++;
	}	
 	return counter;	
}

// Takes the previously checked length and checks 
// given digits pointing to card types. Final check.
void cardCheck(int counter, long cardNo){
	long ameriMasterDivisor = pow(10, counter - 2);
	long visaDivisor = pow(10, counter - 1);

	long amResult = cardNo / ameriMasterDivisor;
	long visaResult = cardNo / visaDivisor;

	if(counter == 15 && ((amResult) == 34 || (amResult) == 37)){ 
		printf("AMEX\n");
	}
	else if(counter == 16 && (amResult == 51 || amResult == 52 || amResult == 53 || amResult == 54 || amResult == 55)){
		printf("MASTERCARD\n");
	}
	else if((counter == 16 || counter == 13) && visaResult == 4){
		printf("VISA\n");
	}
	else {
		printf("INVALID\n");
	}
}

int main(void){
	long cardNo = get_long("Number: ");
	long counter = cardEval(cardNo);
	cardCheck(counter, cardNo);
}
