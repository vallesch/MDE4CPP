//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DATASTORENODEDATASTORENODEIMPL_HPP
#define UML_DATASTORENODEDATASTORENODEIMPL_HPP

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
#include "../DataStoreNode.hpp"

#include "impl/CentralBufferNodeImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class DataStoreNodeImpl :virtual public CentralBufferNodeImpl, virtual public DataStoreNode 
	{
		public: 
			DataStoreNodeImpl(const DataStoreNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DataStoreNodeImpl& operator=(DataStoreNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DataStoreNodeImpl();

			//Additional constructors for the containments back reference
			DataStoreNodeImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			DataStoreNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			DataStoreNodeImpl(std::shared_ptr<uml::Namespace > par_namespace);




		public:
			//destructor
			virtual ~DataStoreNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
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
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
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
#endif /* end of include guard: UML_DATASTORENODEDATASTORENODEIMPL_HPP */

