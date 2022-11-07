#include <TransportContext.h>

TransportContext::TransportContext(Transport* defaultStrategy)
    : strategy(defaultStrategy)
{
}

void TransportContext::purchase(Recruits* recruits)
{
    strategy->purchase(recruits);
}

void TransportContext::purchaseInput(Recruits* recruits)
{
    strategy->purchaseInput(recruits);
}

void TransportContext::setStrategy(Transport* newStrategy)
{
    strategy = newStrategy;
}
