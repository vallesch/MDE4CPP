//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INSTANCESPECIFICATIONINSTANCESPECIFICATIONIMPL_HPP
#define UML_INSTANCESPECIFICATIONINSTANCESPECIFICATIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../InstanceSpecification.hpp"

#include "impl/DeployedArtifactImpl.hpp"
#include "impl/DeploymentTargetImpl.hpp"
#include "impl/PackageableElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InstanceSpecificationImpl :virtual public DeployedArtifactImpl, virtual public DeploymentTargetImpl, virtual public PackageableElementImpl, virtual public InstanceSpecification 
	{
		public: 
			InstanceSpecificationImpl(const InstanceSpecificationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			InstanceSpecificationImpl& operator=(InstanceSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InstanceSpecificationImpl();

			//Additional constructors for the containments back reference
			InstanceSpecificationImpl(std::shared_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InstanceSpecificationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~InstanceSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An InstanceSpecification can act as a DeployedArtifact if it represents an instance of an Artifact.
			deploymentForArtifact->notEmpty() implies classifier->exists(oclIsKindOf(Artifact)) */ 
			virtual bool deployment_artifact(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 No more than one slot in an InstanceSpecification may have the same definingFeature.
			classifier->forAll(c | (c.allSlottableFeatures()->forAll(f | slot->select(s | s.definingFeature = f)->size() <= 1))) */ 
			virtual bool structural_feature(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The definingFeature of each slot is a StructuralFeature related to a classifier of the InstanceSpecification, including direct attributes, inherited attributes, private attributes in generalizations, and memberEnds of Associations, but excluding redefined StructuralFeatures.
			slot->forAll(s | classifier->exists (c | c.allSlottableFeatures()->includes (s.definingFeature))) */ 
			virtual bool defining_feature(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 An InstanceSpecification can act as a DeploymentTarget if it represents an instance of a Node and functions as a part in the internal structure of an encompassing Node.
			deployment->notEmpty() implies classifier->exists(node | node.oclIsKindOf(Node) and Node.allInstances()->exists(n | n.part->exists(p | p.type = node))) */ 
			virtual bool deployment_target(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifier or Classifiers of the represented instance. If multiple Classifiers are specified, the instance is classified by all of them.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr< Bag<uml::Classifier> > getClassifier() const ;
			
			/*!
			 A Slot giving the value or values of a StructuralFeature of the instance. An InstanceSpecification can have one Slot per StructuralFeature of its Classifiers, including inherited features. It is not necessary to model a Slot for every StructuralFeature, in which case the InstanceSpecification is a partial description.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::Slot, uml::Element > > getSlot() const ;
			
			/*!
			 A specification of how to compute, derive, or construct the instance.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getSpecification() const ;
			
			/*!
			 A specification of how to compute, derive, or construct the instance.
			<p>From package UML::Classification.</p> */
			virtual void setSpecification(std::shared_ptr<uml::ValueSpecification> _specification_specification) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_INSTANCESPECIFICATIONINSTANCESPECIFICATIONIMPL_HPP */

