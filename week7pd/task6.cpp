#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void calculatepatients(int days);

main()
{
    int days, patients;

    cout << "Enter the number of days : ";
    cin >> days;

    calculatepatients(days);
}

void calculatepatients(int days)
{
    int patients, doctors = 7;
    int treat = 0, untreat = 0;

    for (int i = 1; i <= days; i++)
    {
        cout << "Enter patients : ";
        cin >> patients;

        if (i % 3 == 0)
        {
            doctors = doctors + 1;
        }
        if (patients <= doctors)
        {
            treat = treat + patients;
        }
        else if (patients > doctors)
        {
            treat = treat + doctors;
            untreat = untreat + (patients - doctors);
        }
    }

    cout << " treated " << treat << endl;
    cout << " Untreated " << untreat;
}

// cout<<" Treated patients are : "<<treat<<endl;
//     cout<<" Untreated patients are : "<<untreat<<endl;
