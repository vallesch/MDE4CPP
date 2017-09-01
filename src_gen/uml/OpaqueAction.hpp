//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPAQUEACTION_HPP
#define UML_OPAQUEACTION_HPP

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

// base class includes
#include "Action.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An OpaqueAction is an Action whose functionality is not specified within UML.
	<p>From package UML::Actions.</p> */
	class OpaqueAction:virtual public Action	{
		public:
 			OpaqueAction(const OpaqueAction &) {}
			OpaqueAction& operator=(OpaqueAction const&) = delete;

		protected:
			OpaqueAction(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~OpaqueAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 If the language attribute is not empty, then the size of the body and language lists must be the same.
			language->notEmpty() implies (_'body'->size() = language->size()) */ 
			virtual bool language_body_size(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Provides a textual specification of the functionality of the Action, in one or more languages other than UML.
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getBody() const = 0;
			
			/*!
			 If provided, a specification of the language used for each of the body Strings.
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getLanguage() const = 0;
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPins providing inputs to the OpaqueAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > getInputValue() const = 0;
			
			/*!
			 The OutputPins on which the OpaqueAction provides outputs.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin > > getOutputValue() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Provides a textual specification of the functionality of the Action, in one or more languages other than UML.
			<p>From package UML::Actions.</p> */ 
			std::shared_ptr<Bag<std::string> > m_body; /*!
			 If provided, a specification of the language used for each of the body Strings.
			<p>From package UML::Actions.</p> */ 
			std::shared_ptr<Bag<std::string> > m_language; 
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InputPins providing inputs to the OpaqueAction.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > m_inputValue;
			/*!
			 The OutputPins on which the OpaqueAction provides outputs.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin > > m_outputValue;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0; 
	};

}
#endif /* end of include guard: UML_OPAQUEACTION_HPP */

