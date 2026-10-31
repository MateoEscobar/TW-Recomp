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

// Function: sub_001996B0
// Address: 0x1996b0 - 0x1997d8
void sub_001996B0_0x1996b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001996B0_0x1996b0");
#endif

    switch (ctx->pc) {
        case 0x1996e4u: goto label_1996e4;
        case 0x1996f8u: goto label_1996f8;
        case 0x199700u: goto label_199700;
        case 0x199730u: goto label_199730;
        case 0x199748u: goto label_199748;
        case 0x19975cu: goto label_19975c;
        case 0x199770u: goto label_199770;
        case 0x199784u: goto label_199784;
        default: break;
    }

    ctx->pc = 0x1996b0u;

    // 0x1996b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1996b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1996b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1996b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1996bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1996bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1996c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1996c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1996c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1996c8: 0x2451b8a8  addiu       $s1, $v0, -0x4758
    ctx->pc = 0x1996c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x1996cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1996ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1996d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1996d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1996d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d8: 0xc60c00a4  lwc1        $f12, 0xA4($s0)
    ctx->pc = 0x1996d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1996dc: 0xc0cd508  jal         func_335420
    ctx->pc = 0x1996DCu;
    SET_GPR_U32(ctx, 31, 0x1996E4u);
    ctx->pc = 0x1996E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996DCu;
    // 0x1996e0: 0xc60d00a8  lwc1        $f13, 0xA8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x1996DCu, 0x1996E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996E4u;
label_1996e4:
    // 0x1996e4: 0xc60c00ac  lwc1        $f12, 0xAC($s0)
    ctx->pc = 0x1996e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1996e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1996e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996ec: 0xc60d00b0  lwc1        $f13, 0xB0($s0)
    ctx->pc = 0x1996ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1996f0: 0xc0cd508  jal         func_335420
    ctx->pc = 0x1996F0u;
    SET_GPR_U32(ctx, 31, 0x1996F8u);
    ctx->pc = 0x1996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996F0u;
    // 0x1996f4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x1996F0u, 0x1996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996F8u;
label_1996f8:
    // 0x1996f8: 0xc10d272  jal         func_4349C8
    ctx->pc = 0x1996F8u;
    SET_GPR_U32(ctx, 31, 0x199700u);
    ctx->pc = 0x1996FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996F8u;
    // 0x1996fc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x1996F8u, 0x199700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199700u;
label_199700:
    // 0x199700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199704u;
    {
        const bool branch_taken_0x199704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199704u;
        // 0x199708: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199704) {
            ctx->pc = 0x199714u;
            goto label_199714;
        }
    }
    ctx->pc = 0x19970Cu;
    // 0x19970c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19970cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x199710: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x199710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_199714:
    // 0x199714: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
    // 0x199718: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x199718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
    // 0x19971c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19971cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199724: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x199724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x199728: 0xc0cd508  jal         func_335420
    ctx->pc = 0x199728u;
    SET_GPR_U32(ctx, 31, 0x199730u);
    ctx->pc = 0x19972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199728u;
    // 0x19972c: 0x460c6b42  mul.s       $f13, $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x199728u, 0x199730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199730u;
label_199730:
    // 0x199730: 0xc60d00b8  lwc1        $f13, 0xB8($s0)
    ctx->pc = 0x199730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x199734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19973c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199740: 0xc0cd508  jal         func_335420
    ctx->pc = 0x199740u;
    SET_GPR_U32(ctx, 31, 0x199748u);
    ctx->pc = 0x199744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199740u;
    // 0x199744: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x199740u, 0x199748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199748u;
label_199748:
    // 0x199748: 0xc60d00bc  lwc1        $f13, 0xBC($s0)
    ctx->pc = 0x199748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19974c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199750: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x199750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x199754: 0xc0cd508  jal         func_335420
    ctx->pc = 0x199754u;
    SET_GPR_U32(ctx, 31, 0x19975Cu);
    ctx->pc = 0x199758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199754u;
    // 0x199758: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x199754u, 0x19975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19975Cu;
label_19975c:
    // 0x19975c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x19975cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x199760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199764: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x199764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x199768: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x199768u;
    SET_GPR_U32(ctx, 31, 0x199770u);
    ctx->pc = 0x19976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199768u;
    // 0x19976c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x199768u, 0x199770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199770u;
label_199770:
    // 0x199770: 0x920600c9  lbu         $a2, 0xC9($s0)
    ctx->pc = 0x199770u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 201)));
    // 0x199774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199778: 0x920500c8  lbu         $a1, 0xC8($s0)
    ctx->pc = 0x199778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x19977c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x19977Cu;
    SET_GPR_U32(ctx, 31, 0x199784u);
    ctx->pc = 0x199780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19977Cu;
    // 0x199780: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x19977Cu, 0x199784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199784u;
label_199784:
    // 0x199784: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x199784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x199788: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x199788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19978c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x19978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x199790: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x199790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x199794: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x199794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x199798: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x199798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19979c: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x19979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1997a0: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1997a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997a4: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1997a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997a8: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x1997a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997ac: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x1997acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997b0: 0xb2450017  sdl         $a1, 0x17($s2)
    ctx->pc = 0x1997b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1997b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997b8: 0xb6450010  sdr         $a1, 0x10($s2)
    ctx->pc = 0x1997b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1997bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1997bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1997c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1997c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1997c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1997c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1997c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1997c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1997cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1997CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997CCu;
        // 0x1997d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1997CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1997D4u;
    // 0x1997d4: 0x0  nop
    ctx->pc = 0x1997d4u;
    // NOP
    ctx->pc = 0x1997d8u;
}
