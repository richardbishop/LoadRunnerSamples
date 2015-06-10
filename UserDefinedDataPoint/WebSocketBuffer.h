#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "var myEnv = lsc;\n"
                        "var phase = null;\n"
                        "function setPhase(ph) {\n"
                        " phase = ph;\n"
                        "}\n"
                        "\n"
                        "var winPhase = {};\n"
                        "function setWin(tbl, ph) {\n"
                        " winPhase[tbl] = ph;\n"
                        "}\n"
                        "\n"
                        "var clsd = false;\n"
                        "function c(cod, ph, tbl, its, flds, key, com) {\n"
                        " LS_window.LS_w(cod, ph, tbl, its, flds, key, com);\n"
                        "}\n"
                        "\n"
                        "function error(cod, ph, tbl, msg) {\n"
                        " if (tbl != null) {\n"
                        "  LS_window.LS_l(cod, ph, tbl, msg);\n"
                        " } else {\n"
                        "  LS_window.LS_l(cod, phase, null, msg);\n"
                        " }\n"
                        "}\n"
                        "\n"
                        "function start(sID, addr, kaMs, reqLim, srv, ip) {\n"
                        " LS_window.LS_e(1, phase, sID, addr, kaMs, reqLim, srv, ip);\n"
                        "}\n"
                        "\n"
                        "function end(cause) {\n"
                        " LS_window.LS_e(4, phase, cause);\n"
                        "}\n"
                        "\n"
                        "function loop(holdMs) {\n"
                        " LS_window.LS_e(2, phase, holdMs);\n"
                        "}\n"
                        "\n"
                        "function retry() {\n"
                        " LS_window.LS_e(3, phase);\n"
                        "}\n"
                        "\n"
                        "function bw(maxBW) {\n"
                        " LS_window.LS_e(5, phase, maxBW);\n"
                        "}\n"
                        "\n"
                        "function y(secs) {\n"
                        " LS_window.LS_s(phase, secs);\n"
                        "}\n"
                        "\n"
                        "var unchangedSignal = {};\n"
                        "unchangedSignal.length = -1;\n"
                        "function convert(b, f) {\n"
                        "  var a, c, d = f, e = [];\n"
                        "  for(a = 0;a < b.length;a++) {\n"
                        "    if(a < f) {\n"
                        "      e[a] = b[a]\n"
                        "    } else {\n"
                        "      if(b[a].charAt) {\n"
                        "        b[a] == '$' ? e[d] = '' : b[a] == '#' ? e[d] = null : (c = b[a].charAt(0"
                        "), e[d] = c == '$' || c == '#' ? b[a].substring(1) : b[a]), d++\n"
                        "      } else {\n"
                        "        for(c = 0;c < b[a];c++) {\n"
                        "          e[d] = unchangedSignal, d++\n"
                        "        }\n"
                        "      }\n"
                        "    }\n"
                        "  }\n"
                        "  return e;\n"
                        "}\n"
                        "function d(tbl) {\n"
                        " try { LS_window.LS_u(winPhase[tbl], convert(d.arguments || arguments, 2)); } ca"
                        "tch(exc) {}\n"
                        "}\n"
                        "function z(tbl) {\n"
                        " LS_window.LS_v(winPhase[tbl], convert(z.arguments || arguments, 2));\n"
                        "}\n"
                        "function n(tbl) {\n"
                        " LS_window.LS_n(winPhase[tbl], n.arguments || arguments);\n"
                        "}\n"
                        "function s(tbl) {\n"
                        " LS_window.LS_s(winPhase[tbl], s.arguments || arguments);\n"
                        "}\n"
                        "function r(tbl) {\n"
                        " LS_window.LS_o(winPhase[tbl], r.arguments || arguments);\n"
                        "}\n"
                        "function p() {\n"
                        " LS_window.LS_u(phase, p.arguments || arguments);\n"
                        "}\n"
                        "myEnv.setPhase = setPhase;\n"
                        "myEnv.setWin = setWin;\n"
                        "myEnv.c = c;\n"
                        "myEnv.error = error;\n"
                        "myEnv.end = end;\n"
                        "myEnv.start = start;\n"
                        "myEnv.loop = loop;\n"
                        "myEnv.retry = retry;\n"
                        "myEnv.bw = bw;\n"
                        "myEnv.y = y;\n"
                        "myEnv.convert = convert;\n"
                        "myEnv.d = d;\n"
                        "myEnv.z = z;\n"
                        "myEnv.n = n;\n"
                        "myEnv.s = s;\n"
                        "myEnv.r = r;\n"
                        "myEnv.p = p;\n"
                        "myEnv.LS_window = LS_window;\n"
                        "\n"
                        "// END OF HEADER\n"
                        "\n"
                        "setPhase(403);\n"
                        "start('Sb5c9678337311d80T1245175', null, 5000, 50000);\n";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 2208 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "bw(0.0);\n";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 9 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "c(6,15,1,10,12,-1,-1);setWin(1,15);z(1,3,'Bagies Consulting','7.57','12:12:42','"
                        "5.28','32500','7.55','7.57','83500','5.79','8.6','7.19','7.25');z(1,4,'BAY Corpo"
                        "ration','3.73','12:12:29','2.75','48500','3.72','3.73','33500','3.17','4.17','3."
                        "63','3.62');z(1,5,'CON Consulting','7.39','12:12:42','-2.89','52500','7.39','7.4"
                        "','51500','6.22','9.13','7.61','7.65');z(1,6,'Corcor PLC','2.32','12:12:40','0.8"
                        "6','3000','2.32','2.33','83000','1.91','2.73','2.3','2.3');z(1,1,'Anduct','2.89'"
                        ",'12:12:12','-4.93','500','2.89','2.9','22500','2.51','3.61','3.04','3.1');z(1,7"
                        ",'CVS Asia','14.75','12:12:44','-4.15','84500','14.75','14.81','79500','12.3','1"
                        "8.43','15.39','15.85');z(1,8,'Datio PLC','4.6','12:12:40','-13.37','76000','4.6'"
                        ",'4.61','28500','4.31','6.38','5.31','5.31');z(1,9,'Dentems','5.27','12:12:40','"
                        "8.43','82000','5.26','5.27','78000','3.95','5.86','4.86','4.97');z(1,10,'ELE Man"
                        "ufacturing','7.42','12:12:44','-2.49','43000','7.42','7.45','23000','6.1','9.0',"
                        "'7.61','7.7');\n";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 975 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive3[] = "z(1,2,'Ations Europe','15.22','12:12:45','-5.4','88500','15.22','15.27','26000',"
                        "'12.77','19.44','16.09','16.2');\n";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	// (record-time: 113 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive4[] = "d(1,3,1,'7.53','12:12:46','4.72','5000','7.51','7.53','55500',4);\n";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	// (record-time: 66 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive5[] = "d(1,2,1,'15.33','12:12:46','-4.72','28500','15.33','15.35','40500',4);\n";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive6[] = "d(1,10,1,'7.47','12:12:46','-1.83','19000','7.47','7.49','50000',4);\n";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	// (record-time: 69 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive7[] = "d(1,7,1,'14.86','12:12:46','-3.44','77000','14.84','14.86','42000',4);\n";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive8[] = "d(1,2,1,'15.37',1,'-4.47','29500','15.37','15.41','86000',4);\n";
long WebSocketReceiveLen8   = sizeof(WebSocketReceive8) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive9[] = "d(1,9,1,'5.25','12:12:47','8.02','19000','5.24','5.25','47000',4);\n";
long WebSocketReceiveLen9   = sizeof(WebSocketReceive9) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive10[] = "d(1,2,1,'15.24','12:12:47','-5.28','89500','15.21','15.24','34500',4);\n";
long WebSocketReceiveLen10   = sizeof(WebSocketReceive10) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive11[] = "d(1,8,1,'4.64','12:12:47','-12.61','84500','4.64','4.66','57000',4);\n";
long WebSocketReceiveLen11   = sizeof(WebSocketReceive11) - 1;	// (record-time: 69 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive12[] = "d(1,2,1,'15.22','12:12:48','-5.4','63500','15.22','15.27','95500',4);\n";
long WebSocketReceiveLen12   = sizeof(WebSocketReceive12) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive13[] = "d(1,7,1,'14.76','12:12:48','-4.09','75500','14.76','14.77','83500',4);\n";
long WebSocketReceiveLen13   = sizeof(WebSocketReceive13) - 1;	// (record-time: 71 bytes)

#endif
