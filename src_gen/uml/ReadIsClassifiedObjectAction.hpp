//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READISCLASSIFIEDOBJECTACTION_HPP
#define UML_READISCLASSIFIEDOBJECTACTION_HPP

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
	 A ReadIsClassifiedObjectAction is an Action that determines whether an object is classified by a given Classifier.
	<p>From package UML::Actions.</p> */
	class ReadIsClassifiedObjectAction:virtual public Action	{
		public:
 			ReadIsClassifiedObjectAction(const ReadIsClassifiedObjectAction &) {}
			ReadIsClassifiedObjectAction& operator=(ReadIsClassifiedObjectAction const&) = delete;

		protected:
			ReadIsClassifiedObjectAction(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ReadIsClassifiedObjectAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The object InputPin has no type.
			object.type = null */ 
			virtual bool no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The multiplicity of the result OutputPin is 1..1.
			result.is(1,1) */ 
			virtual bool multiplicity_of_output(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of the result OutputPin is Boolean.
			result.type = Boolean */ 
			virtual bool boolean_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity_of_input(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the input object must be directly classified by the given Classifier or whether it may also be an instance of a specialization of the given Classifier.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDirect() const = 0;
			
			/*!
			 Indicates whether the input object must be directly classified by the given Classifier or whether it may also be an instance of a specialization of the given Classifier.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDirect (bool _isDirect)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifier against which the classification of the input object is tested.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Classifier > getClassifier() const = 0;
			
			/*!
			 The Classifier against which the classification of the input object is tested.
			<p>From package UML::Actions.</p> */
			virtual void setClassifier(std::shared_ptr<uml::Classifier> _classifier_classifier) = 0;
			/*!
			 The InputPin that holds the object whose classification is to be tested.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const = 0;
			
			/*!
			 The InputPin that holds the object whose classification is to be tested.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) = 0;
			/*!
			 The OutputPin that holds the Boolean result of the test.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const = 0;
			
			/*!
			 The OutputPin that holds the Boolean result of the test.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Indicates whether the input object must be directly classified by the given Classifier or whether it may also be an instance of a specialization of the given Classifier.
			<p>From package UML::Actions.</p> */ 
			bool m_isDirect =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Classifier against which the classification of the input object is tested.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Classifier > m_classifier;
			/*!
			 The InputPin that holds the object whose classification is to be tested.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_object;
			/*!
			 The OutputPin that holds the Boolean result of the test.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::OutputPin > m_result;
			

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
#endif /* end of include guard: UML_READISCLASSIFIEDOBJECTACTION_HPP */

