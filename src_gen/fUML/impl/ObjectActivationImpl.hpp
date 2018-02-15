//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP
#define FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../ObjectActivation.hpp"


#include "ecore/impl/EObjectImpl.hpp"

#include "fUML/ClassifierBehaviorExecution.hpp"
#include "fUML/FUMLFactory.hpp"
#include "uml/Behavior.hpp"
#include "uml/Class.hpp"


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



		public:
			//destructor
			virtual ~ObjectActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			/*!
			 */ 
			virtual void _send(boost::any signal)  ;
			
			/*!
			 */ 
			virtual void _startObjectBehavior()  ;
			
			/*!
			 */ 
			virtual void dispatchNextEvent()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SignalInstance> retrieveNextEvent()  ;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::SignalInstance>  signalInstance)  ;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)  ;
			
			/*!
			 */ 
			virtual void stop()  ;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ClassifierBehaviorExecution> > getClassifierBehaviorExecutions() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::SignalInstance> > getEventPool() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getObject() const ;
			
			/*!
			 */
			virtual void setObject(std::shared_ptr<fUML::Object> _object_object) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::EventAccepter> > getWaitingEventAccepters() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_OBJECTACTIVATIONOBJECTACTIVATIONIMPL_HPP */

