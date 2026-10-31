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

// Function: sub_0028D358
// Address: 0x28d358 - 0x28d4b0
void sub_0028D358_0x28d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D358_0x28d358");
#endif

    switch (ctx->pc) {
        case 0x28d388u: goto label_28d388;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3f8u: goto label_28d3f8;
        case 0x28d41cu: goto label_28d41c;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d470u: goto label_28d470;
        case 0x28d484u: goto label_28d484;
        default: break;
    }

    ctx->pc = 0x28d358u;

    // 0x28d358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28d35c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28d360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d368: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28d36c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28d36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d370: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28d374: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x28D374u;
    {
        const bool branch_taken_0x28d374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D374u;
        // 0x28d378: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d374) {
            ctx->pc = 0x28D490u;
            goto label_28d490;
        }
    }
    ctx->pc = 0x28D37Cu;
    // 0x28d37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d380: 0xc087502  jal         func_21D408
    ctx->pc = 0x28D380u;
    SET_GPR_U32(ctx, 31, 0x28D388u);
    ctx->pc = 0x28D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D380u;
    // 0x28d384: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28D380u, 0x28D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D388u;
label_28d388:
    // 0x28d388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d38c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28d390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28d394: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D394u;
    {
        const bool branch_taken_0x28d394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d394) {
            ctx->pc = 0x28D398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D394u;
            // 0x28d398: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3A4u;
            goto label_28d3a4;
        }
    }
    ctx->pc = 0x28D39Cu;
    // 0x28d39c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D39Cu;
    {
        const bool branch_taken_0x28d39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d39c) {
            ctx->pc = 0x28D3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D39Cu;
            // 0x28d3a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3A4u;
            goto label_28d3a4;
        }
    }
    ctx->pc = 0x28D3A4u;
label_28d3a4:
    // 0x28d3a4: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x28D3A4u;
    SET_GPR_U32(ctx, 31, 0x28D3ACu);
    ctx->pc = 0x28D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3A4u;
    // 0x28d3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x28D3A4u, 0x28D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3ACu;
label_28d3ac:
    // 0x28d3ac: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28D3ACu;
    {
        const bool branch_taken_0x28d3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3ACu;
        // 0x28d3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3ac) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D3B4u;
    // 0x28d3b4: 0xc089f86  jal         func_227E18
    ctx->pc = 0x28D3B4u;
    SET_GPR_U32(ctx, 31, 0x28D3BCu);
    ctx->pc = 0x28D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3B4u;
    // 0x28d3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x28D3B4u, 0x28D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3BCu;
label_28d3bc:
    // 0x28d3bc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28D3BCu;
    {
        const bool branch_taken_0x28d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3BCu;
        // 0x28d3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3bc) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D3C4u;
    // 0x28d3c4: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x28D3C4u;
    SET_GPR_U32(ctx, 31, 0x28D3CCu);
    ctx->pc = 0x28D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3C4u;
    // 0x28d3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x28D3C4u, 0x28D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3CCu;
label_28d3cc:
    // 0x28d3cc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28D3CCu;
    {
        const bool branch_taken_0x28d3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3CCu;
        // 0x28d3d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3cc) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D3D4u;
    // 0x28d3d4: 0xc08a024  jal         func_228090
    ctx->pc = 0x28D3D4u;
    SET_GPR_U32(ctx, 31, 0x28D3DCu);
    ctx->pc = 0x28D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3D4u;
    // 0x28d3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x28D3D4u, 0x28D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3DCu;
label_28d3dc:
    // 0x28d3dc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x28D3DCu;
    {
        const bool branch_taken_0x28d3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3DCu;
        // 0x28d3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3dc) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D3E4u;
    // 0x28d3e4: 0x92220120  lbu         $v0, 0x120($s1)
    ctx->pc = 0x28d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x28d3e8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28D3E8u;
    {
        const bool branch_taken_0x28d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3E8u;
        // 0x28d3ec: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3e8) {
            ctx->pc = 0x28D490u;
            goto label_28d490;
        }
    }
    ctx->pc = 0x28D3F0u;
    // 0x28d3f0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x28D3F0u;
    SET_GPR_U32(ctx, 31, 0x28D3F8u);
    ctx->pc = 0x28D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3F0u;
    // 0x28d3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x28D3F0u, 0x28D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3F8u;
label_28d3f8:
    // 0x28d3f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D3F8u;
    {
        const bool branch_taken_0x28d3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3f8) {
            ctx->pc = 0x28D3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3F8u;
            // 0x28d3fc: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D40Cu;
            goto label_28d40c;
        }
    }
    ctx->pc = 0x28D400u;
    // 0x28d400: 0x16710024  bne         $s3, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x28D400u;
    {
        const bool branch_taken_0x28d400 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x28D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D400u;
        // 0x28d404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d400) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D408u;
    // 0x28d408: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_28d40c:
    // 0x28d40c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D40Cu;
    {
        const bool branch_taken_0x28d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d40c) {
            ctx->pc = 0x28D410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D40Cu;
            // 0x28d410: 0x9242014d  lbu         $v0, 0x14D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D414u;
    // 0x28d414: 0xc088e58  jal         func_223960
    ctx->pc = 0x28D414u;
    SET_GPR_U32(ctx, 31, 0x28D41Cu);
    ctx->pc = 0x28D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D414u;
    // 0x28d418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x28D414u, 0x28D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D41Cu;
label_28d41c:
    // 0x28d41c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28D41Cu;
    {
        const bool branch_taken_0x28d41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D41Cu;
        // 0x28d420: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d41c) {
            ctx->pc = 0x28D44Cu;
            goto label_28d44c;
        }
    }
    ctx->pc = 0x28D424u;
    // 0x28d424: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x28D424u;
    SET_GPR_U32(ctx, 31, 0x28D42Cu);
    ctx->pc = 0x28D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D424u;
    // 0x28d428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x28D424u, 0x28D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D42Cu;
label_28d42c:
    // 0x28d42c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x28d42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x28d430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d434: 0x0  nop
    ctx->pc = 0x28d434u;
    // NOP
    // 0x28d438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28d438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d43c: 0x0  nop
    ctx->pc = 0x28d43cu;
    // NOP
    // 0x28d440: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x28D440u;
    {
        const bool branch_taken_0x28d440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d440) {
            ctx->pc = 0x28D444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D440u;
            // 0x28d444: 0x9242014d  lbu         $v0, 0x14D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D448u;
    // 0x28d448: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28d448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28d44c:
    // 0x28d44c: 0x8e040360  lw          $a0, 0x360($s0)
    ctx->pc = 0x28d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x28d450: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x28d454: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28D454u;
    {
        const bool branch_taken_0x28d454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D454u;
        // 0x28d458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d454) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D45Cu;
    // 0x28d45c: 0x9242014d  lbu         $v0, 0x14D($s2)
    ctx->pc = 0x28d45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
label_28d460:
    // 0x28d460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D460u;
    {
        const bool branch_taken_0x28d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D460u;
        // 0x28d464: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d460) {
            ctx->pc = 0x28D488u;
            goto label_28d488;
        }
    }
    ctx->pc = 0x28D468u;
    // 0x28d468: 0xc0a3fc2  jal         func_28FF08
    ctx->pc = 0x28D468u;
    SET_GPR_U32(ctx, 31, 0x28D470u);
    ctx->pc = 0x28D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D468u;
    // 0x28d46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF08u, 0x28D468u, 0x28D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D470u;
label_28d470:
    // 0x28d470: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D470u;
    {
        const bool branch_taken_0x28d470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28d470) {
            ctx->pc = 0x28D474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D470u;
            // 0x28d474: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D478u;
    // 0x28d478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d47c: 0xc0a3fd6  jal         func_28FF58
    ctx->pc = 0x28D47Cu;
    SET_GPR_U32(ctx, 31, 0x28D484u);
    ctx->pc = 0x28D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D47Cu;
    // 0x28d480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x28D47Cu, 0x28D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D484u;
label_28d484:
    // 0x28d484: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x28d484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_28d488:
    // 0x28d488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D488u;
    {
        const bool branch_taken_0x28d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D488u;
        // 0x28d48c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d488) {
            ctx->pc = 0x28D494u;
            goto label_28d494;
        }
    }
    ctx->pc = 0x28D490u;
label_28d490:
    // 0x28d490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d494:
    // 0x28d494: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28d494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d498: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28d498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d49c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d4a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28d4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4A8u;
        // 0x28d4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D4B0u;
}
