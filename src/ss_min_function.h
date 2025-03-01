#ifndef __SS_MIN_FUNCTION_H_
#define __SS_MIN_FUNCTION_H_

							
SS_ref SS_UPDATE_function(				global_variable 	gv,
										SS_ref 				SS_ref_db, 
										struct bulk_info 	z_b,
										char    			*name			);		
								
								
csd_phase_set CP_UPDATE_function(		global_variable 	gv,
										SS_ref 				SS_ref_db,
										csd_phase_set  		cp, 
										struct bulk_info 	z_b				);		

global_variable split_cp(				int 				i, 
										global_variable 	gv,
										SS_ref 			    *SS_ref_db,
										csd_phase_set  		*cp				);

void ss_min_PGE(						int mode, int i,
										global_variable gv,
										struct bulk_info z_b,
										SS_ref *SS_ref_db,
										csd_phase_set  *cp					);

global_variable reset_global_variables(	global_variable gv,
										PP_ref *PP_ref_db,
										SS_ref *SS_ref_db,
										csd_phase_set *cp					);


global_variable init_ss_db(				int 				 EM_database,
										struct bulk_info 	 z_b,
										global_variable 	 gv,
										SS_ref 				*SS_ref_db			);

global_variable reset_phases(			global_variable gv,
										struct bulk_info z_b,
										PP_ref *PP_ref_db,
										SS_ref *SS_ref_db,
										csd_phase_set  *cp					);

void SS_ref_destroy(					global_variable gv, 
										SS_ref *SS_ref_db					);

void CP_destroy(						global_variable gv, 
										csd_phase_set *cp					);

#endif
