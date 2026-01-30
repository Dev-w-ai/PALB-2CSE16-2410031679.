#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int result[n + m];
    int size = 0;

    
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < size; j++)
            if(result[j] == a[i])
                found = true;

        if(!found)
            result[size++] = a[i];
    }

    // Insert elements from b[]
    for(int i = 0; i < m; i++) {
        bool found = false;
        for(int j = 0; j < size; j++)
            if(result[j] == b[i])
                found = true;

        if(!found)
            result[size++] = b[i];
    }

    for(int i = 0; i < size; i++)
        cout << result[i] << " ";

    return 0;
}
