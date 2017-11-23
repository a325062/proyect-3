#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int diasem, diames, mes, year;
	
	printf("\nNumero del dia de la semana");
	scanf ("%i", &diasem);
	
	printf("\nNumero del dia en el mes");
	scanf ("%i", &diames);
	
	printf("\Dime el numero de mes");
	scanf ("%i", &mes);
	
	printf ("\nDime un aÒo");
	scanf ("%i", &year);

	switch(diasem)
	{
		case 1: printf ("lunes"); break;
		case 2: printf ( "martes"); break;
		case 3: printf ("miercoles"); break;
		case 4: printf ("Jueves"); break;
		case 5: printf ("viernes"); break; 
		case 6: printf ("sabado"); break;
		case 7: printf ("domingo");	break;
   

	}
	
	switch(diames)	
	
	    
	{
	 	   
	}
	
	switch(mes)
	{
	    case 1: printf ("enero"); break;
		case 2: printf ( "febrero"); break;
		case 3: printf ("marzo"); break;
		case 4: printf ("abriel"); break;
		case 5: printf ("mayo"); break; 
		case 6: printf ("junio"); break;
		case 7: printf ("julio");	break; 
		case 8: printf ( "agosto"); break;
		case 9: printf ("septiembre"); break;
		case 10: printf ("octubre"); break;
		case 11: printf ("noviembre"); break; 
		case 12: printf ("diciembre"); break;
	}
	
	if(year=2017);
	printf("2017");
	{
      
	printf(diasem, diames, mes, year);

	
		

	}
	
	return 0;
}

