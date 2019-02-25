//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPLUGINIMPL_HPP
#define ECOREPLUGINIMPL_HPP

#include "ecore/EcorePlugin.hpp"

namespace ecore 
{
	class EcorePluginImpl : virtual public EcorePlugin 
	{
		public:
			EcorePluginImpl();
			virtual ~EcorePluginImpl();
		
			virtual std::string eclipseURI();
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
		
			virtual std::shared_ptr<ecore::EObject> create(const std::string& name);
			virtual std::shared_ptr<ecore::EFactory> getEFactory();
			virtual std::shared_ptr<ecore::EPackage> getEPackage();
	};
}
#endif /* end of include guard: ECOREPLUGINIMPL_HPP */
