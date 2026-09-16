#include <iostream>

using namespace std;

int main()
{


    int n = 10;
    int v[n];

    for(int l=0; l<n; l++){
        cin >> v[l];
    }
    for(int i=0; i<n-1; i++){
        int minimo = i;
            for(int j=i+1; j<n; j++){
                if(v[j]<v[minimo]){
                minimo=j;
                }
            }
        int temp = v[i];
        v[i] = v[minimo];
        v[minimo] = temp;
    }



    for (int i = 0; i < n; i++) {
        cout << "Posicao [" << i << "]: " << v[i] << "\n";
    }

    return 0;
}
