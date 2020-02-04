#pragma once
#include "JsoBase.h"

class JsoInt
	: public JsoBase
{
private:
	int value;

public:
	// Constructor and Destructor
	JsoInt(int val);	// master Constructor
	JsoInt();
	virtual ~JsoInt();

	// Common Virtual Function
	virtual std::string toString();

	int getValue() const;
	void setValue(int val);

	JsoInt& operator=(const JsoInt& operand);
	JsoInt operator+(const JsoInt& operand);
	JsoInt operator-(const JsoInt& operand);
	JsoInt operator*(const JsoInt& operand);
	JsoInt operator/(const JsoInt& operand);
	JsoInt operator%(const JsoInt& operand);
	bool operator==(const JsoInt& operand);	
};
