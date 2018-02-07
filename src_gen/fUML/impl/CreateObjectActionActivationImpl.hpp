//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CREATEOBJECTACTIONACTIVATIONCREATEOBJECTACTIONACTIVATIONIMPL_HPP
#define FUML_CREATEOBJECTACTIONACTIVATIONCREATEOBJECTACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../CreateObjectActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class CreateObjectActionActivationImpl :virtual public ActionActivationImpl, virtual public CreateObjectActionActivation 
	{
		public: 
			CreateObjectActionActivationImpl(const CreateObjectActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CreateObjectActionActivationImpl& operator=(CreateObjectActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			CreateObjectActionActivationImpl();



		public:
			//destructor
			virtual ~CreateObjectActionActivationImpl();
			
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
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_CREATEOBJECTACTIONACTIVATIONCREATEOBJECTACTIONACTIVATIONIMPL_HPP */

