// #include <stdio.h>
// #include <stdlib.h>
int ft_iterative_factorial(int nb){

if(nb < 0)
return 0;

int i;
i = nb;

int result;
result = 1;

while(i > 0){
    result = result * nb;
nb--;
i--;
}
return result;
}

// int main(int argc, char **argv)
// {
//     if (argc == 2){
//         int nombre = atoi(argv[1]);
//         printf("%d\n", ft_iterative_factorial(nombre));
//     }
//     else
//         printf("Echec\n");
//     return 0;
// }
