#include <stdio.h>
#include <stdlib.h>

#define N 5 

main()
{
	int M = 0;         // номер квартири, яка буде введена з клавіатури
	int floor = 0;    //номер поверха
	int X;	
	
	printf("Enter the apartment(1 ... 15): ");
	scanf("%i", &M);             // Вводимо номер потрібної квартири
	printf("Enter the floor(1 ... 5): ");
	scanf("%i", &floor);         // Вводимо номер поверху, на якому сідає пасажир
	
	if(M > 15 || M < 1) printf("There is no such apartment\n");  //перевірка на наявність квартири
	if(floor == 0 || floor > 6) printf("there is no such floor\n"); //перевірка на наявність поверха
	
	X = M - 1;
	X = M % 15;             
	X = M / 3;                     //  в переменную Х в данном случае выходит номер этажа, на котором находится квартира
	X++;
	   if(X % 2 != 0)                      // якщо не парний поверх, то ліфт поїде прямо туда
	      printf("Your floor (add): %i", X);   //потрібний поверх
	
       else if(X % 2 == 0)                             // якщо парний, потрібно визначити з якого поверху рухається ліфт
         {
		  if(floor > X)
             printf("Your floor (even): %i", X + 1);   //знаходимо найближчий непорний 
          if(floor < X)
             printf("Your floor (even): %i", X - 1);
	   }
}

