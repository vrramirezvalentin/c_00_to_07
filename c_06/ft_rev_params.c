#include <stdio.h>
int main(int argc,char **argv){
    int i;
    i = argc - 1;
    if(argc > 0){
        while(i > 0){
        printf("%s\n",argv[i]);
        i--;
        }
    } else {
        printf("error");
    }
    return 0;
}

