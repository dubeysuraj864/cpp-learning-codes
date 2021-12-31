#include <iostream>

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (a > b && a > c && a > d)
    {
        cout << a << endl;
    }
    else if (b > a && b > c && b > d)
    {
        cout << b << endl;
    }
    else if (c > a && c > b && c > d)
    {
        cout << c << endl;
    }
    else (d > a && d > b && d > c)
    {
        cout << d << endl;
    }

}

return 0;
}