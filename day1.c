
#include <stdio.h> 

int main(){
   char name[50];
   int age;
   printf("Enter name:");
   scanf("%s", name);
   printf("Enter age:");
   scanf("%d", &age); 
   printf("Hello, %s,  you are %d years old\n", name, age);
   printf("your favorite hobby is coding");
   return 0;
}


