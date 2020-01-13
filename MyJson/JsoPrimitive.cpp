#include "JsoPrimitive.h"
#include <string>

//////////////////////////////////////////////
/*              JsoInt                      */
//////////////////////////////////////////////
#pragma region JsoInt
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
const char* JsoInt::toString()
{
	return std::to_string(value).c_str();
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
#pragma endregion JsoInt

//////////////////////////////////////////////
/*              JsoLong                     */
//////////////////////////////////////////////
#pragma region JsoLong
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
const char* JsoLong::toString()
{
	return std::to_string(value).c_str();
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

#pragma endregion JsoLong

//////////////////////////////////////////////
/*              JsoFloat                    */
//////////////////////////////////////////////
#pragma region JsoFloat
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
const char* JsoFloat::toString()
{
	return std::to_string(value).c_str();
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
#pragma endregion JsoFloat

//////////////////////////////////////////////
/*              JsoDouble                   */
//////////////////////////////////////////////
#pragma region JsoDouble
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
const char* JsoDouble::toString()
{
	return std::to_string(value).c_str();
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
#pragma endregion JsoDouble

//////////////////////////////////////////////
/*              JsoString                   */
//////////////////////////////////////////////
#pragma region JsoString
/*public*/
JsoString::JsoString(const char* val)
	: JsoBase(JsoType::STR), value(val)
{

}

/*public*/
JsoString::JsoString()
	: JsoString("")
{

}

/*public virtual*/
JsoString::~JsoString()
{
	value.clear();
}

std::string JsoString::getValue()
{
	return value;
}

void JsoString::setValue(const char* val)
{
	value.clear();
	value.append(val);
}
#pragma endregion JsoString

