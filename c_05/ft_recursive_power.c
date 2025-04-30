// #include <stdio.h>
// #include <stdlib.h>
int ft_recursive_power(int nb, int power){

if(power == 0){
    return 1;
    }else{
        return nb * ft_recursive_power(nb,power-1);
    }
    return nb;
}

// int main(int argc, char **argv){

//     if(argc == 3){
//         int nombre1 = atoi(argv[1]);
//         int nombre2 = atoi(argv[2]);
//         printf("%d\n", ft_recursive_power(nombre1, nombre2));
//     } else {
//         printf("main n'a pas fonctionné\n");
//     }
// }