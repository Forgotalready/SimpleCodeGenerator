#ifndef ABSTRACTPRINTOPERATORUNIT_H
#define ABSTRACTPRINTOPERATORUNIT_H

#include "Unit.h"

class AbstractPrintOperatorUnit : public Unit
{
public:
    AbstractPrintOperatorUnit(const std::string& text);

protected:
    std::string m_text;
};

#endif // ABSTRACTPRINTOPERATORUNIT_H
