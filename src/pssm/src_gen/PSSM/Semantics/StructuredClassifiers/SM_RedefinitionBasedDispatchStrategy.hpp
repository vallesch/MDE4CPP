//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP
#define PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP

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
namespace uml 
{
	class Behavior;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class Object;
}

namespace uml 
{
	class Operation;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::StructuredClassifiers 
{
	/*!
	 */
	class SM_RedefinitionBasedDispatchStrategy : virtual public ecore::EObject 

	{
		public:
 			SM_RedefinitionBasedDispatchStrategy(const SM_RedefinitionBasedDispatchStrategy &) {}
			SM_RedefinitionBasedDispatchStrategy& operator=(SM_RedefinitionBasedDispatchStrategy const&) = delete;

		protected:
			SM_RedefinitionBasedDispatchStrategy(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SM_RedefinitionBasedDispatchStrategy() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> getMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) = 0;
			
			
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
#endif /* end of include guard: PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGY_HPP */