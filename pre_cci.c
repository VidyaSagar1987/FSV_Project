# 1 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"






















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 512 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 515 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 539 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 573 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 620 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 699 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 760 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 775 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 799 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 811 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 819 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 825 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 926 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 933 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 955 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1031 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1060 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1072 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 769 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 820 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

# 1 "Action.c" 1
Action()
{
	
	 
	 

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_set_certificate_ex("CertFilePath=C:\\Data\\FSV\\API_Artifacts\\API_Artifacts\\sit.pem",
		 "CertFormat=PEM",
		 "KeyFilePath=C:\\Data\\FSV\\API_Artifacts\\API_Artifacts\\sit.pem",
		 "KeyFormat=PEM",
		 "Password=password01",
		  
		 "LAST");
		 
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	 

	web_add_header("Proxy-Authorization","Basic a2xhdTEyMDU6S2wyODI4MjghJg==");
	web_add_header("Authorization","Basic a2xhdTEyMDU6S2wyODI4MjghJg==");
	
	web_custom_request("start.swe_63",
		"URL=https://{param_Domain}/eai_anon_enu/start.swe?SWEExtSource=SecureWebService&SWEExtCmd=Execute&WSSOAP=1",
		"Method=POST",
		"Referer=", 
	    "Snapshot=t1.inf", 
	    "Mode=URL", 
	    "EncType=text/xml; charset=utf-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
			"<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:sieb=\"http://siebel.com.L17Incident\" xmlns:dhs=\"http://www.siebel.com/xml/DHSL17%20Incident\">"
			   "<soapenv:Header>"
			   "<wsse:Security xmlns:wsse=\"http://schemas.xmlsoap.org/ws/2002/04/secext\">"
				"<wsse:UsernameToken>"
					"<wsse:Username>VPUSER1</wsse:Username>"
					"<wsse:Password Type=\"wsse:PasswordText\">VPUS3R@123</wsse:Password>"
					"<wsse:SessionType xmlns=\"http://siebel.com/webservices\">None</wsse:SessionType>"
				"</wsse:UsernameToken>"
			   "</wsse:Security>"
			 "</soapenv:Header>"
			   "<soapenv:Body>"
			      "<sieb:IncidentInsert>"
					"<PoliceInputString><![CDATA[<?xml version=\"1.0\" encoding=\"utf-8\"?>"
					"<ChildReferral xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
						"<ReferralChildren>"
							"<ReferralChild>"
								"<InvolveDescCd>CHP</InvolveDescCd>"
								"<ReportedFamilyName>Poey</ReportedFamilyName>"
								"<ReportedFirstName>Marcus</ReportedFirstName>"
								"<GivenName>Marcus</GivenName>"
								"<ReportedDob>20010207</ReportedDob>"
								"<ReportedSex>F</ReportedSex>"
								"<ResideWith>1</ResideWith>"
								"<ReportedIndigenousStatus>TSI</ReportedIndigenousStatus>"
								"<Uid>49896255</Uid>"
							"</ReferralChild>"
						"</ReferralChildren>"
						"<ReferralMOs>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>1</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Physical (Indictable)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>2</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Physical (Summary)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>3</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Sexual</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>4</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Threats</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>5</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Pet Abuse</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>6</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Other</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>7</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Damage (Indictable)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>8</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Damage (Summary)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>9</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Theft</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>10</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Stalking - Less Than 2 Weeks</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>11</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Stalking - B/W 2 And 4 Weeks</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>12</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Stalking - More Than 4 Weeks</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>13</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Breach Only</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>14</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Breach And Other</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>15</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Emotional</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>16</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Verbal</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>17</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Social</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>18</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Economic</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>19</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Spiritual</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>1</GroupId>"
								"<GroupDesc>Non Criminal Abuse</GroupDesc>"
								"<GroupCodeId>21</GroupCodeId>"
								"<Code>20</Code>"
								"<SubCode>79</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Non Violent Non Abusive</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>22</GroupCodeId>"
								"<Code>1</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Married</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>23</GroupCodeId>"
								"<Code>2</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>De-Facto</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>24</GroupCodeId>"
								"<Code>3</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Child/Parent</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>25</GroupCodeId>"
								"<Code>4</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Separated</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>26</GroupCodeId>"
								"<Code>5</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Divorced</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>27</GroupCodeId>"
								"<Code>7</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Other Family Member</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>28</GroupCodeId>"
								"<Code>9</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Boyfriend/Girlfriend</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>29</GroupCodeId>"
								"<Code>10</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Same Sex (Gay)</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>30</GroupCodeId>"
								"<Code>11</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Same Sex (Lesbian)</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>3</GroupId>"
								"<GroupDesc>AFM/Other Party Relationship</GroupDesc>"
								"<GroupCodeId>31</GroupCodeId>"
								"<Code>12</Code>"
								"<SubCode>96</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Carer</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"    
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>56</GroupCodeId>"
								"<Code>02</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Depression/Mental Health Issue</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>57</GroupCodeId>"
								"<Code>03</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Suicidal Ideas Or Attempts</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>58</GroupCodeId>"
								"<Code>04</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Isolation</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>59</GroupCodeId>"
								"<Code>05</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Alcohol Possible</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>60</GroupCodeId>"
								"<Code>06</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Alcohol Definite</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>61</GroupCodeId>"
								"<Code>07</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Drugs Possible</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>62</GroupCodeId>"
								"<Code>08</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Drugs Definite</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>6</GroupId>"
								"<GroupDesc>Vulnerability Factors for AFM</GroupDesc>"
								"<GroupCodeId>63</GroupCodeId>"
								"<Code>09</Code>"
								"<SubCode>83</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Other Substances</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>7</GroupId>"
								"<GroupDesc>Vulnerability Factors (Others)</GroupDesc>"
								"<GroupCodeId>64</GroupCodeId>"
								"<Code>01</Code>"
								"<SubCode>84</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Separation</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>7</GroupId>"
								"<GroupDesc>Vulnerability Factors (Others)</GroupDesc>"
								"<GroupCodeId>65</GroupCodeId>"
								"<Code>02</Code>"
								"<SubCode>84</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Escalation - Increase Sev/Freq</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>7</GroupId>"
								"<GroupDesc>Vulnerability Factors (Others)</GroupDesc>"
								"<GroupCodeId>66</GroupCodeId>"
								"<Code>03</Code>"
								"<SubCode>84</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Presence Of A Disability</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>7</GroupId>"
								"<GroupDesc>Vulnerability Factors (Others)</GroupDesc>"
								"<GroupCodeId>67</GroupCodeId>"
								"<Code>04</Code>"
								"<SubCode>84</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Financial Difficulties</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>7</GroupId>"
								"<GroupDesc>Vulnerability Factors (Others)</GroupDesc>"
								"<GroupCodeId>140</GroupCodeId>"
								"<Code>05</Code>"
								"<SubCode>84</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Pregnancy/New Birth</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>73</GroupCodeId>"
								"<Code>01</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Harm Or Threat Harm Victim</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>74</GroupCodeId>"
								"<Code>02</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Tried To Choke Victim</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>75</GroupCodeId>"
								"<Code>03</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Threaten To Kill Victim</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>76</GroupCodeId>"
								"<Code>04</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Harm/Threat Harm/Kill Children</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>77</GroupCodeId>"
								"<Code>05</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Harm/Threat Harm/Kill Family</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>78</GroupCodeId>"
								"<Code>06</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Harm/Threat Harm/Kill Pets</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>79</GroupCodeId>"
								"<Code>07</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Threaten/Attempt Suicide</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>80</GroupCodeId>"
								"<Code>08</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Stalking Of Victim</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>81</GroupCodeId>"
								"<Code>09</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Sexual Assault Of Victim</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>82</GroupCodeId>"
								"<Code>11</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Controlling Behaviours</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>83</GroupCodeId>"
								"<Code>12</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Unemployed</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>84</GroupCodeId>"
								"<Code>13</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Depression/Mental Health Issue</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>85</GroupCodeId>"
								"<Code>15</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Alcohol Possible</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>86</GroupCodeId>"
								"<Code>16</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Alcohol Definite</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>87</GroupCodeId>"
								"<Code>17</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Drugs Possible</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>88</GroupCodeId>"
								"<Code>18</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Drugs Definite</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>9</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp</GroupDesc>"
								"<GroupCodeId>89</GroupCodeId>"
								"<Code>19</Code>"
								"<SubCode>85</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Other Substances</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"    
							"<ReferralMO>"
								"<GroupId>10</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp (FireArms)</GroupDesc>"
								"<GroupCodeId>92</GroupCodeId>"
								"<Code>04</Code>"
								"<SubCode>86</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Firearm(s) Threatened/Used</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>10</GroupId>"
								"<GroupDesc>Vulnerability Factors for Perp (FireArms)</GroupDesc>"
								"<GroupCodeId>92</GroupCodeId>"
								"<Code>04</Code>"
								"<SubCode>86</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Firearm(s) Threatened</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>116</GroupCodeId>"
								"<Code>48</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Fvsn Issued</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>126</GroupCodeId>"
								"<Code>49</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>AFM Applying For Fvio</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>119</GroupCodeId>"
								"<Code>53</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Police Applying Via A&amp;S</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>118</GroupCodeId>"
								"<Code>57</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Police Applying For Intrm I/O</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>117</GroupCodeId>"
								"<Code>61</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Police Applying Via A&amp;W</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>115</GroupCodeId>"
								"<Code>86</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Exclusion Conditions Used</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>12</GroupId>"
								"<GroupDesc>Risk Management Strategy (Civil Action)</GroupDesc>"
								"<GroupCodeId>127</GroupCodeId>"
								"<Code>90</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Fvio Variation Required</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>13</GroupId>"
								"<GroupDesc>Risk Management Strategy (Criminal Action)</GroupDesc>"
								"<GroupCodeId>122</GroupCodeId>"
								"<Code>77</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Charges Pending (Breach I/O)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>13</GroupId>"
								"<GroupDesc>Risk Management Strategy (Criminal Action)</GroupDesc>"
								"<GroupCodeId>123</GroupCodeId>"
								"<Code>81</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Charges Pending (Other)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>13</GroupId>"
								"<GroupDesc>Risk Management Strategy (Criminal Action)</GroupDesc>"
								"<GroupCodeId>121</GroupCodeId>"
								"<Code>85</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Charges Pending (Breach &amp; Oth)</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>13</GroupId>"
								"<GroupDesc>Risk Management Strategy (Criminal Action)</GroupDesc>"
								"<GroupCodeId>124</GroupCodeId>"
								"<Code>89</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Offender Bailed With Cond</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>13</GroupId>"
								"<GroupDesc>Risk Management Strategy (Criminal Action)</GroupDesc>"
								"<GroupCodeId>125</GroupCodeId>"
								"<Code>93</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Remanded In Custody</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>111</GroupCodeId>"
								"<Code>46</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Holding Pwrs (Direction) Used</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>112</GroupCodeId>"
								"<Code>47</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Holding Pwrs (Detention) Used</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>113</GroupCodeId>"
								"<Code>65</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Weapon/S &amp;/Or Firearms Seized</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>439</GroupCodeId>"
								"<Code>73</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Firearm(s) Licence Revoc Pend</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>114</GroupCodeId>"
								"<Code>94</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Firearms Only Seized</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>14</GroupId>"
								"<GroupDesc>Risk Management Strategy (Other Action)</GroupDesc>"
								"<GroupCodeId>128</GroupCodeId>"
								"<Code>95</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Weapons Only Seized</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>" 
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>103</GroupCodeId>"
								"<Code>91</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Recommended High Risk Client</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>104</GroupCodeId>"
								"<Code>29</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Wdvcs Immediate Assist (24/7)</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>105</GroupCodeId>"
								"<Code>25</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Formal Referral For AFM</CodeDesc>"
								"<SubIncidentId>1</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>106</GroupCodeId>"
								"<Code>37</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Formal Referral Perpetrator</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>107</GroupCodeId>"
								"<Code>21</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Informal Referral For AFM</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"   
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>108</GroupCodeId>"
								"<Code>33</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Informal Referral Perpetrator</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>436</GroupCodeId>"
								"<Code>41</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Notify Child Protection (Dhs)</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"    
							"<ReferralMO>"
								"<GroupId>15</GroupId>"
								"<GroupDesc>Risk Management Strategy (Referral Action)</GroupDesc>"
								"<GroupCodeId>438</GroupCodeId>"
								"<Code>92</Code>"
								"<SubCode>89</SubCode>"
								"<Mk2CodeDesc />"
								"<CodeDesc>Child First</CodeDesc>"
								"<SubIncidentId>0</SubIncidentId>"
							"</ReferralMO>"
						"</ReferralMOs>"
						"<FVPilotMOs />"
						"<ReportDetail>"
							"<ReportID>FSV-{param_AFMID}</ReportID>"
							"<IncidentID>Selva-{param_AFMID}</IncidentID>"
							"<ResponseZone>WGL</ResponseZone>"
							"<StartingPointCode>03</StartingPointCode>"    
							"<rep_member_rank>SCONST</rep_member_rank>"
							"<rep_member_lastname>Ladd</rep_member_lastname>"
							"<rep_member_firstname>David</rep_member_firstname>"
							"<rep_member_involve_cd>REP</rep_member_involve_cd>"
							"<rep_member_vpnumber>k900184</rep_member_vpnumber>"
							"<ReportTm>{param_Time1}</ReportTm>"
							"<ReportDt>{param_Date}T{param_Time}</ReportDt>"
							"<MemberStnCd>EWHDSK</MemberStnCd>"
							"<MemberStnDesc>EWHDSK</MemberStnDesc>"
							"<CommittedBetween>true</CommittedBetween>"
							"<CommitFromDt>{param_Date}T{param_Time}</CommitFromDt>"
							"<CommitFromTm>{param_Time1}</CommitFromTm>"
							"<CommitToDt>{param_Date}T{param_Time2}</CommitToDt>"
							"<CommitToTm>{param_Time4}</CommitToTm>"
							"<StreetNoType>No</StreetNoType>"
							"<StreetName>Railway</StreetName>"
							"<StreetType>TCE</StreetType>"
							"<Town>Geelong</Town>"
							"<State>VIC</State>"
							"<Postcode>3220</Postcode>"
							"<CaseNarrative>AFM and Respondent have been married for 12 years. The couple live together and have 2 children.  Approximately one week ago a verbal argument started between the pair regarding the Respondent being unhappy with what the AFM had or hadn't done that day. The verbal dispute escalated and resulted in the Respondent shoving the AFM in the chest with both hands.</CaseNarrative>"    
							"<AFMFamilyName>George</AFMFamilyName>"
							"<AFMFirstName>Mike</AFMFirstName>"
							"<AFMSecondName>K.K.</AFMSecondName>"
							"<AfmUid>989763806</AfmUid>"
							"<AFMDOB>20010207</AFMDOB>"
							"<AFMSex>F</AFMSex>"
							"<AFMAge>56</AFMAge>"
							"<AFMEthnicCode>CAU</AFMEthnicCode>"
							"<AFMIndigenousStatus>ABL</AFMIndigenousStatus>"
							"<AFMContactPreference>0</AFMContactPreference>"
							"<AFMSocialMediaDt1>0001-01-01T00:00:00</AFMSocialMediaDt1>"
							"<AFMSocialMediaDt2>0001-01-01T00:00:00</AFMSocialMediaDt2>"
							"<AFMSocialMediaDt3>0001-01-01T00:00:00</AFMSocialMediaDt3>"
							"<AFMPhonePreference>0</AFMPhonePreference>"
							"<AFMPhoneTypeCd1>M</AFMPhoneTypeCd1>"
							"<AFMPhoneNo1>0412345678</AFMPhoneNo1>"
							"<AFMPhoneTypeCd2>B</AFMPhoneTypeCd2>"
							"<AFMPhoneNo2>0487654321</AFMPhoneNo2>"
							"<AFMPhoneTypeCd3>O</AFMPhoneTypeCd3>"
							"<AFMPhoneNo3>0445612378</AFMPhoneNo3>"
							"<AfmContactAnyTmIn>true</AfmContactAnyTmIn>"
							"<AfmReferAttCd>2</AfmReferAttCd>"
							"<AfmATSIReferralPref>2</AfmATSIReferralPref>"
							"<AFMStreetNoType>AV</AFMStreetNoType>"
							"<AFMStreetNo>88</AFMStreetNo>"
							"<AFMStreetName>Rich Valley</AFMStreetName>"
							"<AFMStreetType>AVE</AFMStreetType>"
							"<AFMTown>Caulfield</AFMTown>"
							"<AFMState>VIC</AFMState>"
							"<AFMPostcode>3162</AFMPostcode>"
							"<AfmOtherAccomIn>false</AfmOtherAccomIn>"    
							"<ChildPresentNo>0</ChildPresentNo>"    
							"<PerpFamilyName>Mighty</PerpFamilyName>"
							"<PerpFirstName>Bruce</PerpFirstName>"
							"<PerpSecondName>Al</PerpSecondName>"
							"<PerpUid>1234555</PerpUid>"
							"<PerpDOB>20010207</PerpDOB>"
							"<PerpAge>25</PerpAge>"
							"<PerpEthnicCode>CAU</PerpEthnicCode>"
							"<PerpIndigenousStatus>NAT</PerpIndigenousStatus>"
							"<PerpSex>M</PerpSex>"
							"<PerpContactPreference>0</PerpContactPreference>"
							"<PerpPhonePreference>0</PerpPhonePreference>"
							"<PerpPhoneTypeCd1>M</PerpPhoneTypeCd1>"
							"<PerpPhoneNo1>0412345678</PerpPhoneNo1>"
							"<PerpPhoneTypeCd2>B</PerpPhoneTypeCd2>"
							"<PerpPhoneNo2>0487654321</PerpPhoneNo2>"
							"<PerpPhoneTypeCd3>O</PerpPhoneTypeCd3>"
							"<PerpPhoneNo3>0445612378</PerpPhoneNo3>"
							"<PerpContactAnyTmIn>true</PerpContactAnyTmIn>"
							"<PerpSocialMediaDt1>0001-01-01T00:00:00</PerpSocialMediaDt1>"
							"<PerpSocialMediaDt2>0001-01-01T00:00:00</PerpSocialMediaDt2>"
							"<PerpSocialMediaDt3>0001-01-01T00:00:00</PerpSocialMediaDt3>"
							"<PerpReferAttCd>2</PerpReferAttCd>"
							"<PerpATSIReferralPref>1</PerpATSIReferralPref>"
							"<PerpStreetNo>88</PerpStreetNo>"
							"<PerpStreetNoType>S</PerpStreetNoType>"
							"<PerpStreetName>Gangsta Hideout</PerpStreetName>"
							"<PerpStreetType>ST</PerpStreetType>"
							"<PerpTown>Caulfield</PerpTown>"
							"<PerpState>VIC</PerpState>"
							"<PerpPostcode>3162</PerpPostcode>"
							"<PerpOtherAccomIn>true</PerpOtherAccomIn>"
							"<PoliceSpokenToPerpIn>false</PoliceSpokenToPerpIn>"
							"<FutureRiskCode>01</FutureRiskCode>"
							"<Court>Geelong Magistrates Court</Court>"
							"<CourtDt>2016-12-17T00:00:00</CourtDt>"
							"<FIPerpResidesWthAfmIn>true</FIPerpResidesWthAfmIn>"
							"<AFMLevelOfFearCode>02</AFMLevelOfFearCode>"    
							"<AfmResideCd>04</AfmResideCd>"
							"<PerpResideCd>01</PerpResideCd>"    
							"<AfmPrevIncidentNo>4</AfmPrevIncidentNo>"
							"<MostSeriousIncCd>1</MostSeriousIncCd>"    
							"<ExistingIntOrdsCd>1</ExistingIntOrdsCd>"
							"<ReportTypeCode>FV</ReportTypeCode>"    
							"<ReferralAction></ReferralAction>"
						"</ReportDetail>"
					"</ChildReferral>"
"LAST");

	return 0;
}
# 5 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\data\\fsv\\dataseeding_pse\\\\combined_DataSeeding_PSE.c" 2

