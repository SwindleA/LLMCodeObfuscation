#include <iostream>
using namespace std;

int main()
{
    int OriginalIdNumber = 5, New_id_Number = 10, temporaryidnumber;

    cout << "Before: " << endl;
    cout << "a = " << OriginalIdNumber << ", b = " << New_id_Number << endl;

    temporaryidnumber = OriginalIdNumber;
    OriginalIdNumber = New_id_Number;
    New_id_Number = temporaryidnumber;

    cout << "\nAfter: " << endl;
    cout << "a = " << OriginalIdNumber << ", b = " << New_id_Number << endl;

    return 0;
}