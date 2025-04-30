// #include <stdio.h>
// #include <stdlib.h>
int ft_iterative_power(int nb, int power){

if(power < 0)
return 0;

int i;
i = 0;
int result;
result = 1;

while(i < power){
    result = result * nb;
    i++;
}
return result;
}

// int main(int argc, char **argv){
//     if(argc == 3){
//         int nombre1 = atoi(argv[1]);
//         int nombre2 = atoi(argv[2]);
//         printf("%d\n", ft_iterative_power(nombre1, nombre2));
//     } else {
//         printf("erreur dans le main\n");
//     }
//     return 0;
// }