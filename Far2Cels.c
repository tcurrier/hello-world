# include <stdio.h>

/* The following program prints creates and prints a table of values for converting fahr=0.20,...,300 */

int main()

{

	int fahr, celsius;
        int lower, upper, step;

	lower = 0;     /* lower limit of temperature table */
        upper = 300;   /* upper limit of temperature table*/
	 step = 20;    /* increment between values*/

	fahr = lower;
	
	/* Column titles*/
	printf("\tGibby\tCelsius\n");

	while (fahr <= upper){

		celsius = 5*(fahr-32)/9;
		printf("\t%d\t%d \n",fahr,celsius);
		fahr=fahr+step;	

	}
	 	

}	

