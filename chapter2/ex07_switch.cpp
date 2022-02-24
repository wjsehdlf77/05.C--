#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    
    cout << "number : ";
    cin >> number;

    switch(number){
        case 0:
        cout << "zero\n";
      
        case 1:
        cout << "one\n";
        
        case 2:
        cout << "two\n";
        
        default:
        cout << "many\n";
        break;
    }
    return 0;
}
//break가 없으면 스위치 값의 해당 케이스로 가서 거기서부터 아래로 출력