//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORYL2EXECUTIONFACTORYL2IMPL_HPP
#define FUML_EXECUTIONFACTORYL2EXECUTIONFACTORYL2IMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../ExecutionFactoryL2.hpp"

#include "fUML/impl/ExecutionFactoryL1Impl.hpp"

#include <uml/Activity.hpp>
#include <fuml/FUMLFactory.hpp>
#include <uml/ActivityParameterNode.hpp>
#include <uml/InitialNode.hpp>
#include <uml/ActivityFinalNode.hpp>
#include <uml/FlowFinalNode.hpp>
#include <uml/JoinNode.hpp>
#include <uml/MergeNode.hpp>
#include <uml/ForkNode.hpp>
#include <uml/DecisionNode.hpp>
#include <uml/InputPin.hpp>
#include <uml/OutputPin.hpp>
#include <uml/CallBehaviorAction.hpp>
#include <uml/CallOperationAction.hpp>
#include <uml/SendSignalAction.hpp>
#include <uml/ReadSelfAction.hpp>
#include <uml/TestIdentityAction.hpp>
#include <uml/ValueSpecificationAction.hpp>
#include <uml/CreateObjectAction.hpp>
#include <uml/DestroyObjectAction.hpp>
#include <uml/ReadStructuralFeatureAction.hpp>
#include <uml/ClearStructuralFeatureAction.hpp>
#include <uml/AddStructuralFeatureValueAction.hpp>
#include <uml/RemoveStructuralFeatureValueAction.hpp>
#include <uml/ReadLinkAction.hpp>
#include <uml/ClearAssociationAction.hpp>
#include <uml/CreateLinkAction.hpp>
#include <uml/DestroyLinkAction.hpp>
#include "uml/FlowFinalNode.hpp"


//*********************************
namespace fUML 
{
	class ExecutionFactoryL2Impl :virtual public ExecutionFactoryL1Impl, virtual public ExecutionFactoryL2 
	{
		public: 
			ExecutionFactoryL2Impl(const ExecutionFactoryL2Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutionFactoryL2Impl& operator=(ExecutionFactoryL2Impl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExecutionFactoryL2Impl();

			//Additional constructors for the containments back reference
			ExecutionFactoryL2Impl(std::weak_ptr<fUML::Locus > par_locus);




		public:
			//destructor
			virtual ~ExecutionFactoryL2Impl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> instantiateVisitor(std::shared_ptr<uml::Element>  element)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_EXECUTIONFACTORYL2EXECUTIONFACTORYL2IMPL_HPP */

