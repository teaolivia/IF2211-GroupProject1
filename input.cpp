// File berisi input berupa alat listrik beserta besaran dayanya (dalam kWh)

#include "input.h"

// ctor
input::input(){
	
}

// dtor
input::~input(){
	
}

// setter input barang
void input::Setter(string _name, float _kWh, unsigned int _slot, unsigned _n_slot, unsigned int _release, unsigned int _deadline, unsigned int _priority){
	name = _name;
	kWh = _kWh;
	slot = _slot;
	n_slot = _n_slot;
	r = _release;
	d = _deadline;
	p = _priority;
}

// getter nama barang input
string input::GetName(){
	return name;
}

// setter nama barang input
void input::SetName(string val){
	name = val;
}

// getter besar daya listrik per kWh
float input::GetkWh(){
	return kWh;
}
// setter besar daya listrik per kWh
void input::SetkWh(float val){
	kWh = val;
}
// getter slot waktu pemakaian listrik
unsigned int input::GetSlot(){
	return slot;
}
// setter slot waktu pemakaian listrik
void input::SetSlot(unsigned int val){
	slot = val;
}
unsigned int input::Getn_slot(){
	return n_slot;
}
void input::Setn_slot(unsigned int val){
	n_slot = val;
}
unsigned int input::Getrelease(){
	return r;
}
void input::SetRelease(){
	r = val;
}

unsigned int input::Getn_slot(){
	return n_slot;
}
