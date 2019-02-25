#include "PSSM/PSSMFactory.hpp"
#include "PSSM/impl/PSSMFactoryImpl.hpp"

using namespace PSSM;

//static initialisation
std::shared_ptr<PSSMFactory> PSSMFactory::instance;

std::shared_ptr<PSSMFactory>PSSMFactory::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(PSSMFactoryImpl::create());
	}	
	return instance;
}
