// #include <stdio.h>
// #include <stdlib.h>
int ft_is_prime(int nb){
int i;
i = 1;
int result;
int a;
int b;

while(i <= nb){
    result = nb % i;
    if(result == 0 && i == 1){
        a = 1;
    }
    if(result == 0 && i == nb){
        b = 1;
    }
    if((result == 0 && (i != 1 && i != nb)) || (nb == 1 || nb == 0)){
        return 0;
    }    
   i++;
}
if(a == 1 && b == 1){
    return 1;
} else {
    return 0;
}
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