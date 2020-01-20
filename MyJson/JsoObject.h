#pragma once
#include "JsoBase.h"

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
