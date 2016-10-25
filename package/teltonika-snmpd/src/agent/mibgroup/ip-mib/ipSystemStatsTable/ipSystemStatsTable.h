/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $
 *
 * $Id: ipSystemStatsTable.h 14169 2006-01-25 16:28:12Z dts12 $
 */
#ifndef IPSYSTEMSTATSTABLE_H
#define IPSYSTEMSTATSTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>
#include <net-snmp/data_access/ipstats.h>
#include <net-snmp/data_access/systemstats.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(ip-mib/data_access/systemstats)
config_require(ip-mib/ipSystemStatsTable/ipSystemStatsTable_interface)
config_require(ip-mib/ipSystemStatsTable/ipSystemStatsTable_data_access)
    /* *INDENT-ON*  */

    /*
     * OID, column number and enum definions for ipSystemStatsTable 
     */
#include "ipSystemStatsTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_ipSystemStatsTable(void);
    void            shutdown_ipSystemStatsTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipSystemStatsTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-MIB::ipSystemStatsTable is subid 1 of ipTrafficStats.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.31.1, length: 9
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review ipSystemStatsTable registration context.
     */
    typedef netsnmp_data_list ipSystemStatsTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review ipSystemStatsTable data context structure.
     * This structure is used to represent the data for ipSystemStatsTable.
     */
    typedef netsnmp_systemstats_entry ipSystemStatsTable_data;


    /*
     * TODO:120:r: |-> Review ipSystemStatsTable mib index.
     * This structure is used to represent the index for ipSystemStatsTable.
     */
    typedef struct ipSystemStatsTable_mib_index_s {

        /*
         * ipSystemStatsIPVersion(1)/InetVersion/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        u_long          ipSystemStatsIPVersion;


    } ipSystemStatsTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review ipSystemStatsTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_ipSystemStatsTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review ipSystemStatsTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * ipSystemStatsTable_rowreq_ctx pointer.
     */
    typedef struct ipSystemStatsTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_ipSystemStatsTable_IDX_LEN];

        ipSystemStatsTable_mib_index tbl_idx;

        ipSystemStatsTable_data *data;

        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to ipSystemStatsTable rowreq context.
         */
        char            known_missing;
        uint32_t        ipSystemStatsDiscontinuityTime;
        uint32_t        ipSystemStatsRefreshRate;

        /*
         * storage for future expansion
         */
        netsnmp_data_list *ipSystemStatsTable_data_list;

    } ipSystemStatsTable_rowreq_ctx;

    typedef struct ipSystemStatsTable_ref_rowreq_ctx_s {
        ipSystemStatsTable_rowreq_ctx *rowreq_ctx;
    } ipSystemStatsTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_pre_request(ipSystemStatsTable_registration *
                                       user_context);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_post_request(ipSystemStatsTable_registration *
                                        user_context, int rc);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_rowreq_ctx_init(ipSystemStatsTable_rowreq_ctx *
                                           rowreq_ctx,
                                           void *user_init_ctx);
    void
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_rowreq_ctx_cleanup(ipSystemStatsTable_rowreq_ctx
                                              * rowreq_ctx);

    ipSystemStatsTable_data *ipSystemStatsTable_allocate_data(void);
    void            ipSystemStatsTable_release_data(ipSystemStatsTable_data
                                                    * data);


         
         
         
         
         
         
        ipSystemStatsTable_rowreq_ctx
        * ipSystemStatsTable_row_find_by_mib_index
        (ipSystemStatsTable_mib_index * mib_idx);

    extern oid      ipSystemStatsTable_oid[];
    extern int      ipSystemStatsTable_oid_size;


#include "ipSystemStatsTable_interface.h"
#include "ipSystemStatsTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipSystemStatsTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-MIB::ipSystemStatsTable is subid 1 of ipTrafficStats.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.31.1, length: 9
     */
    /*
     * indexes
     */

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInReceives_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsInReceives_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInReceives_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      ipSystemStatsHCInReceives_val_ptr);
    int             ipSystemStatsInOctets_get(ipSystemStatsTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              ipSystemStatsInOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInOctets_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * ipSystemStatsHCInOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInHdrErrors_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsInHdrErrors_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInNoRoutes_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsInNoRoutes_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInAddrErrors_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsInAddrErrors_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInUnknownProtos_get(ipSystemStatsTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long *
                                         ipSystemStatsInUnknownProtos_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInTruncatedPkts_get(ipSystemStatsTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long *
                                         ipSystemStatsInTruncatedPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInForwDatagrams_get(ipSystemStatsTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long *
                                         ipSystemStatsInForwDatagrams_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInForwDatagrams_get(ipSystemStatsTable_rowreq_ctx *
                                           rowreq_ctx,
                                           U64 *
                                           ipSystemStatsHCInForwDatagrams_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsReasmReqds_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsReasmReqds_val_ptr);
    int             ipSystemStatsReasmOKs_get(ipSystemStatsTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              ipSystemStatsReasmOKs_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsReasmFails_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsReasmFails_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInDiscards_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsInDiscards_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInDelivers_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsInDelivers_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInDelivers_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      ipSystemStatsHCInDelivers_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutRequests_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsOutRequests_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutRequests_get(ipSystemStatsTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       ipSystemStatsHCOutRequests_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutNoRoutes_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsOutNoRoutes_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutForwDatagrams_get(ipSystemStatsTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long *
                                          ipSystemStatsOutForwDatagrams_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutForwDatagrams_get(ipSystemStatsTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64 *
                                            ipSystemStatsHCOutForwDatagrams_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutDiscards_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsOutDiscards_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutFragReqds_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsOutFragReqds_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutFragOKs_get(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    ipSystemStatsOutFragOKs_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutFragFails_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsOutFragFails_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutFragCreates_get(ipSystemStatsTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long *
                                        ipSystemStatsOutFragCreates_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutTransmits_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsOutTransmits_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutTransmits_get(ipSystemStatsTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        ipSystemStatsHCOutTransmits_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutOctets_get(ipSystemStatsTable_rowreq_ctx *
                                   rowreq_ctx,
                                   u_long *
                                   ipSystemStatsOutOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutOctets_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     U64 *
                                     ipSystemStatsHCOutOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInMcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsInMcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInMcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       ipSystemStatsHCInMcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInMcastOctets_get(ipSystemStatsTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long *
                                       ipSystemStatsInMcastOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInMcastOctets_get(ipSystemStatsTable_rowreq_ctx *
                                         rowreq_ctx,
                                         U64 *
                                         ipSystemStatsHCInMcastOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutMcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsOutMcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutMcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        ipSystemStatsHCOutMcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutMcastOctets_get(ipSystemStatsTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long *
                                        ipSystemStatsOutMcastOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutMcastOctets_get(ipSystemStatsTable_rowreq_ctx *
                                          rowreq_ctx,
                                          U64 *
                                          ipSystemStatsHCOutMcastOctets_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsInBcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsInBcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCInBcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       ipSystemStatsHCInBcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsOutBcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      ipSystemStatsOutBcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsHCOutBcastPkts_get(ipSystemStatsTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        ipSystemStatsHCOutBcastPkts_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsDiscontinuityTime_get(ipSystemStatsTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           ipSystemStatsDiscontinuityTime_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsRefreshRate_get(ipSystemStatsTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     ipSystemStatsRefreshRate_val_ptr);


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_indexes_set_tbl_idx(ipSystemStatsTable_mib_index
                                               * tbl_idx,
                                               u_long
                                               ipSystemStatsIPVersion_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ipSystemStatsTable_indexes_set(ipSystemStatsTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long ipSystemStatsIPVersion_val);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */


    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* IPSYSTEMSTATSTABLE_H */
/**  @} */
