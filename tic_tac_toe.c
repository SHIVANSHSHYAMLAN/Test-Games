#include<stdio.h>
#include<stdlib.h>
char whole_steup[3][3]={{'0','1','2'},{'3','4','5'},{'6','7','8'}};
void checker(int input){
    if((input<0)||(input>8)){
        printf("Error in the input");
        exit(0);
    }
       if(input<=2){
      if((whole_steup[0][input] == '#')||(whole_steup[0][input] == '*')){
        printf("Error");
        exit(0);
      }
    }
    else if((input>2)&&(input<=5)){
     if((whole_steup[1][input-3] == '#')||(whole_steup[1][input-3] == '*')){
        printf("Error");
        exit(0);
      }
    }
    else { 
            if((whole_steup[2][input-6] == '#')||(whole_steup[2][input-6] == '*')){
        printf("Error");
        exit(0);
      }
}
    }
void winning(void){
 for(int i = 0; i<3; i++){
      if((whole_steup[i][0]==whole_steup[i][1])&&(whole_steup[i][0]==whole_steup[i][2])&&(whole_steup[i][1]=='*')){
        printf("One with the * won the game");
        exit(0);
      }
     else if((whole_steup[0][i]==whole_steup[1][i])&&(whole_steup[0][i]==whole_steup[2][i])&&(whole_steup[i][i]=='*')){
        printf("One with the * won the game");
        exit(0);
      }
      else  if((whole_steup[i][0]==whole_steup[i][1])&&(whole_steup[i][0]==whole_steup[i][2])&&(whole_steup[i][1]=='#')){
        printf("One with the # won the game");
        exit(0);
      }
     else if((whole_steup[0][i]==whole_steup[1][i])&&(whole_steup[0][i]==whole_steup[2][i])&&(whole_steup[i][i]=='#')){
        printf("One with the # won the game");
       exit(0);
      }  
      else{}
 }
     if((whole_steup[0][0]==whole_steup[1][1])&&(whole_steup[0][0]==whole_steup[2][2])&&(whole_steup[1][1]=='*')){
        printf("One with the * won the game");
        exit(0);
      }
    else  if((whole_steup[0][0]==whole_steup[1][1])&&(whole_steup[0][0]==whole_steup[2][2])&&(whole_steup[1][1]=='#')){
        printf("One with the # won the game");
        exit(0);
      }
      else{}
    }
int main(){
     //printing the outline of the game
    int number = 0;
    for(int i = 0; i<3; i++){                
        for(int j = 0; j<3; j++){
            printf("%d\t",number);
            number++;
        }
        printf("\n");
    }
//Now working on the input scenario

 int input_user;  //needs only 4 inputs ----> 5th will be automatic
 int input_user2;  //input by the second user
        printf("Enter the input as per the value assign ");
     scanf("%d",&input_user);
     checker(input_user);
    if(input_user<=2){
        whole_steup[0][input_user] = '*';
    }
    else if((input_user>2)&&(input_user<=5)){
        whole_steup[1][input_user-3] = '*';
    }
    else  whole_steup[2][input_user-6] = '*';
            
    //Completed till the first input by the first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
//Printed till the first user input
      printf("Enter the input as per the value assign ");
     scanf("%d",&input_user2);
     checker(input_user2);
    if(input_user2<=2){
        whole_steup[0][input_user2] = '#';
    }
    else if((input_user>2)&&(input_user2<=5)){
        whole_steup[1][input_user2-3] = '#';
    }
    else  whole_steup[2][input_user2-6] = '#';
            
    //Completed till the first input by the second and first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
  //Completed till the second user fist time
  //Completed
      printf("Enter the input as per the value assign ");
     scanf("%d",&input_user);
     checker(input_user);
    if(input_user<=2){
        whole_steup[0][input_user] = '*';
    }
    else if((input_user>2)&&(input_user<=5)){
        whole_steup[1][input_user-3] = '*';
    }
    else  whole_steup[2][input_user-6] = '*';
            
    //Completed till the second input by the first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
//Printed till the second user input
      printf("Enter the input as per the value assign ");
     scanf("%d",&input_user2);
      checker(input_user2);
    if(input_user2<=2){
        whole_steup[0][input_user2] = '#';
    }
    else if((input_user>2)&&(input_user2<=5)){
        whole_steup[1][input_user2-3] = '#';
    }
    else  whole_steup[2][input_user2-6] = '#';
            
    //Completed till the second input by the second and first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
   
  //Completed till the second user second time
  //Completed
    printf("Enter the input as per the value assign ");
     scanf("%d",&input_user);
     checker(input_user);
    if(input_user<=2){
        whole_steup[0][input_user] = '*';
    }
    else if((input_user>2)&&(input_user<=5)){
        whole_steup[1][input_user-3] = '*';
    }
    else  whole_steup[2][input_user-6] = '*';
            
    //Completed till the second input by the first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
    winning();
//Printed till the second user input
      printf("Enter the input as per the value assign ");
     scanf("%d",&input_user2);
      checker(input_user2);
    if(input_user2<=2){
        whole_steup[0][input_user2] = '#';
    }
    else if((input_user>2)&&(input_user2<=5)){
        whole_steup[1][input_user2-3] = '#';
    }
    else  whole_steup[2][input_user2-6] = '#';
            
    //Completed till the second input by the second and first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
   winning();
  //Completed till the second user second time
  //Completed
    printf("Enter the input as per the value assign ");
     scanf("%d",&input_user);
     checker(input_user);
    if(input_user<=2){
        whole_steup[0][input_user] = '*';
    }
    else if((input_user>2)&&(input_user<=5)){
        whole_steup[1][input_user-3] = '*';
    }
    else  whole_steup[2][input_user-6] = '*';
            
    //Completed till the second input by the first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
    winning();
//Printed till the second user input
      printf("Enter the input as per the value assign ");
     scanf("%d",&input_user2);
      checker(input_user2);
    if(input_user2<=2){
        whole_steup[0][input_user2] = '#';
    }
    else if((input_user>2)&&(input_user2<=5)){
        whole_steup[1][input_user2-3] = '#';
    }
    else  whole_steup[2][input_user2-6] = '#';
            
    //Completed till the second input by the second and first user
    for(int i= 0; i<3; i++){
        for(int j=0;j<3;j++){
      printf("%c\t",whole_steup[i][j]);
        }
        printf("\n");
    }
   winning();
  //Completed till the second user second time
   printf("Enter the input as per the value assign ");
     scanf("%d",&input_user);
     checker(input_user);
    if(input_user<=2){
        whole_steup[0][input_user] = '*';
    }
    else if((input_user>2)&&(input_user<=5)){
        whole_steup[1][input_user-3] = '*';
    }
    else  whole_steup[2][input_user-6] = '*';
            winning();
    //Completed till the third input by the first user
  //Completed
  printf("No one won the game, its a tie one");
    return(0);
}