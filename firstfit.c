#include<stdio.h>
int main(){
 int nb,np,i,j; 
 int block[10], process[10], alloc[10];
 printf("Enter number of blocks:");
 scanf("%d",&nb);
 printf("/n Enter block size:");
 for (i=0;i<nb;i++)
  scanf("%d",&block[i]);
 printf("Enter number of processes:");
 scanf("%d",&np);
 printf("Enter process size:");
 for(i=0;i<np;i++){
  scanf("%d",&process[i]);
  alloc[i]=-1;
}
for(i=0;i<np;i++){
 for(j=0;j<nb;j++){
  if(block[j]>=process[i]){
   alloc[i]=j;
   block[j]-=process[i];
   break;
   }
  }
}
printf("\n Process \t Size \t Block \t \n");
 for ( i=0;i<np;i++ ){
  printf("p%d \t $d \t",i+1,process[i]);
  if (alloc[i]!=-1)
   printf("B%d\n",alloc[i]+1);
  else
   printf("Not allocation\n");
  }
return 0;
}
 



 
