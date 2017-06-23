//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONEXECUTIONIMPL_HPP
#define FUML_EXECUTIONEXECUTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Execution.hpp"

#include "impl/ObjectImpl.hpp"

#include "SubsetUnion.hpp"

#include <Parameter.hpp>
#include <ParameterDirectionKind.hpp>
#include <ParameterValue.hpp>
#include "Behavior.hpp"
#include "Classifier.hpp"
#include "FUMLFactory.hpp"

#include "../fUML/impl/ObjectImpl.hpp"



//*********************************
namespace fUML 
{
	class ExecutionImpl :virtual public ObjectImpl, virtual public Execution 
	{
		public: 
			ExecutionImpl(const ExecutionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ExecutionImpl& operator=(ExecutionImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExecutionImpl();

		public:
			//destructor
			virtual ~ExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 execute()  ;
			
			/*!
			 */ 
			virtual void
			 terminate()  ;
			
			/*!
			 */ 
			virtual void
			 setParameterValue(std::shared_ptr<fUML::ParameterValue>  parameterValue)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ParameterValue> 
			 getParameterValue(std::shared_ptr<uml::Parameter>  parameter)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ParameterValue> >
			 getOutputParameterValues()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> 
			 getBehavior()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 new_()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getContext() const ;
			
			/*!
			 */
			virtual void setContext(std::shared_ptr<fUML::Object> _context_context) ;
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::ParameterValue> >
			 getParameterValues() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_EXECUTIONEXECUTIONIMPL_HPP */

