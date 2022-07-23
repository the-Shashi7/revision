#include <iostream>
using namespace std;

void space(int d)
    {
        for (int i = 0; i < d; i++)
        {
          cout<<"_";
    }

}
int f(int n, int d)
{
    cout << space(d) << "n=" <<n<< " begins"<<endl;
    if (n > 1)
    {
        f(n / 2, d + 1);
        cout<< space(d + 1) << "hi"<<endl;
        f(n / 2, d + 1);
    }
    cout<<space(d)<< "n=" << n << " ends"<<endl;
}

int main()
{   
    f(4,0);
}