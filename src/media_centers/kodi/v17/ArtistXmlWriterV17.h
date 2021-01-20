#pragma once

#include "media_centers/kodi/ArtistXmlWriter.h"

#include <QByteArray>
#include <QDomElement>
#include <QString>
#include <QXmlStreamWriter>

class Artist;

namespace mediaelch {
namespace kodi {

class ArtistXmlWriterV17 : public ArtistXmlWriter
{
public:
    explicit ArtistXmlWriterV17(Artist& artist);
    QByteArray getArtistXml(bool testMode = false) override;

private:
    void writeArtistTags(QXmlStreamWriter& xml);

private:
    Artist& m_artist;
};

} // namespace kodi
} // namespace mediaelch
