#include<stdio.h>
int selector(void){
    static int count = 0;
    count++;
    return(count);
}
int main(){
    
    int number = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t",number);
            number++;
        }
        printf("\n");
    }
    printf("Enter the input as per the value assign ");
/*  
int cooperate = selector();
int cooperate1 = selector();
printf("%d",cooperate);
printf("%d",cooperate1);
*/
  return(0);
}