Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka
#include <stdio.h>
int main() 
{
  int c , count = 0;
  char s[1000];
                      //Declare the string
printf("Enter a String: ");
scanf("%s", s);

for(c=0;c<500;c++)
{
    if(s[c]=='i')
    {
      count++;
    }
  }

  printf("Number of vowels in the string");
                      //read the string from user
                      //Print the string
return 0;
}
