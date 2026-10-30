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

// Function: sub_001549B0
// Address: 0x1549b0 - 0x1549f8
void sub_001549B0_0x1549b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001549B0_0x1549b0");
#endif

    switch (ctx->pc) {
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        default: break;
    }

    ctx->pc = 0x1549b0u;

label_1549b0:
    // 0x1549b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1549b4:
    // 0x1549b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1549b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1549b8:
    // 0x1549b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1549b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1549bc:
    // 0x1549bc: 0xc05526a  jal         func_1549A8
label_1549c0:
    if (ctx->pc == 0x1549C0u) {
        ctx->pc = 0x1549C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549BCu;
        // 0x1549c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549C4u;
        goto label_1549c4;
    }
    ctx->pc = 0x1549BCu;
    SET_GPR_U32(ctx, 31, 0x1549C4u);
    ctx->pc = 0x1549C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549BCu;
    // 0x1549c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549A8u, 0x1549BCu, 0x1549C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549C4u;
label_1549c4:
    // 0x1549c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1549c8:
    if (ctx->pc == 0x1549C8u) {
        ctx->pc = 0x1549C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549C4u;
        // 0x1549c8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549CCu;
        goto label_1549cc;
    }
    ctx->pc = 0x1549C4u;
    {
        const bool branch_taken_0x1549c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1549c4) {
            ctx->pc = 0x1549C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1549C4u;
            // 0x1549c8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1549D4u;
            goto label_1549d4;
        }
    }
    ctx->pc = 0x1549CCu;
label_1549cc:
    // 0x1549cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1549d0:
    if (ctx->pc == 0x1549D0u) {
        ctx->pc = 0x1549D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549CCu;
        // 0x1549d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549D4u;
        goto label_1549d4;
    }
    ctx->pc = 0x1549CCu;
    {
        const bool branch_taken_0x1549cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549CCu;
        // 0x1549d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549cc) {
            ctx->pc = 0x1549E8u;
            goto label_1549e8;
        }
    }
    ctx->pc = 0x1549D4u;
label_1549d4:
    // 0x1549d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1549d8:
    // 0x1549d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1549dc:
    // 0x1549dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1549e0:
    // 0x1549e0: 0x40f809  jalr        $v0
label_1549e4:
    if (ctx->pc == 0x1549E4u) {
        ctx->pc = 0x1549E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E0u;
        // 0x1549e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549E8u;
        goto label_1549e8;
    }
    ctx->pc = 0x1549E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1549E8u);
        ctx->pc = 0x1549E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E0u;
        // 0x1549e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549E0u, 0x1549E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1549E8u;
label_1549e8:
    // 0x1549e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1549e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1549ec:
    // 0x1549ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1549ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1549f0:
    // 0x1549f0: 0x3e00008  jr          $ra
label_1549f4:
    if (ctx->pc == 0x1549F4u) {
        ctx->pc = 0x1549F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549F0u;
        // 0x1549f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549F8u;
        goto label_fallthrough_0x1549f0;
    }
    ctx->pc = 0x1549F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1549F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549F0u;
        // 0x1549f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1549f0:
    ctx->pc = 0x1549F8u;
}
