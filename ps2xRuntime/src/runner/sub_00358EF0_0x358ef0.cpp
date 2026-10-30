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

// Function: sub_00358EF0
// Address: 0x358ef0 - 0x358f50
void sub_00358EF0_0x358ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358EF0_0x358ef0");
#endif

    switch (ctx->pc) {
        case 0x358f10u: goto label_358f10;
        case 0x358f18u: goto label_358f18;
        case 0x358f2cu: goto label_358f2c;
        case 0x358f38u: goto label_358f38;
        default: break;
    }

    ctx->pc = 0x358ef0u;

    // 0x358ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358F08u;
    SET_GPR_U32(ctx, 31, 0x358F10u);
    ctx->pc = 0x358F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F08u;
    // 0x358f0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358F08u, 0x358F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F10u;
label_358f10:
    // 0x358f10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358F10u;
    SET_GPR_U32(ctx, 31, 0x358F18u);
    ctx->pc = 0x358F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F10u;
    // 0x358f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358F10u, 0x358F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F18u;
label_358f18:
    // 0x358f18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f24: 0xc102488  jal         func_409220
    ctx->pc = 0x358F24u;
    SET_GPR_U32(ctx, 31, 0x358F2Cu);
    ctx->pc = 0x358F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F24u;
    // 0x358f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x358F24u, 0x358F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F2Cu;
label_358f2c:
    // 0x358f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f30: 0xc08e01e  jal         func_238078
    ctx->pc = 0x358F30u;
    SET_GPR_U32(ctx, 31, 0x358F38u);
    ctx->pc = 0x358F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F30u;
    // 0x358f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238078u, 0x358F30u, 0x358F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F38u;
label_358f38:
    // 0x358f38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f48: 0x3e00008  jr          $ra
    ctx->pc = 0x358F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F48u;
        // 0x358f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358F50u;
}
