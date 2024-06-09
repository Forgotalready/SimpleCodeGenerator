#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "Unit.h"
#include <vector>
#include "Abstract/AbstractMethodUnit.h"

class MethodUnit : public AbstractMethodUnit
{
public:
    MethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    void add(const std::shared_ptr<Unit>& unit, Flags /*flags*/ = 0) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // METHODUNIT_H
