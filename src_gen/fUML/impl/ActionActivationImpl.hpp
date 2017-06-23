//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP
#define FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ActionActivation.hpp"

#include "impl/ActivityNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include "Action.hpp"
#include "ActivityNode.hpp"
#include "OutputPin.hpp"
#include "iterator"
#include "InputPin.hpp"
#include "PinActivation.hpp"
#include "FeatureValue.hpp"
#include "Link.hpp"
#include "LiteralBoolean.hpp"
#include "UmlFactory.hpp"

#include "FUMLFactory.hpp"
#include "Behavior.hpp"




//*********************************
namespace fUML 
{
	class ActionActivationImpl :virtual public ActivityNodeActivationImpl, virtual public ActionActivation 
	{
		public: 
			ActionActivationImpl(const ActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActionActivationImpl& operator=(ActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActionActivationImpl();

		public:
			//destructor
			virtual ~ActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 isFirng()  ;
			
			/*!
			 */ 
			virtual void
			 doAction()  ;
			
			/*!
			 */ 
			virtual void
			 sendOffers()  ;
			
			/*!
			 */ 
			virtual void
			 addPinActivation(std::shared_ptr<fUML::PinActivation>  pinActivation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::PinActivation> 
			 retrievePinActivation(std::shared_ptr<uml::Pin>  pin)  ;
			
			/*!
			 */ 
			virtual void
			 putToken(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<fUML::Value>  value)  ;
			
			/*!
			 */ 
			virtual void
			 putTokens(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<Bag<fUML::Value> >  values)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> >
			 getTokens(std::shared_ptr<uml::InputPin>  pin)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> >
			 takeTokens(std::shared_ptr<uml::InputPin>  pin)  ;
			
			/*!
			 */ 
			virtual bool
			 valueParticipatesInLink(std::shared_ptr<fUML::Value>  value,std::shared_ptr<fUML::Link>  link)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::BooleanValue> 
			 makeBooleanValue(bool value)  ;
			
			/*!
			 */ 
			virtual void
			 run()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> >
			 takeOfferedTokens()  ;
			
			/*!
			 */ 
			virtual void
			 fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual void
			 terminate()  ;
			
			/*!
			 */ 
			virtual bool
			 isReady()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> >
			 completeAction()  ;
			
			/*!
			 */ 
			virtual void
			 createNodeActivations()  ;
			
			/*!
			 */ 
			virtual void
			 addOutgoingEdge(std::shared_ptr<fUML::ActivityEdgeInstance>  edge)  ;
			
			/*!
			 */ 
			virtual bool
			 isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isFiring() const ;
			
			/*!
			 */ 
			virtual void setFiring (bool _firing); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::PinActivation> >
			 getPinActivation() const ;
			
							
			
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
#endif /* end of include guard: FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP */

