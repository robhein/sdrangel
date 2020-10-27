/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1, USRP and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.15.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGUSRPOutputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUSRPOutputSettings::SWGUSRPOutputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUSRPOutputSettings::SWGUSRPOutputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lo_offset = 0;
    m_lo_offset_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    antenna_path = nullptr;
    m_antenna_path_isSet = false;
    clock_source = nullptr;
    m_clock_source_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGUSRPOutputSettings::~SWGUSRPOutputSettings() {
    this->cleanup();
}

void
SWGUSRPOutputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lo_offset = 0;
    m_lo_offset_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    antenna_path = new QString("");
    m_antenna_path_isSet = false;
    clock_source = new QString("");
    m_clock_source_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGUSRPOutputSettings::cleanup() {






    if(antenna_path != nullptr) { 
        delete antenna_path;
    }
    if(clock_source != nullptr) { 
        delete clock_source;
    }



    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGUSRPOutputSettings*
SWGUSRPOutputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUSRPOutputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lo_offset, pJson["loOffset"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_soft_interp, pJson["log2SoftInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw, pJson["lpfBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path, pJson["antennaPath"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&clock_source, pJson["clockSource"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGUSRPOutputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUSRPOutputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_lo_offset_isSet){
        obj->insert("loOffset", QJsonValue(lo_offset));
    }
    if(m_log2_soft_interp_isSet){
        obj->insert("log2SoftInterp", QJsonValue(log2_soft_interp));
    }
    if(m_lpf_bw_isSet){
        obj->insert("lpfBW", QJsonValue(lpf_bw));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(antenna_path != nullptr && *antenna_path != QString("")){
        toJsonValue(QString("antennaPath"), antenna_path, obj, QString("QString"));
    }
    if(clock_source != nullptr && *clock_source != QString("")){
        toJsonValue(QString("clockSource"), clock_source, obj, QString("QString"));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }

    return obj;
}

qint64
SWGUSRPOutputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGUSRPOutputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGUSRPOutputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGUSRPOutputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGUSRPOutputSettings::getLoOffset() {
    return lo_offset;
}
void
SWGUSRPOutputSettings::setLoOffset(qint32 lo_offset) {
    this->lo_offset = lo_offset;
    this->m_lo_offset_isSet = true;
}

qint32
SWGUSRPOutputSettings::getLog2SoftInterp() {
    return log2_soft_interp;
}
void
SWGUSRPOutputSettings::setLog2SoftInterp(qint32 log2_soft_interp) {
    this->log2_soft_interp = log2_soft_interp;
    this->m_log2_soft_interp_isSet = true;
}

qint32
SWGUSRPOutputSettings::getLpfBw() {
    return lpf_bw;
}
void
SWGUSRPOutputSettings::setLpfBw(qint32 lpf_bw) {
    this->lpf_bw = lpf_bw;
    this->m_lpf_bw_isSet = true;
}

qint32
SWGUSRPOutputSettings::getGain() {
    return gain;
}
void
SWGUSRPOutputSettings::setGain(qint32 gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

QString*
SWGUSRPOutputSettings::getAntennaPath() {
    return antenna_path;
}
void
SWGUSRPOutputSettings::setAntennaPath(QString* antenna_path) {
    this->antenna_path = antenna_path;
    this->m_antenna_path_isSet = true;
}

QString*
SWGUSRPOutputSettings::getClockSource() {
    return clock_source;
}
void
SWGUSRPOutputSettings::setClockSource(QString* clock_source) {
    this->clock_source = clock_source;
    this->m_clock_source_isSet = true;
}

qint32
SWGUSRPOutputSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGUSRPOutputSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGUSRPOutputSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGUSRPOutputSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

qint32
SWGUSRPOutputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGUSRPOutputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGUSRPOutputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGUSRPOutputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGUSRPOutputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGUSRPOutputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGUSRPOutputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGUSRPOutputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGUSRPOutputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dev_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lo_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_soft_interp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_bw_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_isSet){
            isObjectUpdated = true; break;
        }
        if(antenna_path && *antenna_path != QString("")){
            isObjectUpdated = true; break;
        }
        if(clock_source && *clock_source != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_transverter_mode_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transverter_delta_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

