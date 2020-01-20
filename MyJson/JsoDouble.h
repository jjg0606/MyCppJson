#pragma once
#include "JsoBase.h"

class JsoDouble
	: public JsoBase
{
private:
	double value;

public:
	// Constructor and Destructor
	JsoDouble(double val);	// master Constructor
	JsoDouble();
	virtual ~JsoDouble();

	// Common Virtual Function
	virtual std::string toString();

	double getValue();
	void setValue(double val);
};