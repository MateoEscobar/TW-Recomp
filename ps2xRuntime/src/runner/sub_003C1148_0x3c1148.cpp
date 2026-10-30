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

// Function: sub_003C1148
// Address: 0x3c1148 - 0x3c1240
void sub_003C1148_0x3c1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1148_0x3c1148");
#endif

    switch (ctx->pc) {
        case 0x3c1148u: goto label_3c1148;
        case 0x3c114cu: goto label_3c114c;
        case 0x3c1150u: goto label_3c1150;
        case 0x3c1154u: goto label_3c1154;
        case 0x3c1158u: goto label_3c1158;
        case 0x3c115cu: goto label_3c115c;
        case 0x3c1160u: goto label_3c1160;
        case 0x3c1164u: goto label_3c1164;
        case 0x3c1168u: goto label_3c1168;
        case 0x3c116cu: goto label_3c116c;
        case 0x3c1170u: goto label_3c1170;
        case 0x3c1174u: goto label_3c1174;
        case 0x3c1178u: goto label_3c1178;
        case 0x3c117cu: goto label_3c117c;
        case 0x3c1180u: goto label_3c1180;
        case 0x3c1184u: goto label_3c1184;
        case 0x3c1188u: goto label_3c1188;
        case 0x3c118cu: goto label_3c118c;
        case 0x3c1190u: goto label_3c1190;
        case 0x3c1194u: goto label_3c1194;
        case 0x3c1198u: goto label_3c1198;
        case 0x3c119cu: goto label_3c119c;
        case 0x3c11a0u: goto label_3c11a0;
        case 0x3c11a4u: goto label_3c11a4;
        case 0x3c11a8u: goto label_3c11a8;
        case 0x3c11acu: goto label_3c11ac;
        case 0x3c11b0u: goto label_3c11b0;
        case 0x3c11b4u: goto label_3c11b4;
        case 0x3c11b8u: goto label_3c11b8;
        case 0x3c11bcu: goto label_3c11bc;
        case 0x3c11c0u: goto label_3c11c0;
        case 0x3c11c4u: goto label_3c11c4;
        case 0x3c11c8u: goto label_3c11c8;
        case 0x3c11ccu: goto label_3c11cc;
        case 0x3c11d0u: goto label_3c11d0;
        case 0x3c11d4u: goto label_3c11d4;
        case 0x3c11d8u: goto label_3c11d8;
        case 0x3c11dcu: goto label_3c11dc;
        case 0x3c11e0u: goto label_3c11e0;
        case 0x3c11e4u: goto label_3c11e4;
        case 0x3c11e8u: goto label_3c11e8;
        case 0x3c11ecu: goto label_3c11ec;
        case 0x3c11f0u: goto label_3c11f0;
        case 0x3c11f4u: goto label_3c11f4;
        case 0x3c11f8u: goto label_3c11f8;
        case 0x3c11fcu: goto label_3c11fc;
        case 0x3c1200u: goto label_3c1200;
        case 0x3c1204u: goto label_3c1204;
        case 0x3c1208u: goto label_3c1208;
        case 0x3c120cu: goto label_3c120c;
        case 0x3c1210u: goto label_3c1210;
        case 0x3c1214u: goto label_3c1214;
        case 0x3c1218u: goto label_3c1218;
        case 0x3c121cu: goto label_3c121c;
        case 0x3c1220u: goto label_3c1220;
        case 0x3c1224u: goto label_3c1224;
        case 0x3c1228u: goto label_3c1228;
        case 0x3c122cu: goto label_3c122c;
        case 0x3c1230u: goto label_3c1230;
        case 0x3c1234u: goto label_3c1234;
        case 0x3c1238u: goto label_3c1238;
        case 0x3c123cu: goto label_3c123c;
        default: break;
    }

    ctx->pc = 0x3c1148u;

label_3c1148:
    // 0x3c1148: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c114c:
    // 0x3c114c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3c1150:
    // 0x3c1150: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c1150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3c1154:
    // 0x3c1154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c1154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1158:
    // 0x3c1158: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3c115c:
    // 0x3c115c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c115cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1160:
    // 0x3c1160: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c1164:
    // 0x3c1164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c1164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1168:
    // 0x3c1168: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c1168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c116c:
    // 0x3c116c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c1170:
    // 0x3c1170: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c1170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1174:
    // 0x3c1174: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1178:
    // 0x3c1178: 0x40f809  jalr        $v0
label_3c117c:
    if (ctx->pc == 0x3C117Cu) {
        ctx->pc = 0x3C117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1178u;
        // 0x3c117c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1180u;
        goto label_3c1180;
    }
    ctx->pc = 0x3C1178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1180u);
        ctx->pc = 0x3C117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1178u;
        // 0x3c117c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1178u, 0x3C1180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1180u;
label_3c1180:
    // 0x3c1180: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c1180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1184:
    // 0x3c1184: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3c1184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c1188:
    // 0x3c1188: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
label_3c118c:
    if (ctx->pc == 0x3C118Cu) {
        ctx->pc = 0x3C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1188u;
        // 0x3c118c: 0x2e020009  sltiu       $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1190u;
        goto label_3c1190;
    }
    ctx->pc = 0x3C1188u;
    {
        const bool branch_taken_0x3c1188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1188u;
        // 0x3c118c: 0x2e020009  sltiu       $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1188) {
            ctx->pc = 0x3C1218u;
            goto label_3c1218;
        }
    }
    ctx->pc = 0x3C1190u;
label_3c1190:
    // 0x3c1190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c1194:
    if (ctx->pc == 0x3C1194u) {
        ctx->pc = 0x3C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1190u;
        // 0x3c1194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1198u;
        goto label_3c1198;
    }
    ctx->pc = 0x3C1190u;
    {
        const bool branch_taken_0x3c1190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1190u;
        // 0x3c1194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1190) {
            ctx->pc = 0x3C11A8u;
            goto label_3c11a8;
        }
    }
    ctx->pc = 0x3C1198u;
label_3c1198:
    // 0x3c1198: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3c119c:
    if (ctx->pc == 0x3C119Cu) {
        ctx->pc = 0x3C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1198u;
        // 0x3c119c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11A0u;
        goto label_3c11a0;
    }
    ctx->pc = 0x3C1198u;
    {
        const bool branch_taken_0x3c1198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1198u;
        // 0x3c119c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1198) {
            ctx->pc = 0x3C11BCu;
            goto label_3c11bc;
        }
    }
    ctx->pc = 0x3C11A0u;
label_3c11a0:
    // 0x3c11a0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3c11a4:
    if (ctx->pc == 0x3C11A4u) {
        ctx->pc = 0x3C11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A0u;
        // 0x3c11a4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11A8u;
        goto label_3c11a8;
    }
    ctx->pc = 0x3C11A0u;
    {
        const bool branch_taken_0x3c11a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A0u;
        // 0x3c11a4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11a0) {
            ctx->pc = 0x3C1228u;
            goto label_3c1228;
        }
    }
    ctx->pc = 0x3C11A8u;
label_3c11a8:
    // 0x3c11a8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c11ac:
    // 0x3c11ac: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
label_3c11b0:
    if (ctx->pc == 0x3C11B0u) {
        ctx->pc = 0x3C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11ACu;
        // 0x3c11b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11B4u;
        goto label_3c11b4;
    }
    ctx->pc = 0x3C11ACu;
    {
        const bool branch_taken_0x3c11ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11ACu;
        // 0x3c11b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11ac) {
            ctx->pc = 0x3C1204u;
            goto label_3c1204;
        }
    }
    ctx->pc = 0x3C11B4u;
label_3c11b4:
    // 0x3c11b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3c11b8:
    if (ctx->pc == 0x3C11B8u) {
        ctx->pc = 0x3C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11B4u;
        // 0x3c11b8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11BCu;
        goto label_3c11bc;
    }
    ctx->pc = 0x3C11B4u;
    {
        const bool branch_taken_0x3c11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11B4u;
        // 0x3c11b8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11b4) {
            ctx->pc = 0x3C1228u;
            goto label_3c1228;
        }
    }
    ctx->pc = 0x3C11BCu;
label_3c11bc:
    // 0x3c11bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c11c0:
    // 0x3c11c0: 0xc0ea12a  jal         func_3A84A8
label_3c11c4:
    if (ctx->pc == 0x3C11C4u) {
        ctx->pc = 0x3C11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11C0u;
        // 0x3c11c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11C8u;
        goto label_3c11c8;
    }
    ctx->pc = 0x3C11C0u;
    SET_GPR_U32(ctx, 31, 0x3C11C8u);
    ctx->pc = 0x3C11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11C0u;
    // 0x3c11c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C11C0u, 0x3C11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11C8u;
label_3c11c8:
    // 0x3c11c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c11c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c11cc:
    // 0x3c11cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c11ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c11d0:
    // 0x3c11d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c11d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11d4:
    // 0x3c11d4: 0xc0ea12a  jal         func_3A84A8
label_3c11d8:
    if (ctx->pc == 0x3C11D8u) {
        ctx->pc = 0x3C11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11D4u;
        // 0x3c11d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11DCu;
        goto label_3c11dc;
    }
    ctx->pc = 0x3C11D4u;
    SET_GPR_U32(ctx, 31, 0x3C11DCu);
    ctx->pc = 0x3C11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11D4u;
    // 0x3c11d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C11D4u, 0x3C11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11DCu;
label_3c11dc:
    // 0x3c11dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c11dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c11e0:
    // 0x3c11e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11e4:
    // 0x3c11e4: 0xc0ea146  jal         func_3A8518
label_3c11e8:
    if (ctx->pc == 0x3C11E8u) {
        ctx->pc = 0x3C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E4u;
        // 0x3c11e8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11ECu;
        goto label_3c11ec;
    }
    ctx->pc = 0x3C11E4u;
    SET_GPR_U32(ctx, 31, 0x3C11ECu);
    ctx->pc = 0x3C11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11E4u;
    // 0x3c11e8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C11E4u, 0x3C11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11ECu;
label_3c11ec:
    // 0x3c11ec: 0xc0ea146  jal         func_3A8518
label_3c11f0:
    if (ctx->pc == 0x3C11F0u) {
        ctx->pc = 0x3C11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11ECu;
        // 0x3c11f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11F4u;
        goto label_3c11f4;
    }
    ctx->pc = 0x3C11ECu;
    SET_GPR_U32(ctx, 31, 0x3C11F4u);
    ctx->pc = 0x3C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11ECu;
    // 0x3c11f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C11ECu, 0x3C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11F4u;
label_3c11f4:
    // 0x3c11f4: 0xc0ea14c  jal         func_3A8530
label_3c11f8:
    if (ctx->pc == 0x3C11F8u) {
        ctx->pc = 0x3C11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11F4u;
        // 0x3c11f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11FCu;
        goto label_3c11fc;
    }
    ctx->pc = 0x3C11F4u;
    SET_GPR_U32(ctx, 31, 0x3C11FCu);
    ctx->pc = 0x3C11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11F4u;
    // 0x3c11f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C11F4u, 0x3C11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11FCu;
label_3c11fc:
    // 0x3c11fc: 0xc0ea14c  jal         func_3A8530
label_3c1200:
    if (ctx->pc == 0x3C1200u) {
        ctx->pc = 0x3C1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11FCu;
        // 0x3c1200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1204u;
        goto label_3c1204;
    }
    ctx->pc = 0x3C11FCu;
    SET_GPR_U32(ctx, 31, 0x3C1204u);
    ctx->pc = 0x3C1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11FCu;
    // 0x3c1200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C11FCu, 0x3C1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1204u;
label_3c1204:
    // 0x3c1204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1208:
    // 0x3c1208: 0xc0f03bc  jal         func_3C0EF0
label_3c120c:
    if (ctx->pc == 0x3C120Cu) {
        ctx->pc = 0x3C120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1208u;
        // 0x3c120c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1210u;
        goto label_3c1210;
    }
    ctx->pc = 0x3C1208u;
    SET_GPR_U32(ctx, 31, 0x3C1210u);
    ctx->pc = 0x3C120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1208u;
    // 0x3c120c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0EF0u, 0x3C1208u, 0x3C1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1210u;
label_3c1210:
    // 0x3c1210: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c1214:
    if (ctx->pc == 0x3C1214u) {
        ctx->pc = 0x3C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1210u;
        // 0x3c1214: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1218u;
        goto label_3c1218;
    }
    ctx->pc = 0x3C1210u;
    {
        const bool branch_taken_0x3c1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1210u;
        // 0x3c1214: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1210) {
            ctx->pc = 0x3C1224u;
            goto label_3c1224;
        }
    }
    ctx->pc = 0x3C1218u;
label_3c1218:
    // 0x3c1218: 0xc0e8616  jal         func_3A1858
label_3c121c:
    if (ctx->pc == 0x3C121Cu) {
        ctx->pc = 0x3C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1218u;
        // 0x3c121c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1220u;
        goto label_3c1220;
    }
    ctx->pc = 0x3C1218u;
    SET_GPR_U32(ctx, 31, 0x3C1220u);
    ctx->pc = 0x3C121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1218u;
    // 0x3c121c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3C1218u, 0x3C1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1220u;
label_3c1220:
    // 0x3c1220: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c1220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c1224:
    // 0x3c1224: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c1224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1228:
    // 0x3c1228: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c1228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c122c:
    // 0x3c122c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c122cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1230:
    // 0x3c1230: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1234:
    // 0x3c1234: 0x3e00008  jr          $ra
label_3c1238:
    if (ctx->pc == 0x3C1238u) {
        ctx->pc = 0x3C1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1234u;
        // 0x3c1238: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C123Cu;
        goto label_3c123c;
    }
    ctx->pc = 0x3C1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1234u;
        // 0x3c1238: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C123Cu;
label_3c123c:
    // 0x3c123c: 0x0  nop
    ctx->pc = 0x3c123cu;
    // NOP
    ctx->pc = 0x3c1240u;
}
