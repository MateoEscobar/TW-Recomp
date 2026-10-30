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

// Function: sub_002C4060
// Address: 0x2c4060 - 0x2c4120
void sub_002C4060_0x2c4060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4060_0x2c4060");
#endif

    switch (ctx->pc) {
        case 0x2c40a4u: goto label_2c40a4;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c40bcu: goto label_2c40bc;
        case 0x2c40c4u: goto label_2c40c4;
        case 0x2c40ecu: goto label_2c40ec;
        case 0x2c40f8u: goto label_2c40f8;
        default: break;
    }

    ctx->pc = 0x2c4060u;

    // 0x2c4060: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c4060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c4064: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c4068: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2c4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2c406c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4070: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2c4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2c4074: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c407c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c407cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4080: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2c4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2c4084: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c4084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4088: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2c4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2c408c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2c408cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4090: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2c4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2c4094: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2c4094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2c4098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c409c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2C409Cu;
    SET_GPR_U32(ctx, 31, 0x2C40A4u);
    ctx->pc = 0x2C40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C409Cu;
    // 0x2c40a0: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C409Cu, 0x2C40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40A4u;
label_2c40a4:
    // 0x2c40a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x2C40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40A4u;
    // 0x2c40a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C40A4u, 0x2C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C40ACu;
    {
        const bool branch_taken_0x2c40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40ACu;
        // 0x2c40b0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40ac) {
            ctx->pc = 0x2C40FCu;
            goto label_2c40fc;
        }
    }
    ctx->pc = 0x2C40B4u;
    // 0x2c40b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C40B4u;
    SET_GPR_U32(ctx, 31, 0x2C40BCu);
    ctx->pc = 0x2C40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40B4u;
    // 0x2c40b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C40B4u, 0x2C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40BCu;
label_2c40bc:
    // 0x2c40bc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C40BCu;
    SET_GPR_U32(ctx, 31, 0x2C40C4u);
    ctx->pc = 0x2C40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40BCu;
    // 0x2c40c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C40BCu, 0x2C40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40C4u;
label_2c40c4:
    // 0x2c40c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c40c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C40C8u;
    {
        const bool branch_taken_0x2c40c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40C8u;
        // 0x2c40cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40c8) {
            ctx->pc = 0x2C40ECu;
            goto label_2c40ec;
        }
    }
    ctx->pc = 0x2C40D0u;
    // 0x2c40d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c40d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c40d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40d8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2c40d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40dc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2c40dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c40e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e4: 0xc0b1048  jal         func_2C4120
    ctx->pc = 0x2C40E4u;
    SET_GPR_U32(ctx, 31, 0x2C40ECu);
    ctx->pc = 0x2C40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40E4u;
    // 0x2c40e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4120u, 0x2C40E4u, 0x2C40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ECu;
label_2c40ec:
    // 0x2c40ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40f0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C40F0u;
    SET_GPR_U32(ctx, 31, 0x2C40F8u);
    ctx->pc = 0x2C40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40F0u;
    // 0x2c40f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C40F0u, 0x2C40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40F8u;
label_2c40f8:
    // 0x2c40f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c40f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c40fc:
    // 0x2c40fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c40fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4100: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c4100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4104: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c4104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4108: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c410c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2c410cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4110: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2c4110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4118: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4118u;
        // 0x2c411c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4120u;
}
