#include "Archive.h"

Archive::Archive()
{
    IBSN = 111;
    read_not = false;
}

Archive::Archive(int IBSN, bool read_not)
{
    this->IBSN = IBSN;
    this->read_not = false;
}

Archive::~Archive()
{
}

int Archive::getIBSN() const
{
    return IBSN;
}

bool Archive::getRead_Not() const
{
    return read_not;
}

void Archive::setIBSN(int IBSN)
{
    if (IBSN == 0) { throw new IBSNException(); }
    this->IBSN = IBSN;
}

void Archive::setRead_Not(bool read_not)
{
    this->read_not = read_not;
}

