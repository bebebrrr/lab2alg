#include <chrono>
#include <iostream>
using namespace std;
int main()
{
    int const n=11;
    double seconds = 0;
    for (int l = 0; l < n; l++)
    {
        clock_t now = clock();

        for (int j = 0; j < 100000; j++)
        {
            double f[n];
            f[0] = 0;
            f[1] = 1;
            //cout << "0." << f[0] << endl << "1." << f[1] << endl;
            for (int i = 2; i < n; i++)
            {

                f[i] = f[i - 1] + f[i - 2];

                //cout << i << "." << f[i] << endl;
            }
            clock_t end = clock();
            seconds = (double)(end - now) / CLOCKS_PER_SEC;
        }
        cout << endl;
        

            cout << l << ". " << seconds;
            
            cout << endl;

    }
}
