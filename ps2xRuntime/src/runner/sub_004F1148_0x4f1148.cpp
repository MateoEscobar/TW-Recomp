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

// Function: sub_004F1148
// Address: 0x4f1148 - 0x4f11c8
void sub_004F1148_0x4f1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1148_0x4f1148");
#endif

    switch (ctx->pc) {
        case 0x4f1148u: goto label_4f1148;
        case 0x4f114cu: goto label_4f114c;
        case 0x4f1150u: goto label_4f1150;
        case 0x4f1154u: goto label_4f1154;
        case 0x4f1158u: goto label_4f1158;
        case 0x4f115cu: goto label_4f115c;
        case 0x4f1160u: goto label_4f1160;
        case 0x4f1164u: goto label_4f1164;
        case 0x4f1168u: goto label_4f1168;
        case 0x4f116cu: goto label_4f116c;
        case 0x4f1170u: goto label_4f1170;
        case 0x4f1174u: goto label_4f1174;
        case 0x4f1178u: goto label_4f1178;
        case 0x4f117cu: goto label_4f117c;
        case 0x4f1180u: goto label_4f1180;
        case 0x4f1184u: goto label_4f1184;
        case 0x4f1188u: goto label_4f1188;
        case 0x4f118cu: goto label_4f118c;
        case 0x4f1190u: goto label_4f1190;
        case 0x4f1194u: goto label_4f1194;
        case 0x4f1198u: goto label_4f1198;
        case 0x4f119cu: goto label_4f119c;
        case 0x4f11a0u: goto label_4f11a0;
        case 0x4f11a4u: goto label_4f11a4;
        case 0x4f11a8u: goto label_4f11a8;
        case 0x4f11acu: goto label_4f11ac;
        case 0x4f11b0u: goto label_4f11b0;
        case 0x4f11b4u: goto label_4f11b4;
        case 0x4f11b8u: goto label_4f11b8;
        case 0x4f11bcu: goto label_4f11bc;
        case 0x4f11c0u: goto label_4f11c0;
        case 0x4f11c4u: goto label_4f11c4;
        default: break;
    }

    ctx->pc = 0x4f1148u;

label_4f1148:
    // 0x4f1148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f114c:
    // 0x4f114c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f1150:
    // 0x4f1150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f1150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f1154:
    // 0x4f1154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f1154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1158:
    // 0x4f1158: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f115c:
    // 0x4f115c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f115cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f1160:
    // 0x4f1160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f1164:
    // 0x4f1164: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f1168:
    if (ctx->pc == 0x4F1168u) {
        ctx->pc = 0x4F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1164u;
        // 0x4f1168: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F116Cu;
        goto label_4f116c;
    }
    ctx->pc = 0x4F1164u;
    {
        const bool branch_taken_0x4f1164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1164u;
        // 0x4f1168: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1164) {
            ctx->pc = 0x4F11ACu;
            goto label_4f11ac;
        }
    }
    ctx->pc = 0x4F116Cu;
label_4f116c:
    // 0x4f116c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x4f116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4f1170:
    // 0x4f1170: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f1170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f1174:
    // 0x4f1174: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x4f1174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_4f1178:
    // 0x4f1178: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4f1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4f117c:
    // 0x4f117c: 0x60f809  jalr        $v1
label_4f1180:
    if (ctx->pc == 0x4F1180u) {
        ctx->pc = 0x4F1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F117Cu;
        // 0x4f1180: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1184u;
        goto label_4f1184;
    }
    ctx->pc = 0x4F117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1184u);
        ctx->pc = 0x4F1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F117Cu;
        // 0x4f1180: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F117Cu, 0x4F1184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1184u;
label_4f1184:
    // 0x4f1184: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f1184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f1188:
    // 0x4f1188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f1188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f118c:
    // 0x4f118c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f118cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f1190:
    // 0x4f1190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f1190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f1194:
    // 0x4f1194: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f1194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f1198:
    // 0x4f1198: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f119c:
    // 0x4f119c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f119cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f11a0:
    // 0x4f11a0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f11a4:
    // 0x4f11a4: 0x60f809  jalr        $v1
label_4f11a8:
    if (ctx->pc == 0x4F11A8u) {
        ctx->pc = 0x4F11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11A4u;
        // 0x4f11a8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F11ACu;
        goto label_4f11ac;
    }
    ctx->pc = 0x4F11A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F11ACu);
        ctx->pc = 0x4F11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11A4u;
        // 0x4f11a8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F11A4u, 0x4F11ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F11ACu;
label_4f11ac:
    // 0x4f11ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f11acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f11b0:
    // 0x4f11b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f11b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f11b4:
    // 0x4f11b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f11b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f11b8:
    // 0x4f11b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f11b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f11bc:
    // 0x4f11bc: 0x3e00008  jr          $ra
label_4f11c0:
    if (ctx->pc == 0x4F11C0u) {
        ctx->pc = 0x4F11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11BCu;
        // 0x4f11c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F11C4u;
        goto label_4f11c4;
    }
    ctx->pc = 0x4F11BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11BCu;
        // 0x4f11c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F11BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F11C4u;
label_4f11c4:
    // 0x4f11c4: 0x0  nop
    ctx->pc = 0x4f11c4u;
    // NOP
    ctx->pc = 0x4f11c8u;
}
