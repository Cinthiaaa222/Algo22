#include <iostream>
using namespace std;

int main()
{
    float f,c;
    
    cout<<"Masukkan Suhu Fahrenheit: ";cin>>f;
    c = (f-32)*5/9;
    
    cout<<"Hasil Celciusnya Adalah: "<<c;
    
    return 0;
}
