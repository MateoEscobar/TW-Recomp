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

// Function: sub_00364C08
// Address: 0x364c08 - 0x364c68
void sub_00364C08_0x364c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364C08_0x364c08");
#endif

    switch (ctx->pc) {
        case 0x364c28u: goto label_364c28;
        case 0x364c30u: goto label_364c30;
        case 0x364c44u: goto label_364c44;
        case 0x364c50u: goto label_364c50;
        default: break;
    }

    ctx->pc = 0x364c08u;

    // 0x364c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364c10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364c20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364C20u;
    SET_GPR_U32(ctx, 31, 0x364C28u);
    ctx->pc = 0x364C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C20u;
    // 0x364c24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364C20u, 0x364C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C28u;
label_364c28:
    // 0x364c28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364C28u;
    SET_GPR_U32(ctx, 31, 0x364C30u);
    ctx->pc = 0x364C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C28u;
    // 0x364c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364C28u, 0x364C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C30u;
label_364c30:
    // 0x364c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c3c: 0xc102488  jal         func_409220
    ctx->pc = 0x364C3Cu;
    SET_GPR_U32(ctx, 31, 0x364C44u);
    ctx->pc = 0x364C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C3Cu;
    // 0x364c40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x364C3Cu, 0x364C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C44u;
label_364c44:
    // 0x364c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x364c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c48: 0xc08e4d0  jal         func_239340
    ctx->pc = 0x364C48u;
    SET_GPR_U32(ctx, 31, 0x364C50u);
    ctx->pc = 0x364C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C48u;
    // 0x364c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239340u, 0x364C48u, 0x364C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C50u;
label_364c50:
    // 0x364c50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364c60: 0x3e00008  jr          $ra
    ctx->pc = 0x364C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C60u;
        // 0x364c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C68u;
}
