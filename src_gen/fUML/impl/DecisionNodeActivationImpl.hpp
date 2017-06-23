//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP
#define FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DecisionNodeActivation.hpp"

#include "impl/ControlNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include "DecisionNode.hpp"
#include "Behavior.hpp"
#include "Parameter.hpp"
#include "ParameterDirectionKind.hpp"
#include "UmlFactory.hpp"
#include "FUMLFactory.hpp"
#include "ParameterValue.hpp"
#include "Token.hpp"
#include "ObjectFlow.hpp"
#include "ActivityEdge.hpp"
#include "ValueSpecification.hpp"
#include "ObjectToken.hpp"


//*********************************
namespace fUML 
{
	class DecisionNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public DecisionNodeActivation 
	{
		public: 
			DecisionNodeActivationImpl(const DecisionNodeActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DecisionNodeActivationImpl& operator=(DecisionNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DecisionNodeActivationImpl();

		public:
			//destructor
			virtual ~DecisionNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> >
			 getDecisionValues(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 executeDecisionInputBehavior(std::shared_ptr<fUML::Value>  inputValue,std::shared_ptr<fUML::Value>  decisionInputValue)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 getDecisionInputFlowValue()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityEdgeInstance> 
			 getDecisionInputFlowInstance()  ;
			
			/*!
			 */ 
			virtual bool
			 test(std::shared_ptr<uml::ValueSpecification>  gaurd,std::shared_ptr<fUML::Value>  value)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> >
			 removeJoinedControlTokens(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual bool
			 hasObjectFlowInput()  ;
			
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
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Execution > getDecisionInputExecution() const ;
			
			/*!
			 */
			virtual void setDecisionInputExecution(std::shared_ptr<fUML::Execution> _decisionInputExecution_decisionInputExecution) ;
							
			
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
#endif /* end of include guard: FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP */

