#include "PSSM/impl/PSSMPluginImpl.hpp"

#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

using namespace PSSM;

//*********************************
// Constructor / Destructor
//*********************************
PSSMPluginImpl::PSSMPluginImpl()
{
}

PSSMPluginImpl::~PSSMPluginImpl()
{
}


std::shared_ptr<ecore::EObject> PSSMPluginImpl::create(const std::string& name)
{
	return PSSMFactory::eInstance()->create(name);
}

std::shared_ptr<ecore::EFactory> PSSMPluginImpl::getEFactory()
{
	return PSSMFactory::eInstance();
}

std::shared_ptr<ecore::EPackage> PSSMPluginImpl::getEPackage()
{
	return PSSMPackage::eInstance();
}

std::string PSSMPluginImpl::eclipseURI()
{
	return "";
}

std::string PSSMPluginImpl::eNAME()
{
	return "PSSM";
}

std::string PSSMPluginImpl::eNS_URI()
{
	return "http://www.omg.org/spec/PSSM/20161101";
}

std::string PSSMPluginImpl::eNS_PREFIX()
{
	return "PSSM";
}
