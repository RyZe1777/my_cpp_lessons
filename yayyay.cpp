#include <iostream>
#include <vector>

using namespace std;

void BubleSort(vector<string>& names){
    for(int x = 0; x < names.size(); x++){
        for(int z = 0; z < names.size() - 1 - x; z++){
            if(names[z] > names[z+1]){
                swap(names[z], names[z+1]);
            }
        }
    }
}

int main(){
    int n;

<<<<<<< HEAD
    cout << "digite o numero de nomes: ";
    cin >> n;

    vector<string> names(n);

    cout << "digite " << n << " nomes " <<endl;
        for(int i = 0; i < n; i++){
            cin >> names[i];
        }

    BubleSort(names);

    cout << "a ordem correta é: " <<endl;
=======
    cout << "quantos nomes deseja ";
    cin >> n;

    vector <string> names(n);

    cout << "digite " << n << " nomes" <<endl;
        for(int i = 0; i < n; i++){
            cin >> names[i];
        }
    
    BubleSort(names);

    cout << "a ordem certa é: " <<endl;
>>>>>>> 65a1dfbc2c03c990e5d22516e3f97b851a51487d
        for(const string& nomes : names){
            cout << nomes << endl;
        }
    
    return 0;
}