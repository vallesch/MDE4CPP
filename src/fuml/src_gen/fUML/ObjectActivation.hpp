//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTACTIVATION_HPP
#define FUML_OBJECTACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Class;
}

namespace fUML 
{
	class ClassifierBehaviorExecution;
}

namespace fUML 
{
	class EventAccepter;
}

namespace fUML 
{
	class Object;
}

namespace fUML 
{
	class ParameterValue;
}

namespace fUML 
{
	class SignalInstance;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class ObjectActivation : virtual public ecore::EObject 

	{
		public:
 			ObjectActivation(const ObjectActivation &) {}
			ObjectActivation& operator=(ObjectActivation const&) = delete;

		protected:
			ObjectActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ObjectActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter) = 0;
			
			/*!
			 */ 
			virtual void _send(Any signal) = 0;
			
			/*!
			 */ 
			virtual void _startObjectBehavior() = 0;
			
			/*!
			 */ 
			virtual void dispatchNextEvent() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SignalInstance> retrieveNextEvent() = 0;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::SignalInstance>  signalInstance) = 0;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs) = 0;
			
			/*!
			 */ 
			virtual void stop() = 0;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::ClassifierBehaviorExecution>> getClassifierBehaviorExecutions() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::SignalInstance>> getEventPool() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getObject() const = 0;
			
			/*!
			 */
			virtual void setObject(std::shared_ptr<fUML::Object> _object_object) = 0;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::EventAccepter>> getWaitingEventAccepters() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<fUML::ClassifierBehaviorExecution>> m_classifierBehaviorExecutions;
			/*!
			 */
			std::shared_ptr<Bag<fUML::SignalInstance>> m_eventPool;
			/*!
			 */
			std::shared_ptr<fUML::Object > m_object;
			/*!
			 */
			std::shared_ptr<Bag<fUML::EventAccepter>> m_waitingEventAccepters;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_OBJECTACTIVATION_HPP */
