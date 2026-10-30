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

// Function: sub_001A97C0
// Address: 0x1a97c0 - 0x1a9890
void sub_001A97C0_0x1a97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A97C0_0x1a97c0");
#endif

    switch (ctx->pc) {
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e0u: goto label_1a97e0;
        case 0x1a97e4u: goto label_1a97e4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97ecu: goto label_1a97ec;
        case 0x1a97f0u: goto label_1a97f0;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a97f8u: goto label_1a97f8;
        case 0x1a97fcu: goto label_1a97fc;
        case 0x1a9800u: goto label_1a9800;
        case 0x1a9804u: goto label_1a9804;
        case 0x1a9808u: goto label_1a9808;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9814u: goto label_1a9814;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a981cu: goto label_1a981c;
        case 0x1a9820u: goto label_1a9820;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9828u: goto label_1a9828;
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9834u: goto label_1a9834;
        case 0x1a9838u: goto label_1a9838;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9840u: goto label_1a9840;
        case 0x1a9844u: goto label_1a9844;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a984cu: goto label_1a984c;
        case 0x1a9850u: goto label_1a9850;
        case 0x1a9854u: goto label_1a9854;
        case 0x1a9858u: goto label_1a9858;
        case 0x1a985cu: goto label_1a985c;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a9864u: goto label_1a9864;
        case 0x1a9868u: goto label_1a9868;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9870u: goto label_1a9870;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9878u: goto label_1a9878;
        case 0x1a987cu: goto label_1a987c;
        case 0x1a9880u: goto label_1a9880;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a988cu: goto label_1a988c;
        default: break;
    }

    ctx->pc = 0x1a97c0u;

label_1a97c0:
    // 0x1a97c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a97c4:
    // 0x1a97c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a97c8:
    // 0x1a97c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a97cc:
    // 0x1a97cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a97d0:
    // 0x1a97d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a97d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a97d4:
    // 0x1a97d4: 0xc44cd34c  lwc1        $f12, -0x2CB4($v0)
    ctx->pc = 0x1a97d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a97d8:
    // 0x1a97d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a97dc:
    // 0x1a97dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a97dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a97e0:
    // 0x1a97e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a97e4:
    // 0x1a97e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a97e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a97e8:
    // 0x1a97e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a97e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a97ec:
    // 0x1a97ec: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1a97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_1a97f0:
    // 0x1a97f0: 0xc05e602  jal         func_179808
label_1a97f4:
    if (ctx->pc == 0x1A97F4u) {
        ctx->pc = 0x1A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97F0u;
        // 0x1a97f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97F8u;
        goto label_1a97f8;
    }
    ctx->pc = 0x1A97F0u;
    SET_GPR_U32(ctx, 31, 0x1A97F8u);
    ctx->pc = 0x1A97F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97F0u;
    // 0x1a97f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1A97F0u, 0x1A97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97F8u;
label_1a97f8:
    // 0x1a97f8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a97f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a97fc:
    // 0x1a97fc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a97fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a9800:
    // 0x1a9800: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a9800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a9804:
    // 0x1a9804: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a9804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a9808:
    // 0x1a9808: 0xb242007f  sdl         $v0, 0x7F($s2)
    ctx->pc = 0x1a9808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a980c:
    // 0x1a980c: 0xb6420078  sdr         $v0, 0x78($s2)
    ctx->pc = 0x1a980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9810:
    // 0x1a9810: 0xb2430087  sdl         $v1, 0x87($s2)
    ctx->pc = 0x1a9810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9814:
    // 0x1a9814: 0xb6430080  sdr         $v1, 0x80($s2)
    ctx->pc = 0x1a9814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9818:
    // 0x1a9818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a981c:
    // 0x1a981c: 0xc073478  jal         func_1CD1E0
label_1a9820:
    if (ctx->pc == 0x1A9820u) {
        ctx->pc = 0x1A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A981Cu;
        // 0x1a9820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9824u;
        goto label_1a9824;
    }
    ctx->pc = 0x1A981Cu;
    SET_GPR_U32(ctx, 31, 0x1A9824u);
    ctx->pc = 0x1A9820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A981Cu;
    // 0x1a9820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A981Cu, 0x1A9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9824u;
label_1a9824:
    // 0x1a9824: 0xc601017c  lwc1        $f1, 0x17C($s0)
    ctx->pc = 0x1a9824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9828:
    // 0x1a9828: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a9828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a982c:
    // 0x1a982c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a982cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a9830:
    // 0x1a9830: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a9830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a9834:
    // 0x1a9834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9838:
    // 0x1a9838: 0xc6020178  lwc1        $f2, 0x178($s0)
    ctx->pc = 0x1a9838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a983c:
    // 0x1a983c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a983cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a9840:
    // 0x1a9840: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x1a9840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9844:
    // 0x1a9844: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a9848:
    // 0x1a9848: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a9848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a984c:
    // 0x1a984c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a9850:
    // 0x1a9850: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1a9850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a9854:
    // 0x1a9854: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a9854u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a9858:
    // 0x1a9858: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a9858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a985c:
    // 0x1a985c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9860:
    // 0x1a9860: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a9860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a9864:
    // 0x1a9864: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9868:
    // 0x1a9868: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a986c:
    // 0x1a986c: 0x60f809  jalr        $v1
label_1a9870:
    if (ctx->pc == 0x1A9870u) {
        ctx->pc = 0x1A9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A986Cu;
        // 0x1a9870: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9874u;
        goto label_1a9874;
    }
    ctx->pc = 0x1A986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9874u);
        ctx->pc = 0x1A9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A986Cu;
        // 0x1a9870: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A986Cu, 0x1A9874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9874u;
label_1a9874:
    // 0x1a9874: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a9874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9878:
    // 0x1a9878: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a9878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a987c:
    // 0x1a987c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a987cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9880:
    // 0x1a9880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9884:
    // 0x1a9884: 0x3e00008  jr          $ra
label_1a9888:
    if (ctx->pc == 0x1A9888u) {
        ctx->pc = 0x1A9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9884u;
        // 0x1a9888: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A988Cu;
        goto label_1a988c;
    }
    ctx->pc = 0x1A9884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9884u;
        // 0x1a9888: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A988Cu;
label_1a988c:
    // 0x1a988c: 0x0  nop
    ctx->pc = 0x1a988cu;
    // NOP
    ctx->pc = 0x1a9890u;
}
