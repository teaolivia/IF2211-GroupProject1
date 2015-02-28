// File : Greedy.h
#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Greedy
{
	// constructor, destructor
	Greedy(void);
	~Greedy(void);

	// atribut

	char * nama; // Nama greedy
	int release; // release time
	int deadline; // release deadline
/*	
	char barang[]; // array kosong berisi barang yang akan dibaca melalui teks
	float kWh[]; // array kosong berisi besar daya yang akan dibaca melalui teks
	int on[]; // array kosong untuk menyimpan waktu menyala 
	int off[]; // array kosong untuk menyimpan waktu mati
	int priority; // kepentingan alat
	int NSlot[]; // array kosong untuk menyimpan slot yang kosong
*/
	// method
	void InitkWh(); // inisiasi barang listrik
	void GreedyMoney(); // Algoritma Greedy yang digunakan untuk mencari tarif terkecil
	void GreedyTime(); // Algoritma Greedy yang digunakan untuk mencari waktu termurah
	void GreedyPriority(); // Algoritma Greedy yang digunakan untuk menentukan prioritas pemakaian alat
	void SearchSlot(); // pencarian slot pada smart grid
	void MergeTask(); // menyatukan Task dengan diagram

}
