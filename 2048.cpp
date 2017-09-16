#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void show (const int a[][4],int score);
int findend (const int a[][4]);
void random (int a[][4]);
int main (void){
    srand(time(NULL));
    int a[4][4]={0};
    int x,y,n,k=0,score=0,motion=0;
    random (a);
    random (a);
        show (a,score);
                                    while (findend(a) == 1){
                                    motion=0;
                                    switch(getch()){
                                                    case 'w':
                                                    case 'W':for (k=0;k<4;k++){
                                                             for (x=0;x<4;x++){
                                                             for(y=x+1;y<4;y++){
                                                             if (a[x][k]==0 || a[y][k]==0){
                                                             if(a[x][k]==0 && a[y][k] != 0){
                                                                                              motion++;
                                                                                             a[x][k]+=a[y][k];
                                                                                             a[y][k]=0;
                                                                                             }
                                                                                             }
                                                                                             else if(a[x][k]==a[y][k]){
                                                                                                  motion++;
                                                                                                  score+=a[x][k];
                                                                                                  a[x][k]*=2;
                                                                                                  a[y][k]=0;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                                                                  break;
                                                    case 's':
                                                    case 'S':for (k=3;k>=0;k--){
                                                             for (x=3;x>=0;x--){
                                                             for(y=x-1;y>=0;y--){
                                                             if (a[x][k]==0 || a[y][k]==0){
                                                             if(a[x][k]==0 && a[y][k] != 0){
                                                                                             motion++;
                                                                                             a[x][k]+=a[y][k];
                                                                                             a[y][k]=0;
                                                                                             }
                                                                                             }
                                                                                             else if(a[x][k]==a[y][k]){
                                                                                                  motion++;
                                                                                                  score+=a[x][k];
                                                                                                  a[x][k]*=2;
                                                                                                  a[y][k]=0;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                                                                  break;
                                                   case 'a':
                                                   case 'A': for (k=0;k<4;k++){
                                                             for (x=0;x<4;x++){
                                                             for(y=x+1;y<4;y++){
                                                             if (a[k][x]==0 || a[k][y]==0){
                                                             if(a[k][x]==0 && a[k][y] != 0){
                                                                                              motion++;
                                                                                             a[k][x]+=a[k][y];
                                                                                             a[k][y]=0;
                                                                                             }
                                                                                             }
                                                                                             else if(a[k][x]==a[k][y]){
                                                                                                  motion++;
                                                                                                  score+=a[k][x];
                                                                                                  a[k][x]*=2;
                                                                                                  a[k][y]=0;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                                                                  break;
                                                  case 'd':
                                                  case 'D':   for (k=3;k>=0;k--){
                                                             for (x=3;x>=0;x--){
                                                             for(y=x-1;y>=0;y--){
                                                             if (a[k][x]==0 || a[k][y]==0){
                                                             if(a[k][x]==0 && a[k][y] != 0){
                                                                                              motion++;
                                                                                             a[k][x]+=a[k][y];
                                                                                             a[k][y]=0;
                                                                                             }
                                                                                             }
                                                                                             else if(a[k][x]==a[k][y]){
                                                                                                  motion++;
                                                                                                  score+=a[k][x];
                                                                                                  a[k][x]*=2;
                                                                                                  a[k][y]=0;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                                                                  break;                                        
                                                     default :printf("please enter appropriate button:\n\n\a");
                                                                                                  break;          
                                                                                                  }
                                    if (motion != 0 ){
                                    random (a);
                                    show (a,score);
                                    }
                                    }
                                    while(1){}
                                    }
// tebe pak kardan safhe va chao mojadad.
void show (const int a[][4],int score){
     int x,y;
    system("cls");
     printf("welcome to 2048 game if you reach to 2048 you win have agood luck!:\n\n");
     printf("       score:%d \n",score);
      for (x=0;x<4;x++){
            for (y=0;y<4;y++){
                if(a[x][y]==0){
                               printf("%4s",".");
                               }
                               else {
                                    printf("%4d",a[x][y]);
                                    }
                        
                               
                                    }
                                    printf("\n");
                                    }
                                    printf("\n");
                                    printf("enter w:up s:down a:left d:right\n\n");
                                    }
void random (int a[][4]){
     int p,h;
      while (1){
                                                          p=rand()%4;
                                                          h=rand()%4;
                                                          if (a[p][h]==0){
                                                             a[p][h]=(rand()%2+1)*2;
                                                             break;
                                                             }
                                                             }
                                                             }
int findend (const int a[][4]){
    int k,x,y,i=0,move=0;
                                    for (x=0;x<4;x++){
                                    for (y=0;y<4;y++){
                                    	if (a[x][y]==2048){
                                   		printf("congratulation you won!\a");
                                   		return 0;
                                    	}
                                        if (a[x][y]==0){
                                        i++;
                                    }
                                    }
                                    }
                                    if(i==0){
                                    for (k=0;k<4;k++){
                                                             for (x=0;x<4;x++){
                                                             for(y=x+1;y<4;y++){
                                                                                             if(a[x][k]==a[y][k]){
                                                                                                  move++;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                              for (k=3;k>=0;k--){
                                                             for (x=3;x>=0;x--){
                                                             for(y=x-1;y>=0;y--){
                                                                                             if(a[x][k]==a[y][k]){
                                                                                                  move++;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             } 
                                                            for (k=0;k<4;k++){
                                                             for (x=0;x<4;x++){
                                                             for(y=x+1;y<4;y++){
                                                                                             if(a[k][x]==a[k][y]){
                                                                                                  move++;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                             for (k=3;k>=0;k--){
                                                             for (x=3;x>=0;x--){
                                                             for(y=x-1;y>=0;y--){
                                                                                              if(a[k][x]==a[k][y]){
                                                                                                  move++;
                                                                                                  break;
                                                                                             }
                                                                                             else{
                                                                                                  break;
                                                                                                  }
                                                                                             }
                                                                                             }    
                                                                                             }
                                                            if (move==0){
                                                                         printf ("sorry you lost!\a");
                                                                         return 0;
                                                                         }
                                                            else {
                                                                 return 1;
                                                                 } 
                                    }
                                    else{
                                         return 1;
                                         }
                                                                                                                                                           
    }
                                                                                                                                                                   
