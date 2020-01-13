#pragma once
#include "JsoBase.h"
#include <string>

/** File Desc : this file defines primitive classes **/
/** primitive type : null, int, long long, float, double, string **/

// NullType Class is exactly same class with JsoBase
typedef JsoBase JsoNull;

// Int Type Jso Primitive Class
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
	virtual const char* toString();
	
	int getValue();
	void setValue(int val);
};

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
	virtual const char* toString();

	long long getValue();
	void setValue(long long val);
};

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
	virtual const char* toString();

	float getValue();
	void setValue(float val);
};

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
	virtual const char* toString();

	double getValue();
	void setValue(double val);
};

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

	std::string getValue();
	void setValue(const char* val);

};