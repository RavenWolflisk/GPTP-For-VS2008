#pragma once
#include <SCBW/scbwdata.h>
#include <SCBW/enumerations.h>
#include <SCBW/api.h>

namespace hooks {

void updateButtonSetEx();			//00458BC0  updateButtonSetEx
void updateButtonSet_Sub458D50();	//00458D50  sub_458D50
void updateButtonSet();				//00458DE0  updateButtonSet
void updateCurrentButtonset();		//004599A0  updateCurrentButtonset

BUTTON_SET* getButtonSet(int index);

void injectButtonSetHooks();

} //hooks
