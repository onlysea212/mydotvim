Vim�UnDo� ��~mo�Ӵ�d'����I��?6����e@   #   	            J       J   J   J    \)��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             [�*     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [�*&     �                  #ifndef_HANDLE_REQUEST_H_5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [�*(     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [�*1     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v���    [�*;     �                 #define �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v���    [�*<     �                �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v���    [�*A     �                �             5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                v���    [�*�     �      	       �             5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                v���    [�*�     �      
       5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                v���    [�*�    �                �             5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                v���    [�*�    �               void update_file_list();5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                v���    [�,�     �   
             �   
          5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v���    [�,�    �   
              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [�m�     �                �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [�m�    �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��     �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��     �                 5�_�                       ?    ����                                                                                                                                                                                                                                                                                                                                                             [��    �               ?void handle_socket_error(struct net_info cli_info, char *mess){5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             [��_     �               	�             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��h     �   
            	uint16_t port;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [���     �               	uint16_t data_port;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [���     �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [���     �               	�             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��*     �               }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��:     �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��{     �      	          �      	       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [���     �               +/* info for every peer that own the data */5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [���    �               	uint16_t port;5�_�                             ����                                                                                                                                                                                                                                                                                                                                                  V        [��s    �                */* info for each peer that own the data */   struct DataHost{   	uint32_t ip_addr;   ?	uint16_t port;			//equal to data_port from the struct net_info   };5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �             �             5�_�       "           !      &    ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �               &void removeHost(struct DataHost host){5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �               ?void handle_socket_error(struct net_info cli_info, char *mess);5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                  V        [��    �                �             5�_�   #   %           $           ����                                                                                                                                                                                                                                                                                                                                                             \#L   	 �               struct LinkedList *file_list;5�_�   $   &           %           ����                                                                                                                                                                                                                                                                                                                                                             \#!�     �      	       �             5�_�   %   '           &           ����                                                                                                                                                                                                                                                                                                                                                             \#!�     �                �             5�_�   &   (           '          ����                                                                                                                                                                                                                                                                                                                                                             \#!�     �             5�_�   '   )           (   
        ����                                                                                                                                                                                                                                                                                                                                                             \#!�     �   	            ;pthread_mutex_t lock_file_list = PTHREAD_MUTEX_INITIALIZER;5�_�   (   *           )   
   A    ����                                                                                                                                                                                                                                                                                                                                                             \#!�    �   	            Bextern pthread_mutex_t lock_file_list = PTHREAD_MUTEX_INITIALIZER;5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                  V        \#\Q     �                0void update_file_list(struct net_info cli_info);   =void handleSocketError(struct net_info cli_info, char *mess);   &void removeHost(struct DataHost host);    5�_�   *   ,           +           ����                                                                                                                                                                                                                                                                                                                                                  V        \#\S    �                 5�_�   +   -           ,           ����                                                                                                                                                                                                                                                                                                                                                             \#_�     �             �             5�_�   ,   .           -           ����                                                                                                                                                                                                                                                                                                                                                             \#_�    �             5�_�   -   /           .           ����                                                                                                                                                                                                                                                                                                                                                             \$,�    �             �             5�_�   .   0           /           ����                                                                                                                                                                                                                                                                                                                                                             \$4�    �             �             5�_�   /   1           0   
        ����                                                                                                                                                                                                                                                                                                                                                             \$��    �   
             �   
          5�_�   0   2           1           ����                                                                                                                                                                                                                                                                                                                                                             \$�^    �   
             #extern pthread_mutex_t lock_socket;5�_�   1   3           2           ����                                                                                                                                                                                                                                                                                                                                                             \%��     �                �             5�_�   2   4           3           ����                                                                                                                                                                                                                                                                                                                                                             \%�+    �               "void process_list_files_request();5�_�   3   5           4           ����                                                                                                                                                                                                                                                                                                                                                             \%��    �                �             5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                             \&�]     �               :void process_list_hosts_request(struct net_info cli_info);5�_�   5   7           6      9    ����                                                                                                                                                                                                                                                                                                                                                             \&�d    �               ;void* process_list_hosts_request(struct net_info cli_info);5�_�   6   8           7          ����                                                                                                                                                                                                                                                                                                                                                             \&��     �                �             5�_�   7   9           8           ����                                                                                                                                                                                                                                                                                                                                                             \&��     �             5�_�   8   :           9           ����                                                                                                                                                                                                                                                                                                                                                             \&��     �                5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                             \&��     �               }5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             \&�V     �               	5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             \&�t    �         !      	�              5�_�   <   >           =          ����                                                                                                                                                                                                                                                                                                                                                             \&��     �         !      	uint16_t port;5�_�   =   ?           >          ����                                                                                                                                                                                                                                                                                                                                                V       \&��     �                	uint32_t ip_addr;   	uint16_t port5�_�   >   @           ?          ����                                                                                                                                                                                                                                                                                                                                                V       \&��    �                	�             5�_�   ?   A           @          ����                                                                                                                                                                                                                                                                                                                                                V       \&��     �         !      	�              5�_�   @   B           A          ����                                                                                                                                                                                                                                                                                                                                                V       \&��    �         !      	pthread_mutex_t lock_sockfd;5�_�   A   C           B          ����                                                                                                                                                                                                                                                                                                                                                V       \'*�    �         "      	�         !    5�_�   B   D           C          ����                                                                                                                                                                                                                                                                                                                                                V       \'+_    �                	char filename[256];5�_�   C   E           D          ����                                                                                                                                                                                                                                                                                                                                                V       \'+~    �                	pthread_mutex_t lock_filename;5�_�   D   F           E           ����                                                                                                                                                                                                                                                                                                                                                V       \'6�     �                	struct FileOwner *file;5�_�   E   G           F           ����                                                                                                                                                                                                                                                                                                                                                V       \'6�    �                	�             5�_�   F   H           G   
        ����                                                                                                                                                                                                                                                                                                                                                V       \'9^    �   	   
          &extern pthread_mutex_t lock_file_list;5�_�   G   I           H           ����                                                                                                                                                                                                                                                                                                                                                V       \'F'    �                	�             5�_�   H   J           I   	        ����                                                                                                                                                                                                                                                                                                                                                             \'}K    �   	      !       �   	           5�_�   I               J          ����                                                                                                                                                                                                                                                                                                                                                             \)��    �         #      	�         "    5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             [���     �   	            	;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��     �             �               @vvoid handle_socket_error(struct net_info cli_info, char *mess){   /oid update_file_list(struct net_info cli_info);5��