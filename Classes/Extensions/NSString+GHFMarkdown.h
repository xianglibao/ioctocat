//
//  NSString+GHFMarkdown.h
//  iOctocat
//
//  Created by Dennis Reimann on 05/15/13.
//  http://dennisreimann.de
//

#import <Foundation/Foundation.h>

extern NSString *const GHFMarkdownLinkRegex;
extern NSString *const GHFMarkdownImageRegex;
extern NSString *const GHFMarkdownShaRegex;
extern NSString *const GHFMarkdownUsernameRegex;
extern NSString *const GHFMarkdownIssueRegex;
extern NSString *const GHFMarkdownTaskRegex;
extern NSString *const GHFMarkdownHeadlineRegex;
extern NSString *const GHFMarkdownBoldItalicRegex;
extern NSString *const GHFMarkdownBoldRegex;
extern NSString *const GHFMarkdownItalicRegex;
extern NSString *const GHFMarkdownQuotedRegex;
extern NSString *const GHFMarkdownCodeBlockRegex;
extern NSString *const GHFMarkdownCodeInlineRegex;

@interface NSString (GHFMarkdown)
- (NSArray *)linksFromGHFMarkdownWithContextRepoId:(NSString *)repoId;
- (NSArray *)linksFromGHFMarkdownLinks;
- (NSArray *)linksFromGHFMarkdownImages;
- (NSArray *)linksFromGHFMarkdownUsernames;
- (NSArray *)linksFromGHFMarkdownShasWithContextRepoId:(NSString *)repoId;
- (NSArray *)linksFromGHFMarkdownIssuesWithContextRepoId:(NSString *)repoId;
- (NSArray *)tasksFromGHFMarkdown;
- (NSArray *)headlinesFromGHFMarkdown;
@end
