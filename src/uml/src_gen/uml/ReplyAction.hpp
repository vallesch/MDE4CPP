//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REPLYACTION_HPP
#define UML_REPLYACTION_HPP

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
	class Action;
}

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
	class Namespace;
}

namespace uml 
{
	class OutputPin;
}

namespace uml 
{
	class RedefinableElement;
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
	class Trigger;
}

// base class includes
#include "uml/Action.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ReplyAction is an Action that accepts a set of reply values and a value containing return information produced by a previous AcceptCallAction. The ReplyAction returns the values to the caller of the previous call, completing execution of the call.
	<p>From package UML::Actions.</p> */
	class ReplyAction:virtual public Action
	{
		public:
 			ReplyAction(const ReplyAction &) {}
			ReplyAction& operator=(ReplyAction const&) = delete;

		protected:
			ReplyAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ReplyAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The event of the replyToCall Trigger must be a CallEvent.
			replyToCall.event.oclIsKindOf(CallEvent) */ 
			virtual bool event_on_reply_to_call_trigger(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The replyValue InputPins must match the output (return, out, and inout) parameters of the operation of the event of the replyToCall Trigger in number, type, ordering, and multiplicity.
			let parameter:OrderedSet(Parameter) = replyToCall.event.oclAsType(CallEvent).operation.outputParameters() in
			replyValue->size()=parameter->size() and
			Sequence{1..replyValue->size()}->forAll(i |
				replyValue->at(i).type.conformsTo(parameter->at(i).type) and
				replyValue->at(i).isOrdered=parameter->at(i).isOrdered and
				replyValue->at(i).compatibleWith(parameter->at(i))) */ 
			virtual bool pins_match_parameter(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Trigger specifying the Operation whose call is being replied to.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Trigger > getReplyToCall() const = 0;
			
			/*!
			 The Trigger specifying the Operation whose call is being replied to.
			<p>From package UML::Actions.</p> */
			virtual void setReplyToCall(std::shared_ptr<uml::Trigger> _replyToCall_replyToCall) = 0;
			/*!
			 A list of InputPins providing the values for the output (inout, out, and return) Parameters of the Operation. These values are returned to the caller.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::InputPin, uml::InputPin>> getReplyValue() const = 0;
			
			/*!
			 An InputPin that holds the return information value produced by an earlier AcceptCallAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getReturnInformation() const = 0;
			
			/*!
			 An InputPin that holds the return information value produced by an earlier AcceptCallAction.
			<p>From package UML::Actions.</p> */
			virtual void setReturnInformation(std::shared_ptr<uml::InputPin> _returnInformation_returnInformation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Trigger specifying the Operation whose call is being replied to.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Trigger > m_replyToCall;
			/*!
			 A list of InputPins providing the values for the output (inout, out, and return) Parameters of the Operation. These values are returned to the caller.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::InputPin, uml::InputPin>> m_replyValue;
			/*!
			 An InputPin that holds the return information value produced by an earlier AcceptCallAction.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_returnInformation;
			

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
#endif /* end of include guard: UML_REPLYACTION_HPP */
