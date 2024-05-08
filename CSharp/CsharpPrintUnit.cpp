#include "CsharpPrintUnit.h"

CsharpPrintUnit::CsharpPrintUnit(const std::string &text)
    :AbstractPrintOperatorUnit(text){}

std::string CsharpPrintUnit::compile(unsigned int level) const
{
    return generateShift(level) + "Console.WriteLine(\"" + m_text+"\");\n";
}
