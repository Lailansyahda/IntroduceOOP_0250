#include <iostream>
using namespace std;

class planet{
    private :
        float gravitasi;
// batas private
    public :
        string nama;
        float diameter;

        void displaydata(){
            cout << "gravitasiku " << gravitasi << endl;
            
        }
        void inputdata(){
            cout << "input nama : ";
            cin >> nama;
            cout << "ukuranku : ";
            cin >> diameter;
            cout << "gravitasiku : ";
            cin >> gravitasi;
        }
}; // batas public

int main()
{
   planet venus;
   venus.inputdata();
   cout << "namanya adalah " << venus.nama <<  endl;
   cout << "diameternya adalah " << venus.diameter << endl;

   venus.displaydata();
}