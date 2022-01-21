#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int Count = 0, Count2 = 0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);
    p = str;
    while (*p != '\0')
    {
        if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
        {
            if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            {
                Count++;
            }
            else
            {
                Count2++;
            }
        }
        p++;
    }

printf("Number of Vowels in String: %d\n", Count);
printf("Number of Consonants in String: %d", Count2);
return 0;
}