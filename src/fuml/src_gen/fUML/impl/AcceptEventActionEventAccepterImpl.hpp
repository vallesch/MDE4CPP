//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP
#define FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../AcceptEventActionEventAccepter.hpp"

#include "fUML/impl/EventAccepterImpl.hpp"

//*********************************
namespace fUML 
{
	class AcceptEventActionEventAccepterImpl :virtual public EventAccepterImpl, virtual public AcceptEventActionEventAccepter 
	{
		public: 
			AcceptEventActionEventAccepterImpl(const AcceptEventActionEventAccepterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			AcceptEventActionEventAccepterImpl& operator=(AcceptEventActionEventAccepterImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			AcceptEventActionEventAccepterImpl();
			virtual std::shared_ptr<AcceptEventActionEventAccepter> getThisAcceptEventActionEventAccepterPtr() const;
			virtual void setThisAcceptEventActionEventAccepterPtr(std::weak_ptr<AcceptEventActionEventAccepter> thisAcceptEventActionEventAccepterPtr);



		public:
			//destructor
			virtual ~AcceptEventActionEventAccepterImpl();
			
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
			 */
			virtual std::shared_ptr<fUML::AcceptEventActionActivation > getActionActivation() const ;
			
			/*!
			 */
			virtual void setActionActivation(std::shared_ptr<fUML::AcceptEventActionActivation> _actionActivation_actionActivation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<AcceptEventActionEventAccepter> m_thisAcceptEventActionEventAccepterPtr;
	};
}
#endif /* end of include guard: FUML_ACCEPTEVENTACTIONEVENTACCEPTERACCEPTEVENTACTIONEVENTACCEPTERIMPL_HPP */
