#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include "Abstract/AbstractMethodUnit.h"
#include <QObject>

class CsharpMethodUnit : public AbstractMethodUnit
{
public:
    CsharpMethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    void add(const std::shared_ptr<Unit>& unit, Flags /*flags*/ = 0) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPMETHODUNIT_H
