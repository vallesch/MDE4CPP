//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_ACTIONS_SM_READSELFACTIONACTIVATION_HPP
#define PSSM_SEMANTICS_ACTIONS_SM_READSELFACTIONACTIVATION_HPP

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
namespace fUML 
{
	class Object;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::Actions 
{
	/*!
	 */
	class SM_ReadSelfActionActivation : virtual public ecore::EObject 

	{
		public:
 			SM_ReadSelfActionActivation(const SM_ReadSelfActionActivation &) {}
			SM_ReadSelfActionActivation& operator=(SM_ReadSelfActionActivation const&) = delete;

		protected:
			SM_ReadSelfActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SM_ReadSelfActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Object> getExecutionContext() = 0;
			
			
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
#endif /* end of include guard: PSSM_SEMANTICS_ACTIONS_SM_READSELFACTIONACTIVATION_HPP */
