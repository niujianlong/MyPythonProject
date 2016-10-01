
#define    NVM_TOTAL_SIZE                     (2048)

#define  NVM_ACTUAL_SIZE                 


#define    NVM_DEFAULT_VALUES   \
                     {0xFF, 0xFF, 0x10, 0x08, 0x16, 0x01,0x00, 0x00},      /**/   \  
                     {0x34, 0x12, 0x78, 0x56},          /**/  \

#define          NVM_ID_LIST           \
                      NVM_PROD_VERSION_INFO1,    \
                      NVM_PROD_VERSION_INFO2,   \
                      
                      
                      
#define  NVM_CONFIG_INFO_TABLE_LIST      \
                       {0, 0,  8, 1},       \
                       {8, 8,  4, 1},       \
                       {12, 12,  4, 2},       \
                       {16, 16,  5, 2},       \
                       {21, 21,  12, 3},       \
                 
                 
#define        ConstNvmMapSection_START_OFFSET       
#define        ConstNvmMapSection_TOTAL_SIZE        
#define        ConstNvmMapSection_ACTUAL_SIZE           