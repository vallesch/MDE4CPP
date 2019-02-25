
#include "PSSM/PSSMPlugin.hpp"
#include "PSSM/impl/PSSMPluginImpl.hpp"

using namespace PSSM;

//static initialisation
std::shared_ptr<MDE4CPPPlugin> PSSMPlugin::instance;

std::shared_ptr<MDE4CPPPlugin> PSSMPlugin::eInstance()
{
	if(instance==nullptr)
	{
		//create a new Singelton Instance
		instance.reset(new PSSMPluginImpl());
	}
	return instance;
}

std::shared_ptr<MDE4CPPPlugin> start()
{
	return PSSMPlugin::eInstance();
}
