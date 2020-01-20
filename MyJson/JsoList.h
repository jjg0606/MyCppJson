#pragma once
#include "JsoBase.h"
#include <vector>

class JsoList
	: public JsoBase
{
private:
	std::vector<JsoBase*> list;

public:
	// Constructor and Destructor
	JsoList();
	virtual ~JsoList();

	// Common Virtual Function
	virtual std::string toString();

	int getSize();
	void pushBack(JsoBase* val);
	JsoBase* operator[](int index);
};