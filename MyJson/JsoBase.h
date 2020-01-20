#pragma once
#include <string>
#include <map>
/** File Desc : this file define JsoBase and JsoType **/

/// Type of Jso object
enum class JsoType
{
	NUL,
	INT,
	LONG,
	FLOAT,
	DOUBLE,
	STR,
	OBJECT,
	LIST
};

/// Super class of all Inner Jso class
class JsoBase
{
protected:
	// Common Variable
	JsoType type;

public:
	// Constructor and Destructor
	JsoBase(JsoType type); // master Constructor
	JsoBase();
	virtual ~JsoBase();

	// Common Function
	JsoType getType();
	virtual std::string toString();
	virtual bool isNull();
};

typedef JsoBase JsoNul;
