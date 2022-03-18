#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char *s1Ptr;
    size_t len;
    size_t j;//Introduce memcopy and do away with this variable

    len = 1;
    j = 0;
    while(s1[len])
        {++len;}

    if(!s1)
        return (NULL);
        
    s1Ptr = malloc(sizeof(char) * len);
    if(!s1Ptr)
        return (NULL);
        
    while (s1[j])
    {
        s1Ptr[j] =  s1[j];
         ++j;
    }
        s1Ptr[j] = '\0';
        return s1Ptr;
    
}

 int main(void)
{

   char s1[20] = "Hello my ";
   char s2[20] = "Hello"; 

   char *ptrA;
   char *ptrB;
  

   ptrA = strdup(s1);
   printf("The value of original func = %s\n",ptrA );
   
    ptrB = ft_strdup(s1);
    printf("The value of MY func = %s\n", ptrB);
}