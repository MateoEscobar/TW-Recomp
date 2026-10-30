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

// Function: sub_0010FC70
// Address: 0x10fc70 - 0x10fcd8
void sub_0010FC70_0x10fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC70_0x10fc70");
#endif

    switch (ctx->pc) {
        case 0x10fca4u: goto label_10fca4;
        case 0x10fcbcu: goto label_10fcbc;
        default: break;
    }

    ctx->pc = 0x10fc70u;

    // 0x10fc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10fc74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10fc78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10fc80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10fc84: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10fc88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10fc8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10fc94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc98: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x10fc98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc9c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x10FC9Cu;
    SET_GPR_U32(ctx, 31, 0x10FCA4u);
    ctx->pc = 0x10FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC9Cu;
    // 0x10fca0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x10FC9Cu, 0x10FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCA4u;
label_10fca4:
    // 0x10fca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fca8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10fca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10fcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x10fcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcb4: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x10FCB4u;
    SET_GPR_U32(ctx, 31, 0x10FCBCu);
    ctx->pc = 0x10FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCB4u;
    // 0x10fcb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x10FCB4u, 0x10FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCBCu;
label_10fcbc:
    // 0x10fcbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10fcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fcc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10fcc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fcc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fcc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fcc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10fcc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCD0u;
        // 0x10fcd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FCD8u;
}
