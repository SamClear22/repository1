#include <stdio.h>
#include<stdlib.h>
///Samuel De Santiago//

void bubbleSort(int pData[], int n)
{
	int i, j, temp;
	int count = 0;
	int swaps;
	for(i = 0; i < n-1; i++)
	{
		count = i+1;
		swaps = 0;
		for(j = 0; j < n-i-1; j++)
		{
			if(pData[j] > pData[j+1])
			{
				temp = pData[j];
				pData[j] = pData[j+1];
				pData[j+1] = temp;
				swaps++;
				//printf("%d\n", swaps);//
			} else
				continue;
		}
		printf("Pass # %d: %d\n", count, swaps);
	}
}

int main()
{
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;

	bubbleSort(arr, n);

	return 0;	
}