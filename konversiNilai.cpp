#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size, isi_nilai;
    string isi_matkul;

    cout << "Masukkan banyak nilai yang akan dikonversi: ";
    cin >> size;
    cout << endl;

    int nilai_angka[size];
    string mata_kuliah[size], nilai_huruf[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Masukkan nama mata kuliah ke-" << i + 1 << ": ";
        cin >> isi_matkul;
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> isi_nilai;
        nilai_angka[i] = isi_nilai;
        mata_kuliah[i] = isi_matkul;
    }

    cout << endl;

    for (int j = 0; j < size; j++)
    {
        if (nilai_angka[j] >= 90 && nilai_angka[j] <= 100)
        {
            nilai_huruf[j] = 'A';
        }
        else if (nilai_angka[j] >= 80 && nilai_angka[j] <= 89)
        {
            nilai_huruf[j] = 'B';
        }
        else if (nilai_angka[j] >= 70 && nilai_angka[j] <= 79)
        {
            nilai_huruf[j] = 'C';
        }
        else if (nilai_angka[j] >= 60 && nilai_angka[j] <= 69)
        {
            nilai_huruf[j] = 'D';
        }
        else if (nilai_angka[j] <= 59)
        {
            nilai_huruf[j] = 'E';
        }
        else
        {
            nilai_huruf[j] = "Input nilai tidak sesuai.";
        }
    }

    cout << "------------NILAI AKHIR------------" << endl;

    for (int k = 0; k < size; k++)
    {

        cout << "Mata Kuliah: " << mata_kuliah[k] << endl;
        cout << "Nilai Akhir: " << nilai_huruf[k] << endl;
    }

    return 0;
}