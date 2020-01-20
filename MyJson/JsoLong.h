#pragma once
#include "JsoBase.h"

class JsoLong
	: public JsoBase
{
private:
	long long value;

public:
	// Constructor and Destructor
	JsoLong(long long val);	// master Constructor
	JsoLong();
	virtual ~JsoLong();

	// Common Virtual Function
	virtual std::string toString();

	long long getValue();
	void setValue(long long val);
};