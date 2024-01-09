
#include <stdio.h>

#include <string.h>


int getadres(char *filename , char *data  , const char  *ol)
{


   FILE * dr = fopen(filename , "r") ;

    char  redaer[1024] ; char reader2[1024];
   if(!dr )return -1;

    int _m = 0;

     while (fscanf(dr,"%s %s",redaer, reader2) != EOF)
     {


          printf("{%s : %s } \n" , redaer , reader2);

          if(strcmp(ol , redaer) == 0  ||  strstr(reader2 , ol) != NULL ||  strstr(reader2,  ol) != NULL){
             _m ++ ;
             printf("%d", _m);
             FILE *f = fopen("rt.txt","a+");
             fprintf(f,"%s" ,  data);

          }
            _m ++ ;
             printf("%d", _m);
             FILE *f = fopen("rt24.txt","a+");
             fprintf(f,"\t %s  \t  reader  \t %s >>  \t\r /*  reader2 - \r counter _ \t %d \n"  ,  data,redaer , reader2,_m);
     }

     return 1;

}



int main(int argc ,  const char *argv[])

{



if(argc > 2){


   getadres((char*)argv[1] ,(char*) argv[2] ,  argv[3]);
     return argc ;
}

}
