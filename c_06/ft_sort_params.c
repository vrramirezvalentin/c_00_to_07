#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

// int main(int argc, char **argv) {
//     if(argc > 1){
//         qsort(argv + 1, argc - 1, sizeof(char *), compare);
//         for(int i = 1; i < argc; i++) {
//             printf("%s\n", argv[i]);
//         }
//     }
//     return 0;
// }
