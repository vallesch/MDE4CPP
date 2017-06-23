//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_PINACTIVATIONPINACTIVATIONIMPL_HPP
#define FUML_PINACTIVATIONPINACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../PinActivation.hpp"

#include "impl/ObjectNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include "ActivityNode.hpp"
#include "Pin.hpp"


//*********************************
namespace fUML 
{
	class PinActivationImpl :virtual public ObjectNodeActivationImpl, virtual public PinActivation 
	{
		public: 
			PinActivationImpl(const PinActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			PinActivationImpl& operator=(PinActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			PinActivationImpl();

		public:
			//destructor
			virtual ~PinActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> >
			 takeOfferedTokens()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ActionActivation > getActionActivation() const ;
			
			/*!
			 */
			virtual void setActionActivation(std::shared_ptr<fUML::ActionActivation> _actionActivation_actionActivation) ;
							
			
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
#endif /* end of include guard: FUML_PINACTIVATIONPINACTIVATIONIMPL_HPP */

