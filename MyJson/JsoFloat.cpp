#include "JsoFloat.h"

/*public*/
JsoFloat::JsoFloat(float val)
	: JsoBase(JsoType::FLOAT), value(val)
{

}

/*public*/
JsoFloat::JsoFloat()
	: JsoFloat(0.0f)
{

}

/*public virtual*/
JsoFloat::~JsoFloat()
{

}

/*public virtual*/
std::string JsoFloat::toString()
{
	return std::to_string(value);
}

/*public*/
float JsoFloat::getValue()
{
	return value;
}

/*public*/
void JsoFloat::setValue(float val)
{
	this->value = val;
}