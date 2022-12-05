# include <iostream>
# include <math.h>
using namespace std;

int main(){
int a, b, n;
double step = 0;
double y = 0;
    do{
        cout << "Please input a and b. Remember that a must be less than b. Input a= ";
        while (!(cin >> a) || (cin.peek() != '\n')){
        cin.clear();
        while (cin.get() != '\n');
        cout << "a must be a number. Input a again: ";
        }

        cout << "Input b= ";
        while (!(cin >> b) || (cin.peek() != '\n')){
        cin.clear();
        while (cin.get() != '\n');
        cout << "b must be a number. Input b again: ";
        }
    } while (a > b);

    do{
        cout << "Input step > 0, step= ";
        while (!(cin >> step) || (cin.peek() != '\n')){
        cin.clear();
        while (cin.get() != '\n');
        cout << "step must be a number. Input step again: ";
        }
    } while (!(step > 0));

    do{
        cout << "Input n>1, n= ";
        while (!(cin >> n) || (cin.peek() != '\n')){
        cin.clear();
        while (cin.get() != '\n');
        cout << "n must be a whole number. Input n again: ";
        }
    } while (!(n > 1));

    for (double x = a; x <= b; x += step){
        if (x<=0)
        {
            double y = 0;
            for (int i = 0; i<=n; i++){
                y += pow((x-i), 2);
            }
            cout << "x= " << x << " y= " << y << endl;
        }
        else
        {
        double y = 1;
        for (int i = 1; i<=n; i++)
        {
            for (int j = 0; j<=(n-1); j++)
            {
                y *= x - i - j;
            }
        }
        cout << "x= "<< x << " y= " << y << endl;
        }
    }

    return 0;
}