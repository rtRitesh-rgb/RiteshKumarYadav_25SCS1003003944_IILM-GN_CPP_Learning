#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;

    cout<< "******** Temprature Conversion ********";
    cout<< "F = fahrenheit\n";
    cout << " C = celsius\n";
    cout << "What unit would you like to convert:";
    cin >>unit;

    if( unit == 'F' || unit == 'f'){
            cout<<"Enter the temprature in celsius:";
            cin >> temp;

            temp = (1.8 * temp) + 32.0;
            cout << "Temprature is:" << temp << "F\n";
    }
    else if( unit == 'C' || unit == 'c' ){
        cout<<"Enter the temprature in Fahrenheit:";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temprature is:" << temp << "C\n";

    }
    else{
        cout<<"Enter valid output in between c or f \n";
    }

    

    cout<< "************************";

    return 0;
    

}