#include <stdio.h> 
void main()
{
char s[80];
int i, vowels = 0, consonants = 0, special = 0; 
printf("Enter a sentence \n");
gets(s);
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u') ||(s[i] == 'A' || s[i] == 'E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U'))
{
vowels = vowels + 1;
}
else
{
consonants = consonants + 1;
}
if (s[i] =='\t' ||s[i] =='\0' || s[i] ==' ')
{
special = special + 1;
}
}
consonants = consonants - special;
printf("No. of vowels in %s = %d\n", s, vowels);
printf("No. of consonants in %s = %d\n", s, consonants);
}