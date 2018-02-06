/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGNFMDemodSettings.h
 * 
 * NFMDemod
 */

#ifndef SWGNFMDemodSettings_H_
#define SWGNFMDemodSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGNFMDemodSettings: public SWGObject {
public:
    SWGNFMDemodSettings();
    SWGNFMDemodSettings(QString* json);
    virtual ~SWGNFMDemodSettings();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNFMDemodSettings* fromJson(QString &jsonString);

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getRfBandwidth();
    void setRfBandwidth(float rf_bandwidth);

    float getAfBandwidth();
    void setAfBandwidth(float af_bandwidth);

    qint32 getFmDeviation();
    void setFmDeviation(qint32 fm_deviation);

    qint32 getSquelchGate();
    void setSquelchGate(qint32 squelch_gate);

    qint32 getDeltaSquelch();
    void setDeltaSquelch(qint32 delta_squelch);

    float getSquelch();
    void setSquelch(float squelch);

    float getVolume();
    void setVolume(float volume);

    qint32 getCtcssOn();
    void setCtcssOn(qint32 ctcss_on);

    qint32 getAudioMute();
    void setAudioMute(qint32 audio_mute);

    qint32 getCtcssIndex();
    void setCtcssIndex(qint32 ctcss_index);

    qint32 getAudioSampleRate();
    void setAudioSampleRate(qint32 audio_sample_rate);

    qint32 getCopyAudioToUdp();
    void setCopyAudioToUdp(qint32 copy_audio_to_udp);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);


private:
    qint64 input_frequency_offset;
    float rf_bandwidth;
    float af_bandwidth;
    qint32 fm_deviation;
    qint32 squelch_gate;
    qint32 delta_squelch;
    float squelch;
    float volume;
    qint32 ctcss_on;
    qint32 audio_mute;
    qint32 ctcss_index;
    qint32 audio_sample_rate;
    qint32 copy_audio_to_udp;
    QString* udp_address;
    qint32 udp_port;
    qint32 rgb_color;
    QString* title;
};

}

#endif /* SWGNFMDemodSettings_H_ */
