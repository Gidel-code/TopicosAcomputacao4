#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int x;


    while(cin >> x){
        v.push_back(x);
    }

    int n = v.size();
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
