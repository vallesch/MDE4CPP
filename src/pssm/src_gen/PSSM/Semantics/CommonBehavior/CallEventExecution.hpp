//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP
#define PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP

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

namespace PSSM::Semantics::CommonBehavior 
{
	class CallEventOccurrence;
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
	class ParameterValue;
}

namespace fUML 
{
	class Value;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace PSSM::Semantics::CommonBehavior 
{
	/*!
	 */
	class CallEventExecution : virtual public ecore::EObject 

	{
		public:
 			CallEventExecution(const CallEventExecution &) {}
			CallEventExecution& operator=(CallEventExecution const&) = delete;

		protected:
			CallEventExecution(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CallEventExecution() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _send(std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void _suspend() = 0;
			
			/*!
			 Execute the behavior given by the type of this execution. 
			The parameterValues for any input (in or in-out) parameters of the behavior should be set before the execution.
			The parameteValues for any output (in-out, out or return) parameters of the behavior will be set by the execution.
			 */ 
			virtual void execute() = 0;
			
			
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ParameterValue> > getInputParameterValues() = 0;
			
			/*!
			 Create a new execution with no behavior or parameterValues.
			 */ 
			virtual std::shared_ptr<fUML::Value> new_() = 0;
			
			/*!
			 */ 
			virtual void releaseCaller() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool getCallerSuspended() const = 0;
			
			/*!
			 */ 
			virtual void setCallerSuspended (bool _callerSuspended)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Behavior > getBehavior() const = 0;
			
			/*!
			 */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior_behavior) = 0;
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getCallerContext() const = 0;
			
			/*!
			 */
			virtual void setCallerContext(std::shared_ptr<fUML::Object> _callerContext_callerContext) = 0;
			/*!
			 */
			virtual std::shared_ptr<uml::Operation > getOperation() const = 0;
			
			/*!
			 */
			virtual void setOperation(std::shared_ptr<uml::Operation> _operation_operation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_callerSuspended = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Behavior > m_behavior;
			/*!
			 */
			std::shared_ptr<fUML::Object > m_callerContext;
			/*!
			 */
			std::shared_ptr<uml::Operation > m_operation;
			

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
#endif /* end of include guard: PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP */
