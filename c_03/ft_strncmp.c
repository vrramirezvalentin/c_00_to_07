// #include <stdio.h>
// #include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    int a;
    a = 0;

    while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
    {
        if(s1[i] == s2[i])
        {
            a = 0;
        }  
        if (s1[i] > s2[i])
        {
            return  s1[i] - s2[i]; 
        }
        if (s1[i] < s2[i])
        {
             return  s1[i] - s2[i];
        }
        i++;
    }
    return a;
}

// int main(int argc, char **argv)
// {
//     if(argc != 3)
//     {
//         return 0;
//     }
//     char *s1 = argv[1];
//     char *s2 = argv[2];
//     int result = ft_strncmp(s1, s2, 5);
//     printf("Résultat de ft_strncmp : %d\n", result);
//     int result2 = strncmp(s1, s2, 5);
//     printf("Résultat de strncmp : %d\n", result2);
//     return 0;
// }