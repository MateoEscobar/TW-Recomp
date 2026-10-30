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

// Function: sub_0016B728
// Address: 0x16b728 - 0x16b8b0
void sub_0016B728_0x16b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B728_0x16b728");
#endif

    switch (ctx->pc) {
        case 0x16b728u: goto label_16b728;
        case 0x16b72cu: goto label_16b72c;
        case 0x16b730u: goto label_16b730;
        case 0x16b734u: goto label_16b734;
        case 0x16b738u: goto label_16b738;
        case 0x16b73cu: goto label_16b73c;
        case 0x16b740u: goto label_16b740;
        case 0x16b744u: goto label_16b744;
        case 0x16b748u: goto label_16b748;
        case 0x16b74cu: goto label_16b74c;
        case 0x16b750u: goto label_16b750;
        case 0x16b754u: goto label_16b754;
        case 0x16b758u: goto label_16b758;
        case 0x16b75cu: goto label_16b75c;
        case 0x16b760u: goto label_16b760;
        case 0x16b764u: goto label_16b764;
        case 0x16b768u: goto label_16b768;
        case 0x16b76cu: goto label_16b76c;
        case 0x16b770u: goto label_16b770;
        case 0x16b774u: goto label_16b774;
        case 0x16b778u: goto label_16b778;
        case 0x16b77cu: goto label_16b77c;
        case 0x16b780u: goto label_16b780;
        case 0x16b784u: goto label_16b784;
        case 0x16b788u: goto label_16b788;
        case 0x16b78cu: goto label_16b78c;
        case 0x16b790u: goto label_16b790;
        case 0x16b794u: goto label_16b794;
        case 0x16b798u: goto label_16b798;
        case 0x16b79cu: goto label_16b79c;
        case 0x16b7a0u: goto label_16b7a0;
        case 0x16b7a4u: goto label_16b7a4;
        case 0x16b7a8u: goto label_16b7a8;
        case 0x16b7acu: goto label_16b7ac;
        case 0x16b7b0u: goto label_16b7b0;
        case 0x16b7b4u: goto label_16b7b4;
        case 0x16b7b8u: goto label_16b7b8;
        case 0x16b7bcu: goto label_16b7bc;
        case 0x16b7c0u: goto label_16b7c0;
        case 0x16b7c4u: goto label_16b7c4;
        case 0x16b7c8u: goto label_16b7c8;
        case 0x16b7ccu: goto label_16b7cc;
        case 0x16b7d0u: goto label_16b7d0;
        case 0x16b7d4u: goto label_16b7d4;
        case 0x16b7d8u: goto label_16b7d8;
        case 0x16b7dcu: goto label_16b7dc;
        case 0x16b7e0u: goto label_16b7e0;
        case 0x16b7e4u: goto label_16b7e4;
        case 0x16b7e8u: goto label_16b7e8;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b7f0u: goto label_16b7f0;
        case 0x16b7f4u: goto label_16b7f4;
        case 0x16b7f8u: goto label_16b7f8;
        case 0x16b7fcu: goto label_16b7fc;
        case 0x16b800u: goto label_16b800;
        case 0x16b804u: goto label_16b804;
        case 0x16b808u: goto label_16b808;
        case 0x16b80cu: goto label_16b80c;
        case 0x16b810u: goto label_16b810;
        case 0x16b814u: goto label_16b814;
        case 0x16b818u: goto label_16b818;
        case 0x16b81cu: goto label_16b81c;
        case 0x16b820u: goto label_16b820;
        case 0x16b824u: goto label_16b824;
        case 0x16b828u: goto label_16b828;
        case 0x16b82cu: goto label_16b82c;
        case 0x16b830u: goto label_16b830;
        case 0x16b834u: goto label_16b834;
        case 0x16b838u: goto label_16b838;
        case 0x16b83cu: goto label_16b83c;
        case 0x16b840u: goto label_16b840;
        case 0x16b844u: goto label_16b844;
        case 0x16b848u: goto label_16b848;
        case 0x16b84cu: goto label_16b84c;
        case 0x16b850u: goto label_16b850;
        case 0x16b854u: goto label_16b854;
        case 0x16b858u: goto label_16b858;
        case 0x16b85cu: goto label_16b85c;
        case 0x16b860u: goto label_16b860;
        case 0x16b864u: goto label_16b864;
        case 0x16b868u: goto label_16b868;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b870u: goto label_16b870;
        case 0x16b874u: goto label_16b874;
        case 0x16b878u: goto label_16b878;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b880u: goto label_16b880;
        case 0x16b884u: goto label_16b884;
        case 0x16b888u: goto label_16b888;
        case 0x16b88cu: goto label_16b88c;
        case 0x16b890u: goto label_16b890;
        case 0x16b894u: goto label_16b894;
        case 0x16b898u: goto label_16b898;
        case 0x16b89cu: goto label_16b89c;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8a4u: goto label_16b8a4;
        case 0x16b8a8u: goto label_16b8a8;
        case 0x16b8acu: goto label_16b8ac;
        default: break;
    }

    ctx->pc = 0x16b728u;

label_16b728:
    // 0x16b728: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_16b72c:
    // 0x16b72c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16b730:
    // 0x16b730: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_16b734:
    // 0x16b734: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16b738:
    // 0x16b738: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_16b73c:
    // 0x16b73c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16b740:
    // 0x16b740: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16b740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_16b744:
    // 0x16b744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b748:
    // 0x16b748: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_16b74c:
    // 0x16b74c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16b750:
    // 0x16b750: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_16b754:
    // 0x16b754: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_16b758:
    // 0x16b758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16b75c:
    // 0x16b75c: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
label_16b760:
    if (ctx->pc == 0x16B760u) {
        ctx->pc = 0x16B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B75Cu;
        // 0x16b760: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B764u;
        goto label_16b764;
    }
    ctx->pc = 0x16B75Cu;
    {
        const bool branch_taken_0x16b75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B75Cu;
        // 0x16b760: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b75c) {
            ctx->pc = 0x16B884u;
            goto label_16b884;
        }
    }
    ctx->pc = 0x16B764u;
label_16b764:
    // 0x16b764: 0xc05b0e2  jal         func_16C388
label_16b768:
    if (ctx->pc == 0x16B768u) {
        ctx->pc = 0x16B76Cu;
        goto label_16b76c;
    }
    ctx->pc = 0x16B764u;
    SET_GPR_U32(ctx, 31, 0x16B76Cu);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B764u, 0x16B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B76Cu;
label_16b76c:
    // 0x16b76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b770:
    // 0x16b770: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16b774:
    // 0x16b774: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
label_16b778:
    if (ctx->pc == 0x16B778u) {
        ctx->pc = 0x16B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B774u;
        // 0x16b778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B77Cu;
        goto label_16b77c;
    }
    ctx->pc = 0x16B774u;
    {
        const bool branch_taken_0x16b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b774) {
            ctx->pc = 0x16B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B774u;
            // 0x16b778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B888u;
            goto label_16b888;
        }
    }
    ctx->pc = 0x16B77Cu;
label_16b77c:
    // 0x16b77c: 0xc0e4060  jal         func_390180
label_16b780:
    if (ctx->pc == 0x16B780u) {
        ctx->pc = 0x16B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B77Cu;
        // 0x16b780: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B784u;
        goto label_16b784;
    }
    ctx->pc = 0x16B77Cu;
    SET_GPR_U32(ctx, 31, 0x16B784u);
    ctx->pc = 0x16B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B77Cu;
    // 0x16b780: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x16B77Cu, 0x16B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B784u;
label_16b784:
    // 0x16b784: 0xc08a61a  jal         func_229868
label_16b788:
    if (ctx->pc == 0x16B788u) {
        ctx->pc = 0x16B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B784u;
        // 0x16b788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B78Cu;
        goto label_16b78c;
    }
    ctx->pc = 0x16B784u;
    SET_GPR_U32(ctx, 31, 0x16B78Cu);
    ctx->pc = 0x16B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B784u;
    // 0x16b788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x16B784u, 0x16B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B78Cu;
label_16b78c:
    // 0x16b78c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16b78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b790:
    // 0x16b790: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
label_16b794:
    if (ctx->pc == 0x16B794u) {
        ctx->pc = 0x16B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B790u;
        // 0x16b794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B798u;
        goto label_16b798;
    }
    ctx->pc = 0x16B790u;
    {
        const bool branch_taken_0x16b790 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B790u;
        // 0x16b794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b790) {
            ctx->pc = 0x16B884u;
            goto label_16b884;
        }
    }
    ctx->pc = 0x16B798u;
label_16b798:
    // 0x16b798: 0x8e15002c  lw          $s5, 0x2C($s0)
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16b79c:
    // 0x16b79c: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
label_16b7a0:
    if (ctx->pc == 0x16B7A0u) {
        ctx->pc = 0x16B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B79Cu;
        // 0x16b7a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B7A4u;
        goto label_16b7a4;
    }
    ctx->pc = 0x16B79Cu;
    {
        const bool branch_taken_0x16b79c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B79Cu;
        // 0x16b7a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b79c) {
            ctx->pc = 0x16B7B8u;
            goto label_16b7b8;
        }
    }
    ctx->pc = 0x16B7A4u;
label_16b7a4:
    // 0x16b7a4: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x16b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_16b7a8:
    // 0x16b7a8: 0x24c6cb58  addiu       $a2, $a2, -0x34A8
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953816));
label_16b7ac:
    // 0x16b7ac: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_16b7b0:
    // 0x16b7b0: 0xc05905e  jal         func_164178
label_16b7b4:
    if (ctx->pc == 0x16B7B4u) {
        ctx->pc = 0x16B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7B0u;
        // 0x16b7b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B7B8u;
        goto label_16b7b8;
    }
    ctx->pc = 0x16B7B0u;
    SET_GPR_U32(ctx, 31, 0x16B7B8u);
    ctx->pc = 0x16B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7B0u;
    // 0x16b7b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16B7B0u, 0x16B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7B8u;
label_16b7b8:
    // 0x16b7b8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x16b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16b7bc:
    // 0x16b7bc: 0x26130048  addiu       $s3, $s0, 0x48
    ctx->pc = 0x16b7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_16b7c0:
    // 0x16b7c0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x16b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16b7c4:
    // 0x16b7c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16b7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b7c8:
    // 0x16b7c8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x16b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16b7cc:
    // 0x16b7cc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16b7ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b7d0:
    // 0x16b7d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16b7d4:
    // 0x16b7d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16b7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b7d8:
    // 0x16b7d8: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x16b7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_16b7dc:
    // 0x16b7dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x16b7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16b7e0:
    // 0x16b7e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x16b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16b7e4:
    // 0x16b7e4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x16b7e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16b7e8:
    // 0x16b7e8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x16b7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16b7ec:
    // 0x16b7ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b7f0:
    // 0x16b7f0: 0xc137826  jal         func_4DE098
label_16b7f4:
    if (ctx->pc == 0x16B7F4u) {
        ctx->pc = 0x16B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7F0u;
        // 0x16b7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B7F8u;
        goto label_16b7f8;
    }
    ctx->pc = 0x16B7F0u;
    SET_GPR_U32(ctx, 31, 0x16B7F8u);
    ctx->pc = 0x16B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7F0u;
    // 0x16b7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16B7F0u, 0x16B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7F8u;
label_16b7f8:
    // 0x16b7f8: 0xc0e409a  jal         func_390268
label_16b7fc:
    if (ctx->pc == 0x16B7FCu) {
        ctx->pc = 0x16B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7F8u;
        // 0x16b7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B800u;
        goto label_16b800;
    }
    ctx->pc = 0x16B7F8u;
    SET_GPR_U32(ctx, 31, 0x16B800u);
    ctx->pc = 0x16B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7F8u;
    // 0x16b7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B7F8u, 0x16B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B800u;
label_16b800:
    // 0x16b800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b804:
    // 0x16b804: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_16b808:
    if (ctx->pc == 0x16B808u) {
        ctx->pc = 0x16B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B804u;
        // 0x16b808: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B80Cu;
        goto label_16b80c;
    }
    ctx->pc = 0x16B804u;
    {
        const bool branch_taken_0x16b804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b804) {
            ctx->pc = 0x16B808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B804u;
            // 0x16b808: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B80Cu;
label_16b80c:
    // 0x16b80c: 0xc087502  jal         func_21D408
label_16b810:
    if (ctx->pc == 0x16B810u) {
        ctx->pc = 0x16B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B80Cu;
        // 0x16b810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B814u;
        goto label_16b814;
    }
    ctx->pc = 0x16B80Cu;
    SET_GPR_U32(ctx, 31, 0x16B814u);
    ctx->pc = 0x16B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B80Cu;
    // 0x16b810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B80Cu, 0x16B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B814u;
label_16b814:
    // 0x16b814: 0xa056028d  sb          $s6, 0x28D($v0)
    ctx->pc = 0x16b814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 653), (uint8_t)GPR_U32(ctx, 22));
label_16b818:
    // 0x16b818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16b81c:
    // 0x16b81c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16b81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16b820:
    // 0x16b820: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16b824:
    // 0x16b824: 0x40f809  jalr        $v0
label_16b828:
    if (ctx->pc == 0x16B828u) {
        ctx->pc = 0x16B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B824u;
        // 0x16b828: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B82Cu;
        goto label_16b82c;
    }
    ctx->pc = 0x16B824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16B82Cu);
        ctx->pc = 0x16B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B824u;
        // 0x16b828: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B824u, 0x16B82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16B82Cu;
label_16b82c:
    // 0x16b82c: 0x8e47bd30  lw          $a3, -0x42D0($s2)
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_16b830:
    // 0x16b830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b834:
    // 0x16b834: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x16b834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16b838:
    // 0x16b838: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16b83c:
    // 0x16b83c: 0xc0b0b60  jal         func_2C2D80
label_16b840:
    if (ctx->pc == 0x16B840u) {
        ctx->pc = 0x16B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B83Cu;
        // 0x16b840: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B844u;
        goto label_16b844;
    }
    ctx->pc = 0x16B83Cu;
    SET_GPR_U32(ctx, 31, 0x16B844u);
    ctx->pc = 0x16B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B83Cu;
    // 0x16b840: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D80u, 0x16B83Cu, 0x16B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B844u;
label_16b844:
    // 0x16b844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16b844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16b848:
    // 0x16b848: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x16b848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16b84c:
    // 0x16b84c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_16b850:
    if (ctx->pc == 0x16B850u) {
        ctx->pc = 0x16B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B84Cu;
        // 0x16b850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B854u;
        goto label_16b854;
    }
    ctx->pc = 0x16B84Cu;
    {
        const bool branch_taken_0x16b84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B84Cu;
        // 0x16b850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b84c) {
            ctx->pc = 0x16B7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b7f0;
        }
    }
    ctx->pc = 0x16B854u;
label_16b854:
    // 0x16b854: 0xc087502  jal         func_21D408
label_16b858:
    if (ctx->pc == 0x16B858u) {
        ctx->pc = 0x16B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B854u;
        // 0x16b858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B85Cu;
        goto label_16b85c;
    }
    ctx->pc = 0x16B854u;
    SET_GPR_U32(ctx, 31, 0x16B85Cu);
    ctx->pc = 0x16B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B854u;
    // 0x16b858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B854u, 0x16B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B85Cu;
label_16b85c:
    // 0x16b85c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16b860:
    // 0x16b860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b864:
    // 0x16b864: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
label_16b868:
    if (ctx->pc == 0x16B868u) {
        ctx->pc = 0x16B86Cu;
        goto label_16b86c;
    }
    ctx->pc = 0x16B864u;
    {
        const bool branch_taken_0x16b864 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b864) {
            ctx->pc = 0x16B87Cu;
            goto label_16b87c;
        }
    }
    ctx->pc = 0x16B86Cu;
label_16b86c:
    // 0x16b86c: 0xc05a61e  jal         func_169878
label_16b870:
    if (ctx->pc == 0x16B870u) {
        ctx->pc = 0x16B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B86Cu;
        // 0x16b870: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B874u;
        goto label_16b874;
    }
    ctx->pc = 0x16B86Cu;
    SET_GPR_U32(ctx, 31, 0x16B874u);
    ctx->pc = 0x16B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B86Cu;
    // 0x16b870: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x16B86Cu, 0x16B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B874u;
label_16b874:
    // 0x16b874: 0x10000004  b           . + 4 + (0x4 << 2)
label_16b878:
    if (ctx->pc == 0x16B878u) {
        ctx->pc = 0x16B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B874u;
        // 0x16b878: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B87Cu;
        goto label_16b87c;
    }
    ctx->pc = 0x16B874u;
    {
        const bool branch_taken_0x16b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B874u;
        // 0x16b878: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b874) {
            ctx->pc = 0x16B888u;
            goto label_16b888;
        }
    }
    ctx->pc = 0x16B87Cu;
label_16b87c:
    // 0x16b87c: 0xc05a632  jal         func_1698C8
label_16b880:
    if (ctx->pc == 0x16B880u) {
        ctx->pc = 0x16B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B87Cu;
        // 0x16b880: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B884u;
        goto label_16b884;
    }
    ctx->pc = 0x16B87Cu;
    SET_GPR_U32(ctx, 31, 0x16B884u);
    ctx->pc = 0x16B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B87Cu;
    // 0x16b880: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x16B87Cu, 0x16B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B884u;
label_16b884:
    // 0x16b884: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16b884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16b888:
    // 0x16b888: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16b888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16b88c:
    // 0x16b88c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16b88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16b890:
    // 0x16b890: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16b890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16b894:
    // 0x16b894: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16b894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16b898:
    // 0x16b898: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16b898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b89c:
    // 0x16b89c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16b89cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b8a0:
    // 0x16b8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16b8a4:
    // 0x16b8a4: 0x3e00008  jr          $ra
label_16b8a8:
    if (ctx->pc == 0x16B8A8u) {
        ctx->pc = 0x16B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8A4u;
        // 0x16b8a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B8ACu;
        goto label_16b8ac;
    }
    ctx->pc = 0x16B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8A4u;
        // 0x16b8a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B8ACu;
label_16b8ac:
    // 0x16b8ac: 0x0  nop
    ctx->pc = 0x16b8acu;
    // NOP
    ctx->pc = 0x16b8b0u;
}
