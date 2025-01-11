#include <iostream>
#include <string>
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
    
    cout << "quantos nomes? ";
    cin >> n;
    
    vector <string> names(n);
    
    cout << "digite " << n << " nomes" <<endl;
        for(int i = 0; i < n; i++){
            cin >> names[i];
        }
        
    BubleSort(names);
    
    cout << "a ordem correta é" <<endl;
        for(const string& names : names){
            cout << names << endl;
        }
    return 0;
    
}
