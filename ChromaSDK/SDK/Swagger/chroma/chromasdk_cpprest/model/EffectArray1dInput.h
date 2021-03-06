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

/*
 * EffectArray1dInput.h
 *
 * 1 dimensional array. Color values are in BGR format.
 */

#ifndef EffectArray1dInput_H_
#define EffectArray1dInput_H_


#include "ModelBase.h"

#include <vector>

namespace ChromaPackage {
namespace Model {

/// <summary>
/// 1 dimensional array. Color values are in BGR format.
/// </summary>
class  EffectArray1dInput
    : public ModelBase
{
public:
    EffectArray1dInput();
    virtual ~EffectArray1dInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EffectArray1dInput members


protected:
    };

}
}

#endif /* EffectArray1dInput_H_ */
