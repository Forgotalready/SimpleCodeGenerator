#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H

#include "Abstract/AbstractClassUnit.h"
#include <QObject>

class CsharpClassUnit : public AbstractClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;

    explicit CsharpClassUnit(const std::string &name);

    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPCLASSUNIT_H
