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
 * EffectInput_param.h
 *
 * Effect definition
 */

#ifndef EffectInput_param_H_
#define EffectInput_param_H_


#include "ModelBase.h"


namespace ChromaPackage {
namespace Model {

/// <summary>
/// Effect definition
/// </summary>
class  EffectInput_param
    : public ModelBase
{
public:
    EffectInput_param();
    virtual ~EffectInput_param();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EffectInput_param members

    /// <summary>
    /// Color value in BGR format
    /// </summary>
    int32_t getColor() const;
    void setColor(int32_t value);
    bool colorIsSet() const;
    void unsetColor();
    /// <summary>
    /// Color 1 value in BGR format
    /// </summary>
    int32_t getColor1() const;
    void setColor1(int32_t value);
    bool color1IsSet() const;
    void unsetColor1();
    /// <summary>
    /// Color 2 value in BGR format
    /// </summary>
    int32_t getColor2() const;
    void setColor2(int32_t value);
    bool color2IsSet() const;
    void unsetColor2();
    /// <summary>
    /// Effect direction
    /// </summary>
    int32_t getDirection() const;
    void setDirection(int32_t value);
    bool directionIsSet() const;
    void unsetDirection();
    /// <summary>
    /// Effect duration
    /// </summary>
    int32_t getDuration() const;
    void setDuration(int32_t value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// Effect type
    /// </summary>
    int32_t getType() const;
    void setType(int32_t value);
    bool typeIsSet() const;
    void unsetType();

protected:
    int32_t m_Color;
    bool m_ColorIsSet;
int32_t m_Color1;
    bool m_Color1IsSet;
int32_t m_Color2;
    bool m_Color2IsSet;
int32_t m_Direction;
    bool m_DirectionIsSet;
int32_t m_Duration;
    bool m_DurationIsSet;
int32_t m_Type;
    bool m_TypeIsSet;
};

}
}

#endif /* EffectInput_param_H_ */
