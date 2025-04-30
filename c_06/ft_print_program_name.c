#include <stdio.h>
int main(int argc, char **argv){
    if(argc > 0){
        printf("%s\n",argv[0]);
    } else {
        printf("error");
    }
    return 0;
}