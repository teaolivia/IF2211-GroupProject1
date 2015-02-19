#ifndef INPUT_H
#define INPUT_H

#include <string>
using namespace std;

class Input{
	public:
		Input();
		virtual ~Input();
		void Setter(string _name, float _kWh, unsigned int _slot, unsigned _n_slot, unsigned int _release, unsigned int _deadline, unsigned int _priority);
		string Getname();
		void Setname(string val);
		float GetkWh();
		void SetkWh(float val);
		unsigned int Getslot();
		void Setslot(unsigned int val);
		unsigned int Getn_slot();
		void Setn_slot(unsigned int val);
		unsigned int Getrelease();
		void Setrelease(unsigned int val);
		unsigned int Getdeadline();
		void Setdeadline(unsigned int val);
		unsigned int Getpriority();
		void Setpriority(unsigned int val);

	private:
		string name;
		float kWh;
		unsigned int slot;
		unsigned int n_slot;
		unsigned int release;
		unsigned int deadline;
		unsigned int priority;
};

#endif // INPUT_H
