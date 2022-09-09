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
    return 0;
}*/
/*
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

#include<stdio.h>
#include<conio.h>
void main() {
   FILE *PTR;
   PTR=fopen("fileforchar.txt","w");
   fputc('K',PTR);
   fclose(PTR);

}
*/