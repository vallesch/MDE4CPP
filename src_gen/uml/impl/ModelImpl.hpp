//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MODELMODELIMPL_HPP
#define UML_MODELMODELIMPL_HPP

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
#include "../Model.hpp"

#include "impl/PackageImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ModelImpl :virtual public PackageImpl, virtual public Model 
	{
		public: 
			ModelImpl(const ModelImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ModelImpl& operator=(ModelImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ModelImpl();

			//Additional constructors for the containments back reference
			ModelImpl(std::shared_ptr<uml::Package > par_nestingPackage);




		public:
			//destructor
			virtual ~ModelImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Determines whether this model is a metamodel. */ 
			virtual bool isMetamodel()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The name of the viewpoint that is expressed by a model (this name may refer to a profile definition).
			<p>From package UML::Packages.</p> */ 
			virtual std::string getViewpoint() const ;
			
			/*!
			 The name of the viewpoint that is expressed by a model (this name may refer to a profile definition).
			<p>From package UML::Packages.</p> */ 
			virtual void setViewpoint (std::string _viewpoint); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
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
#endif /* end of include guard: UML_MODELMODELIMPL_HPP */

