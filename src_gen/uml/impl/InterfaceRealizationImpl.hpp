//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP
#define UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP

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
#include "../InterfaceRealization.hpp"

#include "impl/RealizationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InterfaceRealizationImpl :virtual public RealizationImpl, virtual public InterfaceRealization 
	{
		public: 
			InterfaceRealizationImpl(const InterfaceRealizationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			InterfaceRealizationImpl& operator=(InterfaceRealizationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InterfaceRealizationImpl();

			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::BehavioredClassifier > par_implementingClassifier);




		public:
			//destructor
			virtual ~InterfaceRealizationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Interface > getContract() const ;
			
			/*!
			 References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setContract(std::shared_ptr<uml::Interface> _contract_contract) ;
			/*!
			 References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::weak_ptr<uml::BehavioredClassifier > getImplementingClassifier() const ;
			
			/*!
			 References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setImplementingClassifier(std::shared_ptr<uml::BehavioredClassifier> _implementingClassifier_implementingClassifier) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const ;/*!
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
#endif /* end of include guard: UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP */

