// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define max 40
    int stack[max],x,check=-1,i,a,temp,n;
int main() {
int pilih;
	printf("max stack is 40");
    printf("pick option");
    printf("\n1.push");
    printf("\n2.display top value");
    printf("\n3.pop");
    printf("\n4.display");
    do{
    printf("\npick option:");  
    scanf("%d",&pilih);
   switch(pilih){
       case 1:
       {
       push();
       break;
       }
       case 2:
       {
       top();
       break;
       }
       case 3:
       {
       pop();
       break;
       }
       case 4:
       {
       display();
       break;
       }
      }
    } while(pilih!=5);
}
void push(){
    if(check>=40){
        printf("stack full");
    }
    else{
	
    printf("input stack:");
    scanf("%d",&x);
        check++;
        stack[check]=x;
    }
}
void top(){
//	if(check<=-1){
//	printf("empty");
//	}
//	else{
//	while(stack[check]!=NULL){
//	temp=check;
//	check++;
//	}
	printf("top is %d",stack[check]);
//}
}
void pop(){
    
    if(check<=-1)
    {
        printf("empty");
    }
    else
    {
        printf("pop : %d",stack[check]);
        check--;
    }

}
void display(){
    if (check>=0){
	 for(i=check;i>=0;i--){
	 	printf("\n| %d |",stack[i]);
	 }
	 }
	 else 
	 printf("stack empty");
	}
