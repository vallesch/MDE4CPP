//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FINALSTATEFINALSTATEIMPL_HPP
#define UML_FINALSTATEFINALSTATEIMPL_HPP

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
#include "../FinalState.hpp"

#include "impl/StateImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class FinalStateImpl :virtual public StateImpl, virtual public FinalState 
	{
		public: 
			FinalStateImpl(const FinalStateImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			FinalStateImpl& operator=(FinalStateImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			FinalStateImpl();

			//Additional constructors for the containments back reference
			FinalStateImpl(std::shared_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			FinalStateImpl(std::weak_ptr<uml::Region > par_container);




		public:
			//destructor
			virtual ~FinalStateImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A FinalState has no exit Behavior.
			exit->isEmpty() */ 
			virtual bool no_exit_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A FinalState cannot have any outgoing Transitions.
			outgoing->size() = 0 */ 
			virtual bool no_outgoing_transitions(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A FinalState cannot have Regions.
			region->size() = 0 */ 
			virtual bool no_regions(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A FinalState cannot reference a submachine.
			submachine->isEmpty() */ 
			virtual bool cannot_reference_submachine(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A FinalState has no entry Behavior.
			entry->isEmpty() */ 
			virtual bool no_entry_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A FinalState has no state (doActivity) Behavior.
			doActivity->isEmpty() */ 
			virtual bool no_state_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
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
#endif /* end of include guard: UML_FINALSTATEFINALSTATEIMPL_HPP */

