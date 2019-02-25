//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATION_HPP
#define PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



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
	class ConnectionPointActivation;
}

namespace PSSM::Semantics::StateMachines 
{
	class DoActivityContextObject;
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
	class StateActivation;
}

namespace PSSM::Semantics::StateMachines 
{
	class TransitionActivation;
}

// base class includes
#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

// enum includes
#include "PSSM/Semantics/StateMachines/StateMetadata.hpp"


//*********************************
namespace PSSM::Semantics::StateMachines 
{
	/*!
	 */
	class FinalStateActivation:virtual public StateActivation
	{
		public:
 			FinalStateActivation(const FinalStateActivation &) {}
			FinalStateActivation& operator=(FinalStateActivation const&) = delete;

		protected:
			FinalStateActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~FinalStateActivation() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATION_HPP */
