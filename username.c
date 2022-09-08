#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int v;
   int s;
  int c;
  int ver;
  int one;
  int otp;
    int i;
    int z;
    char number[10];
    char password[8];
    printf("ENTER THE MOBILE NUMBER\n");
    scanf("%s",&number);
      if(strcmp(number ,"9966789024")==0){
        printf("correct mobile number\n");
    }
    else{
        i = 5;
    goto noob;
         }
    printf("ENTER THE PASSWORD\n");
    scanf("%s",&password);
   
 
    if(strcmp(password ,"shahid786")==0){
      z = 1;
        printf("correct password\n");
        goto noob2;
           
    }
      else{
        
    printf("wrong password\n\n");
      }
      noob:
      while (i==5)
      {
       printf("wrong number please check the number\n");
       break;
      }
      
 noob2:
      while (z==1)
      {
         srand(time(0));
          
    otp = rand()%9999 + 1;
printf("THE OTP IS %d\n",otp);



      
      printf("FOR HUMAN VERIFICATION : \n");
      srand(time(0));    
    ver = rand()%100 + 1;
    printf("%d\n",ver);
    printf("ENTER THE NUMBER THAT YOU SEE ANY NUMBER ON THE TOP?\n" );
    scanf("%d",&c);
    if(c==ver){
      printf("done\n");
    }
    else{
    v = 1;
    goto noob4;
     }
    
printf("enter the OTP\n");
scanf("%d",&one);
      if (one == otp)
      {
         s=2;
        printf("welcome to facebook\n");
        goto noob3;
       
      }
      else{
  for (int  i = 0; i < 2; i++)
  {
    printf("%d unsuccessful attemps\n",i);
    if (i==2)
    {
     break;
    }
    
  }
}
    }
 noob3:
      while (s==2)
      {
       printf("\n");
       break;
      }
     noob4:
      while (v==1)
      {
       printf("You are a bot\n");
       break;
      }
}