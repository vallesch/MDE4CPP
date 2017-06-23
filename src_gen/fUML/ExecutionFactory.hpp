//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORY_HPP
#define FUML_EXECUTIONFACTORY_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Element;
}

namespace fUML 
{
	class Evaluation;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class Object;
}

namespace uml 
{
	class OpaqueBehavior;
}

namespace fUML 
{
	class OpaqueBehaviorExecution;
}

namespace uml 
{
	class PrimitiveType;
}

namespace fUML 
{
	class SemanticStrategy;
}

namespace fUML 
{
	class SemanticVisitor;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes

// enum includes

#include "EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class ExecutionFactory : virtual public ecore::EObject 
	{
		public:
 			ExecutionFactory(const ExecutionFactory &) {}
			ExecutionFactory& operator=(ExecutionFactory const&) = delete;
	
		protected:
			ExecutionFactory(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ExecutionFactory() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> 
			 createExecution(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::Object>  context)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Evaluation> 
			 createEvaluation(std::shared_ptr<uml::ValueSpecification>  specification)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> 
			 instantiateVisitor(std::shared_ptr<uml::Element>  element)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::OpaqueBehaviorExecution> 
			 instantiateOpaqueBehaviorExecution(std::shared_ptr<uml::OpaqueBehavior>  behavior)  = 0;
			
			/*!
			 */ 
			virtual void
			 addPrimitiveBehaviorPrototype(std::shared_ptr<fUML::OpaqueBehaviorExecution>  execution)  = 0;
			
			/*!
			 */ 
			virtual void
			 addBuiltInType(std::shared_ptr<uml::PrimitiveType>  type)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::PrimitiveType> 
			 getBuiltInType(std::string name)  = 0;
			
			/*!
			 */ 
			virtual void
			 assignStrategy(std::shared_ptr<fUML::SemanticStrategy>  strategy)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticStrategy> 
			 getStrategy(std::string name)  = 0;
			
			/*!
			 */ 
			virtual int
			 getStrategyIndex(std::string name)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Locus > getLocus() const = 0;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus_locus) = 0;
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::SemanticStrategy> >
			 getStrategies() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::OpaqueBehaviorExecution> >
			 getPrimitiveBehaviorPrototypes() const = 0;
			
			/*!
			 */
			virtual 	std::shared_ptr< Bag<uml::PrimitiveType> >
			 getBuiltInTypes() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Locus > m_locus;
			/*!
			 */
				std::shared_ptr< Bag<fUML::SemanticStrategy> >
			 m_strategies;
			/*!
			 */
				std::shared_ptr< Bag<fUML::OpaqueBehaviorExecution> >
			 m_primitiveBehaviorPrototypes;
			/*!
			 */
				std::shared_ptr< Bag<uml::PrimitiveType> >
			 m_builtInTypes;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_EXECUTIONFACTORY_HPP */

