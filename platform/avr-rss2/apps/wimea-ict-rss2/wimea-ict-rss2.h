void print_help_command_menu();
void display_reporting_interval();
void change_reporting_interval(char *value, char *number);
void show_report_interval(char* report_no);
void display_system_information();
void display_system_uptime();
void change_node_name(char * value);
void display_node_name();
//void read_sensor_values(void);
void read_sensor_values_report0(void);
void read_sensor_values_report1(void);
void read_sensor_values_report2(void);
void read_sensor_values_report3(void);
static void set_date(uint8_t day, uint8_t month, uint8_t year);
static void set_time(uint8_t hours, uint8_t minutes, uint8_t seconds);
char *return_time(void);
void set_datetime(char *value, uint8_t choice);
void display_tagmask(void);
void set_default_tagmask(void);
void set_default_report0mask(void);
void set_default_report1mask(void);
void set_default_report2mask(void);
void set_default_report3mask(void);
void change_tagmask(char * value);
void change_reportmask(char *value, char *reportNo);
char *trim(char * string);
char *return_date(void);
char *return_time(void);
void set_alias(uint8_t sensor, char *value);
char* return_alias(uint8_t sensor);
void change_alias(char * value);
//static int error_status;
void check_sensor_connection(char *reportNo);
void error_log(char *message);
void add2reportmask(char* parameter, char* reportNo);
void removefromreportmask(char* parameter,char* reportNo);
