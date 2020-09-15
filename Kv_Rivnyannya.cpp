#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
void main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    float x = 0.0;
    float x1 = 0.0, x2 = 0.0;
    int d = 0;
    float Im = 0.0;

   
    cout << "Programa dlya vurishennya kvadratnogo rivnyannya ax^+bx+c=0.\n";
    cout << "Vvedit' chislo a: \n";
    cin >> a;
    cout << "Vvedit' chislo b: \n";
    cin >> b;
    cout << "Vvedit' chislo c: \n";
    cin >> c;

    d = ((b * b) - (4 * a * c));
        

    if (a == 0)
    {
        cout << "A - ne moje dorivnjuvatu - 0!!! Pomulka!!!!" << endl;
        x = -b + (2 * a);
        cout << "Ce linijne rivnyannya..." << x << endl;        
    }
    else if (d > 0)
    {
        cout << "Rivnyannya mae dva koreni" << endl;

        x1 = (- b + sqrt(d)) / (2*a);
        cout << "Pershuj korin': " << x1 << endl;
        x2 = (- b - sqrt(d)) / (2*a);
        cout << "Druguj korin' " << x2 << endl;

    }
    else if (d == 0)
    {
        cout << "Rivnyannya mae dva odnakovi koreni." << endl;
        x1 = x2 = (- b - sqrt(d)) / (2 * a);
        cout << "Pershuj korin' - x1 : " << x1 << endl;
        cout << "Druguj korin'  - x2 : " << x2 << endl;
    }
    else if (d < 0)
        {
            cout << "Rivnyannya ne mae dijsnuh koreniv" << endl;
            d = -1 * d;
            x1 = (-1*b)+ sqrt(d) / (2 * a);
            x2 = (-1 * b) - sqrt(d) / (2 * a);
            
            cout << "Pershuj korin' - x1 : " << x1 << endl;
            cout << "Druguj korin'  - x2 : " << x2 << endl;            
        }
    
   
   






































	system("pause");

}
