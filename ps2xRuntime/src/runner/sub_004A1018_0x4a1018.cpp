#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1018
// Address: 0x4a1018 - 0x4a1258
void sub_004A1018_0x4a1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1018_0x4a1018");
#endif

    switch (ctx->pc) {
        case 0x4a1018u: goto label_4a1018;
        case 0x4a101cu: goto label_4a101c;
        case 0x4a1020u: goto label_4a1020;
        case 0x4a1024u: goto label_4a1024;
        case 0x4a1028u: goto label_4a1028;
        case 0x4a102cu: goto label_4a102c;
        case 0x4a1030u: goto label_4a1030;
        case 0x4a1034u: goto label_4a1034;
        case 0x4a1038u: goto label_4a1038;
        case 0x4a103cu: goto label_4a103c;
        case 0x4a1040u: goto label_4a1040;
        case 0x4a1044u: goto label_4a1044;
        case 0x4a1048u: goto label_4a1048;
        case 0x4a104cu: goto label_4a104c;
        case 0x4a1050u: goto label_4a1050;
        case 0x4a1054u: goto label_4a1054;
        case 0x4a1058u: goto label_4a1058;
        case 0x4a105cu: goto label_4a105c;
        case 0x4a1060u: goto label_4a1060;
        case 0x4a1064u: goto label_4a1064;
        case 0x4a1068u: goto label_4a1068;
        case 0x4a106cu: goto label_4a106c;
        case 0x4a1070u: goto label_4a1070;
        case 0x4a1074u: goto label_4a1074;
        case 0x4a1078u: goto label_4a1078;
        case 0x4a107cu: goto label_4a107c;
        case 0x4a1080u: goto label_4a1080;
        case 0x4a1084u: goto label_4a1084;
        case 0x4a1088u: goto label_4a1088;
        case 0x4a108cu: goto label_4a108c;
        case 0x4a1090u: goto label_4a1090;
        case 0x4a1094u: goto label_4a1094;
        case 0x4a1098u: goto label_4a1098;
        case 0x4a109cu: goto label_4a109c;
        case 0x4a10a0u: goto label_4a10a0;
        case 0x4a10a4u: goto label_4a10a4;
        case 0x4a10a8u: goto label_4a10a8;
        case 0x4a10acu: goto label_4a10ac;
        case 0x4a10b0u: goto label_4a10b0;
        case 0x4a10b4u: goto label_4a10b4;
        case 0x4a10b8u: goto label_4a10b8;
        case 0x4a10bcu: goto label_4a10bc;
        case 0x4a10c0u: goto label_4a10c0;
        case 0x4a10c4u: goto label_4a10c4;
        case 0x4a10c8u: goto label_4a10c8;
        case 0x4a10ccu: goto label_4a10cc;
        case 0x4a10d0u: goto label_4a10d0;
        case 0x4a10d4u: goto label_4a10d4;
        case 0x4a10d8u: goto label_4a10d8;
        case 0x4a10dcu: goto label_4a10dc;
        case 0x4a10e0u: goto label_4a10e0;
        case 0x4a10e4u: goto label_4a10e4;
        case 0x4a10e8u: goto label_4a10e8;
        case 0x4a10ecu: goto label_4a10ec;
        case 0x4a10f0u: goto label_4a10f0;
        case 0x4a10f4u: goto label_4a10f4;
        case 0x4a10f8u: goto label_4a10f8;
        case 0x4a10fcu: goto label_4a10fc;
        case 0x4a1100u: goto label_4a1100;
        case 0x4a1104u: goto label_4a1104;
        case 0x4a1108u: goto label_4a1108;
        case 0x4a110cu: goto label_4a110c;
        case 0x4a1110u: goto label_4a1110;
        case 0x4a1114u: goto label_4a1114;
        case 0x4a1118u: goto label_4a1118;
        case 0x4a111cu: goto label_4a111c;
        case 0x4a1120u: goto label_4a1120;
        case 0x4a1124u: goto label_4a1124;
        case 0x4a1128u: goto label_4a1128;
        case 0x4a112cu: goto label_4a112c;
        case 0x4a1130u: goto label_4a1130;
        case 0x4a1134u: goto label_4a1134;
        case 0x4a1138u: goto label_4a1138;
        case 0x4a113cu: goto label_4a113c;
        case 0x4a1140u: goto label_4a1140;
        case 0x4a1144u: goto label_4a1144;
        case 0x4a1148u: goto label_4a1148;
        case 0x4a114cu: goto label_4a114c;
        case 0x4a1150u: goto label_4a1150;
        case 0x4a1154u: goto label_4a1154;
        case 0x4a1158u: goto label_4a1158;
        case 0x4a115cu: goto label_4a115c;
        case 0x4a1160u: goto label_4a1160;
        case 0x4a1164u: goto label_4a1164;
        case 0x4a1168u: goto label_4a1168;
        case 0x4a116cu: goto label_4a116c;
        case 0x4a1170u: goto label_4a1170;
        case 0x4a1174u: goto label_4a1174;
        case 0x4a1178u: goto label_4a1178;
        case 0x4a117cu: goto label_4a117c;
        case 0x4a1180u: goto label_4a1180;
        case 0x4a1184u: goto label_4a1184;
        case 0x4a1188u: goto label_4a1188;
        case 0x4a118cu: goto label_4a118c;
        case 0x4a1190u: goto label_4a1190;
        case 0x4a1194u: goto label_4a1194;
        case 0x4a1198u: goto label_4a1198;
        case 0x4a119cu: goto label_4a119c;
        case 0x4a11a0u: goto label_4a11a0;
        case 0x4a11a4u: goto label_4a11a4;
        case 0x4a11a8u: goto label_4a11a8;
        case 0x4a11acu: goto label_4a11ac;
        case 0x4a11b0u: goto label_4a11b0;
        case 0x4a11b4u: goto label_4a11b4;
        case 0x4a11b8u: goto label_4a11b8;
        case 0x4a11bcu: goto label_4a11bc;
        case 0x4a11c0u: goto label_4a11c0;
        case 0x4a11c4u: goto label_4a11c4;
        case 0x4a11c8u: goto label_4a11c8;
        case 0x4a11ccu: goto label_4a11cc;
        case 0x4a11d0u: goto label_4a11d0;
        case 0x4a11d4u: goto label_4a11d4;
        case 0x4a11d8u: goto label_4a11d8;
        case 0x4a11dcu: goto label_4a11dc;
        case 0x4a11e0u: goto label_4a11e0;
        case 0x4a11e4u: goto label_4a11e4;
        case 0x4a11e8u: goto label_4a11e8;
        case 0x4a11ecu: goto label_4a11ec;
        case 0x4a11f0u: goto label_4a11f0;
        case 0x4a11f4u: goto label_4a11f4;
        case 0x4a11f8u: goto label_4a11f8;
        case 0x4a11fcu: goto label_4a11fc;
        case 0x4a1200u: goto label_4a1200;
        case 0x4a1204u: goto label_4a1204;
        case 0x4a1208u: goto label_4a1208;
        case 0x4a120cu: goto label_4a120c;
        case 0x4a1210u: goto label_4a1210;
        case 0x4a1214u: goto label_4a1214;
        case 0x4a1218u: goto label_4a1218;
        case 0x4a121cu: goto label_4a121c;
        case 0x4a1220u: goto label_4a1220;
        case 0x4a1224u: goto label_4a1224;
        case 0x4a1228u: goto label_4a1228;
        case 0x4a122cu: goto label_4a122c;
        case 0x4a1230u: goto label_4a1230;
        case 0x4a1234u: goto label_4a1234;
        case 0x4a1238u: goto label_4a1238;
        case 0x4a123cu: goto label_4a123c;
        case 0x4a1240u: goto label_4a1240;
        case 0x4a1244u: goto label_4a1244;
        case 0x4a1248u: goto label_4a1248;
        case 0x4a124cu: goto label_4a124c;
        case 0x4a1250u: goto label_4a1250;
        case 0x4a1254u: goto label_4a1254;
        default: break;
    }

    ctx->pc = 0x4a1018u;

label_4a1018:
    // 0x4a1018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a101c:
    // 0x4a101c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a1020:
    // 0x4a1020: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a1020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4a1024:
    // 0x4a1024: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a1024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4a1028:
    // 0x4a1028: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a1028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a102c:
    // 0x4a102c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a1030:
    // 0x4a1030: 0x2512ffff  addiu       $s2, $t0, -0x1
    ctx->pc = 0x4a1030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a1034:
    // 0x4a1034: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a1034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4a1038:
    // 0x4a1038: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a1038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a103c:
    // 0x4a103c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4a1040:
    // 0x4a1040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a1040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1044:
    // 0x4a1044: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4a1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4a1048:
    // 0x4a1048: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a1048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a104c:
    // 0x4a104c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4a1050:
    // 0x4a1050: 0x2456f7a0  addiu       $s6, $v0, -0x860
    ctx->pc = 0x4a1050u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a1054:
    // 0x4a1054: 0x10000064  b           . + 4 + (0x64 << 2)
label_4a1058:
    if (ctx->pc == 0x4A1058u) {
        ctx->pc = 0x4A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1054u;
        // 0x4a1058: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A105Cu;
        goto label_4a105c;
    }
    ctx->pc = 0x4A1054u;
    {
        const bool branch_taken_0x4a1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1054u;
        // 0x4a1058: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1054) {
            ctx->pc = 0x4A11E8u;
            goto label_4a11e8;
        }
    }
    ctx->pc = 0x4A105Cu;
label_4a105c:
    // 0x4a105c: 0x0  nop
    ctx->pc = 0x4a105cu;
    // NOP
label_4a1060:
    // 0x4a1060: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a1060u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a1064:
    // 0x4a1064: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a1068:
    // 0x4a1068: 0x7ac90000  lq          $t1, 0x0($s6)
    ctx->pc = 0x4a1068u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_4a106c:
    // 0x4a106c: 0x2458f700  addiu       $t8, $v0, -0x900
    ctx->pc = 0x4a106cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a1070:
    // 0x4a1070: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4a1070u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4a1074:
    // 0x4a1074: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x4a1074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a1078:
    // 0x4a1078: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4a1078u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_4a107c:
    // 0x4a107c: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x4a107cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_4a1080:
    // 0x4a1080: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x4a1080u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_4a1084:
    // 0x4a1084: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x4a1084u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_4a1088:
    // 0x4a1088: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a1088u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_4a108c:
    // 0x4a108c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x4a108cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_4a1090:
    // 0x4a1090: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a1090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a1094:
    // 0x4a1094: 0x0  nop
    ctx->pc = 0x4a1094u;
    // NOP
label_4a1098:
    // 0x4a1098: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x4a1098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a109c:
    // 0x4a109c: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x4a109cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a10a0:
    // 0x4a10a0: 0x203380b  movn        $a3, $s0, $v1
    ctx->pc = 0x4a10a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_4a10a4:
    // 0x4a10a4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x4a10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4a10a8:
    // 0x4a10a8: 0xed1825  or          $v1, $a3, $t5
    ctx->pc = 0x4a10a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4a10ac:
    // 0x4a10ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a10acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a10b0:
    // 0x4a10b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a10b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a10b4:
    // 0x4a10b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a10b8:
    // 0x4a10b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a10b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a10bc:
    // 0x4a10bc: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a10bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a10c0:
    // 0x4a10c0: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a10c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_4a10c4:
    // 0x4a10c4: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x4a10c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4a10c8:
    // 0x4a10c8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4a10c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_4a10cc:
    // 0x4a10cc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a10ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a10d0:
    // 0x4a10d0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a10d4:
    // 0x4a10d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a10d8:
    // 0x4a10d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a10dc:
    // 0x4a10dc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a10e0:
    // 0x4a10e0: 0x71cc0  sll         $v1, $a3, 19
    ctx->pc = 0x4a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
label_4a10e4:
    // 0x4a10e4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a10e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a10e8:
    // 0x4a10e8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4a10e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4a10ec:
    // 0x4a10ec: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x4a10ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_4a10f0:
    // 0x4a10f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a10f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a10f4:
    // 0x4a10f4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x4a10f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_4a10f8:
    // 0x4a10f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a10f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a10fc:
    // 0x4a10fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a10fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a1100:
    // 0x4a1100: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a1100u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a1104:
    // 0x4a1104: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a1104u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a1108:
    // 0x4a1108: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a110c:
    // 0x4a110c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a110cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a1110:
    // 0x4a1110: 0x10ea002d  beq         $a3, $t2, . + 4 + (0x2D << 2)
label_4a1114:
    if (ctx->pc == 0x4A1114u) {
        ctx->pc = 0x4A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1110u;
        // 0x4a1114: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1118u;
        goto label_4a1118;
    }
    ctx->pc = 0x4A1110u;
    {
        const bool branch_taken_0x4a1110 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1110u;
        // 0x4a1114: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1110) {
            ctx->pc = 0x4A11C8u;
            goto label_4a11c8;
        }
    }
    ctx->pc = 0x4A1118u;
label_4a1118:
    // 0x4a1118: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a1118u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_4a111c:
    // 0x4a111c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a111cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a1120:
    // 0x4a1120: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4a1120u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a1124:
    // 0x4a1124: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x4a1124u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4a1128:
    // 0x4a1128: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4a1128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4a112c:
    // 0x4a112c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a112cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4a1130:
    // 0x4a1130: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4a1130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4a1134:
    // 0x4a1134: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x4a1134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4a1138:
    // 0x4a1138: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a113c:
    // 0x4a113c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a113cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a1140:
    // 0x4a1140: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1140u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1144:
    // 0x4a1144: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a1144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1148:
    // 0x4a1148: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a114c:
    // 0x4a114c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a114cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a1150:
    // 0x4a1150: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1154:
    // 0x4a1154: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a1154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1158:
    // 0x4a1158: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a115c:
    // 0x4a115c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a115cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a1160:
    // 0x4a1160: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a1160u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a1164:
    // 0x4a1164: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a1168:
    // 0x4a1168: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a116c:
    // 0x4a116c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a116cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a1170:
    // 0x4a1170: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a1170u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a1174:
    // 0x4a1174: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a1178:
    // 0x4a1178: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a117c:
    // 0x4a117c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a117cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a1180:
    // 0x4a1180: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a1180u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a1184:
    // 0x4a1184: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a1188:
    // 0x4a1188: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a118c:
    // 0x4a118c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a118cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a1190:
    // 0x4a1190: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a1190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a1194:
    // 0x4a1194: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a1198:
    // 0x4a1198: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a119c:
    // 0x4a119c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a119cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a11a0:
    // 0x4a11a0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a11a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a11a4:
    // 0x4a11a4: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a11a8:
    // 0x4a11a8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a11ac:
    // 0x4a11ac: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a11acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a11b0:
    // 0x4a11b0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a11b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a11b4:
    // 0x4a11b4: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4a11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a11b8:
    // 0x4a11b8: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a11bc:
    // 0x4a11bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a11bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a11c0:
    // 0x4a11c0: 0x14e8ffd7  bne         $a3, $t0, . + 4 + (-0x29 << 2)
label_4a11c4:
    if (ctx->pc == 0x4A11C4u) {
        ctx->pc = 0x4A11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11C0u;
        // 0x4a11c4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A11C8u;
        goto label_4a11c8;
    }
    ctx->pc = 0x4A11C0u;
    {
        const bool branch_taken_0x4a11c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x4A11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11C0u;
        // 0x4a11c4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11c0) {
            ctx->pc = 0x4A1120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1120;
        }
    }
    ctx->pc = 0x4A11C8u;
label_4a11c8:
    // 0x4a11c8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a11cc:
    // 0x4a11cc: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4a11ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_4a11d0:
    // 0x4a11d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a11d4:
    // 0x4a11d4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a11d8:
    // 0x4a11d8: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_4a11dc:
    if (ctx->pc == 0x4A11DCu) {
        ctx->pc = 0x4A11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11D8u;
        // 0x4a11dc: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A11E0u;
        goto label_4a11e0;
    }
    ctx->pc = 0x4A11D8u;
    {
        const bool branch_taken_0x4a11d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11D8u;
        // 0x4a11dc: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11d8) {
            ctx->pc = 0x4A1098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1098;
        }
    }
    ctx->pc = 0x4A11E0u;
label_4a11e0:
    // 0x4a11e0: 0xc127ec8  jal         func_49FB20
label_4a11e4:
    if (ctx->pc == 0x4A11E4u) {
        ctx->pc = 0x4A11E8u;
        goto label_4a11e8;
    }
    ctx->pc = 0x4A11E0u;
    SET_GPR_U32(ctx, 31, 0x4A11E8u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A11E0u, 0x4A11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A11E8u;
label_4a11e8:
    // 0x4a11e8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a11ec:
    if (ctx->pc == 0x4A11ECu) {
        ctx->pc = 0x4A11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11E8u;
        // 0x4a11ec: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A11F0u;
        goto label_4a11f0;
    }
    ctx->pc = 0x4A11E8u;
    {
        const bool branch_taken_0x4a11e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11E8u;
        // 0x4a11ec: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11e8) {
            ctx->pc = 0x4A1220u;
            goto label_4a1220;
        }
    }
    ctx->pc = 0x4A11F0u;
label_4a11f0:
    // 0x4a11f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a11f4:
    // 0x4a11f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a11f8:
    // 0x4a11f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a11fc:
    // 0x4a11fc: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4a11fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a1200:
    // 0x4a1200: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x4a1200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4a1204:
    // 0x4a1204: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x4a1204u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4a1208:
    // 0x4a1208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a1208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a120c:
    // 0x4a120c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a120cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1210:
    // 0x4a1210: 0x40f809  jalr        $v0
label_4a1214:
    if (ctx->pc == 0x4A1214u) {
        ctx->pc = 0x4A1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1210u;
        // 0x4a1214: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1218u;
        goto label_4a1218;
    }
    ctx->pc = 0x4A1210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1218u);
        ctx->pc = 0x4A1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1210u;
        // 0x4a1214: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1210u, 0x4A1218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1218u;
label_4a1218:
    // 0x4a1218: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a121c:
    if (ctx->pc == 0x4A121Cu) {
        ctx->pc = 0x4A1220u;
        goto label_4a1220;
    }
    ctx->pc = 0x4A1218u;
    {
        const bool branch_taken_0x4a1218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1218) {
            ctx->pc = 0x4A1224u;
            goto label_4a1224;
        }
    }
    ctx->pc = 0x4A1220u;
label_4a1220:
    // 0x4a1220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a1220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1224:
    // 0x4a1224: 0x1600ff8e  bnez        $s0, . + 4 + (-0x72 << 2)
label_4a1228:
    if (ctx->pc == 0x4A1228u) {
        ctx->pc = 0x4A1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1224u;
        // 0x4a1228: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A122Cu;
        goto label_4a122c;
    }
    ctx->pc = 0x4A1224u;
    {
        const bool branch_taken_0x4a1224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1224u;
        // 0x4a1228: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1224) {
            ctx->pc = 0x4A1060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1060;
        }
    }
    ctx->pc = 0x4A122Cu;
label_4a122c:
    // 0x4a122c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a122cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a1230:
    // 0x4a1230: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a1230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a1234:
    // 0x4a1234: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a1234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a1238:
    // 0x4a1238: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a1238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a123c:
    // 0x4a123c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a123cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a1240:
    // 0x4a1240: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a1240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1244:
    // 0x4a1244: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4a1244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1248:
    // 0x4a1248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a124c:
    // 0x4a124c: 0x3e00008  jr          $ra
label_4a1250:
    if (ctx->pc == 0x4A1250u) {
        ctx->pc = 0x4A1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A124Cu;
        // 0x4a1250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1254u;
        goto label_4a1254;
    }
    ctx->pc = 0x4A124Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A124Cu;
        // 0x4a1250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A124Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1254u;
label_4a1254:
    // 0x4a1254: 0x0  nop
    ctx->pc = 0x4a1254u;
    // NOP
    ctx->pc = 0x4a1258u;
}
