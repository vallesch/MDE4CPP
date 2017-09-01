//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VARIABLEVARIABLEIMPL_HPP
#define UML_VARIABLEVARIABLEIMPL_HPP

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
#include "../Variable.hpp"

#include "impl/ConnectableElementImpl.hpp"
#include "impl/MultiplicityElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class VariableImpl :virtual public ConnectableElementImpl, virtual public MultiplicityElementImpl, virtual public Variable 
	{
		public: 
			VariableImpl(const VariableImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			VariableImpl& operator=(VariableImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			VariableImpl();

			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::Activity > par_activityScope);


			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::StructuredActivityNode > par_scope);




		public:
			//destructor
			virtual ~VariableImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A Variable is accessible by Actions within its scope (the Activity or StructuredActivityNode that owns it).
			result = (if scope<>null then scope.allOwnedNodes()->includes(a)
			else a.containingActivity()=activityScope
			endif)
			<p>From package UML::Activities.</p> */ 
			virtual bool isAccessibleBy(std::shared_ptr<uml::Action>  a)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::Activity > getActivityScope() const ;
			
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setActivityScope(std::shared_ptr<uml::Activity> _activityScope_activityScope) ;
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::StructuredActivityNode > getScope() const ;
			
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setScope(std::shared_ptr<uml::StructuredActivityNode> _scope_scope) ;
							
			
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
#endif /* end of include guard: UML_VARIABLEVARIABLEIMPL_HPP */

