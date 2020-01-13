#pragma once

/** File Desc : this file define JsoBase and JsoType **/

/// Type of Jso object
enum class JsoType
{
	NULL,
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
	virtual const char* toString();
	virtual bool isNull();
};