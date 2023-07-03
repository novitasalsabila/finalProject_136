#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { 
		return 0; 
	}
	virtual void cekKelulusan() 
	{ 
		return ; 
	}
	virtual void input() 
	{ 
		return ; 
	}
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	
};
class Pemrograman : public MataKuliah { //isi disini
public:
	string nilai;
	void input() {
		cout << "Masukan nilai presensi:" << endl;
		cout << "Masukkan nilai Activity:" << endl;
		cout << "Masukkan nilai Exercise:" << endl;
		cout << "Masukkan nilai Tugas Akhir:";
	}
};
int main() { //isi disini

	MataKuliah* matkul;
	while (true)
	{

	}
	void setPresensi();

	cout << "Masukan nilai presensi: 90" << endl;
	cout << "Masukkan nilai Activity: 80" << endl;
	cout << "Masukkan nilai Exercise: 60" << endl;
	cout << "Masukkan nilai Tugas Akhir:65";
	void input();


}// MAAF SAYA TADI TIDAK MEMBACA SOAL PERINTAHNYA(TIDAK SADAR), TETAPI LANGSUNG MENGIKUTI PROGRAMNYA SAJA.....MAKANYA TADI BINGUNG....DAN SAYA BARU SADAR SETELAH INTERVIEW


