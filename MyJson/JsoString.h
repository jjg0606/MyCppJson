#pragma once
#include "JsoBase.h"

class JsoString
	: public JsoBase
{
private:
	std::string value;

public:
	// Constructor and Destructor
	JsoString(const char* val);	// master Constructor
	JsoString();
	virtual ~JsoString();

	virtual std::string toString();

	std::string getValue();
	void setValue(const char* val);

};