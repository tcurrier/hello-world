# include <stdio.h>

/* The following program prints creates and prints a table of values for converting fahr=0.20,...,300 */

int main()

{

	int fahr;
        int lower, upper, step;

	#define LOWER   300     /* lower limit of temperature table */
        #define UPPER     0     /* upper limit of temperature table*/
	#define STEP    -20     /* increment between values*/


	/* Column titles*/
	printf("\tFahr\tCelsius\n");

	for (fahr = LOWER; fahr >= UPPER; fahr=fahr+STEP){

		printf("\t%3d\t%6.1f \n",fahr,(5.0/9.0)*(fahr-32));
			

	}
	 	

}	

