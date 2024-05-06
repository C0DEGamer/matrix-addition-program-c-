#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

    int matrix1[50][50],matrix2[50][50],matrix3[50][50],i,j,row,column;

   system("COLOR 2");

    cout<<"Enter the Number of Rows"<<endl;
    cin>>row;

    cout<<"Enter The Number of Columns"<<endl;
    cin>>column;

    cout<<"Enter The First Matrix"<<endl;

    //nested loop for geting first matrix

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){

            cin>>matrix1[i][j];
        }
    }



    cout<<"Enter The Second Matrix"<<endl;

    //nested loop for geting second matrix

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){

            cin>>matrix2[i][j];
        }
    }


    //nested loop for addition

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }


    cout<<"The Result is:"<<endl;
    cout<<"\n";

    //nested loop for print the output


    for(i=0;i<row;i++){
        for(j=0;j<column;j++){


     cout<<matrix3[i][j]<<"\t";

        }
        cout<<"\n";
    }

    return 0;

}
