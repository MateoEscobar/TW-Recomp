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

// Function: sub_0017C840
// Address: 0x17c840 - 0x17ca90
void sub_0017C840_0x17c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C840_0x17c840");
#endif

    switch (ctx->pc) {
        case 0x17c868u: goto label_17c868;
        case 0x17c878u: goto label_17c878;
        case 0x17c8c8u: goto label_17c8c8;
        case 0x17c8f4u: goto label_17c8f4;
        case 0x17c918u: goto label_17c918;
        case 0x17c998u: goto label_17c998;
        case 0x17c9b4u: goto label_17c9b4;
        case 0x17c9e0u: goto label_17c9e0;
        case 0x17c9f8u: goto label_17c9f8;
        case 0x17ca20u: goto label_17ca20;
        case 0x17ca4cu: goto label_17ca4c;
        case 0x17ca64u: goto label_17ca64;
        default: break;
    }

    ctx->pc = 0x17c840u;

    // 0x17c840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c844: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17c848: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17c84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17c84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c850: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17c854: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17c858: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x17c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x17c85c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c860: 0xc05f2a6  jal         func_17CA98
    ctx->pc = 0x17C860u;
    SET_GPR_U32(ctx, 31, 0x17C868u);
    ctx->pc = 0x17C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C860u;
    // 0x17c864: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA98u, 0x17C860u, 0x17C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C868u;
label_17c868:
    // 0x17c868: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17c86c: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17c870: 0xc12104a  jal         func_484128
    ctx->pc = 0x17C870u;
    SET_GPR_U32(ctx, 31, 0x17C878u);
    ctx->pc = 0x17C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C870u;
    // 0x17c874: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x17C870u, 0x17C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C878u;
label_17c878:
    // 0x17c878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c87c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c880: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x17c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17c884: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17C884u;
    {
        const bool branch_taken_0x17c884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C884u;
        // 0x17c888: 0x26130030  addiu       $s3, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c884) {
            ctx->pc = 0x17C8F4u;
            goto label_17c8f4;
        }
    }
    ctx->pc = 0x17C88Cu;
    // 0x17c88c: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x17c88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x17c890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C890u;
    {
        const bool branch_taken_0x17c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C890u;
        // 0x17c894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c890) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C898u;
    // 0x17c898: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x17C898u;
    {
        const bool branch_taken_0x17c898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C898u;
        // 0x17c89c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c898) {
            ctx->pc = 0x17C9E8u;
            goto label_17c9e8;
        }
    }
    ctx->pc = 0x17C8A0u;
    // 0x17c8a0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x17C8A0u;
    {
        const bool branch_taken_0x17c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8A0u;
        // 0x17c8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8a0) {
            ctx->pc = 0x17C9A4u;
            goto label_17c9a4;
        }
    }
    ctx->pc = 0x17C8A8u;
    // 0x17c8a8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x17C8A8u;
    {
        const bool branch_taken_0x17c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8A8u;
        // 0x17c8ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8a8) {
            ctx->pc = 0x17CA74u;
            goto label_17ca74;
        }
    }
    ctx->pc = 0x17C8B0u;
label_17c8b0:
    // 0x17c8b0: 0x28620083  slti        $v0, $v1, 0x83
    ctx->pc = 0x17c8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x17c8b4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x17C8B4u;
    {
        const bool branch_taken_0x17c8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B4u;
        // 0x17c8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8b4) {
            ctx->pc = 0x17CA70u;
            goto label_17ca70;
        }
    }
    ctx->pc = 0x17C8BCu;
    // 0x17c8bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17c8c0: 0xc11b22a  jal         func_46C8A8
    ctx->pc = 0x17C8C0u;
    SET_GPR_U32(ctx, 31, 0x17C8C8u);
    ctx->pc = 0x17C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8C0u;
    // 0x17c8c4: 0xc62c0034  lwc1        $f12, 0x34($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C8A8u, 0x17C8C0u, 0x17C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8C8u;
label_17c8c8:
    // 0x17c8c8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17c8cc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17c8d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8d4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x17c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c8d8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x17c8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17c8dc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x17c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c8e0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x17c8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17c8e4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x17c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c8e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17c8e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17c8ec: 0xc120002  jal         func_480008
    ctx->pc = 0x17C8ECu;
    SET_GPR_U32(ctx, 31, 0x17C8F4u);
    ctx->pc = 0x17C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8ECu;
    // 0x17c8f0: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x480008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480008u, 0x17C8ECu, 0x17C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8F4u;
label_17c8f4:
    // 0x17c8f4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17c8f8: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x17c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c8fc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x17c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c900: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x17c900u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c904: 0x0  nop
    ctx->pc = 0x17c904u;
    // NOP
    // 0x17c908: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x17C908u;
    {
        const bool branch_taken_0x17c908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c908) {
            ctx->pc = 0x17C90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C908u;
            // 0x17c90c: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C920u;
            goto label_17c920;
        }
    }
    ctx->pc = 0x17C910u;
    // 0x17c910: 0xc11b202  jal         func_46C808
    ctx->pc = 0x17C910u;
    SET_GPR_U32(ctx, 31, 0x17C918u);
    ctx->pc = 0x46C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C808u, 0x17C910u, 0x17C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C918u;
label_17c918:
    // 0x17c918: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17c918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17c91c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x17c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c920:
    // 0x17c920: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x17c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c924: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x17c924u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c928: 0x0  nop
    ctx->pc = 0x17c928u;
    // NOP
    // 0x17c92c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x17C92Cu;
    {
        const bool branch_taken_0x17c92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C92Cu;
        // 0x17c930: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c92c) {
            ctx->pc = 0x17C968u;
            goto label_17c968;
        }
    }
    ctx->pc = 0x17C934u;
    // 0x17c934: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c938: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x17c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c93c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17c93cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c940: 0x0  nop
    ctx->pc = 0x17c940u;
    // NOP
    // 0x17c944: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x17C944u;
    {
        const bool branch_taken_0x17c944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c944) {
            ctx->pc = 0x17C948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C944u;
            // 0x17c948: 0xe6020030  swc1        $f2, 0x30($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C96Cu;
            goto label_17c96c;
        }
    }
    ctx->pc = 0x17C94Cu;
    // 0x17c94c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x17c94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c950: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x17c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c954: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17c954u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17c958: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17c958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c95c: 0x0  nop
    ctx->pc = 0x17c95cu;
    // NOP
    // 0x17c960: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x17C960u;
    {
        const bool branch_taken_0x17c960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c960) {
            ctx->pc = 0x17C964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C960u;
            // 0x17c964: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C99Cu;
            goto label_17c99c;
        }
    }
    ctx->pc = 0x17C968u;
label_17c968:
    // 0x17c968: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x17c968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_17c96c:
    // 0x17c96c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c978: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c980: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x17c980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x17c984: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x17c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c988: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17c988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17c98c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17c98cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17c990: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x17C990u;
    SET_GPR_U32(ctx, 31, 0x17C998u);
    ctx->pc = 0x17C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C990u;
    // 0x17c994: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x17C990u, 0x17C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C998u;
label_17c998:
    // 0x17c998: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17c99c:
    // 0x17c99c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17C99Cu;
    {
        const bool branch_taken_0x17c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C99Cu;
        // 0x17c9a0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c99c) {
            ctx->pc = 0x17C9D8u;
            goto label_17c9d8;
        }
    }
    ctx->pc = 0x17C9A4u;
label_17c9a4:
    // 0x17c9a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17c9a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c9ac: 0xc05fb32  jal         func_17ECC8
    ctx->pc = 0x17C9ACu;
    SET_GPR_U32(ctx, 31, 0x17C9B4u);
    ctx->pc = 0x17C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9ACu;
    // 0x17c9b0: 0x8c45cce4  lw          $a1, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC8u, 0x17C9ACu, 0x17C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9B4u;
label_17c9b4:
    // 0x17c9b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x17c9b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9b8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x17c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17c9bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x17c9c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17c9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c9c4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x17c9c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9c8: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x17c9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17c9cc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x17c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17c9d0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17c9d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17c9d8:
    // 0x17c9d8: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17C9D8u;
    SET_GPR_U32(ctx, 31, 0x17C9E0u);
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17C9D8u, 0x17C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9E0u;
label_17c9e0:
    // 0x17c9e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17C9E0u;
    {
        const bool branch_taken_0x17c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E0u;
        // 0x17c9e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9e0) {
            ctx->pc = 0x17CA6Cu;
            goto label_17ca6c;
        }
    }
    ctx->pc = 0x17C9E8u;
label_17c9e8:
    // 0x17c9e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17c9ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c9f0: 0xc05fb32  jal         func_17ECC8
    ctx->pc = 0x17C9F0u;
    SET_GPR_U32(ctx, 31, 0x17C9F8u);
    ctx->pc = 0x17C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9F0u;
    // 0x17c9f4: 0x8c45cce4  lw          $a1, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC8u, 0x17C9F0u, 0x17C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9F8u;
label_17c9f8:
    // 0x17c9f8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x17c9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9fc: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x17c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17ca00: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x17ca04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17ca04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ca08: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x17ca08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca0c: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x17ca0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17ca10: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x17ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17ca14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17ca18: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17CA18u;
    SET_GPR_U32(ctx, 31, 0x17CA20u);
    ctx->pc = 0x17CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA18u;
    // 0x17ca1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17CA18u, 0x17CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA20u;
label_17ca20:
    // 0x17ca20: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17ca24: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17ca28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17ca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca2c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x17ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x17ca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17ca34: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x17ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca38: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x17ca38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17ca3c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x17ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17ca40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17ca44: 0xc120002  jal         func_480008
    ctx->pc = 0x17CA44u;
    SET_GPR_U32(ctx, 31, 0x17CA4Cu);
    ctx->pc = 0x17CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA44u;
    // 0x17ca48: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x480008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480008u, 0x17CA44u, 0x17CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA4Cu;
label_17ca4c:
    // 0x17ca4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ca50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17ca58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca5c: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x17CA5Cu;
    SET_GPR_U32(ctx, 31, 0x17CA64u);
    ctx->pc = 0x17CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA5Cu;
    // 0x17ca60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x17CA5Cu, 0x17CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA64u;
label_17ca64:
    // 0x17ca64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CA64u;
    {
        const bool branch_taken_0x17ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA64u;
        // 0x17ca68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca64) {
            ctx->pc = 0x17CA70u;
            goto label_17ca70;
        }
    }
    ctx->pc = 0x17CA6Cu;
label_17ca6c:
    // 0x17ca6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ca70:
    // 0x17ca70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17ca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ca74:
    // 0x17ca74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17ca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ca78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17ca78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ca7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17ca7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ca80: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17ca80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ca84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA88u;
        // 0x17ca8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA90u;
}
