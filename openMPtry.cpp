# include <cstdlib>
# include <iostream>
# include <cmath>
# include <ctime>
# include <omp.h>

using namespace std;

int main ()
{
#pragma omp parallel
    {
    #pragma omp critical
        {
            cout << "bonjour depuis thread " << omp_get_thread_num() << endl;
        }
    }
return 0;
}
