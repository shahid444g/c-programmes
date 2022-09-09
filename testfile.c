#include<stdio.h>

int main () {
   FILE *fp;
   char stri[] = "This is shahid.com bolte";

   fp = fopen( "int.txt" , "w" );
   fwrite(stri , 1 , sizeof(stri) , fp );

   fclose(fp);
  
   return(0);
}