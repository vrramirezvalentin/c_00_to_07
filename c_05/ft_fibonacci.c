// #include <stdio.h>
// #include <stdlib.h>
int ft_fibonacci(int index){
 
 if(index == 0){
    return 0;
 }else if(index == 1){
    return 1;
 } else {
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
 }
return index;
}

// int main(int argc, char **argv)
// {
//     if (argc == 2){
//         int nombre = atoi(argv[1]);
//         printf("%d\n", ft_fibonacci(nombre));
//     }
//     else
//         printf("main error\n");
//     return 0;
// }