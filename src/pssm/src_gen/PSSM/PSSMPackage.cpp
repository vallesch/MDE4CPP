#include "PSSM/PSSMPackage.hpp"
#include "PSSM/impl/PSSMPackageImpl.hpp"

using namespace PSSM;

//static initialisation
const std::string PSSMPackage::eNAME ="PSSM";
const std::string PSSMPackage::eNS_URI ="http://www.omg.org/spec/PSSM/20161101";
const std::string PSSMPackage::eNS_PREFIX ="PSSM";

//Singleton 
std::shared_ptr<PSSMPackage> PSSMPackage::instance;

std::shared_ptr<PSSMPackage>PSSMPackage::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(PSSMPackageImpl::create());
		std::dynamic_pointer_cast<PSSMPackageImpl>(instance)->init(instance);
	}	
	return instance;
}
