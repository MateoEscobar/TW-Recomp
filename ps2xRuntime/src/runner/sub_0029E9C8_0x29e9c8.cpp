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

// Function: sub_0029E9C8
// Address: 0x29e9c8 - 0x29ea10
void sub_0029E9C8_0x29e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9C8_0x29e9c8");
#endif

    switch (ctx->pc) {
        case 0x29e9f4u: goto label_29e9f4;
        default: break;
    }

    ctx->pc = 0x29e9c8u;

    // 0x29e9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e9cc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x29e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29e9d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29e9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e9d8: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x29e9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29e9dc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x29e9dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29e9e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29e9e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E9E4u;
    {
        const bool branch_taken_0x29e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e9e4) {
            ctx->pc = 0x29E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E9E4u;
            // 0x29e9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA00u;
            goto label_29ea00;
        }
    }
    ctx->pc = 0x29E9ECu;
    // 0x29e9ec: 0xc0a792c  jal         func_29E4B0
    ctx->pc = 0x29E9ECu;
    SET_GPR_U32(ctx, 31, 0x29E9F4u);
    ctx->pc = 0x29E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4B0u, 0x29E9ECu, 0x29E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9F4u;
label_29e9f4:
    // 0x29e9f4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x29e9f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29e9f8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x29e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x29e9fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29e9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29ea00:
    // 0x29ea00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ea00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ea04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA08u;
        // 0x29ea0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA10u;
}
