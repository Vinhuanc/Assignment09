//Huan Chen Assignment09-Program01
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
// a= rows; b=columns
using namespace std;
int a, b, row, total=0, column, userInput,rowTotal=0, columnTotal=0,highestValue, lowestValue;
int values[4][5];
double avg  ;

void getValues(){
    cout<<"Enter values for the 4x5 array matrix: "<<endl;
//    for(int a=1; a<=4; a++){
//        for (int b=1; b<=5; b++){
    //change back to above codes
    for(int a=1; a<=2; a++){
        for (int b=1; b<=5; b++){
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
    
    for(int a=1; a<=5; a++){
        for (int b=1; b<=5; b++){
            total+=values[a][b];
        }
    }
    return total;
}

double getAverage(){
    for(int a=1; a<=4; a++){
        for (int b=1; b<=5; b++){
            total+=values[a][b];
        }
    }
    avg=total/20;
    return avg;
}

int getRowTotal(int row){
        for (int b=1; b<=5; b++){
            rowTotal+=values[row][b];
    }
    return rowTotal;
}

int getColumnTotal(int column){
    for(int a=1; a<=4;a++){
        columnTotal+=values[a][column];
    }
    return columnTotal;
}

int getHighestInRow(int row){
   highestValue= max({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
    return highestValue;
}


int getLowestInRow(int row){
    lowestValue = min({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
    return lowestValue ;
}

void showMenu(){
  //  for(int i =1; i<)
    cout<< "1: The total of all the values" <<endl;
    cout<<"2: The average of all values "<<endl;
    cout<<"3: The total value of row "<<endl;
    cout<<"4: The total value of column "<<endl;
    cout<<"5: The highest value of row "<<endl;
    cout<<"6: The lowest value of row "<<endl;
    cout<<"7: Exit."<<endl;
    cout<<"Please select a calculation for the 4x5 array matrix.";
    cin>>userInput;
    if(userInput >7){
        cout<<"Error. Number must be between 1-7. Retry: ";
        cin>>userInput;
    }
    
    switch(userInput){
        case 1: getTotal();
            cout<<"The total is: "<< total<<endl;
            showMenu();
          //  break;
        case 2: getAverage();
            cout<<"The average of all values is: "<<avg<<endl;
            break;
        case 3:
            cout<<"Which row would you like to calculate: ";
            cin>>row;
            getRowTotal(row);
            cout<<"The toal of row "<<row<< " is: "<<rowTotal<<endl;
            break;
        case 4:
            cout<<"Which column would you like to calculate: ";
            cin>>column;
            getColumnTotal(column);
            cout<<"The toal of column "<< column<<" is: "<<columnTotal<<endl;
            break;
        case 5:
            cout<<"Which row would you like to find the highest value in?";
            cin>>row;
            getHighestInRow(row);
            cout<<"The highest value in row "<<row<<" is: "<<highestValue<<endl;
            break;
        case 6:
            cout<<"Which row would you like to find the lowest value in?";
            cin>>row;
            getLowestInRow(row);
            cout<<"The lowest value in row "<<row<<" is: "<<lowestValue<<endl;
            break;
        case 7:
            cout<<"Goodbye."<<endl;
            break;
    
    
    }
}

//int getTotal(){
//    for(int a=1; a<=5; a++){
//        for (int b=1; b<=5; b++){
//            total+=values[a][b];
//        }
//    }
//    return total;
//}
//
//double getAverage(){
//    for(int a=1; a<=4; a++){
//        for (int b=1; b<=5; b++){
//            total+=values[a][b];
//        }
//    }
//    avg=total/20;
//    return avg;
//}
//
//int getRowTotal(int row){
//        for (int b=1; b<=5; b++){
//            rowTotal+=values[row][b];
//    }
//    return rowTotal;
//}
//
//int getColumnTotal(int column){
//    for(int a=1; a<=4;a++){
//        columnTotal+=values[a][column];
//    }
//    return columnTotal;
//}
//
//int getHighestInRow(int row){
//   highestValue= max({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
//    return highestValue;
//}
//
//
//int getLowestInRow(int row){
//    lowestValue = min({values[row][1],values[row][2],values[row][3],values[row][4],values[row][5], });
//    return lowestValue ;
//}

int main(){
   
    getValues();
    showMenu();
 

//    switch(userInput){
//        case 1: getTotal();
//            cout<<"The total is: "<< total<<endl;
//            showMenu();
//            break;
//        case 2: getAverage();
//            cout<<"The average of all values is: "<<avg<<endl;
//            break;
//        case 3:
//            cout<<"Which row would you like to calculate: ";
//            cin>>row;
//            getRowTotal(row);
//            cout<<"The toal of row "<<row<< " is: "<<rowTotal<<endl;
//            break;
//        case 4:
//            cout<<"Which column would you like to calculate: ";
//            cin>>column;
//            getColumnTotal(column);
//            cout<<"The toal of column "<< column<<" is: "<<columnTotal<<endl;
//            break;
//        case 5:
//            cout<<"Which row would you like to find the highest value in?";
//            cin>>row;
//            getHighestInRow(row);
//            cout<<"The highest value in row "<<row<<" is: "<<highestValue<<endl;
//            break;
//        case 6:
//            cout<<"Which row would you like to find the lowest value in?";
//            cin>>row;
//            getLowestInRow(row);
//            cout<<"The lowest value in row "<<row<<" is: "<<lowestValue<<endl;
//            break;
//        case 7:
//            cout<<"Goodbye."<<endl;
//            return 0;
//
//    }
}

