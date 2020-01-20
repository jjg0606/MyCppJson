#include "JsoLong.h"

/*public*/
JsoLong::JsoLong(long long val)
	: JsoBase(JsoType::LONG), value(val)
{

}

/*public*/
JsoLong::JsoLong()
	: JsoLong(0ll)
{

}

/*public virtual*/
JsoLong::~JsoLong()
{

}

/*public virtual*/
std::string JsoLong::toString()
{
	return std::to_string(value);
}

/*public*/
long long JsoLong::getValue()
{
	return value;
}

/*public*/
void JsoLong::setValue(long long val)
{
	this->value = val;
}
