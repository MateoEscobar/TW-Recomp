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

// Function: sub_0023A3B8
// Address: 0x23a3b8 - 0x23a460
void sub_0023A3B8_0x23a3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A3B8_0x23a3b8");
#endif

    switch (ctx->pc) {
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a410u: goto label_23a410;
        case 0x23a440u: goto label_23a440;
        default: break;
    }

    ctx->pc = 0x23a3b8u;

    // 0x23a3b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23a3bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x23a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x23a3c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x23a3c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23a3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x23a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x23a3cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x23a3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3d0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x23a3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23a3d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23a3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a3dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x23a3dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x23a3e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x23a3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a3ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A3ECu;
    SET_GPR_U32(ctx, 31, 0x23A3F4u);
    ctx->pc = 0x23A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3ECu;
    // 0x23a3f0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A3ECu, 0x23A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3F4u;
label_23a3f4:
    // 0x23a3f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A3F4u;
    SET_GPR_U32(ctx, 31, 0x23A3FCu);
    ctx->pc = 0x23A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3F4u;
    // 0x23a3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A3F4u, 0x23A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3FCu;
label_23a3fc:
    // 0x23a3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a400: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23A400u;
    {
        const bool branch_taken_0x23a400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a400) {
            ctx->pc = 0x23A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A400u;
            // 0x23a404: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A444u;
            goto label_23a444;
        }
    }
    ctx->pc = 0x23A408u;
    // 0x23a408: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A408u;
    SET_GPR_U32(ctx, 31, 0x23A410u);
    ctx->pc = 0x23A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A408u;
    // 0x23a40c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A408u, 0x23A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A410u;
label_23a410:
    // 0x23a410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a414: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23A414u;
    {
        const bool branch_taken_0x23a414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a414) {
            ctx->pc = 0x23A440u;
            goto label_23a440;
        }
    }
    ctx->pc = 0x23A41Cu;
    // 0x23a41c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23a420: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x23a420u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x23a424: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x23a424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x23a428: 0x34e20040  ori         $v0, $a3, 0x40
    ctx->pc = 0x23a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x23a42c: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x23a430: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x23a430u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x23a434: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23a434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23a438: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x23A438u;
    SET_GPR_U32(ctx, 31, 0x23A440u);
    ctx->pc = 0x23A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A438u;
    // 0x23a43c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x23A438u, 0x23A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A440u;
label_23a440:
    // 0x23a440: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x23a440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23a444:
    // 0x23a444: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23a444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a448: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23a448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a44c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x23a44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a454: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x23a454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a458: 0x3e00008  jr          $ra
    ctx->pc = 0x23A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A458u;
        // 0x23a45c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A460u;
}
