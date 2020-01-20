#pragma once
#include "JsoBase.h"

class JsoFloat
	: public JsoBase
{
private:
	float value;

public:
	// Constructor and Destructor
	JsoFloat(float val);	// master Constructor
	JsoFloat();
	virtual ~JsoFloat();

	// Common Virtual Function
	virtual std::string toString();

	float getValue();
	void setValue(float val);
};
