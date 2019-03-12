//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INPUTPIN_HPP
#define UML_INPUTPIN_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

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
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class CallOperationAction;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
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
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class InvocationAction;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Pin;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuralFeatureAction;
}

namespace uml 
{
	class StructuredActivityNode;
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
#include "uml/Pin.hpp"

// enum includes
#include "uml/ObjectNodeOrderingKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InputPin is a Pin that holds input values to be consumed by an Action.
	<p>From package UML::Actions.</p> */
	class InputPin:virtual public Pin
	{
		public:
 			InputPin(const InputPin &) {}
			InputPin& operator=(InputPin const&) = delete;

		protected:
			InputPin(){}


			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::Activity > par_activity);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::CallOperationAction > par_callOperationAction);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::InvocationAction > par_invocationAction);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			InputPin(std::weak_ptr<uml::StructuralFeatureAction > par_structuralFeatureAction);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~InputPin() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 An InputPin may have outgoing ActivityEdges only when it is owned by a StructuredActivityNode, and these edges must target a node contained (directly or indirectly) in the owning StructuredActivityNode.
			outgoing->notEmpty() implies
				action<>null and
				action.oclIsKindOf(StructuredActivityNode) and
				action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(outgoing.target) */ 
			virtual bool outgoing_edges_structured_only(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::CallOperationAction > getCallOperationAction() const = 0;
			
			/*!
			 */
			virtual void setCallOperationAction(std::shared_ptr<uml::CallOperationAction> _callOperationAction_callOperationAction) = 0;
			/*!
			 */
			virtual std::weak_ptr<uml::InvocationAction > getInvocationAction() const = 0;
			
			/*!
			 */
			virtual void setInvocationAction(std::shared_ptr<uml::InvocationAction> _invocationAction_invocationAction) = 0;
			/*!
			 */
			virtual std::weak_ptr<uml::StructuralFeatureAction > getStructuralFeatureAction() const = 0;
			
			/*!
			 */
			virtual void setStructuralFeatureAction(std::shared_ptr<uml::StructuralFeatureAction> _structuralFeatureAction_structuralFeatureAction) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<uml::CallOperationAction > m_callOperationAction;
			/*!
			 */
			std::weak_ptr<uml::InvocationAction > m_invocationAction;
			/*!
			 */
			std::weak_ptr<uml::StructuralFeatureAction > m_structuralFeatureAction;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_INPUTPIN_HPP */
