#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>

int ft_strcmp(char*,char*);
int ft_strlen(char *);
char *ft_strcpy(char *d,char *s);
int ft_write(int,char*,int);
int main()
{
    // printf("%d\n",ft_strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));
    // printf("%lu\n",strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));


    // char *dest = malloc(10*sizeof(char));
    // char *src = strdup("");
    // printf("|%s|\n",ft_strcpy(dest,src));
    // printf("|%s|\n",strcpy(dest,src));


    // char *s1="amal";
    // char *s2="amll";
    // printf("%d\n",ft_strcmp(s1,s2));
    // printf("%d\n",strcmp(s1,s2));


    int fd=open("test.txt",O_WRONLY);
    // printf("fd=%d\n",fd);
    printf("%d\n",ft_write(1,"amal",5));
    printf("%zu\n",write(1,"amal",5));
    // printf("%d\n",ft_write(fd,"amal",10));
}