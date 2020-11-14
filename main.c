#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>

int ft_strcmp(char*,char*);
int ft_strlen(char *);
char *ft_strcpy(char *d,char *s);
int ft_write(int,char*,int);
int ft_read(int,char*,int);

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


    // int fd=open("test.txt",O_WRONLY);
    // printf("fd=%d\n",fd);
    // printf("%d\n",ft_write(1,"amal",5));
    // printf("%zu\n",write(1,"amal",5));
    // printf("%d\n",ft_write(fd,"amal",10));

    int fd=open("test.txt",O_RDONLY);
    int ret1,ret2;
    char *s1=malloc(9*sizeof(char));
    char *s2=malloc(9*sizeof(char));
    ret1 = read(fd,s1,4);
    ret2=ft_read(fd,s2,4);
    printf("read        fd=%d   ret=%d\n",fd,ret1);
    printf("ft_read     fd=%d   ret=%d\n",fd,ret2);
    printf("read        %s\n",s1);
    printf("ft_read     %s\n",s2);

}