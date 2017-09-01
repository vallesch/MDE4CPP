//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_IMAGE_HPP
#define UML_IMAGE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 Physical definition of a graphical image.
	<p>From package UML::Packages.</p> */
	class Image:virtual public Element	{
		public:
 			Image(const Image &) {}
			Image& operator=(Image const&) = delete;

		protected:
			Image(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Image() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 This contains the serialization of the image according to the format. The value could represent a bitmap, image such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is XML based).
			<p>From package UML::Packages.</p> */ 
			virtual std::string getContent() const = 0;
			
			/*!
			 This contains the serialization of the image according to the format. The value could represent a bitmap, image such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is XML based).
			<p>From package UML::Packages.</p> */ 
			virtual void setContent (std::string _content)= 0; 
			
			/*!
			 This indicates the format of the content, which is how the string content should be interpreted. The following values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved. This option can be used as an alternative to express the reserved values above, for example "SVG" could instead be expressed as "MIME: image/svg+xml".
			<p>From package UML::Packages.</p> */ 
			virtual std::string getFormat() const = 0;
			
			/*!
			 This indicates the format of the content, which is how the string content should be interpreted. The following values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved. This option can be used as an alternative to express the reserved values above, for example "SVG" could instead be expressed as "MIME: image/svg+xml".
			<p>From package UML::Packages.</p> */ 
			virtual void setFormat (std::string _format)= 0; 
			
			/*!
			 This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the stereotype.
			<p>From package UML::Packages.</p> */ 
			virtual std::string getLocation() const = 0;
			
			/*!
			 This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the stereotype.
			<p>From package UML::Packages.</p> */ 
			virtual void setLocation (std::string _location)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 This contains the serialization of the image according to the format. The value could represent a bitmap, image such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is XML based).
			<p>From package UML::Packages.</p> */ 
			std::string m_content ;
			/*!
			 This indicates the format of the content, which is how the string content should be interpreted. The following values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved. This option can be used as an alternative to express the reserved values above, for example "SVG" could instead be expressed as "MIME: image/svg+xml".
			<p>From package UML::Packages.</p> */ 
			std::string m_format ;
			/*!
			 This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the stereotype.
			<p>From package UML::Packages.</p> */ 
			std::string m_location ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_IMAGE_HPP */

