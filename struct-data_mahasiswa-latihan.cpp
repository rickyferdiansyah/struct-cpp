#include <iostream>
#include <string>
using namespace std;

string cekProdi(string kodeProdi){
	string prodi;
	if (kodeProdi == "12") {
		prodi = "Sistem Informasi";
	}

	return prodi;
}
string cekFakultas(string kodeProdi){
	string fakultas;
	if (kodeProdi == "12"){
		fakultas = "Ilmu Komputer";
	}
	return fakultas;
}

int main(){
	//declare struct
	struct {
		string nim, nama, kodeProdi, prodi, fakultas, angkatan, semester;
		double ipk;
	}mahasiswa;
	
	//akses anggota struct
	cout << "NIM : ";
	cin >> mahasiswa.nim;
	mahasiswa.angkatan = mahasiswa.nim.substr(0,2);
	mahasiswa.kodeProdi = mahasiswa.nim.substr(3, 2);
	mahasiswa.prodi = cekProdi(mahasiswa.kodeProdi);
	mahasiswa.fakultas = cekFakultas(mahasiswa.kodeProdi);

	cout << "Nama : ";
	cin.ignore();
	getline(cin, mahasiswa.nama);

	cout << "Semester : ";
	cin >> mahasiswa.semester;
	
	cout << "IPK : ";
	cin >> mahasiswa.ipk;
	
	//output
	cout << endl;
	cout << "NIM : " << mahasiswa.nim << endl;
	cout << "Nama : " << mahasiswa.nama << endl;
	cout << "Kode Program Studi : " << mahasiswa.kodeProdi << endl;
	cout << "Program Studi : " << mahasiswa.prodi << endl;
	cout << "Fakultas : " << mahasiswa.fakultas << endl;
	cout << "Tahun Angkatan : " << "20" << mahasiswa.angkatan << endl;
	cout << "Semester : " << mahasiswa.semester << endl;
	cout << "IPK : " << mahasiswa.ipk << endl;
	



	string end;
	cin.ignore();
	getline(cin, end);
	return 0;
}
