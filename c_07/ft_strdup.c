#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(char *src){
    int i;
    i = 0;
    int j;
    j = 0;

while(src[i])
    i++;

char *outp = malloc(sizeof(char) * i+1); 
if(outp == NULL)  
    return NULL;  

while(j<i){
    outp[j] = src[j];
    j++;
}
outp[j] = '\0';
return outp;
}


// int main(void){
//     char *src = "test";
//     char *dup = ft_strdup(src);
//     printf("%s\n", dup);
  
//     return 0;
// }