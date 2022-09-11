#include<stdio.h>
int main(){
    float sub1,sub2,sub3;
    float avg;
    printf("marks in sub1= ");
    scanf("%f",&sub1);
    printf("marks in sub2= ");
    scanf("%f",&sub2);
    printf("marks in sub3= ");
    scanf("%f",&sub3);
    // total=sub1+sub2+sub3;
    // printf("total marks obtained= %d ",total);
    avg=(sub1+sub2+sub3)/3;
    printf("average marks obtained= %f ",avg);
    if (avg>90){
    printf("grade A");
    }
    else if (avg>=79.55 && avg<=90){
    printf("grade B");
    }
    else if (avg>=60 && avg<=79.55){  
    printf("grade C");
    }
    else{
    printf("fail");
    }
}