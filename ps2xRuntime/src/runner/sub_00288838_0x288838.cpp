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

// Function: sub_00288838
// Address: 0x288838 - 0x288a48
void sub_00288838_0x288838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288838_0x288838");
#endif

    switch (ctx->pc) {
        case 0x288854u: goto label_288854;
        case 0x288870u: goto label_288870;
        case 0x288888u: goto label_288888;
        case 0x288898u: goto label_288898;
        case 0x2888b8u: goto label_2888b8;
        case 0x2888c8u: goto label_2888c8;
        case 0x2888dcu: goto label_2888dc;
        case 0x2888f0u: goto label_2888f0;
        case 0x288904u: goto label_288904;
        case 0x28891cu: goto label_28891c;
        case 0x288930u: goto label_288930;
        case 0x288944u: goto label_288944;
        case 0x288994u: goto label_288994;
        case 0x2889a8u: goto label_2889a8;
        case 0x2889c8u: goto label_2889c8;
        case 0x2889d4u: goto label_2889d4;
        case 0x2889e4u: goto label_2889e4;
        case 0x2889ecu: goto label_2889ec;
        case 0x2889fcu: goto label_2889fc;
        case 0x288a20u: goto label_288a20;
        default: break;
    }

    ctx->pc = 0x288838u;

    // 0x288838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28883c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288844: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28884c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x28884Cu;
    SET_GPR_U32(ctx, 31, 0x288854u);
    ctx->pc = 0x288850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28884Cu;
    // 0x288850: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28884Cu, 0x288854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288854u;
label_288854:
    // 0x288854: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x288854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x288858: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x288858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x28885c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x28885cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x288860: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x288860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x288864: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x288864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x288868: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x288868u;
    SET_GPR_U32(ctx, 31, 0x288870u);
    ctx->pc = 0x28886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288868u;
    // 0x28886c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x288868u, 0x288870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288870u;
label_288870:
    // 0x288870: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x288870u;
    {
        const bool branch_taken_0x288870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288870u;
        // 0x288874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288870) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288878u;
    // 0x288878: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x28887c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288880: 0xc089998  jal         func_226660
    ctx->pc = 0x288880u;
    SET_GPR_U32(ctx, 31, 0x288888u);
    ctx->pc = 0x288884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288880u;
    // 0x288884: 0x34a5101f  ori         $a1, $a1, 0x101F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x288880u, 0x288888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288888u;
label_288888:
    // 0x288888: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x288888u;
    {
        const bool branch_taken_0x288888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288888u;
        // 0x28888c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288888) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288890u;
    // 0x288890: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288890u;
    SET_GPR_U32(ctx, 31, 0x288898u);
    ctx->pc = 0x288894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288890u;
    // 0x288894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288890u, 0x288898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288898u;
label_288898:
    // 0x288898: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x288898u;
    {
        const bool branch_taken_0x288898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288898u;
        // 0x28889c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288898) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x2888A0u;
    // 0x2888a0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2888a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2888a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888a8: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x2888a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x2888ac: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2888acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2888b0: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x2888B0u;
    SET_GPR_U32(ctx, 31, 0x2888B8u);
    ctx->pc = 0x2888B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888B0u;
    // 0x2888b4: 0xac4000b8  sw          $zero, 0xB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x2888B0u, 0x2888B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888B8u;
label_2888b8:
    // 0x2888b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2888B8u;
    {
        const bool branch_taken_0x2888b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888b8) {
            ctx->pc = 0x2888D4u;
            goto label_2888d4;
        }
    }
    ctx->pc = 0x2888C0u;
    // 0x2888c0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2888C0u;
    SET_GPR_U32(ctx, 31, 0x2888C8u);
    ctx->pc = 0x2888C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888C0u;
    // 0x2888c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2888C0u, 0x2888C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888C8u;
label_2888c8:
    // 0x2888c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2888c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2888cc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2888CCu;
    {
        const bool branch_taken_0x2888cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2888cc) {
            ctx->pc = 0x2888FCu;
            goto label_2888fc;
        }
    }
    ctx->pc = 0x2888D4u;
label_2888d4:
    // 0x2888d4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2888D4u;
    SET_GPR_U32(ctx, 31, 0x2888DCu);
    ctx->pc = 0x2888D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888D4u;
    // 0x2888d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2888D4u, 0x2888DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888DCu;
label_2888dc:
    // 0x2888dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2888dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2888e0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2888E0u;
    {
        const bool branch_taken_0x2888e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2888e0) {
            ctx->pc = 0x2888FCu;
            goto label_2888fc;
        }
    }
    ctx->pc = 0x2888E8u;
    // 0x2888e8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2888E8u;
    SET_GPR_U32(ctx, 31, 0x2888F0u);
    ctx->pc = 0x2888ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888E8u;
    // 0x2888ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2888E8u, 0x2888F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888F0u;
label_2888f0:
    // 0x2888f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2888f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2888f4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2888F4u;
    {
        const bool branch_taken_0x2888f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2888f4) {
            ctx->pc = 0x288914u;
            goto label_288914;
        }
    }
    ctx->pc = 0x2888FCu;
label_2888fc:
    // 0x2888fc: 0xc0a2036  jal         func_2880D8
    ctx->pc = 0x2888FCu;
    SET_GPR_U32(ctx, 31, 0x288904u);
    ctx->pc = 0x288900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888FCu;
    // 0x288900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880D8u, 0x2888FCu, 0x288904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288904u;
label_288904:
    // 0x288904: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x288904u;
    {
        const bool branch_taken_0x288904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288904u;
        // 0x288908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288904) {
            ctx->pc = 0x288A2Cu;
            goto label_288a2c;
        }
    }
    ctx->pc = 0x28890Cu;
    // 0x28890c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x28890Cu;
    {
        const bool branch_taken_0x28890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28890Cu;
        // 0x288910: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28890c) {
            ctx->pc = 0x288A34u;
            goto label_288a34;
        }
    }
    ctx->pc = 0x288914u;
label_288914:
    // 0x288914: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288914u;
    SET_GPR_U32(ctx, 31, 0x28891Cu);
    ctx->pc = 0x288918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288914u;
    // 0x288918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288914u, 0x28891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28891Cu;
label_28891c:
    // 0x28891c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288920: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x288920u;
    {
        const bool branch_taken_0x288920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x288920) {
            ctx->pc = 0x288924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288920u;
            // 0x288924: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288954u;
            goto label_288954;
        }
    }
    ctx->pc = 0x288928u;
    // 0x288928: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x288928u;
    SET_GPR_U32(ctx, 31, 0x288930u);
    ctx->pc = 0x28892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288928u;
    // 0x28892c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x288928u, 0x288930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288930u;
label_288930:
    // 0x288930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288934: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288934u;
    {
        const bool branch_taken_0x288934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x288934) {
            ctx->pc = 0x288938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288934u;
            // 0x288938: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288954u;
            goto label_288954;
        }
    }
    ctx->pc = 0x28893Cu;
    // 0x28893c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x28893Cu;
    SET_GPR_U32(ctx, 31, 0x288944u);
    ctx->pc = 0x288940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28893Cu;
    // 0x288940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x28893Cu, 0x288944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288944u;
label_288944:
    // 0x288944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288948: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x288948u;
    {
        const bool branch_taken_0x288948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288948u;
        // 0x28894c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288948) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288950u;
    // 0x288950: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x288950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_288954:
    // 0x288954: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288958: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x288958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x28895c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288960: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x288964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288968: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x288968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28896c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28896Cu;
    {
        const bool branch_taken_0x28896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28896Cu;
        // 0x288970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28896c) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288974u;
    // 0x288974: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x288974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x288978: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x288978u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28897c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28897Cu;
    {
        const bool branch_taken_0x28897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28897Cu;
        // 0x288980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28897c) {
            ctx->pc = 0x2889E4u;
            goto label_2889e4;
        }
    }
    ctx->pc = 0x288984u;
    // 0x288984: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x288984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x288988: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28898c: 0xc09eb0c  jal         func_27AC30
    ctx->pc = 0x28898Cu;
    SET_GPR_U32(ctx, 31, 0x288994u);
    ctx->pc = 0x288990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28898Cu;
    // 0x288990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC30u, 0x28898Cu, 0x288994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288994u;
label_288994:
    // 0x288994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288998: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288998u;
    {
        const bool branch_taken_0x288998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x288998) {
            ctx->pc = 0x2889B0u;
            goto label_2889b0;
        }
    }
    ctx->pc = 0x2889A0u;
    // 0x2889a0: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2889A0u;
    SET_GPR_U32(ctx, 31, 0x2889A8u);
    ctx->pc = 0x2889A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889A0u;
    // 0x2889a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2889A0u, 0x2889A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889A8u;
label_2889a8:
    // 0x2889a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2889A8u;
    {
        const bool branch_taken_0x2889a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889A8u;
        // 0x2889ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889a8) {
            ctx->pc = 0x2889DCu;
            goto label_2889dc;
        }
    }
    ctx->pc = 0x2889B0u;
label_2889b0:
    // 0x2889b0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2889b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2889b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2889b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2889b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2889b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2889bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2889c0: 0xc09eb60  jal         func_27AD80
    ctx->pc = 0x2889C0u;
    SET_GPR_U32(ctx, 31, 0x2889C8u);
    ctx->pc = 0x2889C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889C0u;
    // 0x2889c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AD80u, 0x2889C0u, 0x2889C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889C8u;
label_2889c8:
    // 0x2889c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889cc: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x2889CCu;
    SET_GPR_U32(ctx, 31, 0x2889D4u);
    ctx->pc = 0x2889D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889CCu;
    // 0x2889d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x2889CCu, 0x2889D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889D4u;
label_2889d4:
    // 0x2889d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2889D4u;
    {
        const bool branch_taken_0x2889d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889d4) {
            ctx->pc = 0x2889E4u;
            goto label_2889e4;
        }
    }
    ctx->pc = 0x2889DCu;
label_2889dc:
    // 0x2889dc: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x2889DCu;
    SET_GPR_U32(ctx, 31, 0x2889E4u);
    ctx->pc = 0x2889E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889DCu;
    // 0x2889e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x2889DCu, 0x2889E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889E4u;
label_2889e4:
    // 0x2889e4: 0xc089baa  jal         func_226EA8
    ctx->pc = 0x2889E4u;
    SET_GPR_U32(ctx, 31, 0x2889ECu);
    ctx->pc = 0x2889E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889E4u;
    // 0x2889e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x2889E4u, 0x2889ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889ECu;
label_2889ec:
    // 0x2889ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2889ECu;
    {
        const bool branch_taken_0x2889ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889ECu;
        // 0x2889f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889ec) {
            ctx->pc = 0x288A18u;
            goto label_288a18;
        }
    }
    ctx->pc = 0x2889F4u;
    // 0x2889f4: 0xc08a658  jal         func_229960
    ctx->pc = 0x2889F4u;
    SET_GPR_U32(ctx, 31, 0x2889FCu);
    ctx->pc = 0x2889F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889F4u;
    // 0x2889f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2889F4u, 0x2889FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889FCu;
label_2889fc:
    // 0x2889fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2889fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x288a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288a04: 0x0  nop
    ctx->pc = 0x288a04u;
    // NOP
    // 0x288a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288a0c: 0x0  nop
    ctx->pc = 0x288a0cu;
    // NOP
    // 0x288a10: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x288A10u;
    {
        const bool branch_taken_0x288a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288a10) {
            ctx->pc = 0x288A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288A10u;
            // 0x288a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288A18u;
label_288a18:
    // 0x288a18: 0xc0a21a6  jal         func_288698
    ctx->pc = 0x288A18u;
    SET_GPR_U32(ctx, 31, 0x288A20u);
    ctx->pc = 0x288A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A18u;
    // 0x288a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288698u, 0x288A18u, 0x288A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A20u;
label_288a20:
    // 0x288a20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x288a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a24: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x288A24u;
    {
        const bool branch_taken_0x288a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A24u;
        // 0x288a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a24) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288A2Cu;
label_288a2c:
    // 0x288a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x288a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288a30:
    // 0x288a30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288a34:
    // 0x288a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a3c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x288a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288a40: 0x3e00008  jr          $ra
    ctx->pc = 0x288A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A40u;
        // 0x288a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A48u;
}
