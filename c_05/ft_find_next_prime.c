// #include <stdio.h>
// #include <stdlib.h>
int ft_is_prime(int nb){
    int i;
    int nonPrime;
    i = 2;
    nonPrime = 0;

    if (nb <= 1){
        nb++;
        return ft_is_prime(nb);
    }
    while(i <= nb / 2){
        if(nb % i == 0)
            nonPrime = 1;
        i++;
    }
    if(nonPrime == 1){
        nb++;
        return ft_is_prime(nb);
    }
    return nb;
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
