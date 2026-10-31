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

// Function: sub_002DB390
// Address: 0x2db390 - 0x2db458
void sub_002DB390_0x2db390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB390_0x2db390");
#endif

    switch (ctx->pc) {
        case 0x2db3d0u: goto label_2db3d0;
        case 0x2db3d8u: goto label_2db3d8;
        case 0x2db3e8u: goto label_2db3e8;
        case 0x2db3f0u: goto label_2db3f0;
        case 0x2db404u: goto label_2db404;
        case 0x2db424u: goto label_2db424;
        case 0x2db430u: goto label_2db430;
        default: break;
    }

    ctx->pc = 0x2db390u;

    // 0x2db390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2db390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2db394: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2db394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2db398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db39c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3a0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2db3a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2db3a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3a8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2db3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2db3ac: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2db3acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2db3b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2db3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2db3b4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2db3b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2db3b8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2db3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2db3bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2db3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2db3c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2db3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2db3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2db3c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DB3C8u;
    SET_GPR_U32(ctx, 31, 0x2DB3D0u);
    ctx->pc = 0x2DB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3C8u;
    // 0x2db3cc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DB3C8u, 0x2DB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3D0u;
label_2db3d0:
    // 0x2db3d0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DB3D0u;
    SET_GPR_U32(ctx, 31, 0x2DB3D8u);
    ctx->pc = 0x2DB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3D0u;
    // 0x2db3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DB3D0u, 0x2DB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3D8u;
label_2db3d8:
    // 0x2db3d8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DB3D8u;
    {
        const bool branch_taken_0x2db3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3D8u;
        // 0x2db3dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3d8) {
            ctx->pc = 0x2DB434u;
            goto label_2db434;
        }
    }
    ctx->pc = 0x2DB3E0u;
    // 0x2db3e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DB3E0u;
    SET_GPR_U32(ctx, 31, 0x2DB3E8u);
    ctx->pc = 0x2DB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3E0u;
    // 0x2db3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DB3E0u, 0x2DB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3E8u;
label_2db3e8:
    // 0x2db3e8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DB3E8u;
    SET_GPR_U32(ctx, 31, 0x2DB3F0u);
    ctx->pc = 0x2DB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3E8u;
    // 0x2db3ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DB3E8u, 0x2DB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3F0u;
label_2db3f0:
    // 0x2db3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB3F4u;
    {
        const bool branch_taken_0x2db3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3F4u;
        // 0x2db3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3f4) {
            ctx->pc = 0x2DB428u;
            goto label_2db428;
        }
    }
    ctx->pc = 0x2DB3FCu;
    // 0x2db3fc: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2DB3FCu;
    SET_GPR_U32(ctx, 31, 0x2DB404u);
    ctx->pc = 0x2DB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3FCu;
    // 0x2db400: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2DB3FCu, 0x2DB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB404u;
label_2db404:
    // 0x2db404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db408: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2db408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db40c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2db40cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2db410: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2db410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2db414: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2db414u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2db418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db41c: 0xc0b6d16  jal         func_2DB458
    ctx->pc = 0x2DB41Cu;
    SET_GPR_U32(ctx, 31, 0x2DB424u);
    ctx->pc = 0x2DB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB41Cu;
    // 0x2db420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB458u, 0x2DB41Cu, 0x2DB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB424u;
label_2db424:
    // 0x2db424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db428:
    // 0x2db428: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DB428u;
    SET_GPR_U32(ctx, 31, 0x2DB430u);
    ctx->pc = 0x2DB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB428u;
    // 0x2db42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DB428u, 0x2DB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB430u;
label_2db430:
    // 0x2db430: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2db430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db434:
    // 0x2db434: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2db434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db43c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2db43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db440: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2db440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2db444: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2db444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db448: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2db448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB44Cu;
        // 0x2db450: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB454u;
    // 0x2db454: 0x0  nop
    ctx->pc = 0x2db454u;
    // NOP
    ctx->pc = 0x2db458u;
}
