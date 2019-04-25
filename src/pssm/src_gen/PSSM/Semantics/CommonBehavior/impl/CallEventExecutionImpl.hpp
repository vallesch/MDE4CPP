//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP
#define PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CallEventExecution.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"
#include "fUML/impl/ExecutionImpl.hpp"

//*********************************
namespace PSSM::Semantics::CommonBehavior 
{
	class CallEventExecutionImpl :virtual public fUML::ExecutionImpl, virtual public CallEventExecution 
	{
		public: 
			CallEventExecutionImpl(const CallEventExecutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallEventExecutionImpl& operator=(CallEventExecutionImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			CallEventExecutionImpl();
			virtual std::shared_ptr<CallEventExecution> getThisCallEventExecutionPtr() const;
			virtual void setThisCallEventExecutionPtr(std::weak_ptr<CallEventExecution> thisCallEventExecutionPtr);



		public:
			//destructor
			virtual ~CallEventExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _send(std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual void _suspend() ;
			
			/*!
			 Execute the behavior given by the type of this execution. 
			The parameterValues for any input (in or in-out) parameters of the behavior should be set before the execution.
			The parameteValues for any output (in-out, out or return) parameters of the behavior will be set by the execution.
			 */ 
			virtual void execute() ;
			
			
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ParameterValue> > getInputParameterValues() ;
			
			/*!
			 Create a new execution with no behavior or parameterValues.
			 */ 
			virtual std::shared_ptr<fUML::Value> new_() ;
			
			/*!
			 */ 
			virtual void releaseCaller() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool getCallerSuspended() const ;
			
			/*!
			 */ 
			virtual void setCallerSuspended (bool _callerSuspended); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Behavior > getBehavior() const ;
			
			/*!
			 */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior_behavior) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getCallerContext() const ;
			
			/*!
			 */
			virtual void setCallerContext(std::shared_ptr<fUML::Object> _callerContext_callerContext) ;
			/*!
			 */
			virtual std::shared_ptr<uml::Operation > getOperation() const ;
			
			/*!
			 */
			virtual void setOperation(std::shared_ptr<uml::Operation> _operation_operation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<CallEventExecution> m_thisCallEventExecutionPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP */
