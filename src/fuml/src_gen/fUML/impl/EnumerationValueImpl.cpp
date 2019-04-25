#include "fUML/impl/EnumerationValueImpl.hpp"

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

#include <cassert>
#include <iostream>
#include <sstream>


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"
#include "fUML/EnumerationValue.hpp"
#include "fUML/FUMLFactory.hpp"
#include "uml/Class.hpp"
#include "uml/Enumeration.hpp"
#include "uml/EnumerationLiteral.hpp"
#include "uml/InstanceSpecification.hpp"
#include "uml/InstanceValue.hpp"
#include "uml/UmlFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "fUML/FUMLFactory.hpp"
#include "fUML/FUMLPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Classifier.hpp"

#include "uml/Enumeration.hpp"

#include "uml/EnumerationLiteral.hpp"

#include "fUML/Value.hpp"

#include "uml/ValueSpecification.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "fUML/FUMLPackage.hpp"
#include "fUML/FUMLFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
EnumerationValueImpl::EnumerationValueImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	

	//Init references
	

	
}

EnumerationValueImpl::~EnumerationValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EnumerationValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EnumerationValueImpl::EnumerationValueImpl(const EnumerationValueImpl & obj):EnumerationValueImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EnumerationValue "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_literal  = obj.getLiteral();

	m_type  = obj.getType();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  EnumerationValueImpl::copy() const
{
	std::shared_ptr<EnumerationValueImpl> element(new EnumerationValueImpl(*this));
	element->setThisEnumerationValuePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> EnumerationValueImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getEnumerationValue_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool EnumerationValueImpl::equals(std::shared_ptr<fUML::Value>  otherValue)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	bool isEqual = false;
	std::shared_ptr<fUML::EnumerationValue> value = std::dynamic_pointer_cast<fUML::EnumerationValue>(otherValue);
    if(value != nullptr)
    {
        isEqual = (value->getLiteral() == this->getLiteral());
    }
    return isEqual;
	//end of body
}

std::shared_ptr<Bag<uml::Classifier> > EnumerationValueImpl::getTypes()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<uml::Classifier> > types(new Bag<uml::Classifier>());
    types->push_back(std::dynamic_pointer_cast<uml::Classifier>(this->getType()));
    return types;
	//end of body
}

std::shared_ptr<fUML::Value> EnumerationValueImpl::new_()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return std::shared_ptr<fUML::Value>(FUMLFactory::eInstance()->createEnumerationValue());
	//end of body
}

std::shared_ptr<uml::ValueSpecification> EnumerationValueImpl::specify()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<uml::InstanceValue> instanceValue(uml::UmlFactory::eInstance()->createInstanceValue_in_Namespace(std::shared_ptr<uml::Class>()));
    //Remark: instance is so defined in the specification, but even there is not used.
    //uml::InstanceSpecification * instance = uml::UmlFactory::eInstance()->createInstanceSpecification(std::shared_ptr<uml::Class>());

    instanceValue->setType(this->getType());
    instanceValue->setInstance(this->getLiteral());

    return instanceValue;
	//end of body
}

std::string EnumerationValueImpl::toString()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    return this->getLiteral()->getName();
	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::EnumerationLiteral > EnumerationValueImpl::getLiteral() const
{
//assert(m_literal);
    return m_literal;
}
void EnumerationValueImpl::setLiteral(std::shared_ptr<uml::EnumerationLiteral> _literal)
{
    m_literal = _literal;
}

std::shared_ptr<uml::Enumeration > EnumerationValueImpl::getType() const
{
//assert(m_type);
    return m_type;
}
void EnumerationValueImpl::setType(std::shared_ptr<uml::Enumeration> _type)
{
    m_type = _type;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<EnumerationValue> EnumerationValueImpl::getThisEnumerationValuePtr() const
{
	return m_thisEnumerationValuePtr.lock();
}
void EnumerationValueImpl::setThisEnumerationValuePtr(std::weak_ptr<EnumerationValue> thisEnumerationValuePtr)
{
	m_thisEnumerationValuePtr = thisEnumerationValuePtr;
	setThisValuePtr(thisEnumerationValuePtr);
}
std::shared_ptr<ecore::EObject> EnumerationValueImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EnumerationValueImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_LITERAL:
			return eAny(getLiteral()); //350
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_TYPE:
			return eAny(getType()); //351
	}
	return ValueImpl::eGet(featureID, resolve, coreType);
}
bool EnumerationValueImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_LITERAL:
			return getLiteral() != nullptr; //350
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_TYPE:
			return getType() != nullptr; //351
	}
	return ValueImpl::internalEIsSet(featureID);
}
bool EnumerationValueImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_LITERAL:
		{
			// BOOST CAST
			std::shared_ptr<uml::EnumerationLiteral> _literal = newValue->get<std::shared_ptr<uml::EnumerationLiteral>>();
			setLiteral(_literal); //350
			return true;
		}
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_TYPE:
		{
			// BOOST CAST
			std::shared_ptr<uml::Enumeration> _type = newValue->get<std::shared_ptr<uml::Enumeration>>();
			setType(_type); //351
			return true;
		}
	}

	return ValueImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EnumerationValueImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get FUMLFactory
	std::shared_ptr<fUML::FUMLFactory> modelFactory = fUML::FUMLFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void EnumerationValueImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("literal");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("literal")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("type");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("type")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ValueImpl::loadAttributes(loadHandler, attr_list);
}

void EnumerationValueImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory)
{


	ValueImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void EnumerationValueImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_LITERAL:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::EnumerationLiteral> _literal = std::dynamic_pointer_cast<uml::EnumerationLiteral>( references.front() );
				setLiteral(_literal);
			}
			
			return;
		}

		case FUMLPackage::ENUMERATIONVALUE_EREFERENCE_TYPE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Enumeration> _type = std::dynamic_pointer_cast<uml::Enumeration>( references.front() );
				setType(_type);
			}
			
			return;
		}
	}
	ValueImpl::resolveReferences(featureID, references);
}

void EnumerationValueImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ValueImpl::saveContent(saveHandler);
	
	SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void EnumerationValueImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<fUML::FUMLPackage> package = fUML::FUMLPackage::eInstance();

	

		// Add references
		saveHandler->addReference("literal", this->getLiteral());
		saveHandler->addReference("type", this->getType());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

