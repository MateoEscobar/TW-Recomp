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

// Function: sub_0036DC18
// Address: 0x36dc18 - 0x36dc90
void sub_0036DC18_0x36dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DC18_0x36dc18");
#endif

    switch (ctx->pc) {
        case 0x36dc40u: goto label_36dc40;
        case 0x36dc48u: goto label_36dc48;
        case 0x36dc5cu: goto label_36dc5c;
        case 0x36dc64u: goto label_36dc64;
        case 0x36dc70u: goto label_36dc70;
        default: break;
    }

    ctx->pc = 0x36dc18u;

    // 0x36dc18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36dc1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dc20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36dc24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36dc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36dc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36dc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36dc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dc38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DC38u;
    SET_GPR_U32(ctx, 31, 0x36DC40u);
    ctx->pc = 0x36DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC38u;
    // 0x36dc3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DC38u, 0x36DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC40u;
label_36dc40:
    // 0x36dc40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DC40u;
    SET_GPR_U32(ctx, 31, 0x36DC48u);
    ctx->pc = 0x36DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC40u;
    // 0x36dc44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DC40u, 0x36DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC48u;
label_36dc48:
    // 0x36dc48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36dc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36dc50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36dc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DC54u;
    SET_GPR_U32(ctx, 31, 0x36DC5Cu);
    ctx->pc = 0x36DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC54u;
    // 0x36dc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DC54u, 0x36DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC5Cu;
label_36dc5c:
    // 0x36dc5c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36DC5Cu;
    SET_GPR_U32(ctx, 31, 0x36DC64u);
    ctx->pc = 0x36DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC5Cu;
    // 0x36dc60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36DC5Cu, 0x36DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC64u;
label_36dc64:
    // 0x36dc64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc68: 0xc0e59b2  jal         func_3966C8
    ctx->pc = 0x36DC68u;
    SET_GPR_U32(ctx, 31, 0x36DC70u);
    ctx->pc = 0x36DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC68u;
    // 0x36dc6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3966C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3966C8u, 0x36DC68u, 0x36DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC70u;
label_36dc70:
    // 0x36dc70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36dc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dc74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36dc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dc7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36dc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC84u;
        // 0x36dc88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC8Cu;
    // 0x36dc8c: 0x0  nop
    ctx->pc = 0x36dc8cu;
    // NOP
    ctx->pc = 0x36dc90u;
}
