//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_SHALLOWHISTORYPSEUDOSTATEACTIVATION_HPP
#define PSSM_SEMANTICS_STATEMACHINES_SHALLOWHISTORYPSEUDOSTATEACTIVATION_HPP

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
	class HistoryPseudostateActivation;
}

namespace uml 
{
	class NamedElement;
}

namespace fUML 
{
	class SemanticVisitor;
}

namespace PSSM::Semantics::StateMachines 
{
	class TransitionActivation;
}

// base class includes
#include "PSSM/Semantics/StateMachines/HistoryPseudostateActivation.hpp"

// enum includes
#include "PSSM/Semantics/StateMachines/StateMetadata.hpp"


//*********************************
namespace PSSM::Semantics::StateMachines 
{
	/*!
	 */
	class ShallowHistoryPseudostateActivation:virtual public HistoryPseudostateActivation
	{
		public:
 			ShallowHistoryPseudostateActivation(const ShallowHistoryPseudostateActivation &) {}
			ShallowHistoryPseudostateActivation& operator=(ShallowHistoryPseudostateActivation const&) = delete;

		protected:
			ShallowHistoryPseudostateActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ShallowHistoryPseudostateActivation() {}

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
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_SHALLOWHISTORYPSEUDOSTATEACTIVATION_HPP */
