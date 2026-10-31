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

// Function: sub_00339C10
// Address: 0x339c10 - 0x339c80
void sub_00339C10_0x339c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339C10_0x339c10");
#endif

    switch (ctx->pc) {
        case 0x339c40u: goto label_339c40;
        default: break;
    }

    ctx->pc = 0x339c10u;

    // 0x339c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339c14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x339c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x339c18: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x339c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x339c20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339c2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x339c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x339c30: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x339c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x339c34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x339c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c38: 0xc0ce512  jal         func_339448
    ctx->pc = 0x339C38u;
    SET_GPR_U32(ctx, 31, 0x339C40u);
    ctx->pc = 0x339C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C38u;
    // 0x339c3c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x339C38u, 0x339C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C40u;
label_339c40:
    // 0x339c40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x339c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339C44u;
    {
        const bool branch_taken_0x339c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C44u;
        // 0x339c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c44) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C4Cu;
    // 0x339c4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x339c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x339c50: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x339C50u;
    {
        const bool branch_taken_0x339c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x339C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C50u;
        // 0x339c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c50) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C58u;
    // 0x339c58: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x339c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x339c5c: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339C5Cu;
    {
        const bool branch_taken_0x339c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x339C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C5Cu;
        // 0x339c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c5c) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C64u;
    // 0x339c64: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x339c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_339c68:
    // 0x339c68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x339c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339c6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x339c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339c74: 0x3e00008  jr          $ra
    ctx->pc = 0x339C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C74u;
        // 0x339c78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339C7Cu;
    // 0x339c7c: 0x0  nop
    ctx->pc = 0x339c7cu;
    // NOP
    ctx->pc = 0x339c80u;
}
