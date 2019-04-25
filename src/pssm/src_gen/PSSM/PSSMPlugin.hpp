//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSMPLUGIN_HPP
#define PSSMPLUGIN_HPP

#include "pluginFramework/EcoreModelPlugin.hpp"

namespace PSSM
{
	class PSSMPlugin : virtual public EcoreModelPlugin
	{
		public:
			static std::shared_ptr<MDE4CPPPlugin> eInstance();
	
			virtual std::string eclipseURI() = 0;
			virtual std::string eNAME() = 0;
			virtual std::string eNS_URI() = 0;
			virtual std::string eNS_PREFIX() = 0;
			
			virtual std::shared_ptr<ecore::EObject> create(const std::string& name) = 0;
			virtual std::shared_ptr<ecore::EFactory> getEFactory() = 0;
			virtual std::shared_ptr<ecore::EPackage> getEPackage() = 0;
	
		protected:
			PSSMPlugin(){};
			virtual ~PSSMPlugin(){};
	
		private:
			static std::shared_ptr<MDE4CPPPlugin> instance;
	};
}
#endif /* end of include guard: PSSMPLUGIN_HPP */
