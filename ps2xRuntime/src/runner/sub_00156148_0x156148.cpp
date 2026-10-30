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

// Function: sub_00156148
// Address: 0x156148 - 0x1561f8
void sub_00156148_0x156148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156148_0x156148");
#endif

    switch (ctx->pc) {
        case 0x156198u: goto label_156198;
        case 0x15619cu: goto label_15619c;
        case 0x1561c4u: goto label_1561c4;
        default: break;
    }

    ctx->pc = 0x156148u;

    // 0x156148: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15614c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x156150: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x156150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x156154: 0x8c62c6c0  lw          $v0, -0x3940($v1)
    ctx->pc = 0x156154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C6C0u));
    // 0x156158: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x156158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15615c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x156160: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x156160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x156164: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x156164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156168: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x156168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x15616c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x15616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x156170: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x156170u;
    {
        const bool branch_taken_0x156170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156170u;
        // 0x156174: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156170) {
            ctx->pc = 0x1561D0u;
            goto label_1561d0;
        }
    }
    ctx->pc = 0x156178u;
    // 0x156178: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x156178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15617c: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x156180: 0x2450d85c  addiu       $s0, $v0, -0x27A4
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957148));
    // 0x156184: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156188: 0x26130280  addiu       $s3, $s0, 0x280
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x15618c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15618Cu;
    {
        const bool branch_taken_0x15618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15618Cu;
        // 0x156190: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15618c) {
            ctx->pc = 0x1561A0u;
            goto label_1561a0;
        }
    }
    ctx->pc = 0x156194u;
    // 0x156194: 0x0  nop
    ctx->pc = 0x156194u;
    // NOP
label_156198:
    // 0x156198: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_15619c:
    // 0x15619c: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1561a0:
    // 0x1561a0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1561a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1561a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1561A4u;
    {
        const bool branch_taken_0x1561a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561A4u;
        // 0x1561a8: 0x8e42c6c0  lw          $v0, -0x3940($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561a4) {
            ctx->pc = 0x1561D4u;
            goto label_1561d4;
        }
    }
    ctx->pc = 0x1561ACu;
    // 0x1561ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1561acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1561b0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1561B0u;
    {
        const bool branch_taken_0x1561b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561B0u;
        // 0x1561b4: 0x26a3d810  addiu       $v1, $s5, -0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561b0) {
            ctx->pc = 0x156198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156198;
        }
    }
    ctx->pc = 0x1561B8u;
    // 0x1561b8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1561b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1561bc: 0xc0512e2  jal         func_144B88
    ctx->pc = 0x1561BCu;
    SET_GPR_U32(ctx, 31, 0x1561C4u);
    ctx->pc = 0x1561C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561BCu;
    // 0x1561c0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x1561BCu, 0x1561C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561C4u;
label_1561c4:
    // 0x1561c4: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1561C4u;
    {
        const bool branch_taken_0x1561c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561C4u;
        // 0x1561c8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561c4) {
            ctx->pc = 0x15619Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15619c;
        }
    }
    ctx->pc = 0x1561CCu;
    // 0x1561cc: 0xae54c6c0  sw          $s4, -0x3940($s2)
    ctx->pc = 0x1561ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952640), GPR_U32(ctx, 20));
label_1561d0:
    // 0x1561d0: 0x8e42c6c0  lw          $v0, -0x3940($s2)
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952640)));
label_1561d4:
    // 0x1561d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1561d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1561d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1561d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1561dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1561dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1561e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1561e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1561e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1561e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1561e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1561e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1561ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1561ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1561F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561F0u;
        // 0x1561f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561F8u;
}
