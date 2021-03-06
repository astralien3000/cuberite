
// EnchantingWindow.h

// Representing the UI window for the enchanting block





#pragma once

#include "Window.h"





class cEnchantingWindow:
	public cWindow
{
	using Super = cWindow;

public:

	cEnchantingWindow(Vector3i a_BlockPos);

	virtual void SetProperty(short a_Property, short a_Value, cPlayer & a_Player) override;

	virtual void SetProperty(short a_Property, short a_Value) override;

	/** Return the value of a property */
	short GetPropertyValue(short a_Property);

	virtual void DistributeStack(cItem & a_ItemStack, int a_Slot, cPlayer & a_Player, cSlotArea * a_ClickedArea, bool a_ShouldApply) override;

	cSlotArea * m_SlotArea;

protected:
	short m_PropertyValue[3];
	Vector3i m_BlockPos;
};




