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

// Function: sub_00372F20
// Address: 0x372f20 - 0x372f80
void sub_00372F20_0x372f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372F20_0x372f20");
#endif

    switch (ctx->pc) {
        case 0x372f40u: goto label_372f40;
        case 0x372f48u: goto label_372f48;
        case 0x372f5cu: goto label_372f5c;
        case 0x372f68u: goto label_372f68;
        default: break;
    }

    ctx->pc = 0x372f20u;

    // 0x372f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372f28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x372f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x372f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x372f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372f38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372F38u;
    SET_GPR_U32(ctx, 31, 0x372F40u);
    ctx->pc = 0x372F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F38u;
    // 0x372f3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372F38u, 0x372F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F40u;
label_372f40:
    // 0x372f40: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372F40u;
    SET_GPR_U32(ctx, 31, 0x372F48u);
    ctx->pc = 0x372F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F40u;
    // 0x372f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372F40u, 0x372F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F48u;
label_372f48:
    // 0x372f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x372f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f54: 0xc102488  jal         func_409220
    ctx->pc = 0x372F54u;
    SET_GPR_U32(ctx, 31, 0x372F5Cu);
    ctx->pc = 0x372F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F54u;
    // 0x372f58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372F54u, 0x372F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F5Cu;
label_372f5c:
    // 0x372f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x372f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f60: 0xc04506c  jal         func_1141B0
    ctx->pc = 0x372F60u;
    SET_GPR_U32(ctx, 31, 0x372F68u);
    ctx->pc = 0x372F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F60u;
    // 0x372f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141B0u, 0x372F60u, 0x372F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F68u;
label_372f68:
    // 0x372f68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x372f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372f78: 0x3e00008  jr          $ra
    ctx->pc = 0x372F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F78u;
        // 0x372f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F80u;
}
