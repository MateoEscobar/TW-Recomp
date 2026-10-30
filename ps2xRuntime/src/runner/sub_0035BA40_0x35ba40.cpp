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

// Function: sub_0035BA40
// Address: 0x35ba40 - 0x35bad8
void sub_0035BA40_0x35ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BA40_0x35ba40");
#endif

    switch (ctx->pc) {
        case 0x35ba6cu: goto label_35ba6c;
        case 0x35ba74u: goto label_35ba74;
        case 0x35ba88u: goto label_35ba88;
        case 0x35ba9cu: goto label_35ba9c;
        case 0x35baa4u: goto label_35baa4;
        case 0x35bab4u: goto label_35bab4;
        default: break;
    }

    ctx->pc = 0x35ba40u;

    // 0x35ba40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35ba44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ba48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35ba4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ba50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35ba54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35ba5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35ba60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ba64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BA64u;
    SET_GPR_U32(ctx, 31, 0x35BA6Cu);
    ctx->pc = 0x35BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA64u;
    // 0x35ba68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BA64u, 0x35BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA6Cu;
label_35ba6c:
    // 0x35ba6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BA6Cu;
    SET_GPR_U32(ctx, 31, 0x35BA74u);
    ctx->pc = 0x35BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA6Cu;
    // 0x35ba70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BA6Cu, 0x35BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA74u;
label_35ba74:
    // 0x35ba74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35ba74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ba80: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35BA80u;
    SET_GPR_U32(ctx, 31, 0x35BA88u);
    ctx->pc = 0x35BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA80u;
    // 0x35ba84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35BA80u, 0x35BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA88u;
label_35ba88:
    // 0x35ba88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35ba88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba8c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x35ba8cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BA94u;
    SET_GPR_U32(ctx, 31, 0x35BA9Cu);
    ctx->pc = 0x35BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA94u;
    // 0x35ba98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BA94u, 0x35BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA9Cu;
label_35ba9c:
    // 0x35ba9c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35BA9Cu;
    SET_GPR_U32(ctx, 31, 0x35BAA4u);
    ctx->pc = 0x35BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA9Cu;
    // 0x35baa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35BA9Cu, 0x35BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAA4u;
label_35baa4:
    // 0x35baa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35baa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35baa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35baac: 0xc08d668  jal         func_2359A0
    ctx->pc = 0x35BAACu;
    SET_GPR_U32(ctx, 31, 0x35BAB4u);
    ctx->pc = 0x35BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BAACu;
    // 0x35bab0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2359A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2359A0u, 0x35BAACu, 0x35BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAB4u;
label_35bab4:
    // 0x35bab4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35bab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35babc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35babcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35bac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bac4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35bac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bacc: 0x3e00008  jr          $ra
    ctx->pc = 0x35BACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BACCu;
        // 0x35bad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BAD4u;
    // 0x35bad4: 0x0  nop
    ctx->pc = 0x35bad4u;
    // NOP
    ctx->pc = 0x35bad8u;
}
