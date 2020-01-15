#pragma once
#include <vector>
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
	virtual std::string toString();

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
	virtual std::string toString();

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
	virtual std::string toString();

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
	virtual std::string toString();

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

	virtual std::string toString();

	std::string getValue();
	void setValue(const char* val);

};

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

class JsoObject
	: public JsoBase
{
private:
	std::map<std::string, JsoBase*> map;

public:
	// Constructor and Destructor
	JsoObject();
	virtual ~JsoObject();

	// Common Virtual Function
	virtual std::string toString();

	int getSize();
	void insert(const char* key, JsoBase* val);
	void pop(const char* key);
	JsoBase* operator[](const char* key);
};