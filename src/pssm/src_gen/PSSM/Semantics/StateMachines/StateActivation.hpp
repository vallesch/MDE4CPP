//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_STATEACTIVATION_HPP
#define PSSM_SEMANTICS_STATEMACHINES_STATEACTIVATION_HPP

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
namespace uml 
{
	class Behavior;
}

namespace PSSM::Semantics::StateMachines 
{
	class ConnectionPointActivation;
}

namespace PSSM::Semantics::StateMachines 
{
	class DoActivityContextObject;
}

namespace fUML 
{
	class EventOccurrence;
}

namespace uml 
{
	class NamedElement;
}

namespace PSSM::Semantics::StateMachines 
{
	class RegionActivation;
}

namespace fUML 
{
	class SemanticVisitor;
}

namespace PSSM::Semantics::StateMachines 
{
	class TransitionActivation;
}

namespace uml 
{
	class Vertex;
}

namespace PSSM::Semantics::StateMachines 
{
	class VertexActivation;
}

// base class includes
#include "PSSM/Semantics/StateMachines/VertexActivation.hpp"

// enum includes
#include "PSSM/Semantics/StateMachines/StateMetadata.hpp"


//*********************************
namespace PSSM::Semantics::StateMachines 
{
	/*!
	 */
	class StateActivation:virtual public VertexActivation
	{
		public:
 			StateActivation(const StateActivation &) {}
			StateActivation& operator=(StateActivation const&) = delete;

		protected:
			StateActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StateActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool canDefer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void enterRegions(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation> > getConnectionPointActivation() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> getConnectionPointActivation(std::shared_ptr<uml::Vertex>  vertex) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> getDoActivity() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> getEntry() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> getExit() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > getFireableTransitions(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation> > getRegionActivation() = 0;
			
			/*!
			 */ 
			virtual bool hasCompleted() = 0;
			
			/*!
			 */ 
			virtual void notifyCompletion() = 0;
			
			/*!
			 */ 
			virtual void releaseDeferredEvents() = 0;
			
			/*!
			 */ 
			virtual void tryExecuteEntry(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void tryExecuteExit(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void tryInvokeDoActivity(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool getIsDoActivityCompleted() const = 0;
			
			/*!
			 */ 
			virtual void setIsDoActivityCompleted (bool _isDoActivityCompleted)= 0; 
			
			/*!
			 */ 
			virtual bool getIsEntryCompleted() const = 0;
			
			/*!
			 */ 
			virtual void setIsEntryCompleted (bool _isEntryCompleted)= 0; 
			
			/*!
			 */ 
			virtual bool getIsExitCompleted() const = 0;
			
			/*!
			 */ 
			virtual void setIsExitCompleted (bool _isExitCompleted)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> getConnectionPointActivations() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject > getDoActivityContextObject() const = 0;
			
			/*!
			 */
			virtual void setDoActivityContextObject(std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject_doActivityContextObject) = 0;
			/*!
			 */
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> getRegionActivations() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_isDoActivityCompleted = false;
			/*!
			 */ 
			bool m_isEntryCompleted = false;
			/*!
			 */ 
			bool m_isExitCompleted = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> m_connectionPointActivations;
			/*!
			 */
			std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject > m_doActivityContextObject;
			/*!
			 */
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> m_regionActivations;
			

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
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_STATEACTIVATION_HPP */
