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

// Function: sub_0031C358
// Address: 0x31c358 - 0x31c430
void sub_0031C358_0x31c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C358_0x31c358");
#endif

    switch (ctx->pc) {
        case 0x31c3acu: goto label_31c3ac;
        case 0x31c3c4u: goto label_31c3c4;
        case 0x31c3f8u: goto label_31c3f8;
        case 0x31c404u: goto label_31c404;
        default: break;
    }

    ctx->pc = 0x31c358u;

    // 0x31c358: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31c35c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c360: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31c364: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31c368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31c368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c36c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31c370: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31c370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c374: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31c374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31c378: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31c378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c37c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x31c380: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x31c380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c384: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31c384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31c388: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x31c388u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c38c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31c390: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31c390u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31c394: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31c394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31c398: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31C398u;
    {
        const bool branch_taken_0x31c398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C398u;
        // 0x31c39c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c398) {
            ctx->pc = 0x31C404u;
            goto label_31c404;
        }
    }
    ctx->pc = 0x31C3A0u;
    // 0x31c3a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x31c3a4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31C3A4u;
    SET_GPR_U32(ctx, 31, 0x31C3ACu);
    ctx->pc = 0x31C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3A4u;
    // 0x31c3a8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31C3A4u, 0x31C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3ACu;
label_31c3ac:
    // 0x31c3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3b0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x31c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x31c3b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31C3B4u;
    {
        const bool branch_taken_0x31c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3B4u;
        // 0x31c3b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3b4) {
            ctx->pc = 0x31C408u;
            goto label_31c408;
        }
    }
    ctx->pc = 0x31C3BCu;
    // 0x31c3bc: 0xc0c1956  jal         func_306558
    ctx->pc = 0x31C3BCu;
    SET_GPR_U32(ctx, 31, 0x31C3C4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x31C3BCu, 0x31C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3C4u;
label_31c3c4:
    // 0x31c3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3c8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C3C8u;
    {
        const bool branch_taken_0x31c3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3C8u;
        // 0x31c3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3c8) {
            ctx->pc = 0x31C3F8u;
            goto label_31c3f8;
        }
    }
    ctx->pc = 0x31C3D0u;
    // 0x31c3d0: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x31c3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x31c3d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31c3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31c3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3dc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31c3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3e0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31c3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3e4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x31c3e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3f0: 0xc0c710c  jal         func_31C430
    ctx->pc = 0x31C3F0u;
    SET_GPR_U32(ctx, 31, 0x31C3F8u);
    ctx->pc = 0x31C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3F0u;
    // 0x31c3f4: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C430u, 0x31C3F0u, 0x31C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3F8u;
label_31c3f8:
    // 0x31c3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3fc: 0xc059590  jal         func_165640
    ctx->pc = 0x31C3FCu;
    SET_GPR_U32(ctx, 31, 0x31C404u);
    ctx->pc = 0x31C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3FCu;
    // 0x31c400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31C3FCu, 0x31C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C404u;
label_31c404:
    // 0x31c404: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31c404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31c408:
    // 0x31c408: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31c408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c40c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31c40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c410: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31c410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c414: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31c414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c418: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31c418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c41c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31c41cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c424: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c428: 0x3e00008  jr          $ra
    ctx->pc = 0x31C428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C428u;
        // 0x31c42c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C430u;
}
