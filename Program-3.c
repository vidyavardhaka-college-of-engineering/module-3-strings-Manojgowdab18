// Fill in the missing code in the below sample code which concatenates two given strings and store the result in another string.
//Instructions:-
// 1)Read two strings from the standard input device and write a loop to copy each character of the first string into third string till the end of the first string.
// 2)Write another loop to copy each character of the second string into third string till the end of second string.
// 3)Now place '\0' at the end of the third string.
// 4)Finally, display the third string.

//Expected input & output:-
//Enter the first string: Nithin
//Enter the second string:  kumar
//The concatenated  string = Nithinkumar

#include <stdio.h>
int main() {
	char a[20], b[20], c[20];
	int i, j;
	printf("Enter the first string : ");
	scanf("%s", a);
	printf("Enter the second string : ");
	scanf("%s", b);
	for (i=0;a[i] != '\0'; i++ )
  {
    c[i] = a[i];
  }
  for(j=0;b[j] != '\0';j++)
  {
    c[i]=b[j];
    i++;
  }
  c[i]= '\0';
  printf("The concatenated string = %s\n" ,c);
  return 0;
}