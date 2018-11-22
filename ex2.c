#include "TP2.h"
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
{
    char *arg = get_first_arg(argc, argv);
    int size = strlen(arg);
    int i;
    
    for (i=0;i<size;i++)
    {
        if (i==0 && (arg[i]  >= 97 &&  arg[i] <= 122))
        {
            arg[i] = arg[i] - 32;
            printf("%c",arg[i]);
        }
        else if (arg[i]==32)     
        {
            while (arg[i]==32)
            {
                i++;
            }
            printf("\n");
            i--;
            arg[i+1]= (arg[i+1]-32);
        }
        else
        {
            printf("%c",arg[i]);
        }
        
    }
    printf("\n");
    return 0;
}