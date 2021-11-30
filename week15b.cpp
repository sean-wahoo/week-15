// Sean Reichel
// CIS 1202 501
// November 30 2021

#include <iostream>
#include <cmath>

using namespace std;

int half(int i)
{
    return round((static_cast<float>(i) / 2));
}
template <typename T> // after using javascript for so long this
                      // almost feels like it negates the fact that
                      // c++ is strongly typed
T half(T i)
{
    return i / 2;
}

int main()
{
    cout << half((int)2) << endl;
    cout << half((double)3.8) << endl;
    cout << half((int)5) << endl;
    cout << half((float)5.2f) << endl;
}