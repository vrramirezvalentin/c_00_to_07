// #include <stdio.h>
// #include <stdlib.h>
int ft_is_prime(int nb){
    int i = 2;
    if (nb <= 1)
        return 0;
    while(i <= nb / 2){
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

// int main(int argc, char **argv)
// {
//     if (argc == 2){
//         int nombre = atoi(argv[1]);
//         printf("%d\n", ft_is_prime(nombre));
//     }
//     else
//         printf("Echec\n");
//     return 0;
// }


