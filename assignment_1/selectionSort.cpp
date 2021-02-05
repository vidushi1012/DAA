#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 3  
#define M 3  

void selectionSort(int mat[N][M], int row, int col)
{
	int size=row*col;
	for(int i=0;i<size-1;i++)
	{
		int min = i;
        for(int j=i+1;j<size;j++)
        {
            if(mat[j/col][j%col]<mat[min/col][min%col])
            {
                min = j;
            }
        }
        int temp = mat[i/col][i%col];
        mat[i/col][i%col] = mat[min/col][min%col];
        mat[min/col][min%col] = temp;
	}
}




void printMat(int mat[N][M], int row, int col) 
{ 
    for (int i = 0; i < row; i++)  
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << mat[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 

int main()
{
	int mat[N][M] = { { 6, 8, 16 },  
                        { 23, 3, 7 }, 
                        { 2, 41, 5 } }; 
        int row =N;
        int col=M;
        selectionSort(mat,row,col);
        printMat(mat, row, col); 
}
