//Switch-Case. Маємо рівнобедрений прямокутний трикутник з наступними елементами: 
//1 - катет a, 2 - гіпотенуза b, 3 - висота h, що виходить з прямого кута, 4 - площа S. Написати програму, яка:
//- приймає з клавіатури номер потрібного елемента;
//- приймає з клавіатури значення потрібного елемента;
//- на основі введеного значення - розраховує значення всіх інших елементів трикутника.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float S = 0;    // площа
	float a = 0;    // катети
	float b = 0;    // гіпотенуза
	float h = 0;    // висота
    int item_number = 0; // номер  елемента

	
	printf("Select an item 1 - a; 2 - b; 3 - h; 4 - S; = ");
	scanf("%i", &item_number);
	
	switch(item_number) 
	{
		case 1:             
		{
		        printf("\nEnter the value of the element a: ");
		        scanf("%f", &a); 
		        
		        b = sqrtf(a*a + a*a);                              // гіпотенуза
			    h = a*a/b;                                        // висота 
			    S = b*h/2;                                       // площа 
			    
			    printf("\nb = %g; \nS = %g; \nh = %g;", b , S , h);	
				break;
		}
		case 2: 
		{
		        printf("\nEnter the value of the element b: ");
		        scanf("%f", &b); 
				
				a = sqrtf(b*b/2);                              // катети
				h = a*a/b;                                    // висота
				S = b*h/2;                                   //  площа
				
				printf("\na = %g; \nS = %g; \nh = %g;", a , S , h);	
				break;
		}
		case 3: 
		{
		        printf("\nEnter the value of the element h: ");
		        scanf("%f", &h); 
				
				b = h;                                     //  гіпотенуза
				a = sqrtf(b*b/2);                         //  катети 
				S = b*h/2;                               // площа 
				
				printf("\na = %g; \nS = %g; \nh = %g;", b , a , S);
				break;
		}
		case 4: 
		{
		        printf("\nEnter the value of the element S: ");
		        scanf("%f", &S);
				
				a = sqrtf(S*2);                         //катети
				b = sqrtf(a*a + a*a);                   // гіпотенуза
				h = a*a/b;                              //висота
				S = b*h/2;
				
				printf("\na = %g; \nS = %g; \nh = %g;", a , b , h);
				break;
		}
		default: printf("Not found");
	}
}





























