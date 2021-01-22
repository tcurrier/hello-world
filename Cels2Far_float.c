# include <stdio.h>

/* The following program prints creates and prints a table of values for converting celcius to fahr */

int main()

{

	float fahr, celsius;
        int lower, upper, step;

	lower = -20;     /* lower limit of temperature table */
        upper = 150;   /* upper limit of temperature table*/
	 step = 10;    /* increment between values*/

	celsius = lower;
	
	/* Column titles*/
	printf("\tCelsius\tFahr\n");

	while (celsius <= upper){

		fahr = (9.0/5.0)*(celsius)+32;
		printf("\t%3.0f\t%6.1f \n",celsius,fahr);
		celsius=celsius+step;	

	}
	 	

}	

