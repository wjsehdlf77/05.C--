#include <iostream>

using namespace std;

int main()
{
    const int STUDENTS = 5;

    int scores[STUDENTS] ={
        100,200,300,400,500
    };
    int sum = 0;
    int i, average;

    // for(i = 0; i < STUDENTS; i++){
    //     cout << "student grade : ";
    //     cin >> scores[i];
    // }

    for(i = 0; i < STUDENTS; i++){
        sum += scores[i];
    }

    average = sum / STUDENTS;
    cout << "grade.avg = " << average << endl;
    return 0;
}