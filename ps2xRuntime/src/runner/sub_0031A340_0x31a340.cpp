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

// Function: sub_0031A340
// Address: 0x31a340 - 0x31a430
void sub_0031A340_0x31a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A340_0x31a340");
#endif

    switch (ctx->pc) {
        case 0x31a39cu: goto label_31a39c;
        case 0x31a3b4u: goto label_31a3b4;
        case 0x31a3f0u: goto label_31a3f0;
        case 0x31a3fcu: goto label_31a3fc;
        default: break;
    }

    ctx->pc = 0x31a340u;

    // 0x31a340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31a344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a348: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31a34c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31a350: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31a350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a354: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31a358: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31a358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a35c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31a360: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x31a360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a364: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31a368: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x31a368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a36c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31a370: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x31a370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a374: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x31a374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31a378: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x31a378u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a37c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31a380: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31a380u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31a384: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31a388: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31A388u;
    {
        const bool branch_taken_0x31a388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A388u;
        // 0x31a38c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a388) {
            ctx->pc = 0x31A3FCu;
            goto label_31a3fc;
        }
    }
    ctx->pc = 0x31A390u;
    // 0x31a390: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31a390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x31a394: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31A394u;
    SET_GPR_U32(ctx, 31, 0x31A39Cu);
    ctx->pc = 0x31A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A394u;
    // 0x31a398: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31A394u, 0x31A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A39Cu;
label_31a39c:
    // 0x31a39c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3a0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x31a3a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31A3A4u;
    {
        const bool branch_taken_0x31a3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3A4u;
        // 0x31a3a8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3a4) {
            ctx->pc = 0x31A400u;
            goto label_31a400;
        }
    }
    ctx->pc = 0x31A3ACu;
    // 0x31a3ac: 0xc0c1956  jal         func_306558
    ctx->pc = 0x31A3ACu;
    SET_GPR_U32(ctx, 31, 0x31A3B4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x31A3ACu, 0x31A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3B4u;
label_31a3b4:
    // 0x31a3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3b8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x31A3B8u;
    {
        const bool branch_taken_0x31a3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3B8u;
        // 0x31a3bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3b8) {
            ctx->pc = 0x31A3F0u;
            goto label_31a3f0;
        }
    }
    ctx->pc = 0x31A3C0u;
    // 0x31a3c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31a3c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a3c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31a3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31a3d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31a3d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x31a3d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31a3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3d8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x31a3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3dc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x31a3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3e0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x31a3e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3e8: 0xc0c6946  jal         func_31A518
    ctx->pc = 0x31A3E8u;
    SET_GPR_U32(ctx, 31, 0x31A3F0u);
    ctx->pc = 0x31A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3E8u;
    // 0x31a3ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A518u, 0x31A3E8u, 0x31A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3F0u;
label_31a3f0:
    // 0x31a3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3f4: 0xc059590  jal         func_165640
    ctx->pc = 0x31A3F4u;
    SET_GPR_U32(ctx, 31, 0x31A3FCu);
    ctx->pc = 0x31A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3F4u;
    // 0x31a3f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31A3F4u, 0x31A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3FCu;
label_31a3fc:
    // 0x31a3fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31a3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31a400:
    // 0x31a400: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31a400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a404: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31a404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a408: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31a408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a40c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31a40cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a410: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31a410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a414: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31a414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a418: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31a418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a420: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x31a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a424: 0x3e00008  jr          $ra
    ctx->pc = 0x31A424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A424u;
        // 0x31a428: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A42Cu;
    // 0x31a42c: 0x0  nop
    ctx->pc = 0x31a42cu;
    // NOP
    ctx->pc = 0x31a430u;
}
