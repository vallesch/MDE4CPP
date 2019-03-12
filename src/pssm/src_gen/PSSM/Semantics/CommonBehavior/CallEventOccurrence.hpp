//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_HPP
#define PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_HPP

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
namespace PSSM::Semantics::CommonBehavior 
{
	class CallEventExecution;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::CommonBehavior 
{
	/*!
	 */
	class CallEventOccurrence : virtual public ecore::EObject 

	{
		public:
 			CallEventOccurrence(const CallEventOccurrence &) {}
			CallEventOccurrence& operator=(CallEventOccurrence const&) = delete;

		protected:
			CallEventOccurrence(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CallEventOccurrence() {}

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
			virtual std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution > getExecution() const = 0;
			
			/*!
			 */
			virtual void setExecution(std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution> _execution_execution) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution > m_execution;
			

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
#endif /* end of include guard: PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCE_HPP */
