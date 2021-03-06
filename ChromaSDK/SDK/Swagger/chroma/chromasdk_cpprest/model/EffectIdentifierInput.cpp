/**
 * Chroma Rest API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.0.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "EffectIdentifierInput.h"

namespace ChromaPackage {
namespace Model {

EffectIdentifierInput::EffectIdentifierInput()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_IdsIsSet = false;
    
}

EffectIdentifierInput::~EffectIdentifierInput()
{
}

void EffectIdentifierInput::validate()
{
    // TODO: implement validation
}

web::json::value EffectIdentifierInput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("ids")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void EffectIdentifierInput::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    {
        m_Ids.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("ids")))
        {
        for( auto& item : val[U("ids")].as_array() )
        {
            m_Ids.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    
}

void EffectIdentifierInput::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("ids"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void EffectIdentifierInput::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    {
        m_Ids.clear();
        if(multipart->hasContent(U("ids")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("ids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Ids.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    
}


utility::string_t EffectIdentifierInput::getId() const
{
    return m_Id;
}
void EffectIdentifierInput::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool EffectIdentifierInput::idIsSet() const
{
    return m_IdIsSet;
}
void EffectIdentifierInput::unsetId()
{
    m_IdIsSet = false;
}
std::vector<utility::string_t>& EffectIdentifierInput::getIds()
{
    return m_Ids;
}
bool EffectIdentifierInput::idsIsSet() const
{
    return m_IdsIsSet;
}
void EffectIdentifierInput::unsetIds()
{
    m_IdsIsSet = false;
}

}
}

