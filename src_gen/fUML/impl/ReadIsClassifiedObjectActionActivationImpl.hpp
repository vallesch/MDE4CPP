//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_READISCLASSIFIEDOBJECTACTIONACTIVATIONREADISCLASSIFIEDOBJECTACTIONACTIVATIONIMPL_HPP
#define FUML_READISCLASSIFIEDOBJECTACTIONACTIVATIONREADISCLASSIFIEDOBJECTACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ReadIsClassifiedObjectActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ReadIsClassifiedObjectActionActivationImpl :virtual public ActionActivationImpl, virtual public ReadIsClassifiedObjectActionActivation 
	{
		public: 
			ReadIsClassifiedObjectActionActivationImpl(const ReadIsClassifiedObjectActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReadIsClassifiedObjectActionActivationImpl& operator=(ReadIsClassifiedObjectActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReadIsClassifiedObjectActionActivationImpl();

		public:
			//destructor
			virtual ~ReadIsClassifiedObjectActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 checkAllParents(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_READISCLASSIFIEDOBJECTACTIONACTIVATIONREADISCLASSIFIEDOBJECTACTIONACTIVATIONIMPL_HPP */

