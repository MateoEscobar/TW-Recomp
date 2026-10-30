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

// Function: sub_0036E0B0
// Address: 0x36e0b0 - 0x36e178
void sub_0036E0B0_0x36e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E0B0_0x36e0b0");
#endif

    switch (ctx->pc) {
        case 0x36e0e0u: goto label_36e0e0;
        case 0x36e0e8u: goto label_36e0e8;
        case 0x36e0fcu: goto label_36e0fc;
        case 0x36e104u: goto label_36e104;
        case 0x36e118u: goto label_36e118;
        case 0x36e120u: goto label_36e120;
        case 0x36e134u: goto label_36e134;
        case 0x36e13cu: goto label_36e13c;
        case 0x36e150u: goto label_36e150;
        default: break;
    }

    ctx->pc = 0x36e0b0u;

    // 0x36e0b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36e0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e0b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36e0bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36e0c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e0c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36e0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e0c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36e0cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36e0d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36e0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e0d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E0D8u;
    SET_GPR_U32(ctx, 31, 0x36E0E0u);
    ctx->pc = 0x36E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0D8u;
    // 0x36e0dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E0D8u, 0x36E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0E0u;
label_36e0e0:
    // 0x36e0e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E0E0u;
    SET_GPR_U32(ctx, 31, 0x36E0E8u);
    ctx->pc = 0x36E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0E0u;
    // 0x36e0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E0E0u, 0x36E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0E8u;
label_36e0e8:
    // 0x36e0e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e0ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36e0ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e0f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e0f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E0F4u;
    SET_GPR_U32(ctx, 31, 0x36E0FCu);
    ctx->pc = 0x36E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0F4u;
    // 0x36e0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E0F4u, 0x36E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0FCu;
label_36e0fc:
    // 0x36e0fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E0FCu;
    SET_GPR_U32(ctx, 31, 0x36E104u);
    ctx->pc = 0x36E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0FCu;
    // 0x36e100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E0FCu, 0x36E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E104u;
label_36e104:
    // 0x36e104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e108: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36e108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e10c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e110: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E110u;
    SET_GPR_U32(ctx, 31, 0x36E118u);
    ctx->pc = 0x36E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E110u;
    // 0x36e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E110u, 0x36E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E118u;
label_36e118:
    // 0x36e118: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E118u;
    SET_GPR_U32(ctx, 31, 0x36E120u);
    ctx->pc = 0x36E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E118u;
    // 0x36e11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E118u, 0x36E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E120u;
label_36e120:
    // 0x36e120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e12c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E12Cu;
    SET_GPR_U32(ctx, 31, 0x36E134u);
    ctx->pc = 0x36E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E12Cu;
    // 0x36e130: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E12Cu, 0x36E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E134u;
label_36e134:
    // 0x36e134: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36E134u;
    SET_GPR_U32(ctx, 31, 0x36E13Cu);
    ctx->pc = 0x36E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E134u;
    // 0x36e138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36E134u, 0x36E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E13Cu;
label_36e13c:
    // 0x36e13c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36e13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36e140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36e144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e148: 0xc104ddc  jal         func_413770
    ctx->pc = 0x36E148u;
    SET_GPR_U32(ctx, 31, 0x36E150u);
    ctx->pc = 0x36E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E148u;
    // 0x36e14c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413770u, 0x36E148u, 0x36E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E150u;
label_36e150:
    // 0x36e150: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36e150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e158: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36e158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e15c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36e15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e160: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36e160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e164: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36e164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e16c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E16Cu;
        // 0x36e170: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E174u;
    // 0x36e174: 0x0  nop
    ctx->pc = 0x36e174u;
    // NOP
    ctx->pc = 0x36e178u;
}
