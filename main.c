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
// int ft_strdup(char*);

int main()
{
    printf("%d\n",ft_strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));
    printf("%lu\n",strlen("theString : la chaîne de caractères pour laquelle il faut calculer sa longueur."));


    char *dest = malloc(10*sizeof(char));
    char *src = strdup("amal");
    printf("|%s|\n",ft_strcpy(dest,src));
    printf("|%s|\n",strcpy(dest,src));


    char *s1="amal";
    char *s2="amll";
    printf("%d\n",ft_strcmp(s1,s2));
    printf("%d\n",strcmp(s1,s2));


    // int fd=open("test.txt",O_WRONLY);
    // printf("fd=%d\n",fd);
    // printf("%d\n",ft_write(1,"amal",10));
    // printf("%zu\n",write(1,"amal\n",10));
    // printf("%d\n",ft_write(fd,"amal",5));
    // printf("%zd\n",write(fd,"amal",5));


    // int fd=open("test.txt",O_RDONLY);
    // int ret1,ret2;
    // char *s1=malloc(9*sizeof(char));
    // char *s2=malloc(9*sizeof(char));
    // ret2=ft_read(fd,NULL,20);
    // printf("ft_read    errno=%d\n",errno);
    // ret1 = read(fd,NULL,20);
    // printf("read    errno=%d\n",errno);
    // close(fd);
    // fd=open("test.txt",O_RDONLY);
    // // errno = 5;
    // printf("read        fd=%d   ret=%d\n",fd,ret1);
    // printf("ft_read     fd=%d   ret=%d\n",fd,ret2);
    // printf("read        %s\n",s1);
    // printf("ft_read     %s\n",s2);

    // char *s1,*s2;
    s1=strdup("hello world");
    s2=ft_strdup("hello world");
    printf("%s\n",s1);
    printf("%s\n",s2);
    // printf("%d",ft_strdup("hello world"));

}


// #include <stdio.h>
// #include <fcntl.h>
// #include <stdlib.h>
// #include <errno.h>
// #include <string.h>
 
// const char *FILE_NAME = "test1.txt";
 
// int main( int argc, char **argv )
// {
//       int fd = 0;
 
//     //   printf( "Opening %s...\n", FILE_NAME );   
//       fd = open( FILE_NAME, O_RDWR, 0644 );
//     //   if( fd < 0 ) {
//     //         // Error, as expected.
//     //         perror( "Error opening file" );
//     //         printf( "Error opening file: %d\n", errno );
//     //   }
//     printf("fd=%d\n",fd);
//     printf("errno=%d\n",errno);

//     printf("write ret =%zd\n",write(fd,"amal",5));
//     // printf("write ret =%d\n",ft_write(fd,"amal",5));
//     printf("write errno=%d\n",errno);
//       return EXIT_SUCCESS;
// }
