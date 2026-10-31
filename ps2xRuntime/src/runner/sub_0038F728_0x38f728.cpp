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

// Function: sub_0038F728
// Address: 0x38f728 - 0x38f8a8
void sub_0038F728_0x38f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F728_0x38f728");
#endif

    switch (ctx->pc) {
        case 0x38f728u: goto label_38f728;
        case 0x38f72cu: goto label_38f72c;
        case 0x38f730u: goto label_38f730;
        case 0x38f734u: goto label_38f734;
        case 0x38f738u: goto label_38f738;
        case 0x38f73cu: goto label_38f73c;
        case 0x38f740u: goto label_38f740;
        case 0x38f744u: goto label_38f744;
        case 0x38f748u: goto label_38f748;
        case 0x38f74cu: goto label_38f74c;
        case 0x38f750u: goto label_38f750;
        case 0x38f754u: goto label_38f754;
        case 0x38f758u: goto label_38f758;
        case 0x38f75cu: goto label_38f75c;
        case 0x38f760u: goto label_38f760;
        case 0x38f764u: goto label_38f764;
        case 0x38f768u: goto label_38f768;
        case 0x38f76cu: goto label_38f76c;
        case 0x38f770u: goto label_38f770;
        case 0x38f774u: goto label_38f774;
        case 0x38f778u: goto label_38f778;
        case 0x38f77cu: goto label_38f77c;
        case 0x38f780u: goto label_38f780;
        case 0x38f784u: goto label_38f784;
        case 0x38f788u: goto label_38f788;
        case 0x38f78cu: goto label_38f78c;
        case 0x38f790u: goto label_38f790;
        case 0x38f794u: goto label_38f794;
        case 0x38f798u: goto label_38f798;
        case 0x38f79cu: goto label_38f79c;
        case 0x38f7a0u: goto label_38f7a0;
        case 0x38f7a4u: goto label_38f7a4;
        case 0x38f7a8u: goto label_38f7a8;
        case 0x38f7acu: goto label_38f7ac;
        case 0x38f7b0u: goto label_38f7b0;
        case 0x38f7b4u: goto label_38f7b4;
        case 0x38f7b8u: goto label_38f7b8;
        case 0x38f7bcu: goto label_38f7bc;
        case 0x38f7c0u: goto label_38f7c0;
        case 0x38f7c4u: goto label_38f7c4;
        case 0x38f7c8u: goto label_38f7c8;
        case 0x38f7ccu: goto label_38f7cc;
        case 0x38f7d0u: goto label_38f7d0;
        case 0x38f7d4u: goto label_38f7d4;
        case 0x38f7d8u: goto label_38f7d8;
        case 0x38f7dcu: goto label_38f7dc;
        case 0x38f7e0u: goto label_38f7e0;
        case 0x38f7e4u: goto label_38f7e4;
        case 0x38f7e8u: goto label_38f7e8;
        case 0x38f7ecu: goto label_38f7ec;
        case 0x38f7f0u: goto label_38f7f0;
        case 0x38f7f4u: goto label_38f7f4;
        case 0x38f7f8u: goto label_38f7f8;
        case 0x38f7fcu: goto label_38f7fc;
        case 0x38f800u: goto label_38f800;
        case 0x38f804u: goto label_38f804;
        case 0x38f808u: goto label_38f808;
        case 0x38f80cu: goto label_38f80c;
        case 0x38f810u: goto label_38f810;
        case 0x38f814u: goto label_38f814;
        case 0x38f818u: goto label_38f818;
        case 0x38f81cu: goto label_38f81c;
        case 0x38f820u: goto label_38f820;
        case 0x38f824u: goto label_38f824;
        case 0x38f828u: goto label_38f828;
        case 0x38f82cu: goto label_38f82c;
        case 0x38f830u: goto label_38f830;
        case 0x38f834u: goto label_38f834;
        case 0x38f838u: goto label_38f838;
        case 0x38f83cu: goto label_38f83c;
        case 0x38f840u: goto label_38f840;
        case 0x38f844u: goto label_38f844;
        case 0x38f848u: goto label_38f848;
        case 0x38f84cu: goto label_38f84c;
        case 0x38f850u: goto label_38f850;
        case 0x38f854u: goto label_38f854;
        case 0x38f858u: goto label_38f858;
        case 0x38f85cu: goto label_38f85c;
        case 0x38f860u: goto label_38f860;
        case 0x38f864u: goto label_38f864;
        case 0x38f868u: goto label_38f868;
        case 0x38f86cu: goto label_38f86c;
        case 0x38f870u: goto label_38f870;
        case 0x38f874u: goto label_38f874;
        case 0x38f878u: goto label_38f878;
        case 0x38f87cu: goto label_38f87c;
        case 0x38f880u: goto label_38f880;
        case 0x38f884u: goto label_38f884;
        case 0x38f888u: goto label_38f888;
        case 0x38f88cu: goto label_38f88c;
        case 0x38f890u: goto label_38f890;
        case 0x38f894u: goto label_38f894;
        case 0x38f898u: goto label_38f898;
        case 0x38f89cu: goto label_38f89c;
        case 0x38f8a0u: goto label_38f8a0;
        case 0x38f8a4u: goto label_38f8a4;
        default: break;
    }

    ctx->pc = 0x38f728u;

label_38f728:
    // 0x38f728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38f72c:
    // 0x38f72c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38f730:
    // 0x38f730: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38f734:
    // 0x38f734: 0x24425078  addiu       $v0, $v0, 0x5078
    ctx->pc = 0x38f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
label_38f738:
    // 0x38f738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38f73c:
    // 0x38f73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f740:
    // 0x38f740: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38f740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38f744:
    // 0x38f744: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38f744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38f748:
    // 0x38f748: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38f748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38f74c:
    // 0x38f74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f750:
    // 0x38f750: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38f754:
    // 0x38f754: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x38f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38f758:
    // 0x38f758: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_38f75c:
    if (ctx->pc == 0x38F75Cu) {
        ctx->pc = 0x38F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F758u;
        // 0x38f75c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F760u;
        goto label_38f760;
    }
    ctx->pc = 0x38F758u;
    {
        const bool branch_taken_0x38f758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F758u;
        // 0x38f75c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f758) {
            ctx->pc = 0x38F800u;
            goto label_38f800;
        }
    }
    ctx->pc = 0x38F760u;
label_38f760:
    // 0x38f760: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38f764:
    // 0x38f764: 0x0  nop
    ctx->pc = 0x38f764u;
    // NOP
label_38f768:
    // 0x38f768: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x38f768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38f76c:
    // 0x38f76c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f770:
    // 0x38f770: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x38f770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_38f774:
    // 0x38f774: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x38f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38f778:
    // 0x38f778: 0x40f809  jalr        $v0
label_38f77c:
    if (ctx->pc == 0x38F77Cu) {
        ctx->pc = 0x38F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F778u;
        // 0x38f77c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F780u;
        goto label_38f780;
    }
    ctx->pc = 0x38F778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F780u);
        ctx->pc = 0x38F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F778u;
        // 0x38f77c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F778u, 0x38F780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F780u;
label_38f780:
    // 0x38f780: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_38f784:
    if (ctx->pc == 0x38F784u) {
        ctx->pc = 0x38F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F780u;
        // 0x38f784: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F788u;
        goto label_38f788;
    }
    ctx->pc = 0x38F780u;
    {
        const bool branch_taken_0x38f780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f780) {
            ctx->pc = 0x38F784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F780u;
            // 0x38f784: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F7F8u;
            goto label_38f7f8;
        }
    }
    ctx->pc = 0x38F788u;
label_38f788:
    // 0x38f788: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x38f788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38f78c:
    // 0x38f78c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f790:
    // 0x38f790: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_38f794:
    if (ctx->pc == 0x38F794u) {
        ctx->pc = 0x38F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F790u;
        // 0x38f794: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F798u;
        goto label_38f798;
    }
    ctx->pc = 0x38F790u;
    {
        const bool branch_taken_0x38f790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F790u;
        // 0x38f794: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f790) {
            ctx->pc = 0x38F7F4u;
            goto label_38f7f4;
        }
    }
    ctx->pc = 0x38F798u;
label_38f798:
    // 0x38f798: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x38f798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38f79c:
    // 0x38f79c: 0x0  nop
    ctx->pc = 0x38f79cu;
    // NOP
label_38f7a0:
    // 0x38f7a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38f7a4:
    // 0x38f7a4: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x38f7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_38f7a8:
    // 0x38f7a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38f7ac:
    // 0x38f7ac: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_38f7b0:
    if (ctx->pc == 0x38F7B0u) {
        ctx->pc = 0x38F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7ACu;
        // 0x38f7b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7B4u;
        goto label_38f7b4;
    }
    ctx->pc = 0x38F7ACu;
    {
        const bool branch_taken_0x38f7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x38F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7ACu;
        // 0x38f7b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f7ac) {
            ctx->pc = 0x38F7E4u;
            goto label_38f7e4;
        }
    }
    ctx->pc = 0x38F7B4u;
label_38f7b4:
    // 0x38f7b4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x38f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38f7b8:
    // 0x38f7b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x38f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_38f7bc:
    // 0x38f7bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x38f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38f7c0:
    // 0x38f7c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x38f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_38f7c4:
    // 0x38f7c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38f7c8:
    // 0x38f7c8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x38f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_38f7cc:
    // 0x38f7cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38f7d0:
    // 0x38f7d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38f7d4:
    // 0x38f7d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38f7d8:
    // 0x38f7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38f7dc:
    // 0x38f7dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_38f7e0:
    if (ctx->pc == 0x38F7E0u) {
        ctx->pc = 0x38F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7DCu;
        // 0x38f7e0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7E4u;
        goto label_38f7e4;
    }
    ctx->pc = 0x38F7DCu;
    {
        const bool branch_taken_0x38f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7DCu;
        // 0x38f7e0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f7dc) {
            ctx->pc = 0x38F7F4u;
            goto label_38f7f4;
        }
    }
    ctx->pc = 0x38F7E4u;
label_38f7e4:
    // 0x38f7e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x38f7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38f7e8:
    // 0x38f7e8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x38f7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_38f7ec:
    // 0x38f7ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_38f7f0:
    if (ctx->pc == 0x38F7F0u) {
        ctx->pc = 0x38F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7ECu;
        // 0x38f7f0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7F4u;
        goto label_38f7f4;
    }
    ctx->pc = 0x38F7ECu;
    {
        const bool branch_taken_0x38f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f7ec) {
            ctx->pc = 0x38F7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F7ECu;
            // 0x38f7f0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f7a0;
        }
    }
    ctx->pc = 0x38F7F4u;
label_38f7f4:
    // 0x38f7f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38f7f8:
    // 0x38f7f8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_38f7fc:
    if (ctx->pc == 0x38F7FCu) {
        ctx->pc = 0x38F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7F8u;
        // 0x38f7fc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F800u;
        goto label_38f800;
    }
    ctx->pc = 0x38F7F8u;
    {
        const bool branch_taken_0x38f7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f7f8) {
            ctx->pc = 0x38F7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F7F8u;
            // 0x38f7fc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f768;
        }
    }
    ctx->pc = 0x38F800u;
label_38f800:
    // 0x38f800: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38f800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38f804:
    // 0x38f804: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x38f804u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_38f808:
    // 0x38f808: 0x244250d8  addiu       $v0, $v0, 0x50D8
    ctx->pc = 0x38f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20696));
label_38f80c:
    // 0x38f80c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38f80cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38f810:
    // 0x38f810: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38f814:
    // 0x38f814: 0x26100b78  addiu       $s0, $s0, 0xB78
    ctx->pc = 0x38f814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2936));
label_38f818:
    // 0x38f818: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x38f818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38f81c:
    // 0x38f81c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38f81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f820:
    // 0x38f820: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38f824:
    // 0x38f824: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x38f824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_38f828:
    // 0x38f828: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x38f828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_38f82c:
    // 0x38f82c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x38f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38f830:
    // 0x38f830: 0x60f809  jalr        $v1
label_38f834:
    if (ctx->pc == 0x38F834u) {
        ctx->pc = 0x38F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F830u;
        // 0x38f834: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F838u;
        goto label_38f838;
    }
    ctx->pc = 0x38F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F838u);
        ctx->pc = 0x38F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F830u;
        // 0x38f834: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F830u, 0x38F838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F838u;
label_38f838:
    // 0x38f838: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x38f838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_38f83c:
    // 0x38f83c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38f83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f840:
    // 0x38f840: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38f840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_38f844:
    // 0x38f844: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x38f844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_38f848:
    // 0x38f848: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38f84c:
    // 0x38f84c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38f850:
    // 0x38f850: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x38f850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_38f854:
    // 0x38f854: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x38f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_38f858:
    // 0x38f858: 0x60f809  jalr        $v1
label_38f85c:
    if (ctx->pc == 0x38F85Cu) {
        ctx->pc = 0x38F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F858u;
        // 0x38f85c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F860u;
        goto label_38f860;
    }
    ctx->pc = 0x38F858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F860u);
        ctx->pc = 0x38F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F858u;
        // 0x38f85c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F858u, 0x38F860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F860u;
label_38f860:
    // 0x38f860: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38f860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38f864:
    // 0x38f864: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x38f864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_38f868:
    // 0x38f868: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x38f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_38f86c:
    // 0x38f86c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x38f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_38f870:
    // 0x38f870: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38f874:
    // 0x38f874: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x38f874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_38f878:
    // 0x38f878: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38f87c:
    if (ctx->pc == 0x38F87Cu) {
        ctx->pc = 0x38F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F878u;
        // 0x38f87c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F880u;
        goto label_38f880;
    }
    ctx->pc = 0x38F878u;
    {
        const bool branch_taken_0x38f878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F878u;
        // 0x38f87c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f878) {
            ctx->pc = 0x38F888u;
            goto label_38f888;
        }
    }
    ctx->pc = 0x38F880u;
label_38f880:
    // 0x38f880: 0xc10b208  jal         func_42C820
label_38f884:
    if (ctx->pc == 0x38F884u) {
        ctx->pc = 0x38F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F880u;
        // 0x38f884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F888u;
        goto label_38f888;
    }
    ctx->pc = 0x38F880u;
    SET_GPR_U32(ctx, 31, 0x38F888u);
    ctx->pc = 0x38F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F880u;
    // 0x38f884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x38F880u, 0x38F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F888u;
label_38f888:
    // 0x38f888: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f88c:
    // 0x38f88c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f890:
    // 0x38f890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f894:
    // 0x38f894: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38f894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f898:
    // 0x38f898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f89c:
    // 0x38f89c: 0x3e00008  jr          $ra
label_38f8a0:
    if (ctx->pc == 0x38F8A0u) {
        ctx->pc = 0x38F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F89Cu;
        // 0x38f8a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F8A4u;
        goto label_38f8a4;
    }
    ctx->pc = 0x38F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F89Cu;
        // 0x38f8a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F8A4u;
label_38f8a4:
    // 0x38f8a4: 0x0  nop
    ctx->pc = 0x38f8a4u;
    // NOP
    ctx->pc = 0x38f8a8u;
}
