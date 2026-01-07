#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	
	srand(time(NULL));
	int myrand = rand() % 11;

	if (myrand <= 4)
		printf("Eat more beef, kick less cats");
	else if (myrand != 10)
		printf("FRODO LIVES");
	else
		printf("Larn is the best roguelike");
	printf("\n");

	printf("The random number was: %d\n", myrand);

	return 0;
	
}
