//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATION_HPP
#define PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace PSSM
{
	class PSSMFactory;
}

//Forward Declaration for used types
namespace PSSM::Semantics::StateMachines 
{
	class CompletionEventOccurrence;
}

namespace PSSM::Semantics::StateMachines 
{
	class DeferredEventOccurrence;
}

namespace fUML 
{
	class EventOccurrence;
}

namespace PSSM::Semantics::StateMachines 
{
	class StateActivation;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::CommonBehavior 
{
	/*!
	 */
	class SM_ObjectActivation : virtual public ecore::EObject 

	{
		public:
 			SM_ObjectActivation(const SM_ObjectActivation &) {}
			SM_ObjectActivation& operator=(SM_ObjectActivation const&) = delete;

		protected:
			SM_ObjectActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SM_ObjectActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int getDeferredEventInsertionIndex() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> getNextCompletionEvent() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::EventOccurrence> getNextEvent() = 0;
			
			/*!
			 */ 
			virtual void registerCompletionEvent(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation) = 0;
			
			/*!
			 */ 
			virtual void registerDeferredEvent(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation) = 0;
			
			/*!
			 */ 
			virtual void releaseDeferredEvents(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  deferringState) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> getDeferredEventPool() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> m_deferredEventPool;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATION_HPP */
