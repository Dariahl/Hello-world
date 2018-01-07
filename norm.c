//1. ���� ��� �������� ������� A, B, C ��������� N x N. �������� ��������, ���:
//- ������� "�����" ����� ������� (����������� �� ������� �������� ����� �� ��������);
//- �������� �� ����� ������� �����, � ����� �������, ����� ��� ��������.
//�������:
//�) ����� ������� ���������� �������� ����� ������� ���������.
//�) ������ 䳿 ���������� � ������ ������� �������.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
void RAND(int a[N][N]);                //�������� �������� ������� �� -100 �� 100
void ANALYSIS(int arr[N][N], int *norm);  //������� ����� �������
void MIN_RATE(int *norm1, int *norm2, int *norm3,  
                int arrA[N][N], int arrB[N][N], int arrC[N][N]);   //��������� �������� ����� �� �������� �� ������� �� �����
main()
{
	int A[N][N]; 
	int B[N][N]; 
	int C[N][N]; 
	
	srand ( time (NULL) );             //��� ��������� ���������� �������
	
	int normA = 0, normB = 0, normC = 0;    //����� �������
	
	RAND(A);		
	RAND(B);
	RAND(C);
	
	ANALYSIS(A, &normA);
	ANALYSIS(B, &normB);      
	ANALYSIS(C, &normC);
	
    printf ("norm_A = %i\n", normA);   //���� �� ����� ���� �������
	printf ("norm_B = %i\n", normB);
	printf ("norm_C = %i\n", normC);
	
	printf("\nMin Matrix:\n");         // ���� �� ����� ������� � ��������� ������
    MIN_RATE(&normA, &normB, &normC, A, B, C);
}

void RAND(int arr[N][N])
{
	int i,j;
		
	for(i = 0; i < N; i++)
	   for(j = 0; j < N; j++)
	       arr[i][j] = 1 + rand() % 200 - 100;
}
void ANALYSIS(int arr[N][N], int *norm)
{
	*norm = arr[0][0];
	int i, j;
	
	for(i = 0; i < N; i++){
	   for(j = 0; j < N; j++){
	       if(abs(arr[i][j]) > *norm) *norm = abs(arr[i][j]);
       }
    }
}
void MIN_RATE(int *norm1, int *norm2, int *norm3, 
                int arrA[N][N], int arrB[N][N], int arrC[N][N])
{
	 int i, j;
	 
     if(*norm1 < *norm2 && *norm1 < *norm3)
        {   
        	for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                   printf("%4i ", arrA[i][j]);
                }
           printf("\n");
            }
		}
     
     else if(*norm2 < *norm1 && *norm2 < *norm3)
        {
        	for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                   printf("%4i ", arrB[i][j]);
                }
           printf("\n");
            }
		}
		
    else if(*norm3 < *norm1 && *norm3 < *norm2)
        {
        	for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                   printf("%4i ", arrC[i][j]);
                }
           printf("\n");
            }
		}
	
}
