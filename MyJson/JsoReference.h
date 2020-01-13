#pragma once
#include "JsoBase.h"
#include <vector>
#include <string>
#include <map>
/** File Desc : this file defines Reference classes **/
/** Reference type : object, list **/

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
	virtual const char* toString();

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
	virtual const char* toString();

	int getSize();
	void insert(const char* key, JsoBase* val);
	void pop(const char* key);
	JsoBase* operator[](const char* key);
};