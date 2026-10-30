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

// Function: sub_004E3E10
// Address: 0x4e3e10 - 0x4e3e70
void sub_004E3E10_0x4e3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3E10_0x4e3e10");
#endif

    switch (ctx->pc) {
        case 0x4e3e38u: goto label_4e3e38;
        case 0x4e3e44u: goto label_4e3e44;
        case 0x4e3e50u: goto label_4e3e50;
        case 0x4e3e5cu: goto label_4e3e5c;
        default: break;
    }

    ctx->pc = 0x4e3e10u;

    // 0x4e3e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e3e14: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e3e18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e3e1c: 0x24429408  addiu       $v0, $v0, -0x6BF8
    ctx->pc = 0x4e3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939656));
    // 0x4e3e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e3e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3e30: 0xc0682c0  jal         func_1A0B00
    ctx->pc = 0x4E3E30u;
    SET_GPR_U32(ctx, 31, 0x4E3E38u);
    ctx->pc = 0x4E3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E30u;
    // 0x4e3e34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B00u, 0x4E3E30u, 0x4E3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E38u;
label_4e3e38:
    // 0x4e3e38: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x4e3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x4e3e3c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E3E3Cu;
    SET_GPR_U32(ctx, 31, 0x4E3E44u);
    ctx->pc = 0x4E3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E3Cu;
    // 0x4e3e40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E3E3Cu, 0x4E3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E44u;
label_4e3e44:
    // 0x4e3e44: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4e3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4e3e48: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E3E48u;
    SET_GPR_U32(ctx, 31, 0x4E3E50u);
    ctx->pc = 0x4E3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E48u;
    // 0x4e3e4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E3E48u, 0x4E3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E50u;
label_4e3e50:
    // 0x4e3e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3e54: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E3E54u;
    SET_GPR_U32(ctx, 31, 0x4E3E5Cu);
    ctx->pc = 0x4E3E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E54u;
    // 0x4e3e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E3E54u, 0x4E3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E5Cu;
label_4e3e5c:
    // 0x4e3e5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e3e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3e68: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E68u;
        // 0x4e3e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3E70u;
}
