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



#include "EffectType.h"

namespace ChromaPackage {
namespace Model {

EffectType::EffectType()
{
    
}

EffectType::~EffectType()
{
}

void EffectType::validate()
{
    // TODO: implement validation
}

web::json::value EffectType::toJson() const
{
    web::json::value val = web::json::value::object();

    

    return val;
}

void EffectType::fromJson(web::json::value& val)
{
    
}

void EffectType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}

void EffectType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}



}
}

