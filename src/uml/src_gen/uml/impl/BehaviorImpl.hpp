//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIORBEHAVIORIMPL_HPP
#define UML_BEHAVIORBEHAVIORIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Behavior.hpp"

#include "uml/impl/ClassImpl.hpp"

//*********************************
namespace uml 
{
	class BehaviorImpl :virtual public ClassImpl, virtual public Behavior 
	{
		public: 
			BehaviorImpl(const BehaviorImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			BehaviorImpl& operator=(BehaviorImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			BehaviorImpl();
			virtual std::shared_ptr<Behavior> getThisBehaviorPtr() const;
			virtual void setThisBehaviorPtr(std::weak_ptr<Behavior> thisBehaviorPtr);

			//Additional constructors for the containments back reference
			BehaviorImpl(std::weak_ptr<uml::BehavioredClassifier > par_behavioredClassifier);


			//Additional constructors for the containments back reference
			BehaviorImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			BehaviorImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			BehaviorImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			BehaviorImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~BehaviorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The first BehavioredClassifier reached by following the chain of owner relationships from the Behavior, if any.
			if from.oclIsKindOf(BehavioredClassifier) then
			    from.oclAsType(BehavioredClassifier)
			else if from.owner = null then
			    null
			else
			    self.behavioredClassifier(from.owner)
			endif
			endif
			<p>From package UML::CommonBehavior.</p> */ 
			virtual std::shared_ptr<uml::BehavioredClassifier> behavioredClassifier(std::shared_ptr<uml::Element>  from) ;
			
			/*!
			 The specification BehavioralFeature must be a feature (possibly inherited) of the context BehavioredClassifier of the Behavior.
			_'context'.feature->includes(specification) */ 
			virtual bool feature_of_context_classifier(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			/*!
			 The in and inout ownedParameters of the Behavior.
			result = (ownedParameter->select(direction=ParameterDirectionKind::_'in' or direction=ParameterDirectionKind::inout))
			<p>From package UML::CommonBehavior.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > inputParameters() ;
			
			/*!
			 There may be at most one Behavior for a given pairing of BehavioredClassifier (as owner of the Behavior) and BehavioralFeature (as specification of the Behavior).
			specification <> null implies _'context'.ownedBehavior->select(specification=self.specification)->size() = 1 */ 
			virtual bool most_one_behavior(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The out, inout and return ownedParameters.
			result = (ownedParameter->select(direction=ParameterDirectionKind::out or direction=ParameterDirectionKind::inout or direction=ParameterDirectionKind::return))
			<p>From package UML::CommonBehavior.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > outputParameters() ;
			
			/*!
			 If a Behavior has a specification BehavioralFeature, then it must have the same number of ownedParameters as its specification. The Behavior Parameters must also "match" the BehavioralParameter Parameters, but the exact requirements for this matching are not formalized.
			specification <> null implies ownedParameter->size() = specification.ownedParameter->size() */ 
			virtual bool parameters_match(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Tells whether the Behavior can be invoked while it is still executing from a previous invocation.
			<p>From package UML::CommonBehavior.</p> */ 
			virtual bool getIsReentrant() const ;
			
			/*!
			 Tells whether the Behavior can be invoked while it is still executing from a previous invocation.
			<p>From package UML::CommonBehavior.</p> */ 
			virtual void setIsReentrant (bool _isReentrant); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::BehavioredClassifier > getBehavioredClassifier() const ;
			
			/*!
			 */
			virtual void setBehavioredClassifier(std::shared_ptr<uml::BehavioredClassifier> _behavioredClassifier_behavioredClassifier) ;
			/*!
			 The BehavioredClassifier that is the context for the execution of the Behavior. A Behavior that is directly owned as a nestedClassifier does not have a context. Otherwise, to determine the context of a Behavior, find the first BehavioredClassifier reached by following the chain of owner relationships from the Behavior, if any. If there is such a BehavioredClassifier, then it is the context, unless it is itself a Behavior with a non-empty context, in which case that is also the context for the original Behavior. For example, following this algorithm, the context of an entry Behavior in a StateMachine is the BehavioredClassifier that owns the StateMachine. The features of the context BehavioredClassifier as well as the Elements visible to the context Classifier are visible to the Behavior.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::BehavioredClassifier > getContext() const ;
			
			/*!
			 The BehavioredClassifier that is the context for the execution of the Behavior. A Behavior that is directly owned as a nestedClassifier does not have a context. Otherwise, to determine the context of a Behavior, find the first BehavioredClassifier reached by following the chain of owner relationships from the Behavior, if any. If there is such a BehavioredClassifier, then it is the context, unless it is itself a Behavior with a non-empty context, in which case that is also the context for the original Behavior. For example, following this algorithm, the context of an entry Behavior in a StateMachine is the BehavioredClassifier that owns the StateMachine. The features of the context BehavioredClassifier as well as the Elements visible to the context Classifier are visible to the Behavior.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setContext(std::shared_ptr<uml::BehavioredClassifier> _context_context) ;
			/*!
			 References a list of Parameters to the Behavior which describes the order and type of arguments that can be given when the Behavior is invoked and of the values which will be returned when the Behavior completes its execution.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<Subset<uml::Parameter, uml::NamedElement>> getOwnedParameter() const ;
			
			/*!
			 The ParameterSets owned by this Behavior.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<Subset<uml::ParameterSet, uml::NamedElement>> getOwnedParameterSet() const ;
			
			/*!
			 An optional set of Constraints specifying what is fulfilled after the execution of the Behavior is completed, if its precondition was fulfilled before its invocation.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<Subset<uml::Constraint, uml::Constraint /*Subset does not reference a union*/>> getPostcondition() const ;
			
			/*!
			 An optional set of Constraints specifying what must be fulfilled before the Behavior is invoked.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<Subset<uml::Constraint, uml::Constraint /*Subset does not reference a union*/>> getPrecondition() const ;
			
			/*!
			 References the Behavior that this Behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the Behavior implements a BehavioralFeature, it replaces the redefined Behavior. If the Behavior is a classifierBehavior, it extends the redefined Behavior.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<Subset<uml::Behavior, uml::Classifier /*Subset does not reference a union*/>> getRedefinedBehavior() const ;
			
			/*!
			 Designates a BehavioralFeature that the Behavior implements. The BehavioralFeature must be owned by the BehavioredClassifier that owns the Behavior or be inherited by it. The Parameters of the BehavioralFeature and the implementing Behavior must match. A Behavior does not need to have a specification, in which case it either is the classifierBehavior of a BehavioredClassifier or it can only be invoked by another Behavior of the Classifier.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::BehavioralFeature > getSpecification() const ;
			
			/*!
			 Designates a BehavioralFeature that the Behavior implements. The BehavioralFeature must be owned by the BehavioredClassifier that owns the Behavior or be inherited by it. The Parameters of the BehavioralFeature and the implementing Behavior must match. A Behavior does not need to have a specification, in which case it either is the classifierBehavior of a BehavioredClassifier or it can only be invoked by another Behavior of the Classifier.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setSpecification(std::shared_ptr<uml::BehavioralFeature> _specification_specification) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Behavior> m_thisBehaviorPtr;
	};
}
#endif /* end of include guard: UML_BEHAVIORBEHAVIORIMPL_HPP */
