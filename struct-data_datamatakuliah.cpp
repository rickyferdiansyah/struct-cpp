#include <iostream>
#include <iomanip>

using namespace std;

//deklarasi struct
struct matakuliah {
    string kodeMk, namaMk;
    int sks, gradeNumber;
    char semester, gradeLetter;
};
int cekGrade(char gradeLetter){
    int gradeNumber;
    if (gradeLetter == 'A') 
        gradeNumber = 4;
    else if (gradeLetter == 'B')
        gradeNumber = 3;
    else if (gradeLetter == 'C')
        gradeNumber = 2;
    else if (gradeLetter == 'D')
        gradeNumber = 1;
    else if (gradeLetter == 'E')
        gradeNumber = 0;
    return gradeNumber;
}
double hitungIPK(double mk1Grade, double mk1sks, double mk2Grade, double mk2sks, double mk3Grade, double mk3sks, double totalSks){
    double ipk;
    ipk = ((mk1Grade*mk1sks) + (mk2Grade*mk2sks) + (mk3Grade*mk3sks))/totalSks;


    return ipk;
}

int main(){
    //buat struct matakuliah dan menyimpan pada matkul1
    
    //matkul1
    matakuliah matkul1;
    //akses member struct
    matkul1.kodeMk = "SI025";
    matkul1.namaMk = "Struktur Data";
    matkul1.sks = 4;
    matkul1.semester = '3';
    matkul1.gradeLetter = 'A';
    matkul1.gradeNumber = cekGrade(matkul1.gradeLetter);

    // matkul2
    matakuliah matkul2;
    // akses member struct
    matkul2.kodeMk = "SI085";
    matkul2.namaMk = "Bahasa Pemrograman II";
    matkul2.sks = 4;
    matkul2.semester = '3';
    matkul2.gradeLetter = 'A';
    matkul2.gradeNumber = cekGrade(matkul2.gradeLetter);

    // matkul3
    matakuliah matkul3;
    // akses member struct
    matkul3.kodeMk = "SI087";
    matkul3.namaMk = "Pemrograman Web Lanjut";
    matkul3.sks = 4;
    matkul3.semester = '3';
    matkul3.gradeLetter = 'B';
    matkul3.gradeNumber = cekGrade(matkul3.gradeLetter);

    // ------------------------------------------OUTPUT ZONE-------------------------------------------------------

    //output matkul 1
    cout << "\nData Mata Kuliah 1" << endl;
    cout << "Kode MK \t: " << matkul1.kodeMk << endl;
    cout << "Nama MK \t: " << matkul1.namaMk << endl;
    cout << "SKS \t\t: " << matkul1.sks << endl;
    cout << "Semester \t: " << matkul1.semester << endl;
    cout << "Grade \t\t: " << matkul1.gradeLetter << endl;
    // cout << "Nilai \t\t: " << matkul1.gradeNumber << endl;

    // output matkul 2
    cout << "\nData Mata Kuliah 2" << endl;
    cout << "Kode MK \t: " << matkul2.kodeMk << endl;
    cout << "Nama MK \t: " << matkul2.namaMk << endl;
    cout << "SKS \t\t: " << matkul2.sks << endl;
    cout << "Semester \t: " << matkul2.semester << endl;
    cout << "Grade \t\t: " << matkul2.gradeLetter << endl;
    // cout << "Nilai \t\t: " << matkul2.gradeNumber << endl;

    // output matkul 3
    cout << "\nData Mata Kuliah 3" << endl;
    cout << "Kode MK \t: " << matkul3.kodeMk << endl;
    cout << "Nama MK \t: " << matkul3.namaMk << endl;
    cout << "SKS \t\t: " << matkul3.sks << endl;
    cout << "Semester \t: " << matkul3.semester << endl;
    cout << "Grade \t\t: " << matkul3.gradeLetter << endl;
    // cout << "Nilai \t\t: " << matkul3.gradeNumber << endl;


    int totalSks = matkul1.sks + matkul2.sks + matkul3.sks;
    double ipk = hitungIPK(matkul1.gradeNumber, matkul1.sks, matkul2.gradeNumber, matkul2.sks, matkul3.gradeNumber, matkul3.sks, totalSks);
    cout << "\n\nIPK \t\t: " << setprecision(3) << ipk;

    string end;
    cin.ignore();
    getline(cin, end);
    return 0;
}