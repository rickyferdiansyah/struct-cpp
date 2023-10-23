#include <iostream>
using namespace std;
struct tabelprodi {
    int sppTetap, biayaPendukung, sppVariabel, danaPengembangan, totalRegistrasi;
};
void showBiaya(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "SPP Tetap : " << sppTetap << endl;
    cout << "Biaya Pendukung : " << biayaPendukung << endl;
    cout << "SPP Variabel : " << sppVariabel << endl;
    cout << "Dana Pengembangan : " << danaPengembangan << endl;
    cout << "Total Registrasi : " << sppTetap + biayaPendukung + sppVariabel + danaPengembangan << endl;
}
void prosesBiayaSem1(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "Biaya Semester 1" << endl;
    showBiaya(sppTetap, biayaPendukung, sppVariabel, danaPengembangan);
    cout << endl;
}
void prosesBiayaSem2s4(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "Biaya Semester 2 hingga 4" << endl;
    showBiaya(sppTetap, biayaPendukung, sppVariabel, danaPengembangan);
    cout << endl;
}
void prosesBiayaSem5se(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "Biaya Semester 5 dan seterusnya" << endl;
    showBiaya(sppTetap, biayaPendukung, sppVariabel, danaPengembangan);
    cout << endl;
}
void prosesBiayaSem2s6(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "Biaya Semester 2 hingga 6" << endl;
    showBiaya(sppTetap, biayaPendukung, sppVariabel, danaPengembangan);
    cout << endl;
}
void prosesBiayaSem7se(int sppTetap, int biayaPendukung, int sppVariabel, int danaPengembangan)
{
    cout << "Biaya Semester 5 dan seterusnya" << endl;
    showBiaya(sppTetap, biayaPendukung, sppVariabel, danaPengembangan);
    cout << endl;
}

void cekBiayaWNI(int noProdi){
    tabelprodi wnisemester1;
    tabelprodi wnisemester2s4;
    tabelprodi wnisemester5se;
    tabelprodi wnisemester2s6;
    tabelprodi wnisemester7se;
    if (noProdi == 1 || noProdi == 2){
        wnisemester1.sppTetap = 1500000;
        wnisemester1.biayaPendukung = 1400000;
        wnisemester1.sppVariabel = 3960000;
        wnisemester1.danaPengembangan = 2475000;
        wnisemester2s4.sppTetap = 1500000;
        wnisemester2s4.biayaPendukung = 0;
        wnisemester2s4.sppVariabel = 3960000;
        wnisemester2s4.danaPengembangan = 2475000;
        wnisemester5se.sppTetap = 1500000;
        wnisemester5se.biayaPendukung = 0;
        wnisemester5se.sppVariabel = 3240000;
        wnisemester5se.danaPengembangan = 0;

        prosesBiayaSem1(wnisemester1.sppTetap, wnisemester1.biayaPendukung, wnisemester1.sppVariabel, wnisemester1.danaPengembangan);
        prosesBiayaSem2s4(wnisemester2s4.sppTetap, wnisemester2s4.biayaPendukung, wnisemester2s4.sppVariabel, wnisemester2s4.danaPengembangan);
        prosesBiayaSem5se(wnisemester5se.sppTetap, wnisemester5se.biayaPendukung, wnisemester5se.sppVariabel, wnisemester5se.danaPengembangan);
    }
    else if (noProdi == 3 || noProdi == 4 || noProdi == 5 || noProdi == 6 || noProdi == 7 || noProdi == 8 || noProdi == 9)
    {
        wnisemester1.sppTetap = 1900000;
        wnisemester1.biayaPendukung = 1700000;
        wnisemester1.sppVariabel = 3960000;
        wnisemester1.danaPengembangan = 3000000;
        wnisemester2s6.sppTetap = 1900000;
        wnisemester2s6.biayaPendukung = 0;
        wnisemester2s6.sppVariabel = 3960000;
        wnisemester2s6.danaPengembangan = 3000000;
        wnisemester7se.sppTetap = 1900000;
        wnisemester7se.biayaPendukung = 0;
        wnisemester7se.sppVariabel = 1800000;
        wnisemester7se.danaPengembangan = 0;

        prosesBiayaSem1(wnisemester1.sppTetap, wnisemester1.biayaPendukung, wnisemester1.sppVariabel, wnisemester1.danaPengembangan);
        prosesBiayaSem2s6(wnisemester2s6.sppTetap, wnisemester2s6.biayaPendukung, wnisemester2s6.sppVariabel, wnisemester2s6.danaPengembangan);
        prosesBiayaSem7se(wnisemester7se.sppTetap, wnisemester7se.biayaPendukung, wnisemester7se.sppVariabel, wnisemester7se.danaPengembangan);
    }
    else if (noProdi == 10 || noProdi == 11)
    {
        wnisemester1.sppTetap = 2600000;
        wnisemester1.biayaPendukung = 1700000;
        wnisemester1.sppVariabel = 3960000;
        wnisemester1.danaPengembangan = 3250000;
        wnisemester2s6.sppTetap = 2600000;
        wnisemester2s6.biayaPendukung = 0;
        wnisemester2s6.sppVariabel = 3960000;
        wnisemester2s6.danaPengembangan = 3250000;
        wnisemester7se.sppTetap = 2600000;
        wnisemester7se.biayaPendukung = 0;
        wnisemester7se.sppVariabel = 1800000;
        wnisemester7se.danaPengembangan = 0;

        prosesBiayaSem1(wnisemester1.sppTetap, wnisemester1.biayaPendukung, wnisemester1.sppVariabel, wnisemester1.danaPengembangan);
        prosesBiayaSem2s6(wnisemester2s6.sppTetap, wnisemester2s6.biayaPendukung, wnisemester2s6.sppVariabel, wnisemester2s6.danaPengembangan);
        prosesBiayaSem7se(wnisemester7se.sppTetap, wnisemester7se.biayaPendukung, wnisemester7se.sppVariabel, wnisemester7se.danaPengembangan);
    }
    else if (noProdi == 12 || noProdi == 13 || noProdi == 14 || noProdi == 15)
    {
        wnisemester1.sppTetap = 2600000;
        wnisemester1.biayaPendukung = 1700000;
        wnisemester1.sppVariabel = 3960000;
        wnisemester1.danaPengembangan = 4800000;
        wnisemester2s6.sppTetap = 2600000;
        wnisemester2s6.biayaPendukung = 0;
        wnisemester2s6.sppVariabel = 3960000;
        wnisemester2s6.danaPengembangan = 4800000;
        wnisemester7se.sppTetap = 2600000;
        wnisemester7se.biayaPendukung = 0;
        wnisemester7se.sppVariabel = 1800000;
        wnisemester7se.danaPengembangan = 0;

        prosesBiayaSem1(wnisemester1.sppTetap, wnisemester1.biayaPendukung, wnisemester1.sppVariabel, wnisemester1.danaPengembangan);
        prosesBiayaSem2s6(wnisemester2s6.sppTetap, wnisemester2s6.biayaPendukung, wnisemester2s6.sppVariabel, wnisemester2s6.danaPengembangan);
        prosesBiayaSem7se(wnisemester7se.sppTetap, wnisemester7se.biayaPendukung, wnisemester7se.sppVariabel, wnisemester7se.danaPengembangan);
    }
    else if (noProdi == 16 || noProdi == 17 || noProdi == 18 || noProdi == 19)
    {
        wnisemester1.sppTetap = 6600000;
        wnisemester1.biayaPendukung = 3400000;
        wnisemester1.sppVariabel = 10120000;
        wnisemester1.danaPengembangan = 9600000;
        wnisemester2s6.sppTetap = 6600000;
        wnisemester2s6.biayaPendukung = 0;
        wnisemester2s6.sppVariabel = 10120000;
        wnisemester2s6.danaPengembangan = 9600000;
        wnisemester7se.sppTetap = 6600000;
        wnisemester7se.biayaPendukung = 0;
        wnisemester7se.sppVariabel = 4600000;
        wnisemester7se.danaPengembangan = 0;

        prosesBiayaSem1(wnisemester1.sppTetap, wnisemester1.biayaPendukung, wnisemester1.sppVariabel, wnisemester1.danaPengembangan);
        prosesBiayaSem2s6(wnisemester2s6.sppTetap, wnisemester2s6.biayaPendukung, wnisemester2s6.sppVariabel, wnisemester2s6.danaPengembangan);
        prosesBiayaSem7se(wnisemester7se.sppTetap, wnisemester7se.biayaPendukung, wnisemester7se.sppVariabel, wnisemester7se.danaPengembangan);
    }
}
void showBiayaWNA(int semester1, int semester2s6, int semester7se){
    cout << "Biaya Semester 1" << semester1 << endl;
    cout << "Biaya Semester 2 hingga 6" << semester2s6 << endl;
    cout << "Biaya Semester 7 dan seterusnya" << semester7se << endl;
}
void cekBiayaWNA(int noProdi)
{
    tabelprodi wnasemester1;
    tabelprodi wnasemester2s6;
    tabelprodi wnasemester7se;
    if (noProdi == 1 || noProdi == 2 || noProdi == 3 || noProdi == 4 || noProdi == 5 || noProdi == 6 || noProdi == 7)
    {
        wnasemester1.totalRegistrasi = 28280000;
        wnasemester2s6.totalRegistrasi = 26580000;
        wnasemester7se.totalRegistrasi = 11100000;
        showBiayaWNA(wnasemester1.totalRegistrasi, wnasemester2s6.totalRegistrasi, wnasemester7se.totalRegistrasi);
    }
    else if (noProdi == 8 || noProdi == 9)
    {
        wnasemester1.totalRegistrasi = 31130000;
        wnasemester2s6.totalRegistrasi = 29430000;
        wnasemester7se.totalRegistrasi = 13200000;
        showBiayaWNA(wnasemester1.totalRegistrasi, wnasemester2s6.totalRegistrasi, wnasemester7se.totalRegistrasi);
    }
    else if (noProdi == 10 || noProdi == 11 || noProdi == 12 || noProdi == 13)
    {
        wnasemester1.totalRegistrasi = 35780000;
        wnasemester2s6.totalRegistrasi = 34080000;
        wnasemester7se.totalRegistrasi = 13200000;
        showBiayaWNA(wnasemester1.totalRegistrasi, wnasemester2s6.totalRegistrasi, wnasemester7se.totalRegistrasi);
    }
    else if (noProdi == 14 || noProdi == 15 || noProdi == 16 || noProdi == 17)
    {
        wnasemester1.totalRegistrasi = 44580000;
        wnasemester2s6.totalRegistrasi = 39480000;
        wnasemester7se.totalRegistrasi = 16800000;
        showBiayaWNA(wnasemester1.totalRegistrasi, wnasemester2s6.totalRegistrasi, wnasemester7se.totalRegistrasi);
    }
}

int main(){
    int opsi;

    cout << "\t\t\t\t PENERIMAAN MAHASISWA BARU (PMB) 2024/2025" << endl;
    cout << "\n\nInformasi mengenai pembayaran tiap semester" << endl;
    cout << "WNI atau WNA?" << "\n01. WNI\n02. WNA" << endl;
    cout << ">> ";
    cin >> opsi;
    if (opsi == 1){
        cout << "Prodi Apa?" << endl;
        cout << "1. D3 Manajemen Informatika" << endl;
        cout << "2. D3 Teknik Informatika" << endl;
        cout << "3. S1 Akuntansi" << endl;
        cout << "4. S1 Ekonomi" << endl;
        cout << "5. S1 Kewirausahaan" << endl;
        cout << "6. S1 Hubungan Internasional" << endl;
        cout << "7. S1 Ilmu Pemerintahan" << endl;
        cout << "8. S1 Geografi" << endl;
        cout << "9. S1 Perencanaan Wilayah dan Kota" << endl;
        cout << "10. S1 Arsitektur" << endl;
        cout << "11. S1 Teknik Komputer" << endl;
        cout << "12. S1 Informatika" << endl;
        cout << "13. S1 Sistem Informasi" << endl;
        cout << "14. S1 Teknologi Informasi" << endl;
        cout << "15. S1 Ilmu Komunikasi" << endl;
        cout << "16. Bachelor of Informatics (BCI)" << endl;
        cout << "17. Bachelor of Information Systems (BCIS)" << endl;
        cout << "18. Bachelor of Information Technology (BCIT)" << endl;
        cout << "19. Bachelor of Communication Science (BCCS)" << endl;

        cout << ">>";
        cin >> opsi;
        cout << endl;
        cekBiayaWNI(opsi);

    }else if(opsi == 2){
        cout << "Prodi Apa?" << endl;
        cout << "1. S1 Akuntansi" << endl;
        cout << "2. S1 Ekonomi" << endl;
        cout << "3. S1 Kewirausahaan" << endl;
        cout << "4. S1 Hubungan Internasional" << endl;
        cout << "5. S1 Ilmu Pemerintahan" << endl;
        cout << "6. S1 Geografi" << endl;
        cout << "7. S1 Perencanaan Wilayah dan Kota" << endl;
        cout << "8. S1 Arsitektur" << endl;
        cout << "9. S1 Teknik Komputer" << endl;
        cout << "10. S1 Informatika" << endl;
        cout << "11. S1 Sistem Informasi" << endl;
        cout << "12. S1 Teknologi Informasi" << endl;
        cout << "13. S1 Ilmu Komunikasi" << endl;
        cout << "14. Bachelor of Informatics (BCI)" << endl;
        cout << "15. Bachelor of Information Systems (BCIS)" << endl;
        cout << "16. Bachelor of Information Technology (BCIT)" << endl;
        cout << "17. Bachelor of Communication Science (BCCS)" << endl;

        cout << ">>";
        cin >> opsi;
        cout << endl;
        cekBiayaWNA(opsi);
    }

    return 0;
}