#include <ctime>
#include <iostream>
using namespace std;

    int FibRec(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        else
        {
            return FibRec(n - 1) + FibRec(n - 2);
        }
    }

    int main()
    {
       
        float seconds = 0;
        for (int l = 0; l < 11; l++) {
            clock_t start = clock();
            for (int j = 0; j < 100000; j++)
            {
                for (int i = 0; i < 11; i++)
                {
                    FibRec(i);

                }
                clock_t end = clock();
                seconds = (float)(end - start) / CLOCKS_PER_SEC;
              
            }
            
                 cout << l << " " << seconds << " seconds" << endl;

        }
    }