//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SENDSIGNALACTION_HPP
#define UML_SENDSIGNALACTION_HPP

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
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
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
	class OutputPin;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class Signal;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "uml/InvocationAction.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A SendSignalAction is an InvocationAction that creates a Signal instance and transmits it to the target object. Values from the argument InputPins are used to provide values for the attributes of the Signal. The requestor continues execution immediately after the Signal instance is sent out and cannot receive reply values.
	<p>From package UML::Actions.</p> */
	class SendSignalAction:virtual public InvocationAction
	{
		public:
 			SendSignalAction(const SendSignalAction &) {}
			SendSignalAction& operator=(SendSignalAction const&) = delete;

		protected:
			SendSignalAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SendSignalAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The number and order of argument InputPins must be the same as the number and order of attributes of the signal.
			argument->size()=signal.allAttributes()->size() */ 
			virtual bool number_order(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The type, ordering, and multiplicity of an argument InputPin must be the same as the corresponding attribute of the signal.
			let attribute: OrderedSet(Property) = signal.allAttributes() in
			Sequence{1..argument->size()}->forAll(i | 
				argument->at(i).type.conformsTo(attribute->at(i).type) and 
				argument->at(i).isOrdered = attribute->at(i).isOrdered and
				argument->at(i).compatibleWith(attribute->at(i))) */ 
			virtual bool type_ordering_multiplicity(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 If onPort is not empty, the Port given by onPort must be an owned or inherited feature of the type of the target InputPin.
			not onPort->isEmpty() implies target.type.oclAsType(Classifier).allFeatures()->includes(onPort) */ 
			virtual bool type_target_pin(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Signal whose instance is transmitted to the target.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Signal > getSignal() const = 0;
			
			/*!
			 The Signal whose instance is transmitted to the target.
			<p>From package UML::Actions.</p> */
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal_signal) = 0;
			/*!
			 The InputPin that provides the target object to which the Signal instance is sent.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getTarget() const = 0;
			
			/*!
			 The InputPin that provides the target object to which the Signal instance is sent.
			<p>From package UML::Actions.</p> */
			virtual void setTarget(std::shared_ptr<uml::InputPin> _target_target) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Signal whose instance is transmitted to the target.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Signal > m_signal;
			/*!
			 The InputPin that provides the target object to which the Signal instance is sent.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_target;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const = 0;/*!
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
#endif /* end of include guard: UML_SENDSIGNALACTION_HPP */
