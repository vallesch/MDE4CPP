//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUM_HPP
#define ECORE_EENUM_HPP

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
	namespace interface
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace ecore
{
	class EcoreFactory;
}

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EDataType;
}

namespace ecore 
{
	class EEnumLiteral;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "ecore/EDataType.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EEnum:virtual public EDataType
	{
		public:
 			EEnum(const EEnum &) {}
			EEnum& operator=(EEnum const&) = delete;

		protected:
			EEnum(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EEnum() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteral(std::string name)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteral(int value)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteralByLiteral(std::string literal)  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EEnumLiteral>> getELiterals() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<ecore::EEnumLiteral>> m_eLiterals;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: ECORE_EENUM_HPP */
