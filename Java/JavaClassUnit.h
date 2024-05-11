#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "Abstract/AbstractClassUnit.h"
#include <QObject>

class JavaClassUnit : public AbstractClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;
    JavaClassUnit(const std::string &name);

    void add(const std::shared_ptr<Unit>& unit, Flags flag) override;

    std::string compile(unsigned int level) const override;
};

#endif // JAVACLASSUNIT_H
