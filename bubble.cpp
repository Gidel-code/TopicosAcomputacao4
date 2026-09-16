#include <iostream>

using namespace std;

int main()
{


    int n = 10;
    int v[n];

    for(int l=0; l<n; l++){
        cin >> v[l];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            if(v[j]>v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }



    for (int i = 0; i < n; i++) {
        cout << "Posicao [" << i << "]: " << v[i] << "\n";
    }

    return 0;
}
