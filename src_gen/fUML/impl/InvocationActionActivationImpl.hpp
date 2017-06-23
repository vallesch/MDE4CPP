//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_INVOCATIONACTIONACTIVATIONINVOCATIONACTIONACTIVATIONIMPL_HPP
#define FUML_INVOCATIONACTIONACTIVATIONINVOCATIONACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../InvocationActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class InvocationActionActivationImpl :virtual public ActionActivationImpl, virtual public InvocationActionActivation 
	{
		public: 
			InvocationActionActivationImpl(const InvocationActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			InvocationActionActivationImpl& operator=(InvocationActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			InvocationActionActivationImpl();

		public:
			//destructor
			virtual ~InvocationActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
#endif /* end of include guard: FUML_INVOCATIONACTIONACTIVATIONINVOCATIONACTIONACTIVATIONIMPL_HPP */

