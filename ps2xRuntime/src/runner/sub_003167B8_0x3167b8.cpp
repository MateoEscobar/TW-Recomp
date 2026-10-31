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

// Function: sub_003167B8
// Address: 0x3167b8 - 0x3168e8
void sub_003167B8_0x3167b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003167B8_0x3167b8");
#endif

    switch (ctx->pc) {
        case 0x316814u: goto label_316814;
        case 0x316824u: goto label_316824;
        case 0x31683cu: goto label_31683c;
        case 0x316858u: goto label_316858;
        case 0x316868u: goto label_316868;
        case 0x316878u: goto label_316878;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168b0u: goto label_3168b0;
        default: break;
    }

    ctx->pc = 0x3167b8u;

    // 0x3167b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3167b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3167bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3167bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3167c0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3167c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3167c4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3167c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3167c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3167c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3167cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3167ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3167d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3167d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3167d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3167d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3167dc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3167dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3167e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3167e4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3167e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167e8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3167e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3167ec: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3167ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3167f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3167f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3167f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3167f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3167f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3167fc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3167fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x316800: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x316800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x316804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x316808: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x316808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x31680c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31680Cu;
    SET_GPR_U32(ctx, 31, 0x316814u);
    ctx->pc = 0x316810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31680Cu;
    // 0x316810: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31680Cu, 0x316814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316814u;
label_316814:
    // 0x316814: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x316814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x316818: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x316818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31681c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31681Cu;
    SET_GPR_U32(ctx, 31, 0x316824u);
    ctx->pc = 0x316820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31681Cu;
    // 0x316820: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31681Cu, 0x316824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316824u;
label_316824:
    // 0x316824: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x316824u;
    {
        const bool branch_taken_0x316824 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x316828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316824u;
        // 0x316828: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316824) {
            ctx->pc = 0x3168B0u;
            goto label_3168b0;
        }
    }
    ctx->pc = 0x31682Cu;
    // 0x31682c: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x31682Cu;
    {
        const bool branch_taken_0x31682c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x316830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31682Cu;
        // 0x316830: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31682c) {
            ctx->pc = 0x3168B4u;
            goto label_3168b4;
        }
    }
    ctx->pc = 0x316834u;
    // 0x316834: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316834u;
    SET_GPR_U32(ctx, 31, 0x31683Cu);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316834u, 0x31683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31683Cu;
label_31683c:
    // 0x31683c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31683cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316840: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x316840u;
    {
        const bool branch_taken_0x316840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x316844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316840u;
        // 0x316844: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316840) {
            ctx->pc = 0x3168A4u;
            goto label_3168a4;
        }
    }
    ctx->pc = 0x316848u;
    // 0x316848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31684c: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x31684cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
    // 0x316850: 0xc050fda  jal         func_143F68
    ctx->pc = 0x316850u;
    SET_GPR_U32(ctx, 31, 0x316858u);
    ctx->pc = 0x316854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316850u;
    // 0x316854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x316850u, 0x316858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316858u;
label_316858:
    // 0x316858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x316858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31685c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316860: 0xc050fda  jal         func_143F68
    ctx->pc = 0x316860u;
    SET_GPR_U32(ctx, 31, 0x316868u);
    ctx->pc = 0x316864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316860u;
    // 0x316864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x316860u, 0x316868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316868u;
label_316868:
    // 0x316868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31686c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316870: 0xc050fda  jal         func_143F68
    ctx->pc = 0x316870u;
    SET_GPR_U32(ctx, 31, 0x316878u);
    ctx->pc = 0x316874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316870u;
    // 0x316874: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x316870u, 0x316878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316878u;
label_316878:
    // 0x316878: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x316878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31687c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316880: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x316884: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x316884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316888: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x316888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x31688c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x31688cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316890: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x316890u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316894: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316894u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x316898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31689c: 0xc0c5560  jal         func_315580
    ctx->pc = 0x31689Cu;
    SET_GPR_U32(ctx, 31, 0x3168A4u);
    ctx->pc = 0x3168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31689Cu;
    // 0x3168a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315580u, 0x31689Cu, 0x3168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168A4u;
label_3168a4:
    // 0x3168a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3168a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168a8: 0xc059590  jal         func_165640
    ctx->pc = 0x3168A8u;
    SET_GPR_U32(ctx, 31, 0x3168B0u);
    ctx->pc = 0x3168ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168A8u;
    // 0x3168ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3168A8u, 0x3168B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168B0u;
label_3168b0:
    // 0x3168b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3168b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3168b4:
    // 0x3168b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3168b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3168b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3168b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3168bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3168bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3168c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3168c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3168c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3168c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3168c8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3168c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3168cc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3168ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3168d0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3168d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3168d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3168d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3168d8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3168d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3168dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3168DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3168E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168DCu;
        // 0x3168e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3168DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3168E4u;
    // 0x3168e4: 0x0  nop
    ctx->pc = 0x3168e4u;
    // NOP
    ctx->pc = 0x3168e8u;
}
