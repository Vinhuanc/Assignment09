//Huan Chen Assignment09-Program01
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int values[4][5];

void getValues(){
    int a, b;
    cout<<"Enter values for the 4x5 array matrix: "<<endl;
  
    for(a=1; a<=4; a++){
        for (b=1; b<=5; b++){
  
    cout<<"Enter the value for row "<< a << " and column " <<b<<": ";
            cin>>values[a][b];
            if(values[a][b] <0){
                cout<<"error, value must be equal or greater than 0. "<<endl;
                cout<<"retry: ";
                cin>>values[a][b];
            }
        
        }
    }
}

int getTotal(){
    int a, b, total=0;
    for( a=1; a<=4; a++){
        for ( b=1; b<=5; b++){
            total+=values[a][b];
        }
    }
    cout<<"The totoal is: "<<total<<endl;
   return total;
}

double getAverage(){
    int a, b, total=0;
    double avg;
    for( a=1; a<=4; a++){
        for (b=1; b<=5; b++){
            total+=values[a][b];
        }
    }
    avg=total/20;
    cout<<"The average of the values is: "<<avg<<endl;
    return avg;
}

int getRowTotal(int row){
    int b, rowTotal=0;
        for ( b=1; b<=5; b++){
            rowTotal+=values[row][b];
    }
    cout<<"The total of row "<<row<<" is: "<<rowTotal<<endl;
    return rowTotal;
}

int getColumnTotal(int column){
    int a, columnTotal=0;
    for(a=1; a<=4;a++){
        columnTotal+=values[a][column];
    }
    cout<<"The total of column "<<column<<" is: "<<columnTotal<<endl;
    return columnTotal;
}

int getHighestInRow(int row){
    int highestValue;
   highestValue= max({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
    cout<<"The highest value of row "<<row<<" is: "<<highestValue<<endl;
    return highestValue;
}

int getLowestInRow(int row){
    int lowestValue ;
    lowestValue = min({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
    cout<<"The lowestValue value of row "<<row<<" is: "<<lowestValue<<endl;
    return lowestValue ;
}

void showMenu(){
    cout<< "1: The total of all the values" <<endl;
    cout<<"2: The average of all values "<<endl;
    cout<<"3: The total value of row "<<endl;
    cout<<"4: The total value of column "<<endl;
    cout<<"5: The highest value of row "<<endl;
    cout<<"6: The lowest value of row "<<endl;
    cout<<"7: Exit."<<endl;
}

int main(){
    int userInput, row, column;
    getValues();
    do{
        showMenu();
    cout<<"Please select a calculation for the 4x5 array matrix.";
    cin>>userInput;
    if(userInput >7){
        cout<<"Error. Number must be between 1-7. Retry: ";
        cin>>userInput;
    }
    
    switch(userInput){
        case 1: getTotal();
            break;
        case 2: getAverage();
            break;
        case 3:
            cout<<"Which row would you like to calculate: ";
            cin>>row;
            getRowTotal(row);
            break;
        case 4:
            cout<<"Which column would you like to calculate: ";
            cin>>column;
            getColumnTotal(column);
            break;
        case 5:
            cout<<"Which row would you like to find the highest value in?";
            cin>>row;
            getHighestInRow(row);
            break;
        case 6:
            cout<<"Which row would you like to find the lowest value in?";
            cin>>row;
            getLowestInRow(row);
                break;
        case 7:
            cout<<"Goodbye."<<endl;
            return 0;
       }
    }while(userInput!=7);

    }

//Computer Science 1081 – Assignment #09
//Program #1 (worth 200 points)
//Write a program that prompts the user for values to fill a 4x5 array (matrix). Create a menu driven program within a loop that prompts the user if they want to: display the total of all of the cells in the matrix ; get the average of all of the cells in the matrix ; get the total of a specific row (prompt for which row) ; get the total of any column (prompt for the column) ; get the highest value in a row (prompt for which row). Include an “Exit” option in the menu. Continue to prompt the user for menu actions until they select the “Exit” option. Perform needed error checking.
//The program should have the following functions:
//int getTotal – takes a two-dimensional array, and returns the total of all the values
//double getAverage – takes a two-dimensional array, and returns the average of all of the values
//int getRowTotal – takes a two-dimensional array and integer, returns the total of the row in the array corresponding to the integer value
//int getColumnTotal – takes a two-dimensional array and integer, returns the total of the column in the array corresponding to the integer value
//int getHighestInRow – takes a two-dimensional array and integer, returns the highest value in the row of the array, corresponding to the integer value
//int getLowestInRow – takes a two-dimensional array and integer, returns the lowest value in the row of the array, corresponding to the integer value.
//
//

