#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int v[6][5];
int q[10];
int a;
int ax[10];
int s=0;
int i=7,j=0,k,l;//start i
int bb=0;
int p=0;
main(void){
/*
v[0][0]=101;//hw1.1
v[0][1]=101;
v[0][2]=101;
v[0][3]=101;           
v[1][0]=2;
v[1][1]=4;
v[1][2]=101;
v[1][3]=100;
v[2][0]=1;
v[2][1]=3;
v[2][2]=4;
v[2][3]=100;
v[3][0]=2;
v[3][1]=4;
v[3][2]=5;
v[3][3]=100;
v[4][0]=1;
v[4][1]=2;
v[4][2]=3;
v[4][3]=100;
v[5][0]=3;
v[5][1]=6;
v[4][2]=101;
v[5][3]=0;
v[6][0]=5;
v[6][1]=7;
v[6][2]=101;
v[6][3]=100;
v[7][0]=6;
v[7][1]=8;
v[7][2]=9;
v[7][3]=100;
v[8][0]=7;
v[8][1]=9;
v[8][2]=101;
v[8][3]=100;
v[9][0]=7;
v[9][1]=8;
v[9][2]=101;
v[9][3]=100;  */
/*v[0][0]=101;//hw1.2
v[0][1]=101;
v[0][2]=101;
v[0][4]=101;           
v[1][0]=2;
v[1][1]=3;
v[1][2]=4;
v[1][3]=100;
v[1][4]=100;
v[2][0]=1;
v[2][1]=100;
v[2][2]=100;
v[2][3]=100;
v[2][4]=100;
v[3][0]=1;
v[3][1]=100;
v[3][2]=100;
v[3][4]=100;
v[4][0]=1;
v[4][1]=5;
v[4][2]=7;
v[4][3]=8;
v[4][4]=100;
v[5][0]=4;
v[5][1]=6;
v[5][4]=100;
v[6][0]=4;
v[6][1]=5;
v[6][2]=7;
v[6][3]=100;
v[6][4]=100;
v[7][0]=4;
v[7][1]=6;
v[7][2]=8;
v[7][3]=100;
v[7][4]=0;
v[8][0]=4;
v[8][1]=7;
v[8][2]=10;
v[8][3]=100;
v[8][4]=100;
v[9][0]=10;
v[9][1]=100;
v[9][2]=101;
v[9][3]=100;
v[9][4]=100;
v[10][0]=8;
v[10][1]=9;
v[10][4]=100;*/
v[0][0]=101;//hw1.3
v[0][1]=101;
v[0][2]=101;
v[0][4]=101;           
v[1][0]=2;
v[1][1]=3;
v[1][2]=100;
v[1][3]=100;
v[1][4]=100;
v[2][0]=1;
v[2][1]=3;
v[2][2]=4;
v[2][3]=100;
v[2][4]=100;
v[3][0]=1;
v[3][1]=2;
v[3][2]=4;
v[3][4]=0;
v[4][0]=2;
v[4][1]=3;
v[4][2]=5;
v[4][3]=100;
v[4][4]=100;
v[5][0]=4;
v[5][1]=100;
v[5][4]=100;

for(l=0;l<6;l++) 
{                
   for(s=0;s<6;s++)
   {
      if(v[s][4]==j)
      {
         for(k=0;k<4;k++)
         {
            a=v[s][k];
            
            if(v[a][4]==100)
            {
               v[a][4]=j+1;
               printf("a=%d,s=%d\n",a,j);
            }
            a=0;  
         }
         for(bb=1;bb<6;bb++){
         printf("v[%d]=%d\n",bb,v[bb][4]);}     
         printf("\n");         
      }                        
   }
   j=j+1;
}
j=0;

for(l=0;l<6;l++)
{
   for(i=0;i<6;i++)
   {
       if(v[i][4]==j)
       {             
           p++;
           printf("path%d=v%d\n",p,i);
       }
   }                  
   j++;
}

                  
system("pause");
}
