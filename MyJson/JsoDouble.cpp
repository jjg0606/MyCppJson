#include "JsoDouble.h"

/*public*/
JsoDouble::JsoDouble(double val)
	: JsoBase(JsoType::DOUBLE), value(val)
{

}

/*public*/
JsoDouble::JsoDouble()
	: JsoDouble(0.0)
{

}

/*public virtual*/
JsoDouble::~JsoDouble()
{

}

/*public virtual*/
std::string JsoDouble::toString()
{
	return std::to_string(value);
}

/*public*/
double JsoDouble::getValue()
{
	return value;
}

/*public*/
void JsoDouble::setValue(double val)
{
	this->value = val;
}