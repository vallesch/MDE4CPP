//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SENDSIGNALACTIONACTIVATIONSENDSIGNALACTIONACTIVATIONIMPL_HPP
#define FUML_SENDSIGNALACTIONACTIVATIONSENDSIGNALACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../SendSignalActionActivation.hpp"

#include "impl/InvocationActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class SendSignalActionActivationImpl :virtual public InvocationActionActivationImpl, virtual public SendSignalActionActivation 
	{
		public: 
			SendSignalActionActivationImpl(const SendSignalActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SendSignalActionActivationImpl& operator=(SendSignalActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			SendSignalActionActivationImpl();

		public:
			//destructor
			virtual ~SendSignalActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 doAction()  ;
			
			
			
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
#endif /* end of include guard: FUML_SENDSIGNALACTIONACTIVATIONSENDSIGNALACTIONACTIVATIONIMPL_HPP */

