//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP
#define UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../BehaviorExecutionSpecification.hpp"

#include "impl/ExecutionSpecificationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class BehaviorExecutionSpecificationImpl :virtual public ExecutionSpecificationImpl, virtual public BehaviorExecutionSpecification 
	{
		public: 
			BehaviorExecutionSpecificationImpl(const BehaviorExecutionSpecificationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			BehaviorExecutionSpecificationImpl& operator=(BehaviorExecutionSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			BehaviorExecutionSpecificationImpl();

			//Additional constructors for the containments back reference
			BehaviorExecutionSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction);


			//Additional constructors for the containments back reference
			BehaviorExecutionSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand);




		public:
			//destructor
			virtual ~BehaviorExecutionSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Behavior > getBehavior() const ;
			
			/*!
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior_behavior) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP */

