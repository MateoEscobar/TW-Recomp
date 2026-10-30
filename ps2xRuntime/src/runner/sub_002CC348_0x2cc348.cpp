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

// Function: sub_002CC348
// Address: 0x2cc348 - 0x2cc408
void sub_002CC348_0x2cc348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC348_0x2cc348");
#endif

    switch (ctx->pc) {
        case 0x2cc388u: goto label_2cc388;
        case 0x2cc394u: goto label_2cc394;
        case 0x2cc39cu: goto label_2cc39c;
        case 0x2cc3a4u: goto label_2cc3a4;
        case 0x2cc3d8u: goto label_2cc3d8;
        case 0x2cc3e4u: goto label_2cc3e4;
        default: break;
    }

    ctx->pc = 0x2cc348u;

    // 0x2cc348: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cc348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cc34c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cc34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cc350: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cc350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cc354: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cc354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc358: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2cc358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2cc35c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2cc35cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc360: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2cc360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2cc364: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2cc364u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2cc368: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cc368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cc36c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2cc36cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc370: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cc370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cc374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc378: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cc378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cc37c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc380: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CC380u;
    SET_GPR_U32(ctx, 31, 0x2CC388u);
    ctx->pc = 0x2CC384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC380u;
    // 0x2cc384: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CC380u, 0x2CC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC388u;
label_2cc388:
    // 0x2cc388: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2cc388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2cc38c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CC38Cu;
    SET_GPR_U32(ctx, 31, 0x2CC394u);
    ctx->pc = 0x2CC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC38Cu;
    // 0x2cc390: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CC38Cu, 0x2CC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC394u;
label_2cc394:
    // 0x2cc394: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CC394u;
    SET_GPR_U32(ctx, 31, 0x2CC39Cu);
    ctx->pc = 0x2CC398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC394u;
    // 0x2cc398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CC394u, 0x2CC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC39Cu;
label_2cc39c:
    // 0x2cc39c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2CC39Cu;
    SET_GPR_U32(ctx, 31, 0x2CC3A4u);
    ctx->pc = 0x2CC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC39Cu;
    // 0x2cc3a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CC39Cu, 0x2CC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3A4u;
label_2cc3a4:
    // 0x2cc3a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3a8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CC3A8u;
    {
        const bool branch_taken_0x2cc3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3A8u;
        // 0x2cc3ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3a8) {
            ctx->pc = 0x2CC3D8u;
            goto label_2cc3d8;
        }
    }
    ctx->pc = 0x2CC3B0u;
    // 0x2cc3b0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2cc3b4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2cc3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cc3b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cc3b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cc3bc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2cc3bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2cc3c0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cc3c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3cc: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x2cc3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2cc3d0: 0xc0b3102  jal         func_2CC408
    ctx->pc = 0x2CC3D0u;
    SET_GPR_U32(ctx, 31, 0x2CC3D8u);
    ctx->pc = 0x2CC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3D0u;
    // 0x2cc3d4: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC408u, 0x2CC3D0u, 0x2CC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3D8u;
label_2cc3d8:
    // 0x2cc3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3dc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2CC3DCu;
    SET_GPR_U32(ctx, 31, 0x2CC3E4u);
    ctx->pc = 0x2CC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3DCu;
    // 0x2cc3e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CC3DCu, 0x2CC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3E4u;
label_2cc3e4:
    // 0x2cc3e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cc3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc3e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cc3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc3ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cc3ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc3f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cc3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc3f8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2cc3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cc3fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2cc3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cc400: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC400u;
        // 0x2cc404: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC408u;
}
