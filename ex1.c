#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{   int i,j,k;
    char *arg = get_first_arg(argc, argv);
    int size = strlen(arg);
    char chaine[size];
    chaine[0]=arg[0];
    
    for (i=size-1;i>=0;i--){
        for (k=0;k<=size-i;k++){
            printf(" ");
        };
        for (j=0;j<=i;j++){
            printf("%c",arg[i-j]);
        };
        for (j=1;j<=i;j++){
            printf("%c",arg[j]);
        };
        printf("\n");
        
    };
    return 0;
}

