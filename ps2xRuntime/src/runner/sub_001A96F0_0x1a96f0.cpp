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

// Function: sub_001A96F0
// Address: 0x1a96f0 - 0x1a97c0
void sub_001A96F0_0x1a96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A96F0_0x1a96f0");
#endif

    switch (ctx->pc) {
        case 0x1a96f0u: goto label_1a96f0;
        case 0x1a96f4u: goto label_1a96f4;
        case 0x1a96f8u: goto label_1a96f8;
        case 0x1a96fcu: goto label_1a96fc;
        case 0x1a9700u: goto label_1a9700;
        case 0x1a9704u: goto label_1a9704;
        case 0x1a9708u: goto label_1a9708;
        case 0x1a970cu: goto label_1a970c;
        case 0x1a9710u: goto label_1a9710;
        case 0x1a9714u: goto label_1a9714;
        case 0x1a9718u: goto label_1a9718;
        case 0x1a971cu: goto label_1a971c;
        case 0x1a9720u: goto label_1a9720;
        case 0x1a9724u: goto label_1a9724;
        case 0x1a9728u: goto label_1a9728;
        case 0x1a972cu: goto label_1a972c;
        case 0x1a9730u: goto label_1a9730;
        case 0x1a9734u: goto label_1a9734;
        case 0x1a9738u: goto label_1a9738;
        case 0x1a973cu: goto label_1a973c;
        case 0x1a9740u: goto label_1a9740;
        case 0x1a9744u: goto label_1a9744;
        case 0x1a9748u: goto label_1a9748;
        case 0x1a974cu: goto label_1a974c;
        case 0x1a9750u: goto label_1a9750;
        case 0x1a9754u: goto label_1a9754;
        case 0x1a9758u: goto label_1a9758;
        case 0x1a975cu: goto label_1a975c;
        case 0x1a9760u: goto label_1a9760;
        case 0x1a9764u: goto label_1a9764;
        case 0x1a9768u: goto label_1a9768;
        case 0x1a976cu: goto label_1a976c;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9774u: goto label_1a9774;
        case 0x1a9778u: goto label_1a9778;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a9784u: goto label_1a9784;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        default: break;
    }

    ctx->pc = 0x1a96f0u;

label_1a96f0:
    // 0x1a96f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a96f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a96f4:
    // 0x1a96f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a96f8:
    // 0x1a96f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a96fc:
    // 0x1a96fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a9700:
    // 0x1a9700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a9700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9704:
    // 0x1a9704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a9708:
    // 0x1a9708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a970c:
    // 0x1a970c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a9710:
    // 0x1a9710: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a9710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9714:
    // 0x1a9714: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1a9718:
    if (ctx->pc == 0x1A9718u) {
        ctx->pc = 0x1A9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9714u;
        // 0x1a9718: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A971Cu;
        goto label_1a971c;
    }
    ctx->pc = 0x1A9714u;
    {
        const bool branch_taken_0x1a9714 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9714u;
        // 0x1a9718: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9714) {
            ctx->pc = 0x1A972Cu;
            goto label_1a972c;
        }
    }
    ctx->pc = 0x1A971Cu;
label_1a971c:
    // 0x1a971c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9720:
    // 0x1a9720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a9720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9724:
    // 0x1a9724: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a9728:
    if (ctx->pc == 0x1A9728u) {
        ctx->pc = 0x1A9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9724u;
        // 0x1a9728: 0xc44cd348  lwc1        $f12, -0x2CB8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A972Cu;
        goto label_1a972c;
    }
    ctx->pc = 0x1A9724u;
    {
        const bool branch_taken_0x1a9724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9724u;
        // 0x1a9728: 0xc44cd348  lwc1        $f12, -0x2CB8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9724) {
            ctx->pc = 0x1A9738u;
            goto label_1a9738;
        }
    }
    ctx->pc = 0x1A972Cu;
label_1a972c:
    // 0x1a972c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9730:
    // 0x1a9730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a9730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9734:
    // 0x1a9734: 0xc44cd34c  lwc1        $f12, -0x2CB4($v0)
    ctx->pc = 0x1a9734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9738:
    // 0x1a9738: 0xc05e602  jal         func_179808
label_1a973c:
    if (ctx->pc == 0x1A973Cu) {
        ctx->pc = 0x1A9740u;
        goto label_1a9740;
    }
    ctx->pc = 0x1A9738u;
    SET_GPR_U32(ctx, 31, 0x1A9740u);
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1A9738u, 0x1A9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9740u;
label_1a9740:
    // 0x1a9740: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a9740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a9744:
    // 0x1a9744: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a9744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a9748:
    // 0x1a9748: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a9748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a974c:
    // 0x1a974c: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a9750:
    // 0x1a9750: 0xb202007f  sdl         $v0, 0x7F($s0)
    ctx->pc = 0x1a9750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9754:
    // 0x1a9754: 0xb6020078  sdr         $v0, 0x78($s0)
    ctx->pc = 0x1a9754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9758:
    // 0x1a9758: 0xb2030087  sdl         $v1, 0x87($s0)
    ctx->pc = 0x1a9758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a975c:
    // 0x1a975c: 0xb6030080  sdr         $v1, 0x80($s0)
    ctx->pc = 0x1a975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a9760:
    // 0x1a9760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9764:
    // 0x1a9764: 0xc073478  jal         func_1CD1E0
label_1a9768:
    if (ctx->pc == 0x1A9768u) {
        ctx->pc = 0x1A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9764u;
        // 0x1a9768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A976Cu;
        goto label_1a976c;
    }
    ctx->pc = 0x1A9764u;
    SET_GPR_U32(ctx, 31, 0x1A976Cu);
    ctx->pc = 0x1A9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9764u;
    // 0x1a9768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A9764u, 0x1A976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A976Cu;
label_1a976c:
    // 0x1a976c: 0xc6220174  lwc1        $f2, 0x174($s1)
    ctx->pc = 0x1a976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9770:
    // 0x1a9770: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9774:
    // 0x1a9774: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x1a9774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9778:
    // 0x1a9778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a977c:
    // 0x1a977c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a977cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a9780:
    // 0x1a9780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9784:
    // 0x1a9784: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a9784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a9788:
    // 0x1a9788: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a9788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a978c:
    // 0x1a978c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1a978cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a9790:
    // 0x1a9790: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a9790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a9794:
    // 0x1a9794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9798:
    // 0x1a9798: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a979c:
    // 0x1a979c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a97a0:
    // 0x1a97a0: 0x60f809  jalr        $v1
label_1a97a4:
    if (ctx->pc == 0x1A97A4u) {
        ctx->pc = 0x1A97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A0u;
        // 0x1a97a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97A8u;
        goto label_1a97a8;
    }
    ctx->pc = 0x1A97A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A97A8u);
        ctx->pc = 0x1A97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97A0u;
        // 0x1a97a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97A0u, 0x1A97A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A97A8u;
label_1a97a8:
    // 0x1a97a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a97a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a97ac:
    // 0x1a97ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a97acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a97b0:
    // 0x1a97b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a97b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a97b4:
    // 0x1a97b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a97b8:
    // 0x1a97b8: 0x3e00008  jr          $ra
label_1a97bc:
    if (ctx->pc == 0x1A97BCu) {
        ctx->pc = 0x1A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B8u;
        // 0x1a97bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97C0u;
        goto label_fallthrough_0x1a97b8;
    }
    ctx->pc = 0x1A97B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B8u;
        // 0x1a97bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a97b8:
    ctx->pc = 0x1A97C0u;
}
