#include <stdio.h>
#include <string.h>

//use scanf to get/read user input with the stdio.h library
int main() {

    char name[25]; //bytes
    int age;

    printf("What's your name?\n");
    //scanf("%s", &name);
                                    //since we are using a space we have to use a different
                                    //function
    fgets(name, 25, stdin);         //can read white spaces and is the same size of the array will
                                    //includes new line character autmatically
                                    //scanf can not read white spaces so use fgets
    name[strlen(name)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);              //preceed the variable with & because it is the address of it


    if(age>=18){
        printf("You are old enough to vote!\n");
    }
    else if(age <= 0){
        printf("You must think you're funny. You're lying!\n");
    }
    else{
        printf("You are not old enough to vote yet =(\n");
    }

printf("Hello, %s\n", name);
printf("Wow, %d years old!\n", age);

    return 0;   
}
