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

// Function: sub_0030C060
// Address: 0x30c060 - 0x30c0d0
void sub_0030C060_0x30c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C060_0x30c060");
#endif

    switch (ctx->pc) {
        case 0x30c078u: goto label_30c078;
        case 0x30c084u: goto label_30c084;
        case 0x30c0b4u: goto label_30c0b4;
        default: break;
    }

    ctx->pc = 0x30c060u;

    // 0x30c060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c064: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30c068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c070: 0xc0c2f1a  jal         func_30BC68
    ctx->pc = 0x30C070u;
    SET_GPR_U32(ctx, 31, 0x30C078u);
    ctx->pc = 0x30C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C070u;
    // 0x30c074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC68u, 0x30C070u, 0x30C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C078u;
label_30c078:
    // 0x30c078: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30c078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c07c: 0xc0c2eb4  jal         func_30BAD0
    ctx->pc = 0x30C07Cu;
    SET_GPR_U32(ctx, 31, 0x30C084u);
    ctx->pc = 0x30C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C07Cu;
    // 0x30c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BAD0u, 0x30C07Cu, 0x30C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C084u;
label_30c084:
    // 0x30c084: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c088: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C088u;
    {
        const bool branch_taken_0x30c088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C088u;
        // 0x30c08c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c088) {
            ctx->pc = 0x30C0BCu;
            goto label_30c0bc;
        }
    }
    ctx->pc = 0x30C090u;
    // 0x30c090: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c094: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C094u;
    {
        const bool branch_taken_0x30c094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C094u;
        // 0x30c098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c094) {
            ctx->pc = 0x30C0A4u;
            goto label_30c0a4;
        }
    }
    ctx->pc = 0x30C09Cu;
    // 0x30c09c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C09Cu;
    {
        const bool branch_taken_0x30c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C09Cu;
        // 0x30c0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c09c) {
            ctx->pc = 0x30C0BCu;
            goto label_30c0bc;
        }
    }
    ctx->pc = 0x30C0A4u;
label_30c0a4:
    // 0x30c0a4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C0A4u;
    {
        const bool branch_taken_0x30c0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c0a4) {
            ctx->pc = 0x30C0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C0A4u;
            // 0x30c0a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C0BCu;
            goto label_30c0bc;
        }
    }
    ctx->pc = 0x30C0ACu;
    // 0x30c0ac: 0xc0c2eca  jal         func_30BB28
    ctx->pc = 0x30C0ACu;
    SET_GPR_U32(ctx, 31, 0x30C0B4u);
    ctx->pc = 0x30C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0ACu;
    // 0x30c0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB28u, 0x30C0ACu, 0x30C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0B4u;
label_30c0b4:
    // 0x30c0b4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30c0b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30c0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30c0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c0bc:
    // 0x30c0bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30c0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0C8u;
        // 0x30c0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0D0u;
}
