//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP
#define FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../StartClassifierBehaviorActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class StartClassifierBehaviorActionActivationImpl :virtual public ActionActivationImpl, virtual public StartClassifierBehaviorActionActivation 
	{
		public: 
			StartClassifierBehaviorActionActivationImpl(const StartClassifierBehaviorActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			StartClassifierBehaviorActionActivationImpl& operator=(StartClassifierBehaviorActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StartClassifierBehaviorActionActivationImpl();

		public:
			//destructor
			virtual ~StartClassifierBehaviorActionActivationImpl();
			
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
#endif /* end of include guard: FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP */

