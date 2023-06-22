#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef MIRRORFLYSDK_SWIFT_H
#define MIRRORFLYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import Foundation;
@import ObjectiveC;
@import WebRTC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MirrorFlySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

/// Archive related event delegate for Archive/Unarchive activities
SWIFT_PROTOCOL("_TtP12MirrorFlySDK21ArchiveEventsDelegate_")
@protocol ArchiveEventsDelegate <NSObject>
/// Called when the a chat is Archived/Unarchived
- (void)updateArchiveUnArchiveChatsToUser:(NSString * _Nonnull)toUser archiveStatus:(BOOL)archiveStatus;
/// Called when the archive settings changed
- (void)updateArchivedSettingsWithArchivedSettingsStatus:(BOOL)archivedSettingsStatus;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK13BackupManager")
@interface BackupManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK14CallLogManager")
@interface CallLogManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSTimer;

SWIFT_CLASS("_TtC12MirrorFlySDK11CallManager")
@interface CallManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (void)setAppGroupContainerIdWithId:(NSString * _Nonnull)id;
+ (void)callRingingStatusWaiting:(NSTimer * _Nonnull)timer;
@end













@interface CallManager (SWIFT_EXTENSION(MirrorFlySDK))
+ (BOOL)isOngoingCall SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)checkForActiveCall SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK22CallParticipantsStatus")
@interface CallParticipantsStatus : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK11CallPayload")
@interface CallPayload : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK14CallUsersModel")
@interface CallUsersModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK11ChatManager")
@interface ChatManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





















@class ProfileDetails;
@class ChatMessage;

/// Delegate for group events
SWIFT_PROTOCOL("_TtP12MirrorFlySDK19GroupEventsDelegate_")
@protocol GroupEventsDelegate <NSObject>
/// Called whenever a user Created new Group receive Message
- (void)didAddNewMemeberToGroupWithGroupJid:(NSString * _Nonnull)groupJid newMemberJid:(NSString * _Nonnull)newMemberJid addedByMemberJid:(NSString * _Nonnull)addedByMemberJid;
/// called whenever a admin remove participant group model class
- (void)didRemoveMemberFromGroupWithGroupJid:(NSString * _Nonnull)groupJid removedMemberJid:(NSString * _Nonnull)removedMemberJid removedByMemberJid:(NSString * _Nonnull)removedByMemberJid;
/// called when a group Profile is fetched by you or by a member of the group
- (void)didFetchGroupProfileWithGroupJid:(NSString * _Nonnull)groupJid;
/// called whenever get group update message is received in user group
- (void)didUpdateGroupProfileWithGroupJid:(NSString * _Nonnull)groupJid;
/// called whenever get make Admin message is received in user group
- (void)didMakeMemberAsAdminWithGroupJid:(NSString * _Nonnull)groupJid newAdminMemberJid:(NSString * _Nonnull)newAdminMemberJid madeByMemberJid:(NSString * _Nonnull)madeByMemberJid;
/// Called whenever if a member removed from admin
- (void)didRemoveMemberFromAdminWithGroupJid:(NSString * _Nonnull)groupJid removedAdminMemberJid:(NSString * _Nonnull)removedAdminMemberJid removedByMemberJid:(NSString * _Nonnull)removedByMemberJid;
/// called   Whenever participant deleted from  the group
- (void)didDeleteGroupLocallyWithGroupJid:(NSString * _Nonnull)groupJid;
/// called  Whenever participant removed from  the group
- (void)didLeftFromGroupWithGroupJid:(NSString * _Nonnull)groupJid leftUserJid:(NSString * _Nonnull)leftUserJid;
- (void)didCreateGroupWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didFetchGroupsWithGroups:(NSArray<ProfileDetails *> * _Nonnull)groups;
- (void)didFetchGroupMembersWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didReceiveGroupNotificationMessageWithMessage:(ChatMessage * _Nonnull)message;
@end


@interface ChatManager (SWIFT_EXTENSION(MirrorFlySDK)) <GroupEventsDelegate>
- (void)didFetchGroupMembersWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didReceiveGroupNotificationMessageWithMessage:(ChatMessage * _Nonnull)message;
- (void)didAddNewMemeberToGroupWithGroupJid:(NSString * _Nonnull)groupJid newMemberJid:(NSString * _Nonnull)newMemberJid addedByMemberJid:(NSString * _Nonnull)addedByMemberJid;
- (void)didRemoveMemberFromGroupWithGroupJid:(NSString * _Nonnull)groupJid removedMemberJid:(NSString * _Nonnull)removedMemberJid removedByMemberJid:(NSString * _Nonnull)removedByMemberJid;
- (void)didFetchGroupProfileWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didUpdateGroupProfileWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didMakeMemberAsAdminWithGroupJid:(NSString * _Nonnull)groupJid newAdminMemberJid:(NSString * _Nonnull)newAdminMemberJid madeByMemberJid:(NSString * _Nonnull)madeByMemberJid;
- (void)didRemoveMemberFromAdminWithGroupJid:(NSString * _Nonnull)groupJid removedAdminMemberJid:(NSString * _Nonnull)removedAdminMemberJid removedByMemberJid:(NSString * _Nonnull)removedByMemberJid;
- (void)didDeleteGroupLocallyWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didLeftFromGroupWithGroupJid:(NSString * _Nonnull)groupJid leftUserJid:(NSString * _Nonnull)leftUserJid;
- (void)didCreateGroupWithGroupJid:(NSString * _Nonnull)groupJid;
- (void)didFetchGroupsWithGroups:(NSArray<ProfileDetails *> * _Nonnull)groups;
@end





SWIFT_CLASS("_TtC12MirrorFlySDK11ChatMessage")
@interface ChatMessage : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK14ContactManager")
@interface ContactManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





SWIFT_CLASS("_TtC12MirrorFlySDK18ContactSyncManager")
@interface ContactSyncManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, DeliveryStatus, open) {
  DeliveryStatusAcknowledged = 0,
  DeliveryStatusDelivered = 1,
  DeliveryStatusSeen = 2,
  DeliveryStatusDeleted = 4,
};


SWIFT_CLASS("_TtC12MirrorFlySDK21FetchMessageListQuery")
@interface FetchMessageListQuery : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC12MirrorFlySDK12FlyCallUtils")
@interface FlyCallUtils : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





SWIFT_CLASS("_TtC12MirrorFlySDK19FlyCommonController")
@interface FlyCommonController : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK17FlyForwardManager")
@interface FlyForwardManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol MessageEventsDelegate;

/// Handles sending chat messages of every type to user by proving public methods
SWIFT_CLASS("_TtC12MirrorFlySDK12FlyMessenger")
@interface FlyMessenger : NSObject
@property (nonatomic, strong) id <MessageEventsDelegate> _Nullable messageEventsDelegate;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FlyMessenger * _Nonnull shared;)
+ (FlyMessenger * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Encrypt the message content string
/// \param message text representation of a message
///
/// \param messageId id of the message
///
///
/// returns:
/// encrypted message content
+ (NSString * _Nullable)encryptDecryptMessageContentWithMessage:(NSString * _Nonnull)message messageId:(NSString * _Nonnull)messageId isEncrypt:(BOOL)isEncrypt SWIFT_WARN_UNUSED_RESULT;
/// Gives the chatmessages available for the  given jid
/// \param jid Jid of the User/Group/Broadcast
///
+ (NSArray<ChatMessage *> * _Nonnull)getMessagesOfJid:(NSString * _Nonnull)jid SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)checkMessagesAvailableToJid:(NSString * _Nonnull)jid SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<ChatMessage *> * _Nonnull)getAllMediaMessagesOfJid:(NSString * _Nonnull)jid SWIFT_WARN_UNUSED_RESULT;
/// Gives the chatmessages available for the  given jid
/// \param jid Jid of the User/Group/Broadcast
///
+ (NSArray<ChatMessage *> * _Nonnull)getMediaMessagesOfJid:(NSString * _Nonnull)jid SWIFT_WARN_UNUSED_RESULT;
/// Gives the list of chatmessages available for the  given message ids
/// \param messageIds message ids
///
+ (NSArray<ChatMessage *> * _Nonnull)getMessagesUsingIdsWithMessageIds:(NSArray<NSString *> * _Nonnull)messageIds SWIFT_WARN_UNUSED_RESULT;
/// Gives the Chatmessage object for a given message id
/// \param messageId id of a message
///
+ (ChatMessage * _Nullable)getMessageOfIdWithMessageId:(NSString * _Nonnull)messageId SWIFT_WARN_UNUSED_RESULT;
+ (void)uploadFileWithChatMessage:(ChatMessage * _Nonnull)chatMessage;
/// Sets the unsent sender message of an user/group
/// \param id id of an user or a group
///
/// \param message content of the unsent message
///
+ (void)saveUnsentMessageWithId:(NSString * _Nonnull)id message:(NSString * _Nonnull)message mentionedUsers:(NSArray<NSString *> * _Nullable)mentionedUsers mentionSearch:(NSArray<NSString *> * _Nullable)mentionSearch mentionLocation:(NSArray<NSNumber *> * _Nullable)mentionLocation mentionLength:(NSArray<NSNumber *> * _Nullable)mentionLength;
@end



@interface FlyMessenger (SWIFT_EXTENSION(MirrorFlySDK))
- (void)deleteUnreadMessageSeparatorOfAConversationWithJid:(NSString * _Nonnull)jid;
@end


@interface FlyMessenger (SWIFT_EXTENSION(MirrorFlySDK))
+ (void)forwardMessageMediaAccessWithMessages:(NSArray<ChatMessage *> * _Nonnull)messages jidList:(NSArray<NSString *> * _Nonnull)jidList;
@end


@interface FlyMessenger (SWIFT_EXTENSION(MirrorFlySDK))
+ (void)cancelMediaUploadOrDownloadWithMessage:(ChatMessage * _Nonnull)message sendMessageListener:(void (^ _Nonnull)(BOOL))sendMessageListener SWIFT_DEPRECATED_MSG("Use the FlyMessenger.cancelMediaUploadOrDownload(messageId: String, sendMessageListener : @escaping (_ isSuccess: Bool)-> Void) instead");
+ (void)cancelMediaUploadOrDownloadWithMessageId:(NSString * _Nonnull)messageId sendMessageListener:(void (^ _Nonnull)(BOOL))sendMessageListener;
+ (void)resetFailedMediaMessagesWithChatUserJid:(NSString * _Nonnull)chatUserJid;
@end

@class AVCaptureFileOutput;
@class NSURL;
@class AVCaptureConnection;
@class AVAssetExportSession;

@interface FlyMessenger (SWIFT_EXTENSION(MirrorFlySDK)) <AVCaptureFileOutputRecordingDelegate>
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
+ (void)compressVideoWithInputURL:(NSURL * _Nonnull)inputURL outputURL:(NSURL * _Nonnull)outputURL handler:(void (^ _Nonnull)(AVAssetExportSession * _Nullable))handler;
@end


@interface FlyMessenger (SWIFT_EXTENSION(MirrorFlySDK))
- (void)uploadingProgressWithPercent:(float)percent message:(ChatMessage * _Nonnull)message;
- (void)uploadSucceededWithMessage:(ChatMessage * _Nonnull)message response:(NSDictionary<NSString *, id> * _Nonnull)response;
- (void)uploadWithErrorWithError:(NSString * _Nonnull)error messageId:(NSString * _Nonnull)messageId;
- (void)downloadingProgressWithPercent:(float)percent message:(ChatMessage * _Nonnull)message;
- (void)downloadSucceededWithMessage:(ChatMessage * _Nonnull)message fileLocalPath:(NSString * _Nonnull)fileLocalPath fileName:(NSString * _Nonnull)fileName;
- (void)downloadWithErrorWithError:(NSString * _Nonnull)error messageId:(NSString * _Nonnull)messageId errorCode:(NSInteger)errorCode;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK21FlyTranslationManager")
@interface FlyTranslationManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK16GroupCallDetails")
@interface GroupCallDetails : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC12MirrorFlySDK12GroupManager")
@interface GroupManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC12MirrorFlySDK10GroupModel")
@interface GroupModel : NSObject
/// groupId of the group profile
@property (nonatomic, copy) NSString * _Null_unspecified groupId;
/// groupCreatedTime of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupCreatedTime;
/// groupImage of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupImage;
/// groupThumbImage of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupThumbImage;
/// groupName of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupName;
/// groupAffiliation of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupAffiliation;
/// groupItemId of the group profile
@property (nonatomic, copy) NSString * _Nonnull groupItemId;
- (nonnull instancetype)initWithGroupId:(NSString * _Nonnull)groupId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK22GroupParticipantDetail")
@interface GroupParticipantDetail : NSObject
/// Jid of the vcard
@property (nonatomic, copy) NSString * _Null_unspecified groupMemberId;
/// Jid of the vcard
@property (nonatomic, copy) NSString * _Null_unspecified groupJid;
/// Name of the vcard
@property (nonatomic, copy) NSString * _Nonnull memberJid;
/// memberItemId of the user
@property (nonatomic, copy) NSString * _Nonnull memberItemId;
/// time of the user
@property (nonatomic, copy) NSString * _Nonnull time;
/// stanzaId of the user
@property (nonatomic, copy) NSString * _Null_unspecified stanzaId;
/// isAdminMember of the user
@property (nonatomic) BOOL isAdminMember;
@property (nonatomic, copy) NSString * _Nonnull displayName;
/// profile dtails of participant
@property (nonatomic, strong) ProfileDetails * _Nullable profileDetail;
- (nonnull instancetype)initWithGroupMemberId:(NSString * _Nonnull)groupMemberId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK12MediaManager")
@interface MediaManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum MessageStatus : NSInteger;

/// Message related event delegate for all chat related activities
SWIFT_PROTOCOL("_TtP12MirrorFlySDK21MessageEventsDelegate_")
@protocol MessageEventsDelegate <NSObject>
/// Called when the a new message is received in all types of chat
- (void)onMessageReceivedWithMessage:(ChatMessage * _Nonnull)message chatJid:(NSString * _Nonnull)chatJid;
/// Called when the receipts from the other users or server for a particular message sent by you or received by you is updated.
- (void)onMessageStatusUpdatedWithMessageId:(NSString * _Nonnull)messageId chatJid:(NSString * _Nonnull)chatJid status:(enum MessageStatus)status;
/// Called when upload or download of a media file is completed successfully
- (void)onMediaStatusUpdatedWithMessage:(ChatMessage * _Nonnull)message;
/// Called when upload or download of a media file is failed
- (void)onMediaStatusFailedWithError:(NSString * _Nonnull)error messageId:(NSString * _Nonnull)messageId errorCode:(NSInteger)errorCode;
/// Called when the progress of upload or download of a media file is changed
- (void)onMediaProgressChangedWithMessage:(ChatMessage * _Nonnull)message progressPercentage:(float)progressPercentage;
/// Called when the message/conversation deleted for the chat user.
- (void)onMessagesClearedOrDeletedWithMessageIds:(NSArray<NSString *> * _Nonnull)messageIds;
/// Called when the message/conversation deleted for everyone.
- (void)onMessagesDeletedforEveryoneWithMessageIds:(NSArray<NSString *> * _Nonnull)messageIds;
/// Called whenever a notification needed to be shown or updated or cancelled
- (void)showOrUpdateOrCancelNotification;
/// Called whenever messages are cleared
- (void)onMessagesClearedToJid:(NSString * _Nonnull)toJid deleteType:(NSString * _Nullable)deleteType;
/// Called on set or update or remove all favourite messages
- (void)setOrUpdateFavouriteWithMessageId:(NSString * _Nonnull)messageId favourite:(BOOL)favourite removeAllFavourite:(BOOL)removeAllFavourite;
/// Called when an incoming message is being translated
- (void)onMessageTranslatedWithMessage:(ChatMessage * _Nonnull)message jid:(NSString * _Nonnull)jid;
/// Called when user cleared all conversations
- (void)clearAllConversationForSyncedDevice;
@end

typedef SWIFT_ENUM(NSInteger, MessageStatus, open) {
  MessageStatusNotAcknowledged = 0,
  MessageStatusSent = 1,
  MessageStatusAcknowledged = 2,
  MessageStatusDelivered = 3,
  MessageStatusSeen = 4,
  MessageStatusReceived = 5,
};

@class UNMutableNotificationContent;

SWIFT_CLASS("_TtC12MirrorFlySDK28NotificationExtensionSupport")
@interface NotificationExtensionSupport : NSObject
/// It is the method where notification will be received to handle
/// @param bestContent UNMutableNotificationContent which should be returned as notification display
/// @param onCompletion It is the completion method called when payload processing is completed
- (void)didReceiveNotificationRequest:(UNMutableNotificationContent * _Nullable)bestContent appName:(NSString * _Nonnull)appName onCompletion:(void (^ _Nonnull)(UNMutableNotificationContent * _Nullable))onCompletion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK26NotificationMessageSupport")
@interface NotificationMessageSupport : NSObject
- (void)didReceiveNotificationRequest:(UNMutableNotificationContent * _Nullable)bestContent onCompletion:(void (^ _Nonnull)(UNMutableNotificationContent * _Nullable))onCompletion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC12MirrorFlySDK18ParticipantDetails")
@interface ParticipantDetails : NSObject
/// Jid of the admin User
@property (nonatomic, readonly, copy) NSString * _Null_unspecified jid;
/// groupJid of  the  group
@property (nonatomic, copy) NSString * _Nonnull groupJid;
/// stanzaId of  the group
@property (nonatomic, copy) NSString * _Nonnull stanzaId;
/// retractId of  the group
@property (nonatomic, copy) NSString * _Nonnull retractId;
/// removeParticipantJid of  the group
@property (nonatomic, copy) NSString * _Nonnull removeParticipantJid;
/// publisherJid of  the group
@property (nonatomic, copy) NSString * _Nonnull publisherId;
/// removeTime of  the group
@property (nonatomic, copy) NSString * _Nonnull time;
/// image  of  the group
@property (nonatomic, copy) NSString * _Nonnull groupImage;
/// thumbImage  of  the group
@property (nonatomic, copy) NSString * _Nonnull groupThumbImage;
/// name of  the group
@property (nonatomic, copy) NSString * _Nonnull groupName;
/// adminJid of  the group
@property (nonatomic, copy) NSString * _Nonnull newAdmin;
/// The member ,who made  meember as admin
@property (nonatomic, copy) NSString * _Nonnull doneBy;
- (nonnull instancetype)initWithJid:(NSString * _Nonnull)jid OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK20PeerConnectionClient")
@interface PeerConnectionClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RTCPeerConnection;
@class RTCRtpTransceiver;
@class RTCRtpReceiver;
@class RTCMediaStream;
@class RTCIceCandidate;
@class RTCDataChannel;

@interface PeerConnectionClient (SWIFT_EXTENSION(MirrorFlySDK)) <RTCPeerConnectionDelegate>
- (void)peerConnectionShouldNegotiate:(RTCPeerConnection * _Nonnull)peerConnection;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didStartReceivingOnTransceiver:(RTCRtpTransceiver * _Nonnull)transceiver;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didAddReceiver:(RTCRtpReceiver * _Nonnull)rtpReceiver streams:(NSArray<RTCMediaStream *> * _Nonnull)mediaStreams;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeSignalingState:(RTCSignalingState)stateChanged;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didAddStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceConnectionState:(RTCIceConnectionState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceGatheringState:(RTCIceGatheringState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didGenerateIceCandidate:(RTCIceCandidate * _Nonnull)candidate;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveIceCandidates:(NSArray<RTCIceCandidate *> * _Nonnull)candidates;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didOpenDataChannel:(RTCDataChannel * _Nonnull)dataChannel;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK14ProfileDetails")
@interface ProfileDetails : NSObject
/// Jid of the vcard
@property (nonatomic, copy) NSString * _Null_unspecified jid;
/// Name of the vcard
@property (nonatomic, copy) NSString * _Nonnull name;
/// Nickname of the user
@property (nonatomic, copy) NSString * _Nonnull nickName;
/// Image url of the user
@property (nonatomic, copy) NSString * _Nonnull image;
/// Thumbnail Image url of the user
@property (nonatomic, copy) NSString * _Nonnull thumbImage;
/// Image local  path of the user
@property (nonatomic, copy) NSString * _Nonnull imageLocalPath;
/// Mobile number of the user
@property (nonatomic, copy) NSString * _Nonnull mobileNumber;
/// Status of the user
@property (nonatomic, copy) NSString * _Nonnull status;
/// Mail of the user
@property (nonatomic, copy) NSString * _Nonnull email;
/// Colour code for each user
@property (nonatomic, copy) NSString * _Nonnull colorCode;
/// Image privacy flag
@property (nonatomic) BOOL imagePrivacyFlag;
/// Status privacy flag
@property (nonatomic) BOOL statusPrivacyFlag;
/// Last seen privacy flag
@property (nonatomic) BOOL lastSeenPrivacyFlag;
/// Mobile number privacy flag
@property (nonatomic) BOOL mobileNUmberPrivacyFlag;
/// boolean to represent th mute status for this user
@property (nonatomic) BOOL isMuted;
/// boolean to represent whether we blocked this user
@property (nonatomic) BOOL isBlocked;
/// boolean to represent whether this user blocked us
@property (nonatomic) BOOL isBlockedMe;
/// boolean to represent whether this user is one of the admin of a group
@property (nonatomic) BOOL isGroupAdmin;
/// boolean to check whether the contact is saved in our phonebook
@property (nonatomic) BOOL isItSavedContact;
/// Holds the data of created time of a group
@property (nonatomic) double groupCreatedTime;
/// Checks whether the group was created in server or not
@property (nonatomic) BOOL isGroupInOfflineMode;
/// Property to hold selected value during multi selection
@property (nonatomic) BOOL isSelected;
/// group name  of the participant
@property (nonatomic, copy) NSString * _Null_unspecified nick;
/// itemId of the vcard
@property (nonatomic, copy) NSString * _Null_unspecified itemId;
/// groupAffiliation of the group profile
@property (nonatomic, copy) NSString * _Nullable affiliation;
/// To check whether group sync is needed or not to get participants from server
@property (nonatomic) BOOL isSyncNeeded;
/// To check whether contact is blocked by admin or not
@property (nonatomic) BOOL isBlockedByAdmin;
- (nonnull instancetype)initWithJid:(NSString * _Nonnull)jid OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Delegate for profile events
SWIFT_PROTOCOL("_TtP12MirrorFlySDK21ProfileEventsDelegate_")
@protocol ProfileEventsDelegate <NSObject>
/// Called whenever a user comes online by opening the app
- (void)userCameOnlineFor:(NSString * _Nonnull)jid;
/// Called whenever a user went to offline by closing the app
- (void)userWentOfflineFor:(NSString * _Nonnull)jid;
/// Called when the profile details of the requested profile jid is fetched from server successfully
- (void)userProfileFetchedFor:(NSString * _Nonnull)jid profileDetails:(ProfileDetails * _Nullable)profileDetails;
/// Called when the current user successfully updated their profile
- (void)myProfileUpdated;
/// Caleld when profiles of all the users/friends of current user is successfully fetched from server
- (void)usersProfilesFetched;
- (void)blockedThisUserWithJid:(NSString * _Nonnull)jid;
- (void)unblockedThisUserWithJid:(NSString * _Nonnull)jid;
- (void)usersIBlockedListFetchedWithJidList:(NSArray<NSString *> * _Nonnull)jidList;
- (void)usersBlockedMeListFetchedWithJidList:(NSArray<NSString *> * _Nonnull)jidList;
/// Called whenever a user updated their profile
- (void)userUpdatedTheirProfileFor:(NSString * _Nonnull)jid profileDetails:(ProfileDetails * _Nonnull)profileDetails;
/// Called when a user blocked the current logged in user
- (void)userBlockedMeWithJid:(NSString * _Nonnull)jid;
/// Called when a user unblocked the current logged in user
- (void)userUnBlockedMeWithJid:(NSString * _Nonnull)jid;
- (void)hideUserLastSeen;
- (void)getUserLastSeen;
- (void)userDeletedTheirProfileFor:(NSString * _Nonnull)jid profileDetails:(ProfileDetails * _Nonnull)profileDetails;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK10RecentChat")
@interface RecentChat : NSObject
/// Jid of the user/group/broadcast
@property (nonatomic, copy) NSString * _Nonnull jid;
/// Name of the\is recent chat profile
@property (nonatomic, copy) NSString * _Nonnull nickName;
/// Image url endpoint of this recent chat profile
@property (nonatomic, copy) NSString * _Nonnull profileName;
/// Check whether the entity belongs to a single chat user or a group
@property (nonatomic) BOOL isGroup;
/// Check whether the entity belongs to a single chat user or a broadcast
@property (nonatomic) BOOL isBroadCast;
/// Provides the count of unread message count for this recent chat profile
@property (nonatomic) NSInteger unreadMessageCount;
/// To check whether this recent chat user/group is archived
@property (nonatomic) BOOL isChatArchived;
/// To check whether this recent chat model is a pinned to appear on top
@property (nonatomic) BOOL isChatPinned;
@property (nonatomic, copy) NSString * _Nullable profileImage;
@property (nonatomic, copy) NSString * _Nullable profileThumbImage;
/// Id of the last Message sent/received between us and this recent chat profile
@property (nonatomic, copy) NSString * _Nonnull lastMessageId;
/// Data of the last message(text message | image caption) sent/received between us and the user/group
@property (nonatomic, copy) NSString * _Nonnull lastMessageContent;
/// Time in milliseconds of the last message sent/received between us and the user/group
@property (nonatomic) double lastMessageTime;
/// To check whether the last message is sent by us
@property (nonatomic) BOOL isLastMessageSentByMe;
/// To check whether the last message is deleted by the user for all
@property (nonatomic) BOOL isLastMessageRecalledByUser;
/// To check the mute status for this recent chat profile
@property (nonatomic) BOOL isMuted;
/// To check whether we blocked this recent chat profile
@property (nonatomic) BOOL isBlocked;
/// To check whether this user blocked us
@property (nonatomic) BOOL isBlockedMe;
/// Property to hold selected value during multi selection
@property (nonatomic) BOOL isSelected;
/// To check whether the contact is saved in our phonebook
@property (nonatomic) BOOL isItSavedContact;
/// Checks whether the group was created in server or not
@property (nonatomic) BOOL isGroupInOfflineMode;
/// To check whether the conversation with the user is read or not
@property (nonatomic) BOOL isConversationUnRead;
/// To check if contact blocked by admin or not
@property (nonatomic) BOOL isBlockedByAdmin;
/// To check whether the user ideleted their account or not
@property (nonatomic) BOOL isDeletedUser;
/// To check whether the user mentioned
@property (nonatomic) BOOL isMentionedUser;
/// To check whether the user mentioned
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull mentionedUsersIds;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK21RecentChatListBuilder")
@interface RecentChatListBuilder : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MirrorFlySDK16SocketConnection")
@interface SocketConnection : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC12MirrorFlySDK11VOIPManager")
@interface VOIPManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) VOIPManager * _Nonnull sharedInstance;)
+ (VOIPManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)setSharedInstance:(VOIPManager * _Nonnull)value;
/// It is used to process VOIP call
/// @param userInfo call of that VOIP notification
- (void)processPayload:(NSDictionary * _Nullable)userInfo;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MirrorFlySDK16WebLoginsManager")
@interface WebLoginsManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






SWIFT_PROTOCOL("_TtP12MirrorFlySDK10ikDelegate_")
@protocol ikDelegate
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
