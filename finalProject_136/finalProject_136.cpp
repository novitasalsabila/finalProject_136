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

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}
	
};
class Pemrograman : public MataKuliah { //isi disini
public:
	void input() {
		cout << "Masukkan nilai presensi: " << endl;
		cout << "Masukkan nilai activity: " << endl;
		cout << "Masukkan nilai exercise: " << endl;
		cout << "Masukkan nilai tugas akhir: ";
		
	}

	float hitungNilaiAkhir() {
		float bobotPresensi = 0.1;
		float bobotActivity = 0.2;
		float bobotExercise = 0.3;
		float bobotTugasAkhir = 0.4;

		return (getPresensi() * bobotPresensi) + (getActivity() * bobotActivity) + (getExercise() * bobotExercise) + (getTugasAkhir() * bobotTugasAkhir);
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir > 75) {
			cout << "Anda LULUS dengan nilai akhir " << nilaiAkhir << endl;
		}
		else {
			cout << "Anda TIDAK LULUS dengan nilai akhir " << nilaiAkhir << endl;
		}
	}
};
int main() { //isi disini

	while (true) {
		Pemrograman matkul;
		matkul.input();
		matkul.cekKelulusan();

		char pilihan;
		cout << "Apakah Anda ingin mengulang? (y/n): ";
		cin >> pilihan;

		if (pilihan != 'y' && pilihan != 'Y') {
			break;
		}
		cout << endl;
	}

	return 0;
}

