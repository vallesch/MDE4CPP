//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LINKACTIONACTIVATION_HPP
#define FUML_LINKACTIONACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



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
namespace fUML 
{
	class ActionActivation;
}

namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace uml 
{
	class Association;
}

namespace fUML 
{
	class InputPinActivation;
}

namespace fUML 
{
	class Link;
}

namespace uml 
{
	class LinkEndData;
}

namespace fUML 
{
	class OutputPinActivation;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "fUML/ActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class LinkActionActivation:virtual public ActionActivation
	{
		public:
 			LinkActionActivation(const LinkActionActivation &) {}
			LinkActionActivation& operator=(LinkActionActivation const&) = delete;

		protected:
			LinkActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LinkActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool endMatchesEndData(std::shared_ptr<fUML::Link>  link,std::shared_ptr<uml::LinkEndData>  endData) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Association> getAssociation() = 0;
			
			/*!
			 */ 
			virtual bool linkMatchesEndData(std::shared_ptr<fUML::Link>  link,std::shared_ptr<Bag<uml::LinkEndData> >  endDataList) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_LINKACTIONACTIVATION_HPP */
