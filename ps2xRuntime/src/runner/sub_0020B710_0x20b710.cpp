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

// Function: sub_0020B710
// Address: 0x20b710 - 0x20b840
void sub_0020B710_0x20b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B710_0x20b710");
#endif

    switch (ctx->pc) {
        case 0x20b710u: goto label_20b710;
        case 0x20b714u: goto label_20b714;
        case 0x20b718u: goto label_20b718;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7e8u: goto label_20b7e8;
        case 0x20b7ecu: goto label_20b7ec;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7f4u: goto label_20b7f4;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        default: break;
    }

    ctx->pc = 0x20b710u;

label_20b710:
    // 0x20b710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b714:
    // 0x20b714: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20b714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20b718:
    // 0x20b718: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b71c:
    // 0x20b71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b720:
    // 0x20b720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b724:
    // 0x20b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b728:
    // 0x20b728: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_20b72c:
    // 0x20b72c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20b72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20b730:
    // 0x20b730: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x20b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b734:
    // 0x20b734: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20b734u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b738:
    // 0x20b738: 0x0  nop
    ctx->pc = 0x20b738u;
    // NOP
label_20b73c:
    // 0x20b73c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_20b740:
    if (ctx->pc == 0x20B740u) {
        ctx->pc = 0x20B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B73Cu;
        // 0x20b740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B744u;
        goto label_20b744;
    }
    ctx->pc = 0x20B73Cu;
    {
        const bool branch_taken_0x20b73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B73Cu;
        // 0x20b740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b73c) {
            ctx->pc = 0x20B82Cu;
            goto label_20b82c;
        }
    }
    ctx->pc = 0x20B744u;
label_20b744:
    // 0x20b744: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b748:
    // 0x20b748: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_20b74c:
    if (ctx->pc == 0x20B74Cu) {
        ctx->pc = 0x20B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B748u;
        // 0x20b74c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B750u;
        goto label_20b750;
    }
    ctx->pc = 0x20B748u;
    {
        const bool branch_taken_0x20b748 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B748u;
        // 0x20b74c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b748) {
            ctx->pc = 0x20B76Cu;
            goto label_20b76c;
        }
    }
    ctx->pc = 0x20B750u;
label_20b750:
    // 0x20b750: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20b754:
    // 0x20b754: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20b758:
    // 0x20b758: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_20b75c:
    // 0x20b75c: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x20b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_20b760:
    // 0x20b760: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20b764:
    // 0x20b764: 0x1000002e  b           . + 4 + (0x2E << 2)
label_20b768:
    if (ctx->pc == 0x20B768u) {
        ctx->pc = 0x20B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B764u;
        // 0x20b768: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B76Cu;
        goto label_20b76c;
    }
    ctx->pc = 0x20B764u;
    {
        const bool branch_taken_0x20b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B764u;
        // 0x20b768: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b764) {
            ctx->pc = 0x20B820u;
            goto label_20b820;
        }
    }
    ctx->pc = 0x20B76Cu;
label_20b76c:
    // 0x20b76c: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
label_20b770:
    if (ctx->pc == 0x20B770u) {
        ctx->pc = 0x20B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B76Cu;
        // 0x20b770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B774u;
        goto label_20b774;
    }
    ctx->pc = 0x20B76Cu;
    {
        const bool branch_taken_0x20b76c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B76Cu;
        // 0x20b770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b76c) {
            ctx->pc = 0x20B82Cu;
            goto label_20b82c;
        }
    }
    ctx->pc = 0x20B774u;
label_20b774:
    // 0x20b774: 0xc0750fa  jal         func_1D43E8
label_20b778:
    if (ctx->pc == 0x20B778u) {
        ctx->pc = 0x20B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B774u;
        // 0x20b778: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B77Cu;
        goto label_20b77c;
    }
    ctx->pc = 0x20B774u;
    SET_GPR_U32(ctx, 31, 0x20B77Cu);
    ctx->pc = 0x20B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B774u;
    // 0x20b778: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20B774u, 0x20B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B77Cu;
label_20b77c:
    // 0x20b77c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b780:
    // 0x20b780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b784:
    // 0x20b784: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
label_20b788:
    if (ctx->pc == 0x20B788u) {
        ctx->pc = 0x20B78Cu;
        goto label_20b78c;
    }
    ctx->pc = 0x20B784u;
    {
        const bool branch_taken_0x20b784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b784) {
            ctx->pc = 0x20B7E8u;
            goto label_20b7e8;
        }
    }
    ctx->pc = 0x20B78Cu;
label_20b78c:
    // 0x20b78c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x20b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20b790:
    // 0x20b790: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_20b794:
    if (ctx->pc == 0x20B794u) {
        ctx->pc = 0x20B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B790u;
        // 0x20b794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B798u;
        goto label_20b798;
    }
    ctx->pc = 0x20B790u;
    {
        const bool branch_taken_0x20b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B790u;
        // 0x20b794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b790) {
            ctx->pc = 0x20B7E8u;
            goto label_20b7e8;
        }
    }
    ctx->pc = 0x20B798u;
label_20b798:
    // 0x20b798: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_20b79c:
    // 0x20b79c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20b7a0:
    // 0x20b7a0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_20b7a4:
    // 0x20b7a4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x20b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_20b7a8:
    // 0x20b7a8: 0x60f809  jalr        $v1
label_20b7ac:
    if (ctx->pc == 0x20B7ACu) {
        ctx->pc = 0x20B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7A8u;
        // 0x20b7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7B0u;
        goto label_20b7b0;
    }
    ctx->pc = 0x20B7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B7B0u);
        ctx->pc = 0x20B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7A8u;
        // 0x20b7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7A8u, 0x20B7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B7B0u;
label_20b7b0:
    // 0x20b7b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20b7b4:
    // 0x20b7b4: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x20b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_20b7b8:
    // 0x20b7b8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x20b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_20b7bc:
    // 0x20b7bc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x20b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_20b7c0:
    // 0x20b7c0: 0xae110098  sw          $s1, 0x98($s0)
    ctx->pc = 0x20b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 17));
label_20b7c4:
    // 0x20b7c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b7c8:
    // 0x20b7c8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20b7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20b7cc:
    // 0x20b7cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20b7d0:
    // 0x20b7d0: 0x40f809  jalr        $v0
label_20b7d4:
    if (ctx->pc == 0x20B7D4u) {
        ctx->pc = 0x20B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7D0u;
        // 0x20b7d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7D8u;
        goto label_20b7d8;
    }
    ctx->pc = 0x20B7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B7D8u);
        ctx->pc = 0x20B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7D0u;
        // 0x20b7d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7D0u, 0x20B7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B7D8u;
label_20b7d8:
    // 0x20b7d8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x20b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_20b7dc:
    // 0x20b7dc: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x20b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
label_20b7e0:
    // 0x20b7e0: 0x10000012  b           . + 4 + (0x12 << 2)
label_20b7e4:
    if (ctx->pc == 0x20B7E4u) {
        ctx->pc = 0x20B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E0u;
        // 0x20b7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7E8u;
        goto label_20b7e8;
    }
    ctx->pc = 0x20B7E0u;
    {
        const bool branch_taken_0x20b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E0u;
        // 0x20b7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7e0) {
            ctx->pc = 0x20B82Cu;
            goto label_20b82c;
        }
    }
    ctx->pc = 0x20B7E8u;
label_20b7e8:
    // 0x20b7e8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_20b7ec:
    if (ctx->pc == 0x20B7ECu) {
        ctx->pc = 0x20B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E8u;
        // 0x20b7ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7F0u;
        goto label_20b7f0;
    }
    ctx->pc = 0x20B7E8u;
    {
        const bool branch_taken_0x20b7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E8u;
        // 0x20b7ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7e8) {
            ctx->pc = 0x20B804u;
            goto label_20b804;
        }
    }
    ctx->pc = 0x20B7F0u;
label_20b7f0:
    // 0x20b7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b7f4:
    // 0x20b7f4: 0xc1066b0  jal         func_419AC0
label_20b7f8:
    if (ctx->pc == 0x20B7F8u) {
        ctx->pc = 0x20B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7F4u;
        // 0x20b7f8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7FCu;
        goto label_20b7fc;
    }
    ctx->pc = 0x20B7F4u;
    SET_GPR_U32(ctx, 31, 0x20B7FCu);
    ctx->pc = 0x20B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7F4u;
    // 0x20b7f8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419AC0u, 0x20B7F4u, 0x20B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7FCu;
label_20b7fc:
    // 0x20b7fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_20b800:
    if (ctx->pc == 0x20B800u) {
        ctx->pc = 0x20B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7FCu;
        // 0x20b800: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B804u;
        goto label_20b804;
    }
    ctx->pc = 0x20B7FCu;
    {
        const bool branch_taken_0x20b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7FCu;
        // 0x20b800: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7fc) {
            ctx->pc = 0x20B814u;
            goto label_20b814;
        }
    }
    ctx->pc = 0x20B804u;
label_20b804:
    // 0x20b804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b808:
    // 0x20b808: 0xc1066b0  jal         func_419AC0
label_20b80c:
    if (ctx->pc == 0x20B80Cu) {
        ctx->pc = 0x20B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B808u;
        // 0x20b80c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B810u;
        goto label_20b810;
    }
    ctx->pc = 0x20B808u;
    SET_GPR_U32(ctx, 31, 0x20B810u);
    ctx->pc = 0x20B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B808u;
    // 0x20b80c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419AC0u, 0x20B808u, 0x20B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B810u;
label_20b810:
    // 0x20b810: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20b814:
    // 0x20b814: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x20b814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_20b818:
    // 0x20b818: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x20b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_20b81c:
    // 0x20b81c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20b820:
    // 0x20b820: 0xc043f0c  jal         func_10FC30
label_20b824:
    if (ctx->pc == 0x20B824u) {
        ctx->pc = 0x20B828u;
        goto label_20b828;
    }
    ctx->pc = 0x20B820u;
    SET_GPR_U32(ctx, 31, 0x20B828u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20B820u, 0x20B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B828u;
label_20b828:
    // 0x20b828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b82c:
    // 0x20b82c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b830:
    // 0x20b830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b834:
    // 0x20b834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b838:
    // 0x20b838: 0x3e00008  jr          $ra
label_20b83c:
    if (ctx->pc == 0x20B83Cu) {
        ctx->pc = 0x20B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B838u;
        // 0x20b83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B840u;
        goto label_fallthrough_0x20b838;
    }
    ctx->pc = 0x20B838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B838u;
        // 0x20b83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b838:
    ctx->pc = 0x20B840u;
}
