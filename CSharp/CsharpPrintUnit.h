#ifndef CSHARPPRINTUNIT_H
#define CSHARPPRINTUNIT_H

#include "Abstract/AbstractPrintOperatorUnit.h"

class CsharpPrintUnit : public AbstractPrintOperatorUnit
{
public:
    explicit CsharpPrintUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPPRINTUNIT_H
