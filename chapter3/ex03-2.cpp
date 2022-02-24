#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;


    for (int  i : arr)
    {
        i *= 2;
    }
    cout << endl;

    for (auto & i : arr)      //그냥 하는 것보다 참조해서 하는 것이 복사하는 시간을 줄여서 더 빠르다
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}