//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FORKNODEACTIVATIONFORKNODEACTIVATIONIMPL_HPP
#define FUML_FORKNODEACTIVATIONFORKNODEACTIVATIONIMPL_HPP

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
#include "../ForkNodeActivation.hpp"

#include "fUML/impl/ControlNodeActivationImpl.hpp"

#include"uml/ActivityNode.hpp"
#include "fuml/FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ForkNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public ForkNodeActivation 
	{
		public: 
			ForkNodeActivationImpl(const ForkNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ForkNodeActivationImpl& operator=(ForkNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ForkNodeActivationImpl();



		public:
			//destructor
			virtual ~ForkNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual void terminate()  ;
			
			
			
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
#endif /* end of include guard: FUML_FORKNODEACTIVATIONFORKNODEACTIVATIONIMPL_HPP */

