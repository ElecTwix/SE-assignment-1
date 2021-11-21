// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <math.h>
#include <cstdio>
using namespace std;

int main()
{

    int x, n;
    int a, b, step = 0;
    double y = 0;
    double mlt = 1;
    double sum = 0;


    cout << "Input a=";
    cin >> a;
    cout << "Input b=";
    cin >> b;
    cout << "Input step=";
    cin >> step;
    cout << "Input n>=4, n=";
    cin >> n;
    x = a;



    while (x < b)
    {
        y = 0;
    
            if (x < 0)
            {
                for (int i = 2; i <= n - 2; i++)
                {
                    y += pow((x + i), 2);
                }
            }
            else if (x >= 0)
            {
                for (int i = 0; i <= (n-1); i++)
                {
                    mlt = 1;
                    for (int j= 1; j <= n; j++)
                    {
                        mlt = mlt * (x + i) / ( i + j );
                       //cout << "mlt test= " << mlt << endl;

                    }

                    if (mlt > 0)
                    {
                        //cout << "sum= " << sum << "\n mlt=" << mlt << endl;
                        sum = sum + mlt;
                    }

                   
                    
                }

                y = sum;
            }

            cout << "x= " << x << "; " << "y= " << y << endl;
 

        x = x + step;
    }
    system("pause");
    return 0;
}

