//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CALLACTIONACTIVATION_HPP
#define FUML_CALLACTIONACTIVATION_HPP

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

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class InputPinActivation;
}

namespace fUML 
{
	class InvocationActionActivation;
}

namespace fUML 
{
	class OutputPinActivation;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "fUML/InvocationActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class CallActionActivation:virtual public InvocationActionActivation
	{
		public:
 			CallActionActivation(const CallActionActivation &) {}
			CallActionActivation& operator=(CallActionActivation const&) = delete;

		protected:
			CallActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CallActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doAction() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> getCallExecution() = 0;
			
			/*!
			 */ 
			virtual void removeCallExecution(std::shared_ptr<fUML::Execution>  execution) = 0;
			
			/*!
			 */ 
			virtual void terminate() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Execution>> getCallExecutions() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<fUML::Execution>> m_callExecutions;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_CALLACTIONACTIVATION_HPP */
