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

// Function: sub_003A1120
// Address: 0x3a1120 - 0x3a1250
void sub_003A1120_0x3a1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1120_0x3a1120");
#endif

    switch (ctx->pc) {
        case 0x3a1120u: goto label_3a1120;
        case 0x3a1124u: goto label_3a1124;
        case 0x3a1128u: goto label_3a1128;
        case 0x3a112cu: goto label_3a112c;
        case 0x3a1130u: goto label_3a1130;
        case 0x3a1134u: goto label_3a1134;
        case 0x3a1138u: goto label_3a1138;
        case 0x3a113cu: goto label_3a113c;
        case 0x3a1140u: goto label_3a1140;
        case 0x3a1144u: goto label_3a1144;
        case 0x3a1148u: goto label_3a1148;
        case 0x3a114cu: goto label_3a114c;
        case 0x3a1150u: goto label_3a1150;
        case 0x3a1154u: goto label_3a1154;
        case 0x3a1158u: goto label_3a1158;
        case 0x3a115cu: goto label_3a115c;
        case 0x3a1160u: goto label_3a1160;
        case 0x3a1164u: goto label_3a1164;
        case 0x3a1168u: goto label_3a1168;
        case 0x3a116cu: goto label_3a116c;
        case 0x3a1170u: goto label_3a1170;
        case 0x3a1174u: goto label_3a1174;
        case 0x3a1178u: goto label_3a1178;
        case 0x3a117cu: goto label_3a117c;
        case 0x3a1180u: goto label_3a1180;
        case 0x3a1184u: goto label_3a1184;
        case 0x3a1188u: goto label_3a1188;
        case 0x3a118cu: goto label_3a118c;
        case 0x3a1190u: goto label_3a1190;
        case 0x3a1194u: goto label_3a1194;
        case 0x3a1198u: goto label_3a1198;
        case 0x3a119cu: goto label_3a119c;
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11a4u: goto label_3a11a4;
        case 0x3a11a8u: goto label_3a11a8;
        case 0x3a11acu: goto label_3a11ac;
        case 0x3a11b0u: goto label_3a11b0;
        case 0x3a11b4u: goto label_3a11b4;
        case 0x3a11b8u: goto label_3a11b8;
        case 0x3a11bcu: goto label_3a11bc;
        case 0x3a11c0u: goto label_3a11c0;
        case 0x3a11c4u: goto label_3a11c4;
        case 0x3a11c8u: goto label_3a11c8;
        case 0x3a11ccu: goto label_3a11cc;
        case 0x3a11d0u: goto label_3a11d0;
        case 0x3a11d4u: goto label_3a11d4;
        case 0x3a11d8u: goto label_3a11d8;
        case 0x3a11dcu: goto label_3a11dc;
        case 0x3a11e0u: goto label_3a11e0;
        case 0x3a11e4u: goto label_3a11e4;
        case 0x3a11e8u: goto label_3a11e8;
        case 0x3a11ecu: goto label_3a11ec;
        case 0x3a11f0u: goto label_3a11f0;
        case 0x3a11f4u: goto label_3a11f4;
        case 0x3a11f8u: goto label_3a11f8;
        case 0x3a11fcu: goto label_3a11fc;
        case 0x3a1200u: goto label_3a1200;
        case 0x3a1204u: goto label_3a1204;
        case 0x3a1208u: goto label_3a1208;
        case 0x3a120cu: goto label_3a120c;
        case 0x3a1210u: goto label_3a1210;
        case 0x3a1214u: goto label_3a1214;
        case 0x3a1218u: goto label_3a1218;
        case 0x3a121cu: goto label_3a121c;
        case 0x3a1220u: goto label_3a1220;
        case 0x3a1224u: goto label_3a1224;
        case 0x3a1228u: goto label_3a1228;
        case 0x3a122cu: goto label_3a122c;
        case 0x3a1230u: goto label_3a1230;
        case 0x3a1234u: goto label_3a1234;
        case 0x3a1238u: goto label_3a1238;
        case 0x3a123cu: goto label_3a123c;
        case 0x3a1240u: goto label_3a1240;
        case 0x3a1244u: goto label_3a1244;
        case 0x3a1248u: goto label_3a1248;
        case 0x3a124cu: goto label_3a124c;
        default: break;
    }

    ctx->pc = 0x3a1120u;

label_3a1120:
    // 0x3a1120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a1120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a1124:
    // 0x3a1124: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a1124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3a1128:
    // 0x3a1128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a112c:
    // 0x3a112c: 0x24425ad0  addiu       $v0, $v0, 0x5AD0
    ctx->pc = 0x3a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
label_3a1130:
    // 0x3a1130: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a1130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a1134:
    // 0x3a1134: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3a1134u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3a1138:
    // 0x3a1138: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a1138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a113c:
    // 0x3a113c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a113cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1140:
    // 0x3a1140: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a1140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a1144:
    // 0x3a1144: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3a1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a1148:
    // 0x3a1148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a114c:
    // 0x3a114c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a114cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a1150:
    // 0x3a1150: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a1150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3a1154:
    // 0x3a1154: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a1154u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3a1158:
    // 0x3a1158: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x3a1158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_3a115c:
    // 0x3a115c: 0x26101670  addiu       $s0, $s0, 0x1670
    ctx->pc = 0x3a115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5744));
label_3a1160:
    // 0x3a1160: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3a1160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3a1164:
    // 0x3a1164: 0x26311678  addiu       $s1, $s1, 0x1678
    ctx->pc = 0x3a1164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5752));
label_3a1168:
    // 0x3a1168: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x3a1168u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_3a116c:
    // 0x3a116c: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x3a116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_3a1170:
    // 0x3a1170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1174:
    // 0x3a1174: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a1174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a1178:
    // 0x3a1178: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x3a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3a117c:
    // 0x3a117c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3a117cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1180:
    // 0x3a1180: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x3a1180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3a1184:
    // 0x3a1184: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a1184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1188:
    // 0x3a1188: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a1188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a118c:
    // 0x3a118c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a1190:
    // 0x3a1190: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x3a1190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_3a1194:
    // 0x3a1194: 0x40f809  jalr        $v0
label_3a1198:
    if (ctx->pc == 0x3A1198u) {
        ctx->pc = 0x3A1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1194u;
        // 0x3a1198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A119Cu;
        goto label_3a119c;
    }
    ctx->pc = 0x3A1194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A119Cu);
        ctx->pc = 0x3A1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1194u;
        // 0x3a1198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1194u, 0x3A119Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A119Cu;
label_3a119c:
    // 0x3a119c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3a119cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3a11a0:
    // 0x3a11a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a11a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a11a4:
    // 0x3a11a4: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x3a11a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_3a11a8:
    // 0x3a11a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3a11a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a11ac:
    // 0x3a11ac: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x3a11acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3a11b0:
    // 0x3a11b0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3a11b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a11b4:
    // 0x3a11b4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a11b8:
    // 0x3a11b8: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x3a11b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3a11bc:
    // 0x3a11bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a11bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a11c0:
    // 0x3a11c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a11c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a11c4:
    // 0x3a11c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a11c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a11c8:
    // 0x3a11c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a11c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a11cc:
    // 0x3a11cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a11d0:
    // 0x3a11d0: 0x40f809  jalr        $v0
label_3a11d4:
    if (ctx->pc == 0x3A11D4u) {
        ctx->pc = 0x3A11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11D0u;
        // 0x3a11d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11D8u;
        goto label_3a11d8;
    }
    ctx->pc = 0x3A11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A11D8u);
        ctx->pc = 0x3A11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11D0u;
        // 0x3a11d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11D0u, 0x3A11D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A11D8u;
label_3a11d8:
    // 0x3a11d8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3a11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3a11dc:
    // 0x3a11dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a11dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a11e0:
    // 0x3a11e0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3a11e4:
    if (ctx->pc == 0x3A11E4u) {
        ctx->pc = 0x3A11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11E0u;
        // 0x3a11e4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11E8u;
        goto label_3a11e8;
    }
    ctx->pc = 0x3A11E0u;
    {
        const bool branch_taken_0x3a11e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11E0u;
        // 0x3a11e4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a11e0) {
            ctx->pc = 0x3A121Cu;
            goto label_3a121c;
        }
    }
    ctx->pc = 0x3A11E8u;
label_3a11e8:
    // 0x3a11e8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3a11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3a11ec:
    // 0x3a11ec: 0x0  nop
    ctx->pc = 0x3a11ecu;
    // NOP
label_3a11f0:
    // 0x3a11f0: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x3a11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_3a11f4:
    // 0x3a11f4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3a11f8:
    // 0x3a11f8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3a11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a11fc:
    // 0x3a11fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a11fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3a1200:
    // 0x3a1200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a1200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3a1204:
    // 0x3a1204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a1208:
    // 0x3a1208: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a1208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3a120c:
    // 0x3a120c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3a120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3a1210:
    // 0x3a1210: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3a1210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a1214:
    // 0x3a1214: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_3a1218:
    if (ctx->pc == 0x3A1218u) {
        ctx->pc = 0x3A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1214u;
        // 0x3a1218: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A121Cu;
        goto label_3a121c;
    }
    ctx->pc = 0x3A1214u;
    {
        const bool branch_taken_0x3a1214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1214) {
            ctx->pc = 0x3A1218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1214u;
            // 0x3a1218: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A11F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a11f0;
        }
    }
    ctx->pc = 0x3A121Cu;
label_3a121c:
    // 0x3a121c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3a121cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_3a1220:
    // 0x3a1220: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a1220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1224:
    // 0x3a1224: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x3a1224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
label_3a1228:
    // 0x3a1228: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3a1228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3a122c:
    // 0x3a122c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3a122cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3a1230:
    // 0x3a1230: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a1230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1234:
    // 0x3a1234: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a1234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1238:
    // 0x3a1238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a1238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a123c:
    // 0x3a123c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a123cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1240:
    // 0x3a1240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1244:
    // 0x3a1244: 0x3e00008  jr          $ra
label_3a1248:
    if (ctx->pc == 0x3A1248u) {
        ctx->pc = 0x3A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1244u;
        // 0x3a1248: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A124Cu;
        goto label_3a124c;
    }
    ctx->pc = 0x3A1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1244u;
        // 0x3a1248: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A124Cu;
label_3a124c:
    // 0x3a124c: 0x0  nop
    ctx->pc = 0x3a124cu;
    // NOP
    ctx->pc = 0x3a1250u;
}
