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

//*********************************
// generated Includes

//Model includes
#include "../ForkNodeActivation.hpp"

#include "impl/ControlNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include"ActivityNode.hpp"
#include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ForkNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public ForkNodeActivation 
	{
		public: 
			ForkNodeActivationImpl(const ForkNodeActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

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
			virtual void
			 fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual void
			 terminate()  ;
			
			
			
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
#endif /* end of include guard: FUML_FORKNODEACTIVATIONFORKNODEACTIVATIONIMPL_HPP */

