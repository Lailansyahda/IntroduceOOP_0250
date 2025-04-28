#include <iostream>
using namespace std;

class planet{
    private :
        float gravitasi;
    public :
        string nama;
        float diameter;

        void displaydata(){
            cout << "halo aku planet " << nama << ", ukuranku " << diameter << ", gravitasiku " << gravitasi << endl;
            
        }
        void inputdata(){
            cout << "input nama : ";
            cin >> nama;
            cout << "ukuranku : ";
            cin >> diameter;
            cout << "gravitasiku : ";
            cin >> gravitasi;
        }
};

int main()
{
    
}