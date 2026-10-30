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

// Function: sub_0031C840
// Address: 0x31c840 - 0x31caf8
void sub_0031C840_0x31c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C840_0x31c840");
#endif

    switch (ctx->pc) {
        case 0x31c898u: goto label_31c898;
        case 0x31c8acu: goto label_31c8ac;
        case 0x31c8c8u: goto label_31c8c8;
        case 0x31c8d4u: goto label_31c8d4;
        case 0x31c8e4u: goto label_31c8e4;
        case 0x31c908u: goto label_31c908;
        case 0x31c944u: goto label_31c944;
        case 0x31c970u: goto label_31c970;
        case 0x31c978u: goto label_31c978;
        case 0x31c980u: goto label_31c980;
        case 0x31c9a0u: goto label_31c9a0;
        case 0x31c9b8u: goto label_31c9b8;
        case 0x31c9d0u: goto label_31c9d0;
        case 0x31c9ecu: goto label_31c9ec;
        case 0x31c9fcu: goto label_31c9fc;
        case 0x31ca24u: goto label_31ca24;
        case 0x31ca34u: goto label_31ca34;
        case 0x31ca44u: goto label_31ca44;
        case 0x31ca74u: goto label_31ca74;
        default: break;
    }

    ctx->pc = 0x31c840u;

    // 0x31c840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31c844: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31c844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31c848: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31c84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31c84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c850: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31c854: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31c858: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31c85c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31c860: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31c864: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31c868: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31c86c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31c870: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x31c870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31c874: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31c874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31c878: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x31c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x31c87c: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x31c87cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31c880: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x31c880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31c884: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C884u;
    {
        const bool branch_taken_0x31c884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C884u;
        // 0x31c888: 0x262201f4  addiu       $v0, $s1, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c884) {
            ctx->pc = 0x31C924u;
            goto label_31c924;
        }
    }
    ctx->pc = 0x31C88Cu;
    // 0x31c88c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c890: 0xc05959e  jal         func_165678
    ctx->pc = 0x31C890u;
    SET_GPR_U32(ctx, 31, 0x31C898u);
    ctx->pc = 0x31C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C890u;
    // 0x31c894: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31C890u, 0x31C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C898u;
label_31c898:
    // 0x31c898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c89c: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x31C89Cu;
    {
        const bool branch_taken_0x31c89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C89Cu;
        // 0x31c8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c89c) {
            ctx->pc = 0x31CAC8u;
            goto label_31cac8;
        }
    }
    ctx->pc = 0x31C8A4u;
    // 0x31c8a4: 0xc087502  jal         func_21D408
    ctx->pc = 0x31C8A4u;
    SET_GPR_U32(ctx, 31, 0x31C8ACu);
    ctx->pc = 0x31C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8A4u;
    // 0x31c8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C8A4u, 0x31C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8ACu;
label_31c8ac:
    // 0x31c8ac: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x31c8acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x31c8b0: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x31c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x31c8b4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x31c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x31c8b8: 0x24440164  addiu       $a0, $v0, 0x164
    ctx->pc = 0x31c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x31c8bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x31c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x31c8c0: 0xc13b782  jal         func_4EDE08
    ctx->pc = 0x31C8C0u;
    SET_GPR_U32(ctx, 31, 0x31C8C8u);
    ctx->pc = 0x31C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8C0u;
    // 0x31c8c4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x31C8C0u, 0x31C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8C8u;
label_31c8c8:
    // 0x31c8c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31c8cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31C8CCu;
    SET_GPR_U32(ctx, 31, 0x31C8D4u);
    ctx->pc = 0x31C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8CCu;
    // 0x31c8d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31C8CCu, 0x31C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8D4u;
label_31c8d4:
    // 0x31c8d4: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x31C8D4u;
    {
        const bool branch_taken_0x31c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c8d4) {
            ctx->pc = 0x31C8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C8D4u;
            // 0x31c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CAC8u;
            goto label_31cac8;
        }
    }
    ctx->pc = 0x31C8DCu;
    // 0x31c8dc: 0xc087502  jal         func_21D408
    ctx->pc = 0x31C8DCu;
    SET_GPR_U32(ctx, 31, 0x31C8E4u);
    ctx->pc = 0x31C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8DCu;
    // 0x31c8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C8DCu, 0x31C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8E4u;
label_31c8e4:
    // 0x31c8e4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x31c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x31c8e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31c8ec: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x31C8ECu;
    {
        const bool branch_taken_0x31c8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8ECu;
        // 0x31c8f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8ec) {
            ctx->pc = 0x31CAC4u;
            goto label_31cac4;
        }
    }
    ctx->pc = 0x31C8F4u;
    // 0x31c8f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c8f8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x31c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c8fc: 0xc4940014  lwc1        $f20, 0x14($a0)
    ctx->pc = 0x31c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c900: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x31C900u;
    SET_GPR_U32(ctx, 31, 0x31C908u);
    ctx->pc = 0x31C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C900u;
    // 0x31c904: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31C900u, 0x31C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C908u;
label_31c908:
    // 0x31c908: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x31c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c90c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x31c90cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x31c910: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x31c910u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x31c914: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31c914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c918: 0x0  nop
    ctx->pc = 0x31c918u;
    // NOP
    // 0x31c91c: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x31C91Cu;
    {
        const bool branch_taken_0x31c91c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C91Cu;
        // 0x31c920: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c91c) {
            ctx->pc = 0x31CAC8u;
            goto label_31cac8;
        }
    }
    ctx->pc = 0x31C924u;
label_31c924:
    // 0x31c924: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x31c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x31c928: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31c928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31c92c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x31C92Cu;
    {
        const bool branch_taken_0x31c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C92Cu;
        // 0x31c930: 0x262200fa  addiu       $v0, $s1, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c92c) {
            ctx->pc = 0x31CAC4u;
            goto label_31cac4;
        }
    }
    ctx->pc = 0x31C934u;
    // 0x31c934: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c938: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x31c938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x31c93c: 0xc059856  jal         func_166158
    ctx->pc = 0x31C93Cu;
    SET_GPR_U32(ctx, 31, 0x31C944u);
    ctx->pc = 0x31C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C93Cu;
    // 0x31c940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31C93Cu, 0x31C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C944u;
label_31c944:
    // 0x31c944: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31c944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c948: 0x1260005f  beqz        $s3, . + 4 + (0x5F << 2)
    ctx->pc = 0x31C948u;
    {
        const bool branch_taken_0x31c948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C948u;
        // 0x31c94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c948) {
            ctx->pc = 0x31CAC8u;
            goto label_31cac8;
        }
    }
    ctx->pc = 0x31C950u;
    // 0x31c950: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c954: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31c954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31c958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c95c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c960: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31c960u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31c964: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x31c964u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    // 0x31c968: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c96c: 0x0  nop
    ctx->pc = 0x31c96cu;
    // NOP
label_31c970:
    // 0x31c970: 0xc137866  jal         func_4DE198
    ctx->pc = 0x31C970u;
    SET_GPR_U32(ctx, 31, 0x31C978u);
    ctx->pc = 0x31C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C970u;
    // 0x31c974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x31C970u, 0x31C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C978u;
label_31c978:
    // 0x31c978: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31C978u;
    SET_GPR_U32(ctx, 31, 0x31C980u);
    ctx->pc = 0x31C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C978u;
    // 0x31c97c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31C978u, 0x31C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C980u;
label_31c980:
    // 0x31c980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c984: 0x5200004c  beql        $s0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x31C984u;
    {
        const bool branch_taken_0x31c984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c984) {
            ctx->pc = 0x31C988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C984u;
            // 0x31c988: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CAB8u;
            goto label_31cab8;
        }
    }
    ctx->pc = 0x31C98Cu;
    // 0x31c98c: 0x9242003d  lbu         $v0, 0x3D($s2)
    ctx->pc = 0x31c98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x31c990: 0x16820048  bne         $s4, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x31C990u;
    {
        const bool branch_taken_0x31c990 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C990u;
        // 0x31c994: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c990) {
            ctx->pc = 0x31CAB4u;
            goto label_31cab4;
        }
    }
    ctx->pc = 0x31C998u;
    // 0x31c998: 0xc087502  jal         func_21D408
    ctx->pc = 0x31C998u;
    SET_GPR_U32(ctx, 31, 0x31C9A0u);
    ctx->pc = 0x31C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C998u;
    // 0x31c99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C998u, 0x31C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9A0u;
label_31c9a0:
    // 0x31c9a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9a4: 0x8222002e  lb          $v0, 0x2E($s1)
    ctx->pc = 0x31c9a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x31c9a8: 0x5c40003b  bgtzl       $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x31C9A8u;
    {
        const bool branch_taken_0x31c9a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31c9a8) {
            ctx->pc = 0x31C9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C9A8u;
            // 0x31c9ac: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA98u;
            goto label_31ca98;
        }
    }
    ctx->pc = 0x31C9B0u;
    // 0x31c9b0: 0xc089018  jal         func_224060
    ctx->pc = 0x31C9B0u;
    SET_GPR_U32(ctx, 31, 0x31C9B8u);
    ctx->pc = 0x31C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9B0u;
    // 0x31c9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x31C9B0u, 0x31C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9B8u;
label_31c9b8:
    // 0x31c9b8: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x31C9B8u;
    {
        const bool branch_taken_0x31c9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c9b8) {
            ctx->pc = 0x31C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C9B8u;
            // 0x31c9bc: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA98u;
            goto label_31ca98;
        }
    }
    ctx->pc = 0x31C9C0u;
    // 0x31c9c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x31c9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9c8: 0xc089998  jal         func_226660
    ctx->pc = 0x31C9C8u;
    SET_GPR_U32(ctx, 31, 0x31C9D0u);
    ctx->pc = 0x31C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9C8u;
    // 0x31c9cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x31C9C8u, 0x31C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9D0u;
label_31c9d0:
    // 0x31c9d0: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x31C9D0u;
    {
        const bool branch_taken_0x31c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c9d0) {
            ctx->pc = 0x31C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C9D0u;
            // 0x31c9d4: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA98u;
            goto label_31ca98;
        }
    }
    ctx->pc = 0x31C9D8u;
    // 0x31c9d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c9dc: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31c9e0: 0x9246003e  lbu         $a2, 0x3E($s2)
    ctx->pc = 0x31c9e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x31c9e4: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x31C9E4u;
    SET_GPR_U32(ctx, 31, 0x31C9ECu);
    ctx->pc = 0x31C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9E4u;
    // 0x31c9e8: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x31C9E4u, 0x31C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9ECu;
label_31c9ec:
    // 0x31c9ec: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x31C9ECu;
    {
        const bool branch_taken_0x31c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c9ec) {
            ctx->pc = 0x31C9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C9ECu;
            // 0x31c9f0: 0x9242003d  lbu         $v0, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA98u;
            goto label_31ca98;
        }
    }
    ctx->pc = 0x31C9F4u;
    // 0x31c9f4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x31C9F4u;
    SET_GPR_U32(ctx, 31, 0x31C9FCu);
    ctx->pc = 0x31C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9F4u;
    // 0x31c9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x31C9F4u, 0x31C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9FCu;
label_31c9fc:
    // 0x31c9fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C9FCu;
    {
        const bool branch_taken_0x31c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9FCu;
        // 0x31ca00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9fc) {
            ctx->pc = 0x31CA24u;
            goto label_31ca24;
        }
    }
    ctx->pc = 0x31CA04u;
    // 0x31ca04: 0x9247003e  lbu         $a3, 0x3E($s2)
    ctx->pc = 0x31ca04u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x31ca08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x31ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x31ca0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31ca0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31ca10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ca10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31ca14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca18: 0x24060253  addiu       $a2, $zero, 0x253
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31ca1c: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x31CA1Cu;
    SET_GPR_U32(ctx, 31, 0x31CA24u);
    ctx->pc = 0x31CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA1Cu;
    // 0x31ca20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x31CA1Cu, 0x31CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA24u;
label_31ca24:
    // 0x31ca24: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x31ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x31ca28: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x31ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x31ca2c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31CA2Cu;
    SET_GPR_U32(ctx, 31, 0x31CA34u);
    ctx->pc = 0x31CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA2Cu;
    // 0x31ca30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31CA2Cu, 0x31CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA34u;
label_31ca34:
    // 0x31ca34: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31CA34u;
    {
        const bool branch_taken_0x31ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ca34) {
            ctx->pc = 0x31CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA34u;
            // 0x31ca38: 0x9242003e  lbu         $v0, 0x3E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA78u;
            goto label_31ca78;
        }
    }
    ctx->pc = 0x31CA3Cu;
    // 0x31ca3c: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x31CA3Cu;
    SET_GPR_U32(ctx, 31, 0x31CA44u);
    ctx->pc = 0x31CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA3Cu;
    // 0x31ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x31CA3Cu, 0x31CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA44u;
label_31ca44:
    // 0x31ca44: 0x5457000c  bnel        $v0, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x31CA44u;
    {
        const bool branch_taken_0x31ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x31ca44) {
            ctx->pc = 0x31CA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA44u;
            // 0x31ca48: 0x9242003e  lbu         $v0, 0x3E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA78u;
            goto label_31ca78;
        }
    }
    ctx->pc = 0x31CA4Cu;
    // 0x31ca4c: 0x8ec9bd30  lw          $t1, -0x42D0($s6)
    ctx->pc = 0x31ca4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
    // 0x31ca50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31ca58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31ca5c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x31ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x31ca60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ca60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ca64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31ca68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ca6c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x31CA6Cu;
    SET_GPR_U32(ctx, 31, 0x31CA74u);
    ctx->pc = 0x31CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA6Cu;
    // 0x31ca70: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x31CA6Cu, 0x31CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA74u;
label_31ca74:
    // 0x31ca74: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x31ca74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_31ca78:
    // 0x31ca78: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x31ca78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x31ca7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ca80: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x31ca80u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31ca84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31CA84u;
    {
        const bool branch_taken_0x31ca84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca84) {
            ctx->pc = 0x31CA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA84u;
            // 0x31ca88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA8Cu;
            goto label_31ca8c;
        }
    }
    ctx->pc = 0x31CA8Cu;
label_31ca8c:
    // 0x31ca8c: 0x2010  mfhi        $a0
    ctx->pc = 0x31ca8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31ca90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31CA90u;
    {
        const bool branch_taken_0x31ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA90u;
        // 0x31ca94: 0xa244003e  sb          $a0, 0x3E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca90) {
            ctx->pc = 0x31CAC4u;
            goto label_31cac4;
        }
    }
    ctx->pc = 0x31CA98u;
label_31ca98:
    // 0x31ca98: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31CA98u;
    {
        const bool branch_taken_0x31ca98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca98) {
            ctx->pc = 0x31CA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA98u;
            // 0x31ca9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CAA0u;
            goto label_31caa0;
        }
    }
    ctx->pc = 0x31CAA0u;
label_31caa0:
    // 0x31caa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31caa4: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x31caa4u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31caa8: 0x1810  mfhi        $v1
    ctx->pc = 0x31caa8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31caac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31CAACu;
    {
        const bool branch_taken_0x31caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAACu;
        // 0x31cab0: 0xa243003d  sb          $v1, 0x3D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31caac) {
            ctx->pc = 0x31CAC4u;
            goto label_31cac4;
        }
    }
    ctx->pc = 0x31CAB4u;
label_31cab4:
    // 0x31cab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31cab8:
    // 0x31cab8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x31cab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31cabc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x31CABCu;
    {
        const bool branch_taken_0x31cabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CABCu;
        // 0x31cac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cabc) {
            ctx->pc = 0x31C970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c970;
        }
    }
    ctx->pc = 0x31CAC4u;
label_31cac4:
    // 0x31cac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31cac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cac8:
    // 0x31cac8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31cac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cacc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31caccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cad0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31cad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cad4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31cad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cad8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31cad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cadc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31cadcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cae0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31cae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cae4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31cae4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31cae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31caec: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x31caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x31CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAF0u;
        // 0x31caf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CAF8u;
}
