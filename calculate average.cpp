#include<iostream>
using namespace std;
main()
{
    int avg,eng,urdu,math;
    cout << "Enter the number of each subject";
    cin >> eng >>urdu >> math;
    avg = (eng+urdu+math)/3;
    cout << "Average= " << avg;
    return 0;
}