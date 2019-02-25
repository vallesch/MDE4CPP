//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RELATIONSHIPRELATIONSHIPIMPL_HPP
#define UML_RELATIONSHIPRELATIONSHIPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Relationship.hpp"

#include "uml/impl/ElementImpl.hpp"

//*********************************
namespace uml 
{
	class RelationshipImpl :virtual public ElementImpl, virtual public Relationship 
	{
		public: 
			RelationshipImpl(const RelationshipImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			RelationshipImpl& operator=(RelationshipImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			RelationshipImpl();
			virtual std::shared_ptr<Relationship> getThisRelationshipPtr() const;
			virtual void setThisRelationshipPtr(std::weak_ptr<Relationship> thisRelationshipPtr);

			//Additional constructors for the containments back reference
			RelationshipImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~RelationshipImpl();
			
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
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ; 
			 
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
			std::weak_ptr<Relationship> m_thisRelationshipPtr;
	};
}
#endif /* end of include guard: UML_RELATIONSHIPRELATIONSHIPIMPL_HPP */
