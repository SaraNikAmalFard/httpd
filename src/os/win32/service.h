
#ifndef SERVICE_H
#define SERVICE_H

#ifdef WIN32
int service_main(int (*main_fn)(int, char **), int argc, char **argv);
int service95_main(int (*main_fn)(int, char **), int argc, char **argv,
		   char *display_name);
void service_set_status(int status);
void service_cd();
BOOL isProcessService();
BOOL isValidService(char *display_name);
void InstallService(char *display_name, char *conf);
void RemoveService(char *display_name);
int service_init();
int send_signal_to_service(char *display_name, char *sig);
BOOL isWindowsNT(void);
void ap_start_console_monitor(void);
#endif /* WIN32 */

#endif /* SERVICE_H */
