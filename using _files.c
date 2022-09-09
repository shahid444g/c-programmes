/*
some notes
Description of Function	Function in Use
used to open an existing file or a new file	-- fopen()
writing data into an available file	-- fprintf()
reading the data available in a file	-- fscanf()
writing any character into the program file	-- fputc()
reading the character from an available file	-- fgetc()
used to close the program file-- 	fclose()
used to set the file pointer to the intended file position--	fseek()
writing an integer into an available file-- 	fputw()
used to read an integer from the given file-- 	fgetw()
used for reading the current position of a file	-- ftell()
sets an intended file pointer to the file’s beginning itself	-- rewind()
*/
/* fopen use --
 #include <stdio.h>
int main()
{
    FILE * ptr;
    ptr = fopen("newfile.txt","w");
    fprintf(ptr,"%d",45);
    fclose(ptr);
    return 0;
}

using fscanf
#include <stdio.h>
int main()
{
    char a[10];
    FILE * ptr;
    ptr = fopen("filescan1.txt","r");
    fscanf(ptr,"%s",&a);
    printf("%s",a);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char a;
    FILE * ptr;
    ptr = fopen("fileforchar.txt","r");
    a= fgetc(ptr);
    printf("%c",a);
    fclose(ptr);
    return 0;
}*/
/*
fgetc ---
#include<stdio.h>
#include<conio.h>
void main() {
   FILE *PTR;
   char s;
   PTR=fopen("fileforchar.txt","r");
   s=fgetc(PTR);
      printf("%c",s);
   fclose(PTR);
   getch();
}
fputc ---
#include<stdio.h>
#include<conio.h>
void main() {
   FILE *PTR;
   PTR=fopen("fileforchar.txt","w");
   fputc('K',PTR);
   fclose(PTR);
#include <stdio.h>

fputs & fseek ---
int main () {
   FILE *fp;

   fp = fopen("fileforchar.txt","w+");
   fputs("This is tutorialspoint.com", fp);
   fseek( fp, 4, SEEK_SET );
   fputs(" shahid hackeris a c programmer\n", fp);
   fseek( fp, 3, SEEK_CUR );
   fputs(" shahid hacker\n", fp);
   fseek( fp, 1, SEEK_END );
   fputs(" shahid hacke\n", fp);
   fclose(fp);
   return(0);
putw & getw ---
   #include<stdio.h>
    int main( ){
    FILE *fp;
    int i =434,j;
    fp = fopen("int.txt","w");
      putw (i, fp);
      fclose(fp);
      fp = fopen("int.txt","r");
      j= getw(fp);
      printf ("%d",j);
   fclose (fp);
   return 0;
}
ftell---
#include <stdio.h>
#include<conio.h>
void main () {
   FILE *f;
   int len;
   f = fopen("int.txt", "r");
   fseek(f, 0, SEEK_END);
   len = ftell(f);
   fclose(f);
   printf("Size of file: %d bytes", len);
   
}
fwrite ---
#include<stdio.h>

int main () {
   FILE *fp;
   char stri[] = "This is shahid.com bolte";

   fp = fopen( "int.txt" , "w" );
   fwrite(stri , 1 , sizeof(stri) , fp );

   fclose(fp);
  
   return(0);
}
frewind---
#include <stdio.h>

int main () {
   char str[] = "This is tutorialspoint.com";
   FILE *fp;
   int ch;
  
   fp = fopen( "int.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );
   fclose(fp);

   fp = fopen( "int.txt" , "r" );
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);
   }
   rewind(fp);
   printf("\n");
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);
     
   }
   fclose(fp);

   return(0);
}
*/