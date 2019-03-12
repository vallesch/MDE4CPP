//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PORT_HPP
#define UML_PORT_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
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
	class Association;
}

namespace uml 
{
	class Class;
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
	class ConnectorEnd;
}

namespace uml 
{
	class DataType;
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
	class Interface;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class ProtocolStateMachine;
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
#include "uml/Property.hpp"

// enum includes
#include "uml/AggregationKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Port is a property of an EncapsulatedClassifier that specifies a distinct interaction point between that EncapsulatedClassifier and its environment or between the (behavior of the) EncapsulatedClassifier and its internal parts. Ports are connected to Properties of the EncapsulatedClassifier by Connectors through which requests can be made to invoke BehavioralFeatures. A Port may specify the services an EncapsulatedClassifier provides (offers) to its environment as well as the services that an EncapsulatedClassifier expects (requires) of its environment.  A Port may have an associated ProtocolStateMachine.
	<p>From package UML::StructuredClassifiers.</p> */
	class Port:virtual public Property
	{
		public:
 			Port(const Port &) {}
			Port& operator=(Port const&) = delete;

		protected:
			Port(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Port() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly the type of the Port if the Port is typed by an Interface.
			result = (if type.oclIsKindOf(Interface) 
			then type.oclAsType(Interface)->asSet() 
			else type.oclAsType(Classifier).allRealizedInterfaces() 
			endif)
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > basicProvided() = 0;
			
			/*!
			 The union of the sets of Interfaces used by the type of the Port and its supertypes.
			result = ( type.oclAsType(Classifier).allUsedInterfaces() )
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > basicRequired() = 0;
			
			/*!
			 A defaultValue for port cannot be specified when the type of the Port is an Interface.
			type.oclIsKindOf(Interface) implies defaultValue->isEmpty() */ 
			virtual bool default_value(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 All Ports are owned by an EncapsulatedClassifier.
			owner = encapsulatedClassifier */ 
			virtual bool encapsulated_owner(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Derivation for Port::/provided
			result = (if isConjugated then basicRequired() else basicProvided() endif)
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getProvideds() = 0;
			
			/*!
			 Derivation for Port::/required
			result = (if isConjugated then basicProvided() else basicRequired() endif)
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getRequireds() = 0;
			
			/*!
			 Port.aggregation must be composite.
			aggregation = AggregationKind::composite */ 
			virtual bool port_aggregation(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier. Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it may contain.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsBehavior() const = 0;
			
			/*!
			 Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier. Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it may contain.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsBehavior (bool _isBehavior)= 0; 
			
			/*!
			 Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsConjugated() const = 0;
			
			/*!
			 Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsConjugated (bool _isConjugated)= 0; 
			
			/*!
			 If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier.  If false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal implementation of the EncapsulatedClassifier and other properties that are considered part of its implementation.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsService() const = 0;
			
			/*!
			 If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier.  If false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal implementation of the EncapsulatedClassifier and other properties that are considered part of its implementation.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsService (bool _isService)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An optional ProtocolStateMachine which describes valid interactions at this interaction point.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<uml::ProtocolStateMachine > getProtocol() const = 0;
			
			/*!
			 An optional ProtocolStateMachine which describes valid interactions at this interaction point.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setProtocol(std::shared_ptr<uml::ProtocolStateMachine> _protocol_protocol) = 0;
			/*!
			 The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCclassifier offers to its environment via this Port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of Interfaces realized by the type of the port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface. If isConjugated is true, it is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Interface>> getProvided() const = 0;
			
			/*!
			 A Port may be redefined when its containing EncapsulatedClassifier is specialized. The redefining Port may have additional Interfaces to those that are associated with the redefined Port or it may replace an Interface by one of its subtypes.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Port, uml::Property /*Subset does not reference a union*/>> getRedefinedPort() const = 0;
			
			/*!
			 The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCassifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes. If isConjugated is true, it is derived as the union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Interface>> getRequired() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier. Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it may contain.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isBehavior = false;
			/*!
			 Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isConjugated = false;
			/*!
			 If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier.  If false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal implementation of the EncapsulatedClassifier and other properties that are considered part of its implementation.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isService = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An optional ProtocolStateMachine which describes valid interactions at this interaction point.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<uml::ProtocolStateMachine > m_protocol;
			/*!
			 The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCclassifier offers to its environment via this Port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of Interfaces realized by the type of the port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface. If isConjugated is true, it is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Interface>> m_provided;
			/*!
			 A Port may be redefined when its containing EncapsulatedClassifier is specialized. The redefining Port may have additional Interfaces to those that are associated with the redefined Port or it may replace an Interface by one of its subtypes.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Port, uml::Property /*Subset does not reference a union*/>> m_redefinedPort;
			/*!
			 The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCassifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes. If isConjugated is true, it is derived as the union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Interface>> m_required;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getFeaturingClassifier() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PORT_HPP */
