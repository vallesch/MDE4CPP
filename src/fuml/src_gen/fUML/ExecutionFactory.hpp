//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORY_HPP
#define FUML_EXECUTIONFACTORY_HPP

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

#include "ecore/EObject.hpp"

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


			//Additional constructors for the containments back reference

			ExecutionFactory(std::weak_ptr<fUML::Locus > par_locus);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExecutionFactory() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addBuiltInType(std::shared_ptr<uml::PrimitiveType>  type) = 0;
			
			/*!
			 */ 
			virtual void addPrimitiveBehaviorPrototype(std::shared_ptr<fUML::OpaqueBehaviorExecution>  execution) = 0;
			
			/*!
			 */ 
			virtual void assignStrategy(std::shared_ptr<fUML::SemanticStrategy>  strategy) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Evaluation> createEvaluation(std::shared_ptr<uml::ValueSpecification>  specification) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> createExecution(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::Object>  context) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::PrimitiveType> getBuiltInType(std::string name) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticStrategy> getStrategy(std::string name) = 0;
			
			/*!
			 */ 
			virtual int getStrategyIndex(std::string name) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::OpaqueBehaviorExecution> instantiateOpaqueBehaviorExecution(std::shared_ptr<uml::OpaqueBehavior>  behavior) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> instantiateVisitor(std::shared_ptr<uml::Element>  element) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<uml::PrimitiveType>> getBuiltInTypes() const = 0;
			
			/*!
			 */
			virtual std::weak_ptr<fUML::Locus > getLocus() const = 0;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus_locus) = 0;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::OpaqueBehaviorExecution>> getPrimitiveBehaviorPrototypes() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::SemanticStrategy>> getStrategies() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<uml::PrimitiveType>> m_builtInTypes;
			/*!
			 */
			std::weak_ptr<fUML::Locus > m_locus;
			/*!
			 */
			std::shared_ptr<Bag<fUML::OpaqueBehaviorExecution>> m_primitiveBehaviorPrototypes;
			/*!
			 */
			std::shared_ptr<Bag<fUML::SemanticStrategy>> m_strategies;
			

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
#endif /* end of include guard: FUML_EXECUTIONFACTORY_HPP */
