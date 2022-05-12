# include <iostream>

using namespace std;
int fibo(int N){
    if (N <= 2){
        return 1;
    }
    else{
        return fibo(N-1) + fibo(N-2);
    }
}

int main(){
    int N;
    int i = 1; // input sebanyak i kali 

    cout << "Input:" << endl;
    cin >> N;
    while (N < 1){
        cin >> N;
        i++;
    }

    cout << "\nOutput:" << endl;

    // proses kasus N < 1
    if (i > 1){
        for (int j = 0; j < i-1; j++){
            cout << "Input angka positif" << endl;
        }
    }

    // fibonacci
    for (int j = 1; j < N+1; j++){
        cout << fibo(j) << " ";
    }
}