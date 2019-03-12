//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PINPINIMPL_HPP
#define UML_PINPINIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Pin.hpp"

#include "uml/impl/MultiplicityElementImpl.hpp"
#include "uml/impl/ObjectNodeImpl.hpp"

//*********************************
namespace uml 
{
	class PinImpl :virtual public MultiplicityElementImpl, virtual public ObjectNodeImpl, virtual public Pin 
	{
		public: 
			PinImpl(const PinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PinImpl& operator=(PinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PinImpl();
			virtual std::shared_ptr<Pin> getThisPinPtr() const;
			virtual void setThisPinPtr(std::weak_ptr<Pin> thisPinPtr);

			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~PinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A control Pin has a control type.
			isControl implies isControlType */ 
			virtual bool control_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 Pin multiplicity is not unique.
			not isUnique */ 
			virtual bool not_unique(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the Pin provides data to the Action or just controls how the Action executes.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsControl() const ;
			
			/*!
			 Indicates whether the Pin provides data to the Action or just controls how the Action executes.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsControl (bool _isControl); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<Pin> m_thisPinPtr;
	};
}
#endif /* end of include guard: UML_PINPINIMPL_HPP */
