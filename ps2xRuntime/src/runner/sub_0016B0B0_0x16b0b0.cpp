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

// Function: sub_0016B0B0
// Address: 0x16b0b0 - 0x16b108
void sub_0016B0B0_0x16b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B0B0_0x16b0b0");
#endif

    switch (ctx->pc) {
        case 0x16b0e8u: goto label_16b0e8;
        default: break;
    }

    ctx->pc = 0x16b0b0u;

    // 0x16b0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b0b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b0b8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x16b0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b0c0: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x16b0c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b0c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b0c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B0C8u;
    {
        const bool branch_taken_0x16b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0C8u;
        // 0x16b0cc: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0c8) {
            ctx->pc = 0x16B0E8u;
            goto label_16b0e8;
        }
    }
    ctx->pc = 0x16B0D0u;
    // 0x16b0d0: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x16b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x16b0d4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16b0d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16b0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b0dc: 0x24846e30  addiu       $a0, $a0, 0x6E30
    ctx->pc = 0x16b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28208));
    // 0x16b0e0: 0xc05a3ae  jal         func_168EB8
    ctx->pc = 0x16B0E0u;
    SET_GPR_U32(ctx, 31, 0x16B0E8u);
    ctx->pc = 0x16B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0E0u;
    // 0x16b0e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168EB8u, 0x16B0E0u, 0x16B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0E8u;
label_16b0e8:
    // 0x16b0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0ECu;
        // 0x16b0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0F4u;
    // 0x16b0f4: 0x0  nop
    ctx->pc = 0x16b0f4u;
    // NOP
    // 0x16b0f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b0fc: 0x0  nop
    ctx->pc = 0x16b0fcu;
    // NOP
    // 0x16b100: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b104: 0x0  nop
    ctx->pc = 0x16b104u;
    // NOP
    ctx->pc = 0x16b108u;
}
