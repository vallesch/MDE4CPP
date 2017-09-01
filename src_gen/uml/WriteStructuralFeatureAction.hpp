//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_WRITESTRUCTURALFEATUREACTION_HPP
#define UML_WRITESTRUCTURALFEATUREACTION_HPP

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
	class StructuralFeature;
}

namespace uml 
{
	class StructuralFeatureAction;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "StructuralFeatureAction.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 WriteStructuralFeatureAction is an abstract class for StructuralFeatureActions that change StructuralFeature values.
	<p>From package UML::Actions.</p> */
	class WriteStructuralFeatureAction:virtual public StructuralFeatureAction	{
		public:
 			WriteStructuralFeatureAction(const WriteStructuralFeatureAction &) {}
			WriteStructuralFeatureAction& operator=(WriteStructuralFeatureAction const&) = delete;

		protected:
			WriteStructuralFeatureAction(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~WriteStructuralFeatureAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the result OutputPin must be 1..1.
			result <> null implies result.is(1,1) */ 
			virtual bool multiplicity_of_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of the value InputPin must conform to the type of the structuralFeature.
			value <> null implies value.type.conformsTo(structuralFeature.type) */ 
			virtual bool type_of_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The multiplicity of the value InputPin is 1..1.
			value<>null implies value.is(1,1) */ 
			virtual bool multiplicity_of_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of the result OutputPin is the same as the type of the inherited object InputPin.
			result <> null implies result.type = object.type */ 
			virtual bool type_of_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPin on which is put the input object as modified by the WriteStructuralFeatureAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const = 0;
			
			/*!
			 The OutputPin on which is put the input object as modified by the WriteStructuralFeatureAction.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) = 0;
			/*!
			 The InputPin that provides the value to be added or removed from the StructuralFeature.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getValue() const = 0;
			
			/*!
			 The InputPin that provides the value to be added or removed from the StructuralFeature.
			<p>From package UML::Actions.</p> */
			virtual void setValue(std::shared_ptr<uml::InputPin> _value_value) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The OutputPin on which is put the input object as modified by the WriteStructuralFeatureAction.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::OutputPin > m_result;
			/*!
			 The InputPin that provides the value to be added or removed from the StructuralFeature.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_value;
			

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
#endif /* end of include guard: UML_WRITESTRUCTURALFEATUREACTION_HPP */

