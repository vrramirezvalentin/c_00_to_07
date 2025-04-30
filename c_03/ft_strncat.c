// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int	ft_strlen(char *str)  
{
	unsigned int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb){  
    unsigned int j;
            j = 0;
    unsigned int i = ft_strlen(dest); 

    while(src[j] && j < nb){
        dest[i] = src[j]; 
        j++;
        i++;        
    }
    dest[i] = '\0';
 
    return dest; 
}

// int main(int argc, char **argv)
// {
//     if (argc == 4)
//     {
//         unsigned int nb = atoi(argv[3]); // Conversion de argv[3] en unsigned int

//         // Créer des copies des chaînes de caractères pour les utiliser avec strncat et ft_strncat
//         char dest1[256];
//         char dest2[256];

//         // Initialiser dest1 et dest2 avec argv[1]
//         strncpy(dest1, argv[1], sizeof(dest1) - 1);
//         strncpy(dest2, argv[1], sizeof(dest2) - 1);

//         // S'assurer que les chaînes sont null-terminées
//         dest1[sizeof(dest1) - 1] = '\0';
//         dest2[sizeof(dest2) - 1] = '\0';

//         // Utiliser ft_strncat
//         printf("ft_strncat: %s\n", ft_strncat(dest1, argv[2], nb));

//         // Utiliser strncat
//         printf("strncat: %s\n", strncat(dest2, argv[2], nb));
//     }
//     else
//     {
//         printf("Usage: %s <dest> <src> <nb>\n", argv[0]);
//     }
//     return 0;
// }