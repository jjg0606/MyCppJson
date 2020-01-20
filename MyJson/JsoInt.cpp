#include "JsoInt.h"

/*public*/
JsoInt::JsoInt(int val)
	: JsoBase(JsoType::INT), value(val)
{

}

/*public*/
JsoInt::JsoInt()
	: JsoInt(0)
{

}

/*public virtual*/
JsoInt::~JsoInt()
{

}

/*public virtual*/
std::string JsoInt::toString()
{
	return std::to_string(value);
}

/*public*/
int JsoInt::getValue()
{
	return value;
}

/*public*/
void JsoInt::setValue(int val)
{
	value = val;
}
