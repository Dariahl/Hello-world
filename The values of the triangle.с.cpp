//Switch-Case. ���� ������������ ����������� ��������� � ���������� ����������: 
//1 - ����� a, 2 - ��������� b, 3 - ������ h, �� �������� � ������� ����, 4 - ����� S. �������� ��������, ���:
//- ������ � ��������� ����� ��������� ��������;
//- ������ � ��������� �������� ��������� ��������;
//- �� ����� ��������� �������� - ��������� �������� ��� ����� �������� ����������.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float S = 0;    // �����
	float a = 0;    // ������
	float b = 0;    // ���������
	float h = 0;    // ������
    int item_number = 0; // �����  ��������

	
	printf("Select an item 1 - a; 2 - b; 3 - h; 4 - S; = ");
	scanf("%i", &item_number);
	
	switch(item_number) 
	{
		case 1:             
		{
		        printf("\nEnter the value of the element a: ");
		        scanf("%f", &a); 
		        
		        b = sqrtf(a*a + a*a);                              // ���������
			    h = a*a/b;                                        // ������ 
			    S = b*h/2;                                       // ����� 
			    
			    printf("\nb = %g; \nS = %g; \nh = %g;", b , S , h);	
				break;
		}
		case 2: 
		{
		        printf("\nEnter the value of the element b: ");
		        scanf("%f", &b); 
				
				a = sqrtf(b*b/2);                              // ������
				h = a*a/b;                                    // ������
				S = b*h/2;                                   //  �����
				
				printf("\na = %g; \nS = %g; \nh = %g;", a , S , h);	
				break;
		}
		case 3: 
		{
		        printf("\nEnter the value of the element h: ");
		        scanf("%f", &h); 
				
				b = h;                                     //  ���������
				a = sqrtf(b*b/2);                         //  ������ 
				S = b*h/2;                               // ����� 
				
				printf("\na = %g; \nS = %g; \nh = %g;", b , a , S);
				break;
		}
		case 4: 
		{
		        printf("\nEnter the value of the element S: ");
		        scanf("%f", &S);
				
				a = sqrtf(S*2);                         //������
				b = sqrtf(a*a + a*a);                   // ���������
				h = a*a/b;                              //������
				S = b*h/2;
				
				printf("\na = %g; \nS = %g; \nh = %g;", a , b , h);
				break;
		}
		default: printf("Not found");
	}
}





























