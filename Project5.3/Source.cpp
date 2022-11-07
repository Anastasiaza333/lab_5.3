#include <iostream> 
#include <cmath> 
using namespace std;
double s(const double x);
int main()
{
    double rp, rk, z, r;
    int n;
    cout << "rp = "; cin >> rp;
    cout << "rk = "; cin >> rk;
    cout << "n = "; cin >> n;
    double dr = (rk - rp) / n;

    r = rp;

    cout << "--------------------------------------------------------------" << endl;
    cout << "| \t r" << "\t|  " << "\t z" << "\t|" << endl;

    while (r <= rk)
    {
        z = s(sqrt(r) + 1) - pow(s(sqrt(r) - 1), 2);
        cout << "--------------------------------------------------------------" << endl;
        cout << "| " << "\t " << r << "\t|  " << "\t\t" << z << "\t\t" << "\t|" << endl;

        r += dr;
    }
    cout << "--------------------------------------------------------------" << endl;
    return 0;
}

double s(const double x)
{
    if (abs(x) >= 1)
        return (1 + x * x + sqrt(abs(sin(x * 1.)))) / (sin(2. * x * x) * sin(2. * x * x) + 1);
    else
    {
        double S1 = 0;
        int i = 0;
        double a1 = 1;
        S1 = a1;
        do
        {
            i++;
            double R1 =x/i;
            a1 *= R1;
            S1 += a1;
        } while (i < 5);


        double S2 = 0;
        int k = 1;
        double a2 = 1;
        S2 = a2;
        do
        {
            k++;
            double R2 = x/k;
            a2 *= R2;
            S2 += a2;
        } while (k < 6);

        return S1 + S2;

    }
}
