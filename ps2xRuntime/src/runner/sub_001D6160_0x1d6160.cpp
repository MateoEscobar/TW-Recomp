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

// Function: sub_001D6160
// Address: 0x1d6160 - 0x1d61d8
void sub_001D6160_0x1d6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6160_0x1d6160");
#endif

    switch (ctx->pc) {
        case 0x1d6160u: goto label_1d6160;
        case 0x1d6164u: goto label_1d6164;
        case 0x1d6168u: goto label_1d6168;
        case 0x1d616cu: goto label_1d616c;
        case 0x1d6170u: goto label_1d6170;
        case 0x1d6174u: goto label_1d6174;
        case 0x1d6178u: goto label_1d6178;
        case 0x1d617cu: goto label_1d617c;
        case 0x1d6180u: goto label_1d6180;
        case 0x1d6184u: goto label_1d6184;
        case 0x1d6188u: goto label_1d6188;
        case 0x1d618cu: goto label_1d618c;
        case 0x1d6190u: goto label_1d6190;
        case 0x1d6194u: goto label_1d6194;
        case 0x1d6198u: goto label_1d6198;
        case 0x1d619cu: goto label_1d619c;
        case 0x1d61a0u: goto label_1d61a0;
        case 0x1d61a4u: goto label_1d61a4;
        case 0x1d61a8u: goto label_1d61a8;
        case 0x1d61acu: goto label_1d61ac;
        case 0x1d61b0u: goto label_1d61b0;
        case 0x1d61b4u: goto label_1d61b4;
        case 0x1d61b8u: goto label_1d61b8;
        case 0x1d61bcu: goto label_1d61bc;
        case 0x1d61c0u: goto label_1d61c0;
        case 0x1d61c4u: goto label_1d61c4;
        case 0x1d61c8u: goto label_1d61c8;
        case 0x1d61ccu: goto label_1d61cc;
        case 0x1d61d0u: goto label_1d61d0;
        case 0x1d61d4u: goto label_1d61d4;
        default: break;
    }

    ctx->pc = 0x1d6160u;

label_1d6160:
    // 0x1d6160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d6164:
    // 0x1d6164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d6168:
    // 0x1d6168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d616c:
    // 0x1d616c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d6170:
    // 0x1d6170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6174:
    // 0x1d6174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6178:
    // 0x1d6178: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d617c:
    // 0x1d617c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d6180:
    if (ctx->pc == 0x1D6180u) {
        ctx->pc = 0x1D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D617Cu;
        // 0x1d6180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6184u;
        goto label_1d6184;
    }
    ctx->pc = 0x1D617Cu;
    {
        const bool branch_taken_0x1d617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D617Cu;
        // 0x1d6180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d617c) {
            ctx->pc = 0x1D61BCu;
            goto label_1d61bc;
        }
    }
    ctx->pc = 0x1D6184u;
label_1d6184:
    // 0x1d6184: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1d6184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1d6188:
    // 0x1d6188: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d6188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d618c:
    // 0x1d618c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1d6190:
    if (ctx->pc == 0x1D6190u) {
        ctx->pc = 0x1D6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D618Cu;
        // 0x1d6190: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6194u;
        goto label_1d6194;
    }
    ctx->pc = 0x1D618Cu;
    {
        const bool branch_taken_0x1d618c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d618c) {
            ctx->pc = 0x1D6190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D618Cu;
            // 0x1d6190: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D61ACu;
            goto label_1d61ac;
        }
    }
    ctx->pc = 0x1D6194u;
label_1d6194:
    // 0x1d6194: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d6194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6198:
    // 0x1d6198: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d619c:
    // 0x1d619c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d61a0:
    // 0x1d61a0: 0x60f809  jalr        $v1
label_1d61a4:
    if (ctx->pc == 0x1D61A4u) {
        ctx->pc = 0x1D61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61A0u;
        // 0x1d61a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61A8u;
        goto label_1d61a8;
    }
    ctx->pc = 0x1D61A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D61A8u);
        ctx->pc = 0x1D61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61A0u;
        // 0x1d61a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61A0u, 0x1D61A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D61A8u;
label_1d61a8:
    // 0x1d61a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d61ac:
    // 0x1d61ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d61b0:
    // 0x1d61b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1d61b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d61b4:
    // 0x1d61b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d61b8:
    if (ctx->pc == 0x1D61B8u) {
        ctx->pc = 0x1D61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61B4u;
        // 0x1d61b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61BCu;
        goto label_1d61bc;
    }
    ctx->pc = 0x1D61B4u;
    {
        const bool branch_taken_0x1d61b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61B4u;
        // 0x1d61b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61b4) {
            ctx->pc = 0x1D6188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6188;
        }
    }
    ctx->pc = 0x1D61BCu;
label_1d61bc:
    // 0x1d61bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d61bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d61c0:
    // 0x1d61c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d61c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d61c4:
    // 0x1d61c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d61c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d61c8:
    // 0x1d61c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d61cc:
    // 0x1d61cc: 0x3e00008  jr          $ra
label_1d61d0:
    if (ctx->pc == 0x1D61D0u) {
        ctx->pc = 0x1D61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61CCu;
        // 0x1d61d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61D4u;
        goto label_1d61d4;
    }
    ctx->pc = 0x1D61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61CCu;
        // 0x1d61d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61D4u;
label_1d61d4:
    // 0x1d61d4: 0x0  nop
    ctx->pc = 0x1d61d4u;
    // NOP
    ctx->pc = 0x1d61d8u;
}
