//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DISPATCHSTRATEGY_HPP
#define FUML_DISPATCHSTRATEGY_HPP

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

namespace fUML
{
	class FUMLFactory;
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

namespace fUML 
{
	class SemanticStrategy;
}

// base class includes
#include "fUML/SemanticStrategy.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class DispatchStrategy:virtual public SemanticStrategy
	{
		public:
 			DispatchStrategy(const DispatchStrategy &) {}
			DispatchStrategy& operator=(DispatchStrategy const&) = delete;

		protected:
			DispatchStrategy(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DispatchStrategy() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> retrieveMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) = 0;
			
			/*!
			 */ 
			virtual std::string retrieveName() = 0;
			
			
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
#endif /* end of include guard: FUML_DISPATCHSTRATEGY_HPP */
