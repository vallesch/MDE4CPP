//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_COMPLETIONEVENTOCCURRENCE_HPP
#define PSSM_SEMANTICS_STATEMACHINES_COMPLETIONEVENTOCCURRENCE_HPP

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
	class StateActivation;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	/*!
	 */
	class CompletionEventOccurrence : virtual public ecore::EObject 

	{
		public:
 			CompletionEventOccurrence(const CompletionEventOccurrence &) {}
			CompletionEventOccurrence& operator=(CompletionEventOccurrence const&) = delete;

		protected:
			CompletionEventOccurrence(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CompletionEventOccurrence() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > getStateActivation() const = 0;
			
			/*!
			 */
			virtual void setStateActivation(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _stateActivation_stateActivation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > m_stateActivation;
			

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
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_COMPLETIONEVENTOCCURRENCE_HPP */