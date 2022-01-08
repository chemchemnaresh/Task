/* C program to encrypt and decrypt a string */

#include <stdio.h>

/* main program */
int main()
{
	int i, x;
	char str[100];  /* size of array */

	printf("\nPlease enter a string:\t");  /* enter the string in user */
	gets(str);


	printf("\nPlease choose following options:\n");
	printf("1 = Encrypt the string.\n");  /* encrypt */
	printf("2 = Decrypt the string.\n");  /* decrypt*/
	scanf("%d", &x);


	/* using switch case statements */
	switch(x)
	{
		case 1:
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
				str[i] = str[i] + 4; /* the key for encryption is 4 that is added to ASCII value */

		
			printf("\nEncrypted string: %s\n", str);
			break;

		
		case 2:
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
				str[i] = str[i] - 4; /* the key for encryption is 4 that is subtracted to ASCII value */
			printf("\nDecrypted string: %s\n", str);
			break;

		
		default:
			printf("\nError\n");
	}
	return 0;
}
