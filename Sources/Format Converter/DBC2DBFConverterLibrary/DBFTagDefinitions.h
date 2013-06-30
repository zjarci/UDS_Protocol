/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      tag.h
 * \brief     Special file represents all the delimiters
 * \authors   Padmaja.A., Mahesh.B.S., Tobias Lorenz
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Special file represents all the delimiters.
 */

#pragma once

#define T_HEADER "//******************************BUSMASTER Messages and signals Database ******************************//"

#define T_STRAT_BRAC        "["
#define T_END_BRAC          "]"
#define T_DB_VER            T_STRAT_BRAC"DATABASE_VERSION"T_END_BRAC
#define T_VER_NO            "1.3"
#define T_PROTOCOL          T_STRAT_BRAC"PROTOCOL"T_END_BRAC
#define T_PROTOCOL_CAN      "CAN"
#define T_PRPTOCOL_J1939    "J1939"
#define T_NUM_OF_MSG    T_STRAT_BRAC"NUMBER_OF_MESSAGES"T_END_BRAC
#define T_START_MSG     T_STRAT_BRAC"START_MSG"T_END_BRAC
#define T_END_MSG       T_STRAT_BRAC"END_MSG"T_END_BRAC
#define T_SIG           T_STRAT_BRAC"START_SIGNALS"T_END_BRAC
#define T_VALUE_DESC    T_STRAT_BRAC"VALUE_DESCRIPTION"T_END_BRAC
#define T_ST_SIG_LIST   T_STRAT_BRAC"START_SIG_LIST"T_END_BRAC
#define T_END_SIG_LIST  T_STRAT_BRAC"END_SIG_LIST"T_END_BRAC
#define T_ST_VAL_TAB    T_STRAT_BRAC"START_VALUE_TABLE"T_END_BRAC
#define T_END_VAL_TAB   T_STRAT_BRAC"END_VALUE_TABLE"T_END_BRAC
#define T_ST_TAB        T_STRAT_BRAC"START_TABLE"T_END_BRAC
#define T_END_TAB       T_STRAT_BRAC"END_TABLE"T_END_BRAC
#define T_NODE          T_STRAT_BRAC"NODE"T_END_BRAC
#define T_ST_COMMENT    T_STRAT_BRAC"START_DESC"T_END_BRAC
#define T_END_COMMENT   T_STRAT_BRAC"END_DESC"T_END_BRAC
#define T_ST_CM_NET     T_STRAT_BRAC"START_DESC_NET"T_END_BRAC
#define T_END_CM_NET    T_STRAT_BRAC"END_DESC_NET"T_END_BRAC
#define T_ST_CM_NODE    T_STRAT_BRAC"START_DESC_NODE"T_END_BRAC
#define T_END_CM_NODE   T_STRAT_BRAC"END_DESC_NODE"T_END_BRAC
#define T_ST_CM_MSG     T_STRAT_BRAC"START_DESC_MSG"T_END_BRAC
#define T_END_CM_MSG    T_STRAT_BRAC"END_DESC_MSG"T_END_BRAC
#define T_ST_CM_SIG     T_STRAT_BRAC"START_DESC_SIG"T_END_BRAC
#define T_END_CM_SIG    T_STRAT_BRAC"END_DESC_SIG"T_END_BRAC
#define T_ST_NOT_SUP    T_STRAT_BRAC"START_NOT_SUPPORTED"T_END_BRAC
#define T_END_NOT_SUP   T_STRAT_BRAC"END_NOT_SUPPORTED"T_END_BRAC
#define T_ST_NOT_PRO    T_STRAT_BRAC"START_NOT_PROCESSED"T_END_BRAC
#define T_END_NOT_PRO   T_STRAT_BRAC"END_NOT_PROCESSED"T_END_BRAC

/****************************************************************/
#define START_PARAM_TAG      T_STRAT_BRAC"START_PARAM"T_END_BRAC
#define END_PARAM_TAG        T_STRAT_BRAC"END_PARAM"T_END_BRAC
#define START_NETPARAM_TAG   T_STRAT_BRAC"START_PARAM_NET"T_END_BRAC
#define END_NETPARAM_TAG     T_STRAT_BRAC"END_PARAM_NET"T_END_BRAC
#define START_NODEPARAM_TAG  T_STRAT_BRAC"START_PARAM_NODE"T_END_BRAC
#define END_NODEPARAM_TAG    T_STRAT_BRAC"END_PARAM_NODE"T_END_BRAC
#define START_MSGPARAM_TAG   T_STRAT_BRAC"START_PARAM_MSG"T_END_BRAC
#define END_MSGPARAM_TAG     T_STRAT_BRAC"END_PARAM_MSG"T_END_BRAC
#define START_SIGPARAM_TAG   T_STRAT_BRAC"START_PARAM_SIG"T_END_BRAC
#define END_SIGPARAM_TAG     T_STRAT_BRAC"END_PARAM_SIG"T_END_BRAC
#define START_RXPARAM_TAG    T_STRAT_BRAC"START_PARAM_NODE_RX_SIG"T_END_BRAC
#define END_RXPARAM_TAG      T_STRAT_BRAC"END_PARAM_NODE_RX_SIG"T_END_BRAC
#define START_TXPARAM_TAG    T_STRAT_BRAC"START_PARAM_NODE_TX_MSG"T_END_BRAC
#define END_TXPARAM_TAG      T_STRAT_BRAC"END_PARAM_NODE_TX_MSG"T_END_BRAC
#define START_PARAMVAL_TAG   T_STRAT_BRAC"START_PARAM_VAL"T_END_BRAC
#define END_PARAMVAL_TAG     T_STRAT_BRAC"END_PARAM_VAL"T_END_BRAC
#define START_NETVAL_TAG     T_STRAT_BRAC"START_PARAM_NET_VAL"T_END_BRAC
#define END_NETVAL_TAG       T_STRAT_BRAC"END_PARAM_NET_VAL"T_END_BRAC
#define START_NODEVAL_TAG    T_STRAT_BRAC"START_PARAM_NODE_VAL"T_END_BRAC
#define END_NODEVAL_TAG      T_STRAT_BRAC"END_PARAM_NODE_VAL"T_END_BRAC
#define START_MSGVAL_TAG     T_STRAT_BRAC"START_PARAM_MSG_VAL"T_END_BRAC
#define END_MSGVAL_TAG       T_STRAT_BRAC"END_PARAM_MSG_VAL"T_END_BRAC
#define START_SIGVAL_TAG     T_STRAT_BRAC"START_PARAM_SIG_VAL"T_END_BRAC
#define END_SIGVAL_TAG       T_STRAT_BRAC"END_PARAM_SIG_VAL"T_END_BRAC
#define START_RXVAL_TAG      T_STRAT_BRAC"START_PARAM_NODE_RX_SIG_VAL"T_END_BRAC
#define END_RXVAL_TAG        T_STRAT_BRAC"END_PARAM_NODE_RX_SIG_VAL"T_END_BRAC
#define START_TXVAL_TAG      T_STRAT_BRAC"START_PARAM_NODE_TX_MSG_VAL"T_END_BRAC
#define END_TXVAL_TAG        T_STRAT_BRAC"END_PARAM_NODE_TX_MSG_VAL"T_END_BRAC

#define SIGNAL_LONG_NAME    "SystemSignalLongSymbol"
#define MESSAGE_LONG_NAME   "SystemMessageLongSymbol"
//Converter.cpp
#define defCON_MAX_LINE_LEN 6000  //Maximum no of char in one line
#define defCON_TEMP_LEN 250

//ValueTable.cpp
#define defVTAB_MAX_LINE_LEN 10000
#define defVTAB_MAX_TEMP_LEN 1126
#define defVTAB_MAX_DESC_LEN 65  //Maximum length of a value descriptor
#define defVTAB_MAX_TNAM_LEN 65  //Maximum length of the table name
#define defVTAB_MAX_VALU_LEN 65  //Maximum length of value

enum eBUS_TYPE
{
    NONE,
    CAN,
    J1939,
    MCNET
};

typedef union _SIG_VALUE
{
    int iValue;
    unsigned int uiValue;
    float fValue;
    double dValue;
    char cValue[defCON_TEMP_LEN];
    long long i64Value;
    unsigned long long ui64Value;
} SIG_VALUE;



