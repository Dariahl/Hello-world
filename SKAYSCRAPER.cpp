#include <stdio.h>
#include <stdlib.h>

#define N 5 

main()
{
	int M = 0;         // ����� ��������, ��� ���� ������� � ���������
	int floor = 0;    //����� �������
	int X;	
	
	printf("Enter the apartment(1 ... 15): ");
	scanf("%i", &M);             // ������� ����� ������� ��������
	printf("Enter the floor(1 ... 5): ");
	scanf("%i", &floor);         // ������� ����� �������, �� ����� ��� �������
	
	if(M > 15 || M < 1) printf("There is no such apartment\n");  //�������� �� �������� ��������
	if(floor == 0 || floor > 6) printf("there is no such floor\n"); //�������� �� �������� �������
	
	X = M - 1;
	X = M % 15;             
	X = M / 3;                     //  � ���������� � � ������ ������ ������� ����� �����, �� ������� ��������� ��������
	X++;
	   if(X % 2 != 0)                      // ���� �� ������ ������, �� ��� ���� ����� ����
	      printf("Your floor (add): %i", X);   //�������� ������
	
       else if(X % 2 == 0)                             // ���� ������, ������� ��������� � ����� ������� �������� ���
         {
		  if(floor > X)
             printf("Your floor (even): %i", X + 1);   //��������� ���������� �������� 
          if(floor < X)
             printf("Your floor (even): %i", X - 1);
	   }
}

