//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP
#define UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../TestIdentityAction.hpp"

#include "uml/impl/ActionImpl.hpp"

//*********************************
namespace uml 
{
	class TestIdentityActionImpl :virtual public ActionImpl, virtual public TestIdentityAction 
	{
		public: 
			TestIdentityActionImpl(const TestIdentityActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TestIdentityActionImpl& operator=(TestIdentityActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TestIdentityActionImpl();
			virtual std::shared_ptr<TestIdentityAction> getThisTestIdentityActionPtr() const;
			virtual void setThisTestIdentityActionPtr(std::weak_ptr<TestIdentityAction> thisTestIdentityActionPtr);

			//Additional constructors for the containments back reference
			TestIdentityActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			TestIdentityActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			TestIdentityActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TestIdentityActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~TestIdentityActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the InputPins is 1..1.
			first.is(1,1) and second.is(1,1) */ 
			virtual bool multiplicity(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The InputPins have no type.
			first.type= null and second.type = null */ 
			virtual bool no_type(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The type of the result OutputPin is Boolean.
			result.type=Boolean */ 
			virtual bool result_is_boolean(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getFirst() const ;
			
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setFirst(std::shared_ptr<uml::InputPin> _first_first) ;
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const ;
			
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) ;
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getSecond() const ;
			
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setSecond(std::shared_ptr<uml::InputPin> _second_second) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
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
			std::weak_ptr<TestIdentityAction> m_thisTestIdentityActionPtr;
	};
}
#endif /* end of include guard: UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP */
