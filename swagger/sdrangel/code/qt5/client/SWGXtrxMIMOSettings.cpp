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


#include "SWGXtrxMIMOSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGXtrxMIMOSettings::SWGXtrxMIMOSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGXtrxMIMOSettings::SWGXtrxMIMOSettings() {
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    gpio_dir = 0;
    m_gpio_dir_isSet = false;
    gpio_pins = 0;
    m_gpio_pins_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    rx_dev_sample_rate = 0;
    m_rx_dev_sample_rate_isSet = false;
    log2_hard_decim = 0;
    m_log2_hard_decim_isSet = false;
    log2_soft_decim = 0;
    m_log2_soft_decim_isSet = false;
    rx_center_frequency = 0L;
    m_rx_center_frequency_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    nco_enable_rx = 0;
    m_nco_enable_rx_isSet = false;
    nco_frequency_rx = 0;
    m_nco_frequency_rx_isSet = false;
    antenna_path_rx = 0;
    m_antenna_path_rx_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
    lpf_bw_rx0 = 0;
    m_lpf_bw_rx0_isSet = false;
    gain_rx0 = 0;
    m_gain_rx0_isSet = false;
    gain_mode_rx0 = 0;
    m_gain_mode_rx0_isSet = false;
    lna_gain_rx0 = 0;
    m_lna_gain_rx0_isSet = false;
    tia_gain_rx0 = 0;
    m_tia_gain_rx0_isSet = false;
    pga_gain_rx0 = 0;
    m_pga_gain_rx0_isSet = false;
    pwrmode_rx0 = 0;
    m_pwrmode_rx0_isSet = false;
    lpf_bw_rx1 = 0;
    m_lpf_bw_rx1_isSet = false;
    gain_rx1 = 0;
    m_gain_rx1_isSet = false;
    gain_mode_rx1 = 0;
    m_gain_mode_rx1_isSet = false;
    lna_gain_rx1 = 0;
    m_lna_gain_rx1_isSet = false;
    tia_gain_rx1 = 0;
    m_tia_gain_rx1_isSet = false;
    pga_gain_rx1 = 0;
    m_pga_gain_rx1_isSet = false;
    pwrmode_rx1 = 0;
    m_pwrmode_rx1_isSet = false;
    tx_dev_sample_rate = 0;
    m_tx_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    tx_center_frequency = 0L;
    m_tx_center_frequency_isSet = false;
    nco_enable_tx = 0;
    m_nco_enable_tx_isSet = false;
    nco_frequency_tx = 0;
    m_nco_frequency_tx_isSet = false;
    antenna_path_tx = 0;
    m_antenna_path_tx_isSet = false;
    lpf_bw_tx0 = 0;
    m_lpf_bw_tx0_isSet = false;
    gain_tx0 = 0;
    m_gain_tx0_isSet = false;
    pwrmode_tx0 = 0;
    m_pwrmode_tx0_isSet = false;
    lpf_bw_tx1 = 0;
    m_lpf_bw_tx1_isSet = false;
    gain_tx1 = 0;
    m_gain_tx1_isSet = false;
    pwrmode_tx1 = 0;
    m_pwrmode_tx1_isSet = false;
}

SWGXtrxMIMOSettings::~SWGXtrxMIMOSettings() {
    this->cleanup();
}

void
SWGXtrxMIMOSettings::init() {
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    gpio_dir = 0;
    m_gpio_dir_isSet = false;
    gpio_pins = 0;
    m_gpio_pins_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    rx_dev_sample_rate = 0;
    m_rx_dev_sample_rate_isSet = false;
    log2_hard_decim = 0;
    m_log2_hard_decim_isSet = false;
    log2_soft_decim = 0;
    m_log2_soft_decim_isSet = false;
    rx_center_frequency = 0L;
    m_rx_center_frequency_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    nco_enable_rx = 0;
    m_nco_enable_rx_isSet = false;
    nco_frequency_rx = 0;
    m_nco_frequency_rx_isSet = false;
    antenna_path_rx = 0;
    m_antenna_path_rx_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
    lpf_bw_rx0 = 0;
    m_lpf_bw_rx0_isSet = false;
    gain_rx0 = 0;
    m_gain_rx0_isSet = false;
    gain_mode_rx0 = 0;
    m_gain_mode_rx0_isSet = false;
    lna_gain_rx0 = 0;
    m_lna_gain_rx0_isSet = false;
    tia_gain_rx0 = 0;
    m_tia_gain_rx0_isSet = false;
    pga_gain_rx0 = 0;
    m_pga_gain_rx0_isSet = false;
    pwrmode_rx0 = 0;
    m_pwrmode_rx0_isSet = false;
    lpf_bw_rx1 = 0;
    m_lpf_bw_rx1_isSet = false;
    gain_rx1 = 0;
    m_gain_rx1_isSet = false;
    gain_mode_rx1 = 0;
    m_gain_mode_rx1_isSet = false;
    lna_gain_rx1 = 0;
    m_lna_gain_rx1_isSet = false;
    tia_gain_rx1 = 0;
    m_tia_gain_rx1_isSet = false;
    pga_gain_rx1 = 0;
    m_pga_gain_rx1_isSet = false;
    pwrmode_rx1 = 0;
    m_pwrmode_rx1_isSet = false;
    tx_dev_sample_rate = 0;
    m_tx_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    tx_center_frequency = 0L;
    m_tx_center_frequency_isSet = false;
    nco_enable_tx = 0;
    m_nco_enable_tx_isSet = false;
    nco_frequency_tx = 0;
    m_nco_frequency_tx_isSet = false;
    antenna_path_tx = 0;
    m_antenna_path_tx_isSet = false;
    lpf_bw_tx0 = 0;
    m_lpf_bw_tx0_isSet = false;
    gain_tx0 = 0;
    m_gain_tx0_isSet = false;
    pwrmode_tx0 = 0;
    m_pwrmode_tx0_isSet = false;
    lpf_bw_tx1 = 0;
    m_lpf_bw_tx1_isSet = false;
    gain_tx1 = 0;
    m_gain_tx1_isSet = false;
    pwrmode_tx1 = 0;
    m_pwrmode_tx1_isSet = false;
}

void
SWGXtrxMIMOSettings::cleanup() {





    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }







































}

SWGXtrxMIMOSettings*
SWGXtrxMIMOSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGXtrxMIMOSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&ext_clock, pJson["extClock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ext_clock_freq, pJson["extClockFreq"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gpio_dir, pJson["gpioDir"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gpio_pins, pJson["gpioPins"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_dev_sample_rate, pJson["rxDevSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_hard_decim, pJson["log2HardDecim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_soft_decim, pJson["log2SoftDecim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_center_frequency, pJson["rxCenterFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_enable_rx, pJson["ncoEnableRx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_frequency_rx, pJson["ncoFrequencyRx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path_rx, pJson["antennaPathRx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_order, pJson["iqOrder"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw_rx0, pJson["lpfBWRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_rx0, pJson["gainRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_mode_rx0, pJson["gainModeRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain_rx0, pJson["lnaGainRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tia_gain_rx0, pJson["tiaGainRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pga_gain_rx0, pJson["pgaGainRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pwrmode_rx0, pJson["pwrmodeRx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw_rx1, pJson["lpfBWRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_rx1, pJson["gainRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_mode_rx1, pJson["gainModeRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain_rx1, pJson["lnaGainRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tia_gain_rx1, pJson["tiaGainRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pga_gain_rx1, pJson["pgaGainRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pwrmode_rx1, pJson["pwrmodeRx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_dev_sample_rate, pJson["txDevSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_hard_interp, pJson["log2HardInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_soft_interp, pJson["log2SoftInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_center_frequency, pJson["txCenterFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&nco_enable_tx, pJson["ncoEnableTx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_frequency_tx, pJson["ncoFrequencyTx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path_tx, pJson["antennaPathTx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw_tx0, pJson["lpfBWTx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_tx0, pJson["gainTx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pwrmode_tx0, pJson["pwrmodeTx0"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw_tx1, pJson["lpfBWTx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_tx1, pJson["gainTx1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pwrmode_tx1, pJson["pwrmodeTx1"], "qint32", "");
    
}

QString
SWGXtrxMIMOSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGXtrxMIMOSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_ext_clock_isSet){
        obj->insert("extClock", QJsonValue(ext_clock));
    }
    if(m_ext_clock_freq_isSet){
        obj->insert("extClockFreq", QJsonValue(ext_clock_freq));
    }
    if(m_gpio_dir_isSet){
        obj->insert("gpioDir", QJsonValue(gpio_dir));
    }
    if(m_gpio_pins_isSet){
        obj->insert("gpioPins", QJsonValue(gpio_pins));
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
    if(m_rx_dev_sample_rate_isSet){
        obj->insert("rxDevSampleRate", QJsonValue(rx_dev_sample_rate));
    }
    if(m_log2_hard_decim_isSet){
        obj->insert("log2HardDecim", QJsonValue(log2_hard_decim));
    }
    if(m_log2_soft_decim_isSet){
        obj->insert("log2SoftDecim", QJsonValue(log2_soft_decim));
    }
    if(m_rx_center_frequency_isSet){
        obj->insert("rxCenterFrequency", QJsonValue(rx_center_frequency));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }
    if(m_nco_enable_rx_isSet){
        obj->insert("ncoEnableRx", QJsonValue(nco_enable_rx));
    }
    if(m_nco_frequency_rx_isSet){
        obj->insert("ncoFrequencyRx", QJsonValue(nco_frequency_rx));
    }
    if(m_antenna_path_rx_isSet){
        obj->insert("antennaPathRx", QJsonValue(antenna_path_rx));
    }
    if(m_iq_order_isSet){
        obj->insert("iqOrder", QJsonValue(iq_order));
    }
    if(m_lpf_bw_rx0_isSet){
        obj->insert("lpfBWRx0", QJsonValue(lpf_bw_rx0));
    }
    if(m_gain_rx0_isSet){
        obj->insert("gainRx0", QJsonValue(gain_rx0));
    }
    if(m_gain_mode_rx0_isSet){
        obj->insert("gainModeRx0", QJsonValue(gain_mode_rx0));
    }
    if(m_lna_gain_rx0_isSet){
        obj->insert("lnaGainRx0", QJsonValue(lna_gain_rx0));
    }
    if(m_tia_gain_rx0_isSet){
        obj->insert("tiaGainRx0", QJsonValue(tia_gain_rx0));
    }
    if(m_pga_gain_rx0_isSet){
        obj->insert("pgaGainRx0", QJsonValue(pga_gain_rx0));
    }
    if(m_pwrmode_rx0_isSet){
        obj->insert("pwrmodeRx0", QJsonValue(pwrmode_rx0));
    }
    if(m_lpf_bw_rx1_isSet){
        obj->insert("lpfBWRx1", QJsonValue(lpf_bw_rx1));
    }
    if(m_gain_rx1_isSet){
        obj->insert("gainRx1", QJsonValue(gain_rx1));
    }
    if(m_gain_mode_rx1_isSet){
        obj->insert("gainModeRx1", QJsonValue(gain_mode_rx1));
    }
    if(m_lna_gain_rx1_isSet){
        obj->insert("lnaGainRx1", QJsonValue(lna_gain_rx1));
    }
    if(m_tia_gain_rx1_isSet){
        obj->insert("tiaGainRx1", QJsonValue(tia_gain_rx1));
    }
    if(m_pga_gain_rx1_isSet){
        obj->insert("pgaGainRx1", QJsonValue(pga_gain_rx1));
    }
    if(m_pwrmode_rx1_isSet){
        obj->insert("pwrmodeRx1", QJsonValue(pwrmode_rx1));
    }
    if(m_tx_dev_sample_rate_isSet){
        obj->insert("txDevSampleRate", QJsonValue(tx_dev_sample_rate));
    }
    if(m_log2_hard_interp_isSet){
        obj->insert("log2HardInterp", QJsonValue(log2_hard_interp));
    }
    if(m_log2_soft_interp_isSet){
        obj->insert("log2SoftInterp", QJsonValue(log2_soft_interp));
    }
    if(m_tx_center_frequency_isSet){
        obj->insert("txCenterFrequency", QJsonValue(tx_center_frequency));
    }
    if(m_nco_enable_tx_isSet){
        obj->insert("ncoEnableTx", QJsonValue(nco_enable_tx));
    }
    if(m_nco_frequency_tx_isSet){
        obj->insert("ncoFrequencyTx", QJsonValue(nco_frequency_tx));
    }
    if(m_antenna_path_tx_isSet){
        obj->insert("antennaPathTx", QJsonValue(antenna_path_tx));
    }
    if(m_lpf_bw_tx0_isSet){
        obj->insert("lpfBWTx0", QJsonValue(lpf_bw_tx0));
    }
    if(m_gain_tx0_isSet){
        obj->insert("gainTx0", QJsonValue(gain_tx0));
    }
    if(m_pwrmode_tx0_isSet){
        obj->insert("pwrmodeTx0", QJsonValue(pwrmode_tx0));
    }
    if(m_lpf_bw_tx1_isSet){
        obj->insert("lpfBWTx1", QJsonValue(lpf_bw_tx1));
    }
    if(m_gain_tx1_isSet){
        obj->insert("gainTx1", QJsonValue(gain_tx1));
    }
    if(m_pwrmode_tx1_isSet){
        obj->insert("pwrmodeTx1", QJsonValue(pwrmode_tx1));
    }

    return obj;
}

qint32
SWGXtrxMIMOSettings::getExtClock() {
    return ext_clock;
}
void
SWGXtrxMIMOSettings::setExtClock(qint32 ext_clock) {
    this->ext_clock = ext_clock;
    this->m_ext_clock_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getExtClockFreq() {
    return ext_clock_freq;
}
void
SWGXtrxMIMOSettings::setExtClockFreq(qint32 ext_clock_freq) {
    this->ext_clock_freq = ext_clock_freq;
    this->m_ext_clock_freq_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGpioDir() {
    return gpio_dir;
}
void
SWGXtrxMIMOSettings::setGpioDir(qint32 gpio_dir) {
    this->gpio_dir = gpio_dir;
    this->m_gpio_dir_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGpioPins() {
    return gpio_pins;
}
void
SWGXtrxMIMOSettings::setGpioPins(qint32 gpio_pins) {
    this->gpio_pins = gpio_pins;
    this->m_gpio_pins_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGXtrxMIMOSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGXtrxMIMOSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGXtrxMIMOSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGXtrxMIMOSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGXtrxMIMOSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getRxDevSampleRate() {
    return rx_dev_sample_rate;
}
void
SWGXtrxMIMOSettings::setRxDevSampleRate(qint32 rx_dev_sample_rate) {
    this->rx_dev_sample_rate = rx_dev_sample_rate;
    this->m_rx_dev_sample_rate_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLog2HardDecim() {
    return log2_hard_decim;
}
void
SWGXtrxMIMOSettings::setLog2HardDecim(qint32 log2_hard_decim) {
    this->log2_hard_decim = log2_hard_decim;
    this->m_log2_hard_decim_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLog2SoftDecim() {
    return log2_soft_decim;
}
void
SWGXtrxMIMOSettings::setLog2SoftDecim(qint32 log2_soft_decim) {
    this->log2_soft_decim = log2_soft_decim;
    this->m_log2_soft_decim_isSet = true;
}

qint64
SWGXtrxMIMOSettings::getRxCenterFrequency() {
    return rx_center_frequency;
}
void
SWGXtrxMIMOSettings::setRxCenterFrequency(qint64 rx_center_frequency) {
    this->rx_center_frequency = rx_center_frequency;
    this->m_rx_center_frequency_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getDcBlock() {
    return dc_block;
}
void
SWGXtrxMIMOSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGXtrxMIMOSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getNcoEnableRx() {
    return nco_enable_rx;
}
void
SWGXtrxMIMOSettings::setNcoEnableRx(qint32 nco_enable_rx) {
    this->nco_enable_rx = nco_enable_rx;
    this->m_nco_enable_rx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getNcoFrequencyRx() {
    return nco_frequency_rx;
}
void
SWGXtrxMIMOSettings::setNcoFrequencyRx(qint32 nco_frequency_rx) {
    this->nco_frequency_rx = nco_frequency_rx;
    this->m_nco_frequency_rx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getAntennaPathRx() {
    return antenna_path_rx;
}
void
SWGXtrxMIMOSettings::setAntennaPathRx(qint32 antenna_path_rx) {
    this->antenna_path_rx = antenna_path_rx;
    this->m_antenna_path_rx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getIqOrder() {
    return iq_order;
}
void
SWGXtrxMIMOSettings::setIqOrder(qint32 iq_order) {
    this->iq_order = iq_order;
    this->m_iq_order_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLpfBwRx0() {
    return lpf_bw_rx0;
}
void
SWGXtrxMIMOSettings::setLpfBwRx0(qint32 lpf_bw_rx0) {
    this->lpf_bw_rx0 = lpf_bw_rx0;
    this->m_lpf_bw_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainRx0() {
    return gain_rx0;
}
void
SWGXtrxMIMOSettings::setGainRx0(qint32 gain_rx0) {
    this->gain_rx0 = gain_rx0;
    this->m_gain_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainModeRx0() {
    return gain_mode_rx0;
}
void
SWGXtrxMIMOSettings::setGainModeRx0(qint32 gain_mode_rx0) {
    this->gain_mode_rx0 = gain_mode_rx0;
    this->m_gain_mode_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLnaGainRx0() {
    return lna_gain_rx0;
}
void
SWGXtrxMIMOSettings::setLnaGainRx0(qint32 lna_gain_rx0) {
    this->lna_gain_rx0 = lna_gain_rx0;
    this->m_lna_gain_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getTiaGainRx0() {
    return tia_gain_rx0;
}
void
SWGXtrxMIMOSettings::setTiaGainRx0(qint32 tia_gain_rx0) {
    this->tia_gain_rx0 = tia_gain_rx0;
    this->m_tia_gain_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPgaGainRx0() {
    return pga_gain_rx0;
}
void
SWGXtrxMIMOSettings::setPgaGainRx0(qint32 pga_gain_rx0) {
    this->pga_gain_rx0 = pga_gain_rx0;
    this->m_pga_gain_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPwrmodeRx0() {
    return pwrmode_rx0;
}
void
SWGXtrxMIMOSettings::setPwrmodeRx0(qint32 pwrmode_rx0) {
    this->pwrmode_rx0 = pwrmode_rx0;
    this->m_pwrmode_rx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLpfBwRx1() {
    return lpf_bw_rx1;
}
void
SWGXtrxMIMOSettings::setLpfBwRx1(qint32 lpf_bw_rx1) {
    this->lpf_bw_rx1 = lpf_bw_rx1;
    this->m_lpf_bw_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainRx1() {
    return gain_rx1;
}
void
SWGXtrxMIMOSettings::setGainRx1(qint32 gain_rx1) {
    this->gain_rx1 = gain_rx1;
    this->m_gain_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainModeRx1() {
    return gain_mode_rx1;
}
void
SWGXtrxMIMOSettings::setGainModeRx1(qint32 gain_mode_rx1) {
    this->gain_mode_rx1 = gain_mode_rx1;
    this->m_gain_mode_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLnaGainRx1() {
    return lna_gain_rx1;
}
void
SWGXtrxMIMOSettings::setLnaGainRx1(qint32 lna_gain_rx1) {
    this->lna_gain_rx1 = lna_gain_rx1;
    this->m_lna_gain_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getTiaGainRx1() {
    return tia_gain_rx1;
}
void
SWGXtrxMIMOSettings::setTiaGainRx1(qint32 tia_gain_rx1) {
    this->tia_gain_rx1 = tia_gain_rx1;
    this->m_tia_gain_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPgaGainRx1() {
    return pga_gain_rx1;
}
void
SWGXtrxMIMOSettings::setPgaGainRx1(qint32 pga_gain_rx1) {
    this->pga_gain_rx1 = pga_gain_rx1;
    this->m_pga_gain_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPwrmodeRx1() {
    return pwrmode_rx1;
}
void
SWGXtrxMIMOSettings::setPwrmodeRx1(qint32 pwrmode_rx1) {
    this->pwrmode_rx1 = pwrmode_rx1;
    this->m_pwrmode_rx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getTxDevSampleRate() {
    return tx_dev_sample_rate;
}
void
SWGXtrxMIMOSettings::setTxDevSampleRate(qint32 tx_dev_sample_rate) {
    this->tx_dev_sample_rate = tx_dev_sample_rate;
    this->m_tx_dev_sample_rate_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLog2HardInterp() {
    return log2_hard_interp;
}
void
SWGXtrxMIMOSettings::setLog2HardInterp(qint32 log2_hard_interp) {
    this->log2_hard_interp = log2_hard_interp;
    this->m_log2_hard_interp_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLog2SoftInterp() {
    return log2_soft_interp;
}
void
SWGXtrxMIMOSettings::setLog2SoftInterp(qint32 log2_soft_interp) {
    this->log2_soft_interp = log2_soft_interp;
    this->m_log2_soft_interp_isSet = true;
}

qint64
SWGXtrxMIMOSettings::getTxCenterFrequency() {
    return tx_center_frequency;
}
void
SWGXtrxMIMOSettings::setTxCenterFrequency(qint64 tx_center_frequency) {
    this->tx_center_frequency = tx_center_frequency;
    this->m_tx_center_frequency_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getNcoEnableTx() {
    return nco_enable_tx;
}
void
SWGXtrxMIMOSettings::setNcoEnableTx(qint32 nco_enable_tx) {
    this->nco_enable_tx = nco_enable_tx;
    this->m_nco_enable_tx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getNcoFrequencyTx() {
    return nco_frequency_tx;
}
void
SWGXtrxMIMOSettings::setNcoFrequencyTx(qint32 nco_frequency_tx) {
    this->nco_frequency_tx = nco_frequency_tx;
    this->m_nco_frequency_tx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getAntennaPathTx() {
    return antenna_path_tx;
}
void
SWGXtrxMIMOSettings::setAntennaPathTx(qint32 antenna_path_tx) {
    this->antenna_path_tx = antenna_path_tx;
    this->m_antenna_path_tx_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLpfBwTx0() {
    return lpf_bw_tx0;
}
void
SWGXtrxMIMOSettings::setLpfBwTx0(qint32 lpf_bw_tx0) {
    this->lpf_bw_tx0 = lpf_bw_tx0;
    this->m_lpf_bw_tx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainTx0() {
    return gain_tx0;
}
void
SWGXtrxMIMOSettings::setGainTx0(qint32 gain_tx0) {
    this->gain_tx0 = gain_tx0;
    this->m_gain_tx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPwrmodeTx0() {
    return pwrmode_tx0;
}
void
SWGXtrxMIMOSettings::setPwrmodeTx0(qint32 pwrmode_tx0) {
    this->pwrmode_tx0 = pwrmode_tx0;
    this->m_pwrmode_tx0_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getLpfBwTx1() {
    return lpf_bw_tx1;
}
void
SWGXtrxMIMOSettings::setLpfBwTx1(qint32 lpf_bw_tx1) {
    this->lpf_bw_tx1 = lpf_bw_tx1;
    this->m_lpf_bw_tx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getGainTx1() {
    return gain_tx1;
}
void
SWGXtrxMIMOSettings::setGainTx1(qint32 gain_tx1) {
    this->gain_tx1 = gain_tx1;
    this->m_gain_tx1_isSet = true;
}

qint32
SWGXtrxMIMOSettings::getPwrmodeTx1() {
    return pwrmode_tx1;
}
void
SWGXtrxMIMOSettings::setPwrmodeTx1(qint32 pwrmode_tx1) {
    this->pwrmode_tx1 = pwrmode_tx1;
    this->m_pwrmode_tx1_isSet = true;
}


bool
SWGXtrxMIMOSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_ext_clock_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ext_clock_freq_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gpio_dir_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gpio_pins_isSet){
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
        if(m_rx_dev_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_hard_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_soft_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dc_block_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_correction_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nco_enable_rx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nco_frequency_rx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_antenna_path_rx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_order_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_bw_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_mode_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lna_gain_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tia_gain_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pga_gain_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pwrmode_rx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_bw_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_mode_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lna_gain_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tia_gain_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pga_gain_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pwrmode_rx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_dev_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_hard_interp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_soft_interp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nco_enable_tx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nco_frequency_tx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_antenna_path_tx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_bw_tx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_tx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pwrmode_tx0_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_bw_tx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_tx1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pwrmode_tx1_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

