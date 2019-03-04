#include "PSSM/Semantics/StateMachines/impl/DeferredEventOccurrenceImpl.hpp"

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
#include "PSSM/impl/PSSMPackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "fUML/EventOccurrence.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::StateMachines;

//*********************************
// Constructor / Destructor
//*********************************
DeferredEventOccurrenceImpl::DeferredEventOccurrenceImpl()
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

DeferredEventOccurrenceImpl::~DeferredEventOccurrenceImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DeferredEventOccurrence "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




DeferredEventOccurrenceImpl::DeferredEventOccurrenceImpl(const DeferredEventOccurrenceImpl & obj):DeferredEventOccurrenceImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DeferredEventOccurrence "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_constrainingStateActivation  = obj.getConstrainingStateActivation();

	m_deferredEventOccurrence  = obj.getDeferredEventOccurrence();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  DeferredEventOccurrenceImpl::copy() const
{
	std::shared_ptr<DeferredEventOccurrenceImpl> element(new DeferredEventOccurrenceImpl(*this));
	element->setThisDeferredEventOccurrencePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> DeferredEventOccurrenceImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getDeferredEventOccurrence_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > DeferredEventOccurrenceImpl::getConstrainingStateActivation() const
{
//assert(m_constrainingStateActivation);
    return m_constrainingStateActivation;
}
void DeferredEventOccurrenceImpl::setConstrainingStateActivation(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _constrainingStateActivation)
{
    m_constrainingStateActivation = _constrainingStateActivation;
}

std::shared_ptr<fUML::EventOccurrence > DeferredEventOccurrenceImpl::getDeferredEventOccurrence() const
{
//assert(m_deferredEventOccurrence);
    return m_deferredEventOccurrence;
}
void DeferredEventOccurrenceImpl::setDeferredEventOccurrence(std::shared_ptr<fUML::EventOccurrence> _deferredEventOccurrence)
{
    m_deferredEventOccurrence = _deferredEventOccurrence;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<DeferredEventOccurrence> DeferredEventOccurrenceImpl::getThisDeferredEventOccurrencePtr() const
{
	return m_thisDeferredEventOccurrencePtr.lock();
}
void DeferredEventOccurrenceImpl::setThisDeferredEventOccurrencePtr(std::weak_ptr<DeferredEventOccurrence> thisDeferredEventOccurrencePtr)
{
	m_thisDeferredEventOccurrencePtr = thisDeferredEventOccurrencePtr;
	setThisEventOccurrencePtr(thisDeferredEventOccurrencePtr);
}
std::shared_ptr<ecore::EObject> DeferredEventOccurrenceImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any DeferredEventOccurrenceImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_CONSTRAININGSTATEACTIVATION:
			return eAny(getConstrainingStateActivation()); //80
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_DEFERREDEVENTOCCURRENCE:
			return eAny(getDeferredEventOccurrence()); //81
	}
	return fUML::EventOccurrenceImpl::eGet(featureID, resolve, coreType);
}
bool DeferredEventOccurrenceImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_CONSTRAININGSTATEACTIVATION:
			return getConstrainingStateActivation() != nullptr; //80
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_DEFERREDEVENTOCCURRENCE:
			return getDeferredEventOccurrence() != nullptr; //81
	}
	return fUML::EventOccurrenceImpl::internalEIsSet(featureID);
}
bool DeferredEventOccurrenceImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_CONSTRAININGSTATEACTIVATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _constrainingStateActivation = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>>();
			setConstrainingStateActivation(_constrainingStateActivation); //80
			return true;
		}
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_DEFERREDEVENTOCCURRENCE:
		{
			// BOOST CAST
			std::shared_ptr<fUML::EventOccurrence> _deferredEventOccurrence = newValue->get<std::shared_ptr<fUML::EventOccurrence>>();
			setDeferredEventOccurrence(_deferredEventOccurrence); //81
			return true;
		}
	}

	return fUML::EventOccurrenceImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void DeferredEventOccurrenceImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get PSSMFactory
	std::shared_ptr<PSSM::PSSMFactory> modelFactory = PSSM::PSSMFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void DeferredEventOccurrenceImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("constrainingStateActivation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("constrainingStateActivation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("deferredEventOccurrence");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("deferredEventOccurrence")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	fUML::EventOccurrenceImpl::loadAttributes(loadHandler, attr_list);
}

void DeferredEventOccurrenceImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::EventOccurrenceImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void DeferredEventOccurrenceImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_CONSTRAININGSTATEACTIVATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _constrainingStateActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateActivation>( references.front() );
				setConstrainingStateActivation(_constrainingStateActivation);
			}
			
			return;
		}

		case PSSM::PSSMPackage::DEFERREDEVENTOCCURRENCE_EREFERENCE_DEFERREDEVENTOCCURRENCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::EventOccurrence> _deferredEventOccurrence = std::dynamic_pointer_cast<fUML::EventOccurrence>( references.front() );
				setDeferredEventOccurrence(_deferredEventOccurrence);
			}
			
			return;
		}
	}
	fUML::EventOccurrenceImpl::resolveReferences(featureID, references);
}

void DeferredEventOccurrenceImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::EventOccurrenceImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void DeferredEventOccurrenceImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("constrainingStateActivation", this->getConstrainingStateActivation());
		saveHandler->addReference("deferredEventOccurrence", this->getDeferredEventOccurrence());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

