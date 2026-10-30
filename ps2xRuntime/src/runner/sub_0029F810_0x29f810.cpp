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

// Function: sub_0029F810
// Address: 0x29f810 - 0x29f8e8
void sub_0029F810_0x29f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F810_0x29f810");
#endif

    switch (ctx->pc) {
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        case 0x29f8d8u: goto label_29f8d8;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8e0u: goto label_29f8e0;
        case 0x29f8e4u: goto label_29f8e4;
        default: break;
    }

    ctx->pc = 0x29f810u;

label_29f810:
    // 0x29f810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29f814:
    // 0x29f814: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x29f814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_29f818:
    // 0x29f818: 0x24842480  addiu       $a0, $a0, 0x2480
    ctx->pc = 0x29f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9344));
label_29f81c:
    // 0x29f81c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29f81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_29f820:
    // 0x29f820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f824:
    // 0x29f824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29f828:
    // 0x29f828: 0xc05b526  jal         func_16D498
label_29f82c:
    if (ctx->pc == 0x29F82Cu) {
        ctx->pc = 0x29F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F828u;
        // 0x29f82c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F830u;
        goto label_29f830;
    }
    ctx->pc = 0x29F828u;
    SET_GPR_U32(ctx, 31, 0x29F830u);
    ctx->pc = 0x29F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F828u;
    // 0x29f82c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D498u, 0x29F828u, 0x29F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F830u;
label_29f830:
    // 0x29f830: 0xc05b0e2  jal         func_16C388
label_29f834:
    if (ctx->pc == 0x29F834u) {
        ctx->pc = 0x29F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F830u;
        // 0x29f834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F838u;
        goto label_29f838;
    }
    ctx->pc = 0x29F830u;
    SET_GPR_U32(ctx, 31, 0x29F838u);
    ctx->pc = 0x29F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F830u;
    // 0x29f834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x29F830u, 0x29F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F838u;
label_29f838:
    // 0x29f838: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_29f83c:
    if (ctx->pc == 0x29F83Cu) {
        ctx->pc = 0x29F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F838u;
        // 0x29f83c: 0x24510048  addiu       $s1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F840u;
        goto label_29f840;
    }
    ctx->pc = 0x29F838u;
    {
        const bool branch_taken_0x29f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F838u;
        // 0x29f83c: 0x24510048  addiu       $s1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f838) {
            ctx->pc = 0x29F8CCu;
            goto label_29f8cc;
        }
    }
    ctx->pc = 0x29F840u;
label_29f840:
    // 0x29f840: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29f840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29f844:
    // 0x29f844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f848:
    // 0x29f848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f84c:
    // 0x29f84c: 0x0  nop
    ctx->pc = 0x29f84cu;
    // NOP
label_29f850:
    // 0x29f850: 0xc137826  jal         func_4DE098
label_29f854:
    if (ctx->pc == 0x29F854u) {
        ctx->pc = 0x29F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F850u;
        // 0x29f854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F858u;
        goto label_29f858;
    }
    ctx->pc = 0x29F850u;
    SET_GPR_U32(ctx, 31, 0x29F858u);
    ctx->pc = 0x29F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F850u;
    // 0x29f854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29F850u, 0x29F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F858u;
label_29f858:
    // 0x29f858: 0xc0e409a  jal         func_390268
label_29f85c:
    if (ctx->pc == 0x29F85Cu) {
        ctx->pc = 0x29F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F858u;
        // 0x29f85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F860u;
        goto label_29f860;
    }
    ctx->pc = 0x29F858u;
    SET_GPR_U32(ctx, 31, 0x29F860u);
    ctx->pc = 0x29F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F858u;
    // 0x29f85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F858u, 0x29F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F860u;
label_29f860:
    // 0x29f860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f864:
    // 0x29f864: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_29f868:
    if (ctx->pc == 0x29F868u) {
        ctx->pc = 0x29F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F864u;
        // 0x29f868: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F86Cu;
        goto label_29f86c;
    }
    ctx->pc = 0x29F864u;
    {
        const bool branch_taken_0x29f864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f864) {
            ctx->pc = 0x29F868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F864u;
            // 0x29f868: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F86Cu;
label_29f86c:
    // 0x29f86c: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x29f86cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_29f870:
    // 0x29f870: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29f870u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_29f874:
    // 0x29f874: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_29f878:
    if (ctx->pc == 0x29F878u) {
        ctx->pc = 0x29F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F874u;
        // 0x29f878: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F87Cu;
        goto label_29f87c;
    }
    ctx->pc = 0x29F874u;
    {
        const bool branch_taken_0x29f874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f874) {
            ctx->pc = 0x29F878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F874u;
            // 0x29f878: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F87Cu;
label_29f87c:
    // 0x29f87c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f880:
    // 0x29f880: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29f880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29f884:
    // 0x29f884: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29f888:
    // 0x29f888: 0x40f809  jalr        $v0
label_29f88c:
    if (ctx->pc == 0x29F88Cu) {
        ctx->pc = 0x29F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F888u;
        // 0x29f88c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F890u;
        goto label_29f890;
    }
    ctx->pc = 0x29F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F890u);
        ctx->pc = 0x29F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F888u;
        // 0x29f88c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F888u, 0x29F890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F890u;
label_29f890:
    // 0x29f890: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_29f894:
    // 0x29f894: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29f894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f898:
    // 0x29f898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f89c:
    // 0x29f89c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x29f89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_29f8a0:
    // 0x29f8a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29f8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_29f8a4:
    // 0x29f8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f8a8:
    // 0x29f8a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x29f8a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_29f8ac:
    // 0x29f8ac: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x29f8acu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_29f8b0:
    // 0x29f8b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f8b4:
    // 0x29f8b4: 0xc0b8c24  jal         func_2E3090
label_29f8b8:
    if (ctx->pc == 0x29F8B8u) {
        ctx->pc = 0x29F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8B4u;
        // 0x29f8b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8BCu;
        goto label_29f8bc;
    }
    ctx->pc = 0x29F8B4u;
    SET_GPR_U32(ctx, 31, 0x29F8BCu);
    ctx->pc = 0x29F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8B4u;
    // 0x29f8b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x29F8B4u, 0x29F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8BCu;
label_29f8bc:
    // 0x29f8bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29f8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29f8c0:
    // 0x29f8c0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x29f8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_29f8c4:
    // 0x29f8c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_29f8c8:
    if (ctx->pc == 0x29F8C8u) {
        ctx->pc = 0x29F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8C4u;
        // 0x29f8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8CCu;
        goto label_29f8cc;
    }
    ctx->pc = 0x29F8C4u;
    {
        const bool branch_taken_0x29f8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8C4u;
        // 0x29f8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8c4) {
            ctx->pc = 0x29F850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f850;
        }
    }
    ctx->pc = 0x29F8CCu;
label_29f8cc:
    // 0x29f8cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29f8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f8d0:
    // 0x29f8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f8d4:
    // 0x29f8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f8d8:
    // 0x29f8d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x29f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29f8dc:
    // 0x29f8dc: 0x3e00008  jr          $ra
label_29f8e0:
    if (ctx->pc == 0x29F8E0u) {
        ctx->pc = 0x29F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8DCu;
        // 0x29f8e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8E4u;
        goto label_29f8e4;
    }
    ctx->pc = 0x29F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8DCu;
        // 0x29f8e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F8E4u;
label_29f8e4:
    // 0x29f8e4: 0x0  nop
    ctx->pc = 0x29f8e4u;
    // NOP
    ctx->pc = 0x29f8e8u;
}
