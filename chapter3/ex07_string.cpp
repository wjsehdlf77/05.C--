#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, addr;

    cout << "name : ";
    cin >> s1;  //단어 하나 입력 --> 단어의 구분은 공백문자(space, enter, tab)
    cin.ignore();   //엔터키 제거

    cout << "addr : ";
    getline(cin, addr); //엔터 칠때까지의 문자열을 입력
    // cin >> addr;

    cout<< addr << "'s " << s1 << " Welocome!" << endl;
    return 0;
}