//Huan Chen Assignment09-Program02
#include<iostream>
using namespace std;
int value1, value2, value3, num1, num2, num3;

void getValues(int *value1, int *value2, int *value3){
    cout<<"Enter an integer: ";
    cin>>*value1;
    
    cout<<"Enter an integer: ";
    cin>>*value2;
   
    cout<<"Enter an integer: ";
    cin>>*value3;
}

void doubleValues(int *a, int *b, int *c){
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

void displayValues(int *a, int *b, int *c){
    cout<<"The values doubled are: "<< *a<<", "<<*b<<", "<<*c<<endl;
}

int main(){
    getValues(&num1, &num2, &num3);
    doubleValues(&num1, &num2, &num3);
    displayValues(&num1, &num2, &num3);
}

//Program #2
//Write a program utilizes three integer variables, and three functions. The first function (getValues) should get a value from the user, and store it in the parameter, for each parameter. The second function (doubleValues) should double the value stored in each parameter. The third function (displayValues) should display each parameter. For all of the parameter, you will either use pass by value, or a pointer. You will not use reference parameters in this program.
//Note that not all three functions in this program will require pointers, only use the pointers where you need them in order to complete the task.
//Sample Outputs:
//Enter an integer: 5
//Enter an integer: 4
//Enter an integer: 3
//The values doubled are: 10, 8, 6 Press any key to continue . . .
