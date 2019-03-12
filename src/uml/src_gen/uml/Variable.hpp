//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VARIABLE_HPP
#define UML_VARIABLE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;



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

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class ConnectorEnd;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class MultiplicityElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/ConnectableElement.hpp"

#include "uml/MultiplicityElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Variable is a ConnectableElement that may store values during the execution of an Activity. Reading and writing the values of a Variable provides an alternative means for passing data than the use of ObjectFlows. A Variable may be owned directly by an Activity, in which case it is accessible from anywhere within that activity, or it may be owned by a StructuredActivityNode, in which case it is only accessible within that node.
	<p>From package UML::Activities.</p> */
	class Variable:virtual public ConnectableElement,virtual public MultiplicityElement
	{
		public:
 			Variable(const Variable &) {}
			Variable& operator=(Variable const&) = delete;

		protected:
			Variable(){}


			//Additional constructors for the containments back reference

			Variable(std::weak_ptr<uml::Activity > par_activityScope);

			//Additional constructors for the containments back reference

			Variable(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Variable(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Variable(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

			//Additional constructors for the containments back reference

			Variable(std::weak_ptr<uml::StructuredActivityNode > par_scope);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Variable() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A Variable is accessible by Actions within its scope (the Activity or StructuredActivityNode that owns it).
			result = (if scope<>null then scope.allOwnedNodes()->includes(a)
			else a.containingActivity()=activityScope
			endif)
			<p>From package UML::Activities.</p> */ 
			virtual bool isAccessibleBy(std::shared_ptr<uml::Action>  a) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::Activity > getActivityScope() const = 0;
			
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setActivityScope(std::shared_ptr<uml::Activity> _activityScope_activityScope) = 0;
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::StructuredActivityNode > getScope() const = 0;
			
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setScope(std::shared_ptr<uml::StructuredActivityNode> _scope_scope) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			std::weak_ptr<uml::Activity > m_activityScope;
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			std::weak_ptr<uml::StructuredActivityNode > m_scope;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_VARIABLE_HPP */
