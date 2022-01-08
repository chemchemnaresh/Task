/** C program to calculate the median first half of the array is assending order  second half of the array is desending     order */


#include<stdio.h>
#include<stdlib.h>

/* main program */
int main ()
{
	/* Declare the local variables */
	int i = 0, temp, len, arr[50];

	printf ("Enter the length of the array : "); /* lenngth of array from the user */
	scanf ("%d", &len);
	printf ("Enter the element of the array : ");


	for (i = 0; i < len; i++)\
	{
		scanf ("%d", &arr[i]);
	}


	for (i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			/* sorting the array*/
			if(arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	

	      
       	/* printing first half of the array is assending order */


	printf ("Sorted Array ");

	for (i = 0; i < len / 2; i++)
	{
		printf ("%d ", arr[i]);
	}

			        
	/* printing second half of the array is desending order*/
	for (i = len - 1; i >= len / 2; i--)
	{
		printf ("%d ", arr[i]); /* print the array of elements */
	}
}


