#include "Slot.h"

Slot::Slot()
{
	int i;
	for (i=0;i<NSlot;i++)
	{
		Status[i]=0;
	}
}

Slot::~Slot()
{
	
}
