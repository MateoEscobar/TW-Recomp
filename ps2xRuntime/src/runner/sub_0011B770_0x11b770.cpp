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

// Function: sub_0011B770
// Address: 0x11b770 - 0x11b838
void sub_0011B770_0x11b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B770_0x11b770");
#endif

    switch (ctx->pc) {
        case 0x11b7b4u: goto label_11b7b4;
        case 0x11b7bcu: goto label_11b7bc;
        case 0x11b7c8u: goto label_11b7c8;
        case 0x11b7d4u: goto label_11b7d4;
        case 0x11b814u: goto label_11b814;
        default: break;
    }

    ctx->pc = 0x11b770u;

    // 0x11b770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11b774: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x11b778: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x11b778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11b77c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b77cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b780: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11b784: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11b784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11b788: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11b78c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b790: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11b794: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11b798: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11b7a0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b7a8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x11b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x11b7ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11B7ACu;
    SET_GPR_U32(ctx, 31, 0x11B7B4u);
    ctx->pc = 0x11B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7ACu;
    // 0x11b7b0: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11B7ACu, 0x11B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7B4u;
label_11b7b4:
    // 0x11b7b4: 0xc047a5e  jal         func_11E978
    ctx->pc = 0x11B7B4u;
    SET_GPR_U32(ctx, 31, 0x11B7BCu);
    ctx->pc = 0x11B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7B4u;
    // 0x11b7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11B7B4u, 0x11B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7BCu;
label_11b7bc:
    // 0x11b7bc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x11b7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x11b7c0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x11B7C0u;
    SET_GPR_U32(ctx, 31, 0x11B7C8u);
    ctx->pc = 0x11B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7C0u;
    // 0x11b7c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11B7C0u, 0x11B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7C8u;
label_11b7c8:
    // 0x11b7c8: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x11b7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x11b7cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x11B7CCu;
    SET_GPR_U32(ctx, 31, 0x11B7D4u);
    ctx->pc = 0x11B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7CCu;
    // 0x11b7d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11B7CCu, 0x11B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D4u;
label_11b7d4:
    // 0x11b7d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7D4u;
    {
        const bool branch_taken_0x11b7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D4u;
        // 0x11b7d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d4) {
            ctx->pc = 0x11B7E8u;
            goto label_11b7e8;
        }
    }
    ctx->pc = 0x11B7DCu;
    // 0x11b7dc: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x11b7e0: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x11b7e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x11b7e4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x11b7e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_11b7e8:
    // 0x11b7e8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B7E8u;
            // 0x11b7ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B800u;
            goto label_11b800;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x808301b0  lb          $v1, 0x1B0($a0)
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x11b7f4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x11b7f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x11b7f8: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x11b7f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x11b7fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b800:
    // 0x11b800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11b800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11b804: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b808: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b80c: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x11B80Cu;
    SET_GPR_U32(ctx, 31, 0x11B814u);
    ctx->pc = 0x11B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B80Cu;
    // 0x11b810: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x11B80Cu, 0x11B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B814u;
label_11b814:
    // 0x11b814: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b818: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11b818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b81c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11b81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11b820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b824: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x11b824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b82c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x11b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b830: 0x3e00008  jr          $ra
    ctx->pc = 0x11B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B830u;
        // 0x11b834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B838u;
}
