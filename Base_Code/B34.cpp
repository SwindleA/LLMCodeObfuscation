#include <iostream>
using namespace std;
void add(int[5][5], int[5][5], int, int);
int display(int[5][5], int, int);

int main()
{
    int a[5][5], b[5][5], r1, c1, r2, c2;
    cout<<"\n Enter the number of rows for first matrix: ";
    cin>>r1;
    cout<<"\n Enter the number of columns for first matrix: ";
    cin>>c1;
    cout<<"\n Enter the number of rows for second matrix: ";
    cin>>r2;
    cout<<"\n Enter the number of columns for second matrix: ";
    cin>>c2;
    // Checking that the number of rows are equal and the number of columns are equal
    if (r1 != r2 || c1!=c2){
        return 0;
    }
        
    // Storing elements of first matrix.
    printf("\nEnter elements of first matrix \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>a[i][j];
        }
    }

    // Storing elements of second matrix.
    cout<<"\nEnter elements of second matrix\n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++){
            cin>>b[i][j];
        }
    }
    cout<<"\n display a\n";
    display(a, r1, c1);
    cout<<"\n display a\n";
    display(b, r2, c2);
    //calling the function to add elements of a and b. passing number of rows
    //and columns in both of them
    add(a, b, r1, c1);
    return 0;
}

void add(int a[5][5], int b[5][5], int row, int col){
    int c[5][5];
    //input 0 for all values of c, in order to remove
    //the garbage values assigned earlier
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            c[i][j]=0;
        }
    }
    //we apply the same formula as above
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //to display matrix
    cout<<"\n Matrix c after Addition is:\n";
    display(c, row, col);
}
int display(int c[5][5], int row, int col){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<c[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}