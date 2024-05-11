#include "JavaPrintOperator.h"

JavaPrintOperator::JavaPrintOperator(const std::string &text)
    : AbstractPrintOperatorUnit(text){}

std::string JavaPrintOperator::compile(unsigned int level) const
{
    return generateShift(level) + "System.out.println(\"" + m_text+"\");\n";
}
