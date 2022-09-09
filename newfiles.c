#include<stdio.h>
#include<conio.h>
void main() {
   FILE *PTR;
   PTR=fopen("fileforchar.txt","w");
   fputc('K',PTR);
   fclose(PTR);

}