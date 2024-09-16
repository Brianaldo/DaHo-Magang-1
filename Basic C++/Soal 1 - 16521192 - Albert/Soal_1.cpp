# include <iostream>
# include <string>

using namespace std;

int main(){
    int N;

    cout << "Input: " << endl;
    cin >> N;

    string nama[N];
    int usia[N];

    for (int i = 0; i < N; i++){
        cin >> nama[i] >> usia[i];
    }

    cout << "\n\nOutput:" << endl;
	
	int IMax,Temp_usia;
	string Temp_nama;
    for (int i = 0; i < N-1; i++){
        IMax = i;
        for (int j = i+1; j < N; j++){
            if (usia[IMax] < usia[j]){
                IMax = j;
            }
            else if ((usia[IMax] == usia[j]) and (nama[IMax] > nama[j])){
            	IMax = j;
			}
        }
        Temp_nama = nama[IMax];
        Temp_usia = usia[IMax];

        nama[IMax] = nama[i];
        usia[IMax] = usia[i];

        nama[i] = Temp_nama;
        usia[i] = Temp_usia;
    }

    for (int i = 0; i < N; i++){
        cout << nama[i] << " "<< usia[i] << endl;
    }
}