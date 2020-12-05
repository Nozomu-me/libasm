#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include<errno.h>

int ft_strcmp(char*,char*);
int ft_strlen(char *);
char *ft_strcpy(char *d,char *s);
int ft_write(int,char*,int);
int ft_read(int,char*,int);
char *ft_strdup(char*);

int main()
{
    // printf("%d\n",ft_strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));
    // printf("%lu\n",strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));
    
    // printf("%d\n",ft_strlen(""));
    // printf("%lu\n",strlen(""));


    char *dest = strdup("world");
    char *src = strdup("hello");
    printf("src=%s      dest=%s     |%s|\n",src,dest,ft_strcpy(dest,src));
    printf("src=%s      dest=%s     |%s|\n",src,dest,strcpy(dest,src));

    dest = strdup("");
    src = strdup("hello");
    printf("src=%s      dest=%s     |%s|\n",src,dest,ft_strcpy(dest,src));
    printf("src=%s      dest=%s     |%s|\n",src,dest,strcpy(dest,src));

    // char *s1="hello";
    // char *s2="helo";
    // printf("%d\n",ft_strcmp(s1,s2));
    // printf("%d\n",strcmp(s1,s2));


    // int fd=open("test.txt",O_WRONLY);
    // printf("fd=%d\n",fd);
    // printf("%d\n",ft_write(1,"hello",10));
    // printf("%zu\n",write(1,"hello\n",10));
    // printf("%d\n",ft_write(fd,"hello",5));
    // printf("%zd\n",write(fd,"hello",5));


    // int fd=open("test.txt",O_RDONLY);
    // int ret1,ret2;
    // char *s1=malloc(9*sizeof(char));
    // char *s2=malloc(9*sizeof(char));
    // ret2 = ft_read(100,s2,20);
    // printf("ft_read     errno=%d\n",errno);
    // close(fd);
    // fd=open("test.txt",O_RDONLY);
    // ret1 = read(100,s1,20);
    // printf("read        errno=%d\n\n",errno);
    // printf("ft_read     fd=%d   ret=%d\n",fd,ret2);
    // printf("read        fd=%d   ret=%d\n\n",fd,ret1);
    // printf("ft_read     %s\n",s2);
    // printf("read        %s\n",s1);

    // char *s1,*s2;
    // s1=strdup("hello world");
    // s2=ft_strdup("hello world");
    // printf("%s\n",s1);
    // printf("%s\n",s2);
    // printf("%d",ft_strdup("hello world"));

}
