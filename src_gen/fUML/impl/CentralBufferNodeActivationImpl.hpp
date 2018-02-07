//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CENTRALBUFFERNODEACTIVATIONCENTRALBUFFERNODEACTIVATIONIMPL_HPP
#define FUML_CENTRALBUFFERNODEACTIVATIONCENTRALBUFFERNODEACTIVATIONIMPL_HPP

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
#include "../CentralBufferNodeActivation.hpp"

#include "fUML/impl/ObjectNodeActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class CentralBufferNodeActivationImpl :virtual public ObjectNodeActivationImpl, virtual public CentralBufferNodeActivation 
	{
		public: 
			CentralBufferNodeActivationImpl(const CentralBufferNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CentralBufferNodeActivationImpl& operator=(CentralBufferNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			CentralBufferNodeActivationImpl();



		public:
			//destructor
			virtual ~CentralBufferNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			
			
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
#endif /* end of include guard: FUML_CENTRALBUFFERNODEACTIVATIONCENTRALBUFFERNODEACTIVATIONIMPL_HPP */

