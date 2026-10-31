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

// Function: sub_0032E9B0
// Address: 0x32e9b0 - 0x32ea88
void sub_0032E9B0_0x32e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E9B0_0x32e9b0");
#endif

    switch (ctx->pc) {
        case 0x32e9f0u: goto label_32e9f0;
        case 0x32e9fcu: goto label_32e9fc;
        case 0x32ea0cu: goto label_32ea0c;
        case 0x32ea18u: goto label_32ea18;
        case 0x32ea20u: goto label_32ea20;
        case 0x32ea30u: goto label_32ea30;
        case 0x32ea40u: goto label_32ea40;
        case 0x32ea48u: goto label_32ea48;
        case 0x32ea58u: goto label_32ea58;
        case 0x32ea64u: goto label_32ea64;
        default: break;
    }

    ctx->pc = 0x32e9b0u;

    // 0x32e9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32e9b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32e9b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x32e9bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e9c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x32e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x32e9c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32e9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9cc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x32e9d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32e9d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e9d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32e9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32e9e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32e9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32e9e4: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x32e9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32e9e8: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32E9E8u;
    SET_GPR_U32(ctx, 31, 0x32E9F0u);
    ctx->pc = 0x32E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E9E8u;
    // 0x32e9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32E9E8u, 0x32E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9F0u;
label_32e9f0:
    // 0x32e9f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x32e9f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9f4: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32E9F4u;
    SET_GPR_U32(ctx, 31, 0x32E9FCu);
    ctx->pc = 0x32E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E9F4u;
    // 0x32e9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32E9F4u, 0x32E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9FCu;
label_32e9fc:
    // 0x32e9fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32e9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea04: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32EA04u;
    SET_GPR_U32(ctx, 31, 0x32EA0Cu);
    ctx->pc = 0x32EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA04u;
    // 0x32ea08: 0x24050103  addiu       $a1, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32EA04u, 0x32EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA0Cu;
label_32ea0c:
    // 0x32ea0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x32ea0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea10: 0xc0cb41e  jal         func_32D078
    ctx->pc = 0x32EA10u;
    SET_GPR_U32(ctx, 31, 0x32EA18u);
    ctx->pc = 0x32EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA10u;
    // 0x32ea14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D078u, 0x32EA10u, 0x32EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA18u;
label_32ea18:
    // 0x32ea18: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32EA18u;
    SET_GPR_U32(ctx, 31, 0x32EA20u);
    ctx->pc = 0x32EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA18u;
    // 0x32ea1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32EA18u, 0x32EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA20u;
label_32ea20:
    // 0x32ea20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea28: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32EA28u;
    SET_GPR_U32(ctx, 31, 0x32EA30u);
    ctx->pc = 0x32EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA28u;
    // 0x32ea2c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32EA28u, 0x32EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA30u;
label_32ea30:
    // 0x32ea30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32ea30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea38: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32EA38u;
    SET_GPR_U32(ctx, 31, 0x32EA40u);
    ctx->pc = 0x32EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA38u;
    // 0x32ea3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32EA38u, 0x32EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA40u;
label_32ea40:
    // 0x32ea40: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32EA40u;
    SET_GPR_U32(ctx, 31, 0x32EA48u);
    ctx->pc = 0x32EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA40u;
    // 0x32ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32EA40u, 0x32EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA48u;
label_32ea48:
    // 0x32ea48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32ea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea50: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32EA50u;
    SET_GPR_U32(ctx, 31, 0x32EA58u);
    ctx->pc = 0x32EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA50u;
    // 0x32ea54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32EA50u, 0x32EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA58u;
label_32ea58:
    // 0x32ea58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea5c: 0xc0cb436  jal         func_32D0D8
    ctx->pc = 0x32EA5Cu;
    SET_GPR_U32(ctx, 31, 0x32EA64u);
    ctx->pc = 0x32EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA5Cu;
    // 0x32ea60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0D8u, 0x32EA5Cu, 0x32EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA64u;
label_32ea64:
    // 0x32ea64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32ea64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32ea68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32ea68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32ea6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32ea6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ea70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ea70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ea74: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32ea74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ea78: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x32ea78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ea7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ea80: 0x3e00008  jr          $ra
    ctx->pc = 0x32EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA80u;
        // 0x32ea84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA88u;
}
