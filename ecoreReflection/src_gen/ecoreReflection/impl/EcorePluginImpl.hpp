//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef ECORE_PLUGINIMPL_HPP
#define ECORE_PLUGINIMPL_HPP

#include "ecoreReflection/EcorePlugin.hpp"

namespace Ecore 
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
			virtual std::shared_ptr<uml::Factory> getFactory();
			virtual std::shared_ptr<uml::Package> getPackage();
	};
}
#endif /* end of include guard: ECORE_PLUGINIMPL_HPP */
