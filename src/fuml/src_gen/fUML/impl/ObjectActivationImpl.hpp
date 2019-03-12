//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP
#define FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ObjectActivation.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class ObjectActivationImpl :virtual public ecore::EObjectImpl,
virtual public ObjectActivation 
	{
		public: 
			ObjectActivationImpl(const ObjectActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ObjectActivationImpl& operator=(ObjectActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ObjectActivationImpl();
			virtual std::shared_ptr<ObjectActivation> getThisObjectActivationPtr() const;
			virtual void setThisObjectActivationPtr(std::weak_ptr<ObjectActivation> thisObjectActivationPtr);



		public:
			//destructor
			virtual ~ObjectActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter) ;
			
			/*!
			 */ 
			virtual void _send(Any signal) ;
			
			/*!
			 */ 
			virtual void _startObjectBehavior() ;
			
			/*!
			 */ 
			virtual void dispatchNextEvent() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SignalInstance> retrieveNextEvent() ;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::SignalInstance>  signalInstance) ;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs) ;
			
			/*!
			 */ 
			virtual void stop() ;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::ClassifierBehaviorExecution>> getClassifierBehaviorExecutions() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::SignalInstance>> getEventPool() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getObject() const ;
			
			/*!
			 */
			virtual void setObject(std::shared_ptr<fUML::Object> _object_object) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::EventAccepter>> getWaitingEventAccepters() const ;
			
							
			
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
			std::weak_ptr<ObjectActivation> m_thisObjectActivationPtr;
	};
}
#endif /* end of include guard: FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP */
