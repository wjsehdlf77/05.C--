#include <iostream>

using namespace std;

int hour = 14;

class Time
{
protected:
    int hour;
    int minute;

// 생성자
public:
    // Time() {
    //     hour = 0;
    //     minute = 0;
    // }
    //변수의 해석 순서 : 지역변수 -> 멤버 변수 -> 전역변수
    Time(int hour = 0, int minute = 0) : hour(hour), minute(minute) {    //멤버 초기화 리스트 멤버변수(상수 or 지역변수) 고정! 생성자에서만 사용 할 수 있다
        //this : 현재 인스턴스에 대한 포인터(파인썬의 self와 같은 역할)

        // this->hour = hour;
        // this->minute = minute;
        //self.hour = hour

        cout << "global hour : " << ::hour << endl;
        // ::(스코프) : 전역변수로(함수도 마찬가지다)
    }
    ~Time() //소멸자 인스턴스가 사라질때 자동으로 호출 없으면 c++내부에서 알아서 만듬
    {
        cout << "destructor call" << endl;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }

};