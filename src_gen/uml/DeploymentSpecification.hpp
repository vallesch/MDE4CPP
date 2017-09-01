//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DEPLOYMENTSPECIFICATION_HPP
#define UML_DEPLOYMENTSPECIFICATION_HPP

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
	class Artifact;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
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

namespace uml 
{
	class Deployment;
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
	class ElementImport;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class Manifestation;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Property;
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
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "Artifact.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A deployment specification specifies a set of properties that determine execution parameters of a component artifact that is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or implements deployment specification properties is a deployment descriptor.
	<p>From package UML::Deployments.</p> */
	class DeploymentSpecification:virtual public Artifact	{
		public:
 			DeploymentSpecification(const DeploymentSpecification &) {}
			DeploymentSpecification& operator=(DeploymentSpecification const&) = delete;

		protected:
			DeploymentSpecification(){}


			//Additional constructors for the containments back reference
			DeploymentSpecification(std::weak_ptr<uml::Deployment > par_deployment){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DeploymentSpecification() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The DeploymentTarget of a DeploymentSpecification is a kind of ExecutionEnvironment.
			deployment->forAll (location.oclIsKindOf(ExecutionEnvironment)) */ 
			virtual bool deployment_target(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The deployedElements of a DeploymentTarget that are involved in a Deployment that has an associated Deployment-Specification is a kind of Component (i.e., the configured components).
			deployment->forAll (location.deployedElement->forAll (oclIsKindOf(Component))) */ 
			virtual bool deployed_elements(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address.'
			<p>From package UML::Deployments.</p> */ 
			virtual std::string getDeploymentLocation() const = 0;
			
			/*!
			 The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address.'
			<p>From package UML::Deployments.</p> */ 
			virtual void setDeploymentLocation (std::string _deploymentLocation)= 0; 
			
			/*!
			 The location where a component Artifact executes. This may be a local or remote location.
			<p>From package UML::Deployments.</p> */ 
			virtual std::string getExecutionLocation() const = 0;
			
			/*!
			 The location where a component Artifact executes. This may be a local or remote location.
			<p>From package UML::Deployments.</p> */ 
			virtual void setExecutionLocation (std::string _executionLocation)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The deployment with which the DeploymentSpecification is associated.
			<p>From package UML::Deployments.</p> */
			virtual std::weak_ptr<uml::Deployment > getDeployment() const = 0;
			
			/*!
			 The deployment with which the DeploymentSpecification is associated.
			<p>From package UML::Deployments.</p> */
			virtual void setDeployment(std::shared_ptr<uml::Deployment> _deployment_deployment) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address.'
			<p>From package UML::Deployments.</p> */ 
			std::string m_deploymentLocation ;
			/*!
			 The location where a component Artifact executes. This may be a local or remote location.
			<p>From package UML::Deployments.</p> */ 
			std::string m_executionLocation ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The deployment with which the DeploymentSpecification is associated.
			<p>From package UML::Deployments.</p> */
			std::weak_ptr<uml::Deployment > m_deployment;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_DEPLOYMENTSPECIFICATION_HPP */

