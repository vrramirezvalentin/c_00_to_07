// #include <stdio.h>
// #include <stdlib.h>
int ft_sqrt(int nb){

double a;
a = nb - 1;
double result;

while(a > 0){
   result = nb/a;
   if(result == a){
    return result;
   }
a--;
}
if (nb == 1){
    return 1;
}else if(result == nb){
    return 0;
} else {
return result;
}
}

// int main(int argc, char **argv){

//     if(argc == 2){
//         int nombre1 = atoi(argv[1]);
//         printf("%d\n", ft_sqrt(nombre1));
//     } else {
//         printf("erreur main");
//     }
//     return 0;
// }