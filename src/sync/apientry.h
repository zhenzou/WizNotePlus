#ifndef WIZSERVICE_WIZAPIENTRY_H
#define WIZSERVICE_WIZAPIENTRY_H

class QString;

namespace WizService {

class ApiEntry
{
public:
    static QString syncUrl();
    static QString messageVersionUrl();
    static QString avatarDownloadUrl();
    static QString avatarUploadUrl();
    static QString commentUrl();
    static QString commentCountUrl();
    static QString feedbackUrl();
    static QString accountInfoUrl(const QString& strToken);
    static QString groupAttributeUrl(const QString& strToken, const QString& strKbGUID);
};

} // namespace WizService

#endif // WIZSERVICE_WIZAPIENTRY_H