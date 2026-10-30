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

// Function: sub_001B3BA8
// Address: 0x1b3ba8 - 0x1b3c00
void sub_001B3BA8_0x1b3ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3BA8_0x1b3ba8");
#endif

    switch (ctx->pc) {
        case 0x1b3be0u: goto label_1b3be0;
        case 0x1b3becu: goto label_1b3bec;
        default: break;
    }

    ctx->pc = 0x1b3ba8u;

    // 0x1b3ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3bac: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b3bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3bb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3bb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3BB4u;
    {
        const bool branch_taken_0x1b3bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BB4u;
        // 0x1b3bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bb4) {
            ctx->pc = 0x1B3BECu;
            goto label_1b3bec;
        }
    }
    ctx->pc = 0x1B3BBCu;
    // 0x1b3bbc: 0x24100430  addiu       $s0, $zero, 0x430
    ctx->pc = 0x1b3bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    // 0x1b3bc0: 0x3402ebc0  ori         $v0, $zero, 0xEBC0
    ctx->pc = 0x1b3bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
    // 0x1b3bc4: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x1b3bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b3bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bd0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b3bd4: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1b3bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b3bd8: 0xc068cc4  jal         func_1A3310
    ctx->pc = 0x1B3BD8u;
    SET_GPR_U32(ctx, 31, 0x1B3BE0u);
    ctx->pc = 0x1B3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BD8u;
    // 0x1b3bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3310u, 0x1B3BD8u, 0x1B3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BE0u;
label_1b3be0:
    // 0x1b3be0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b3be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3be4: 0xc068cce  jal         func_1A3338
    ctx->pc = 0x1B3BE4u;
    SET_GPR_U32(ctx, 31, 0x1B3BECu);
    ctx->pc = 0x1B3BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BE4u;
    // 0x1b3be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3338u, 0x1B3BE4u, 0x1B3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BECu;
label_1b3bec:
    // 0x1b3bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BF4u;
        // 0x1b3bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3BFCu;
    // 0x1b3bfc: 0x0  nop
    ctx->pc = 0x1b3bfcu;
    // NOP
    ctx->pc = 0x1b3c00u;
}
