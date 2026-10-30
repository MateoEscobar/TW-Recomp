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

// Function: sub_0048A0E0
// Address: 0x48a0e0 - 0x48a6e8
void sub_0048A0E0_0x48a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A0E0_0x48a0e0");
#endif

    switch (ctx->pc) {
        case 0x48a180u: goto label_48a180;
        case 0x48a1ccu: goto label_48a1cc;
        case 0x48a1dcu: goto label_48a1dc;
        case 0x48a2b8u: goto label_48a2b8;
        case 0x48a304u: goto label_48a304;
        case 0x48a314u: goto label_48a314;
        case 0x48a3f0u: goto label_48a3f0;
        case 0x48a43cu: goto label_48a43c;
        case 0x48a44cu: goto label_48a44c;
        case 0x48a528u: goto label_48a528;
        case 0x48a574u: goto label_48a574;
        case 0x48a584u: goto label_48a584;
        case 0x48a608u: goto label_48a608;
        default: break;
    }

    ctx->pc = 0x48a0e0u;

    // 0x48a0e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x48a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x48a0e4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x48a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x48a0e8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x48a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x48a0ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x48a0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a0f0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x48a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x48a0f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48a0f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a0f8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x48a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x48a0fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48a0fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a100: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x48a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x48a104: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x48a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x48a108: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x48a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x48a10c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x48a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x48a110: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x48a110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x48a114: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x48a114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x48a118: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x48a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48a11c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x48a11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48a120: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x48a120u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x48a124: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x48a124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x48a128: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x48a128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x48a12c: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x48a12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x48a130: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x48a130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x48a134: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x48a134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x48a138: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x48a138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x48a13c: 0x6a66001f  ldl         $a2, 0x1F($s3)
    ctx->pc = 0x48a13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x48a140: 0x6e660018  ldr         $a2, 0x18($s3)
    ctx->pc = 0x48a140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x48a144: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x48a144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a148: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x48a148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a14c: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x48a14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a150: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x48a150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a154: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x48a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a158: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x48a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a15c: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x48a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a160: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x48a160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a164: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a168: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a16c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x48A16Cu;
    {
        const bool branch_taken_0x48a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A16Cu;
        // 0x48a170: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a16c) {
            ctx->pc = 0x48A24Cu;
            goto label_48a24c;
        }
    }
    ctx->pc = 0x48A174u;
    // 0x48a174: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x48a174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x48a178: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x48a178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x48a17c: 0x0  nop
    ctx->pc = 0x48a17cu;
    // NOP
label_48a180:
    // 0x48a180: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48a180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a184: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x48a184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48a188: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x48a188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48a18c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x48a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x48a190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a194: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x48a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x48a198: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x48a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48a19c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x48a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x48a1a0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x48a1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48a1a4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x48a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x48a1a8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x48a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x48a1ac: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x48a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a1b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x48a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x48a1b4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x48a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x48a1b8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x48a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x48a1bc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x48a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x48a1c0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x48a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x48a1c4: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A1C4u;
    SET_GPR_U32(ctx, 31, 0x48A1CCu);
    ctx->pc = 0x48A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A1C4u;
    // 0x48a1c8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48A1C4u, 0x48A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A1CCu;
label_48a1cc:
    // 0x48a1cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48a1d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48a1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a1d4: 0xc12258a  jal         func_489628
    ctx->pc = 0x48A1D4u;
    SET_GPR_U32(ctx, 31, 0x48A1DCu);
    ctx->pc = 0x48A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A1D4u;
    // 0x48a1d8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489628u, 0x48A1D4u, 0x48A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A1DCu;
label_48a1dc:
    // 0x48a1dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a1e0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a1e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a1e4: 0x0  nop
    ctx->pc = 0x48a1e4u;
    // NOP
    // 0x48a1e8: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x48A1E8u;
    {
        const bool branch_taken_0x48a1e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a1e8) {
            ctx->pc = 0x48A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A1E8u;
            // 0x48a1ec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A23Cu;
            goto label_48a23c;
        }
    }
    ctx->pc = 0x48A1F0u;
    // 0x48a1f0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x48a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a1f4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a1f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a1f8: 0x0  nop
    ctx->pc = 0x48a1f8u;
    // NOP
    // 0x48a1fc: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x48A1FCu;
    {
        const bool branch_taken_0x48a1fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a1fc) {
            ctx->pc = 0x48A200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A1FCu;
            // 0x48a200: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A23Cu;
            goto label_48a23c;
        }
    }
    ctx->pc = 0x48A204u;
    // 0x48a204: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x48a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48a208: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x48a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a20c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x48a20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x48a210: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x48a210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a214: 0x0  nop
    ctx->pc = 0x48a214u;
    // NOP
    // 0x48a218: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x48A218u;
    {
        const bool branch_taken_0x48a218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A218u;
        // 0x48a21c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a218) {
            ctx->pc = 0x48A228u;
            goto label_48a228;
        }
    }
    ctx->pc = 0x48A220u;
    // 0x48a220: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48a220u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x48a224: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x48a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_48a228:
    // 0x48a228: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x48a228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a22c: 0x0  nop
    ctx->pc = 0x48a22cu;
    // NOP
    // 0x48a230: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x48A230u;
    {
        const bool branch_taken_0x48a230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a230) {
            ctx->pc = 0x48A234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A230u;
            // 0x48a234: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A23Cu;
            goto label_48a23c;
        }
    }
    ctx->pc = 0x48A238u;
    // 0x48a238: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48a238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a23c:
    // 0x48a23c: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a240: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a244: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x48A244u;
    {
        const bool branch_taken_0x48a244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A244u;
        // 0x48a248: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a244) {
            ctx->pc = 0x48A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a180;
        }
    }
    ctx->pc = 0x48A24Cu;
label_48a24c:
    // 0x48a24c: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x48a24cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x48a250: 0x8e720014  lw          $s2, 0x14($s3)
    ctx->pc = 0x48a250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x48a254: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48a254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48a258: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a25c: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x48a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48a260: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a264: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x48a264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x48a268: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x48a268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x48a26c: 0x6a68000f  ldl         $t0, 0xF($s3)
    ctx->pc = 0x48a26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x48a270: 0x6e680008  ldr         $t0, 0x8($s3)
    ctx->pc = 0x48a270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x48a274: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x48a274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x48a278: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x48a278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x48a27c: 0x6a65001f  ldl         $a1, 0x1F($s3)
    ctx->pc = 0x48a27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x48a280: 0x6e650018  ldr         $a1, 0x18($s3)
    ctx->pc = 0x48a280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x48a284: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x48a284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a288: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x48a288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a28c: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x48a28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a290: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x48a290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a294: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x48a294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a298: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x48a298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a29c: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x48a29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a2a0: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x48a2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a2a4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x48A2A4u;
    {
        const bool branch_taken_0x48a2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a2a4) {
            ctx->pc = 0x48A2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A2A4u;
            // 0x48a2a8: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A388u;
            goto label_48a388;
        }
    }
    ctx->pc = 0x48A2ACu;
    // 0x48a2ac: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x48a2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x48a2b0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x48a2b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x48a2b4: 0x0  nop
    ctx->pc = 0x48a2b4u;
    // NOP
label_48a2b8:
    // 0x48a2b8: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a2bc: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x48a2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48a2c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x48a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48a2c4: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x48a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    // 0x48a2c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a2cc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x48a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x48a2d0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x48a2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48a2d4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x48a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x48a2d8: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x48a2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48a2dc: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x48a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x48a2e0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x48a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x48a2e4: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x48a2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a2e8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x48a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x48a2ec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x48a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x48a2f0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x48a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x48a2f4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x48a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x48a2f8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x48a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x48a2fc: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A2FCu;
    SET_GPR_U32(ctx, 31, 0x48A304u);
    ctx->pc = 0x48A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A2FCu;
    // 0x48a300: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48A2FCu, 0x48A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A304u;
label_48a304:
    // 0x48a304: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48a308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48a308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a30c: 0xc12258a  jal         func_489628
    ctx->pc = 0x48A30Cu;
    SET_GPR_U32(ctx, 31, 0x48A314u);
    ctx->pc = 0x48A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A30Cu;
    // 0x48a310: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489628u, 0x48A30Cu, 0x48A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A314u;
label_48a314:
    // 0x48a314: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a318: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a318u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a31c: 0x0  nop
    ctx->pc = 0x48a31cu;
    // NOP
    // 0x48a320: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x48A320u;
    {
        const bool branch_taken_0x48a320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a320) {
            ctx->pc = 0x48A324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A320u;
            // 0x48a324: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A374u;
            goto label_48a374;
        }
    }
    ctx->pc = 0x48A328u;
    // 0x48a328: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x48a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a32c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a32cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a330: 0x0  nop
    ctx->pc = 0x48a330u;
    // NOP
    // 0x48a334: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x48A334u;
    {
        const bool branch_taken_0x48a334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a334) {
            ctx->pc = 0x48A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A334u;
            // 0x48a338: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A374u;
            goto label_48a374;
        }
    }
    ctx->pc = 0x48A33Cu;
    // 0x48a33c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x48a33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48a340: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x48a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a344: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x48a344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x48a348: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x48a348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a34c: 0x0  nop
    ctx->pc = 0x48a34cu;
    // NOP
    // 0x48a350: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x48A350u;
    {
        const bool branch_taken_0x48a350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A350u;
        // 0x48a354: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a350) {
            ctx->pc = 0x48A360u;
            goto label_48a360;
        }
    }
    ctx->pc = 0x48A358u;
    // 0x48a358: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48a358u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x48a35c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x48a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_48a360:
    // 0x48a360: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x48a360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a364: 0x0  nop
    ctx->pc = 0x48a364u;
    // NOP
    // 0x48a368: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x48A368u;
    {
        const bool branch_taken_0x48a368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a368) {
            ctx->pc = 0x48A36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A368u;
            // 0x48a36c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A374u;
            goto label_48a374;
        }
    }
    ctx->pc = 0x48A370u;
    // 0x48a370: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48a370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a374:
    // 0x48a374: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a378: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a37c: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x48A37Cu;
    {
        const bool branch_taken_0x48a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A37Cu;
        // 0x48a380: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a37c) {
            ctx->pc = 0x48A2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a2b8;
        }
    }
    ctx->pc = 0x48A384u;
    // 0x48a384: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x48a384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_48a388:
    // 0x48a388: 0x8e720018  lw          $s2, 0x18($s3)
    ctx->pc = 0x48a388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x48a38c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x48a38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x48a390: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a394: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x48a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48a398: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a39c: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x48a39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x48a3a0: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x48a3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x48a3a4: 0x6a67000f  ldl         $a3, 0xF($s3)
    ctx->pc = 0x48a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x48a3a8: 0x6e670008  ldr         $a3, 0x8($s3)
    ctx->pc = 0x48a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x48a3ac: 0x6a680017  ldl         $t0, 0x17($s3)
    ctx->pc = 0x48a3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x48a3b0: 0x6e680010  ldr         $t0, 0x10($s3)
    ctx->pc = 0x48a3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x48a3b4: 0x6a64001f  ldl         $a0, 0x1F($s3)
    ctx->pc = 0x48a3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x48a3b8: 0x6e640018  ldr         $a0, 0x18($s3)
    ctx->pc = 0x48a3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x48a3bc: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x48a3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3c0: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x48a3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3c4: 0xb3a7002f  sdl         $a3, 0x2F($sp)
    ctx->pc = 0x48a3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3c8: 0xb7a70028  sdr         $a3, 0x28($sp)
    ctx->pc = 0x48a3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3cc: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x48a3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3d0: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x48a3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3d4: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x48a3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3d8: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x48a3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a3dc: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x48A3DCu;
    {
        const bool branch_taken_0x48a3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a3dc) {
            ctx->pc = 0x48A3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A3DCu;
            // 0x48a3e0: 0x8e71000c  lw          $s1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A4C0u;
            goto label_48a4c0;
        }
    }
    ctx->pc = 0x48A3E4u;
    // 0x48a3e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x48a3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x48a3e8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x48a3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x48a3ec: 0x0  nop
    ctx->pc = 0x48a3ecu;
    // NOP
label_48a3f0:
    // 0x48a3f0: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48a3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a3f4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x48a3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48a3f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x48a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48a3fc: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x48a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x48a400: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a404: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x48a404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x48a408: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x48a408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48a40c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x48a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x48a410: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x48a410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48a414: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x48a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x48a418: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x48a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x48a41c: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x48a41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a420: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x48a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x48a424: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x48a424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x48a428: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x48a428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x48a42c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x48a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x48a430: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x48a430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x48a434: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A434u;
    SET_GPR_U32(ctx, 31, 0x48A43Cu);
    ctx->pc = 0x48A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A434u;
    // 0x48a438: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48A434u, 0x48A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A43Cu;
label_48a43c:
    // 0x48a43c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48a440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48a440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a444: 0xc12258a  jal         func_489628
    ctx->pc = 0x48A444u;
    SET_GPR_U32(ctx, 31, 0x48A44Cu);
    ctx->pc = 0x48A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A444u;
    // 0x48a448: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489628u, 0x48A444u, 0x48A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A44Cu;
label_48a44c:
    // 0x48a44c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a450: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a454: 0x0  nop
    ctx->pc = 0x48a454u;
    // NOP
    // 0x48a458: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x48A458u;
    {
        const bool branch_taken_0x48a458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a458) {
            ctx->pc = 0x48A45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A458u;
            // 0x48a45c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A4ACu;
            goto label_48a4ac;
        }
    }
    ctx->pc = 0x48A460u;
    // 0x48a460: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x48a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a464: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a464u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a468: 0x0  nop
    ctx->pc = 0x48a468u;
    // NOP
    // 0x48a46c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x48A46Cu;
    {
        const bool branch_taken_0x48a46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a46c) {
            ctx->pc = 0x48A470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A46Cu;
            // 0x48a470: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A4ACu;
            goto label_48a4ac;
        }
    }
    ctx->pc = 0x48A474u;
    // 0x48a474: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x48a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48a478: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x48a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a47c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x48a47cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x48a480: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x48a480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a484: 0x0  nop
    ctx->pc = 0x48a484u;
    // NOP
    // 0x48a488: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x48A488u;
    {
        const bool branch_taken_0x48a488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A488u;
        // 0x48a48c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a488) {
            ctx->pc = 0x48A498u;
            goto label_48a498;
        }
    }
    ctx->pc = 0x48A490u;
    // 0x48a490: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48a490u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x48a494: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x48a494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_48a498:
    // 0x48a498: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x48a498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a49c: 0x0  nop
    ctx->pc = 0x48a49cu;
    // NOP
    // 0x48a4a0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x48A4A0u;
    {
        const bool branch_taken_0x48a4a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a4a0) {
            ctx->pc = 0x48A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A4A0u;
            // 0x48a4a4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A4ACu;
            goto label_48a4ac;
        }
    }
    ctx->pc = 0x48A4A8u;
    // 0x48a4a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48a4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a4ac:
    // 0x48a4ac: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a4b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a4b4: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x48A4B4u;
    {
        const bool branch_taken_0x48a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4B4u;
        // 0x48a4b8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a4b4) {
            ctx->pc = 0x48A3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a3f0;
        }
    }
    ctx->pc = 0x48A4BCu;
    // 0x48a4bc: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x48a4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_48a4c0:
    // 0x48a4c0: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x48a4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x48a4c4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x48a4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48a4c8: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a4cc: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x48a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48a4d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a4d4: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x48a4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x48a4d8: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x48a4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x48a4dc: 0x6a66000f  ldl         $a2, 0xF($s3)
    ctx->pc = 0x48a4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x48a4e0: 0x6e660008  ldr         $a2, 0x8($s3)
    ctx->pc = 0x48a4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x48a4e4: 0x6a670017  ldl         $a3, 0x17($s3)
    ctx->pc = 0x48a4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x48a4e8: 0x6e670010  ldr         $a3, 0x10($s3)
    ctx->pc = 0x48a4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x48a4ec: 0x6a68001f  ldl         $t0, 0x1F($s3)
    ctx->pc = 0x48a4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x48a4f0: 0x6e680018  ldr         $t0, 0x18($s3)
    ctx->pc = 0x48a4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x48a4f4: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x48a4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a4f8: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x48a4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a4fc: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x48a4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a500: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x48a500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a504: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x48a504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a508: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x48a508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a50c: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x48a50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a510: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x48a510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a514: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x48A514u;
    {
        const bool branch_taken_0x48a514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a514) {
            ctx->pc = 0x48A518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A514u;
            // 0x48a518: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A5F8u;
            goto label_48a5f8;
        }
    }
    ctx->pc = 0x48A51Cu;
    // 0x48a51c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x48a51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x48a520: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x48a520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x48a524: 0x0  nop
    ctx->pc = 0x48a524u;
    // NOP
label_48a528:
    // 0x48a528: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48a528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a52c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x48a52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48a530: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x48a530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48a534: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x48a534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x48a538: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48a538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a53c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x48a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x48a540: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x48a540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48a544: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x48a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x48a548: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x48a548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48a54c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x48a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x48a550: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x48a550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x48a554: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x48a554u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a558: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x48a558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x48a55c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x48a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x48a560: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x48a560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x48a564: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x48a564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x48a568: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x48a568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x48a56c: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A56Cu;
    SET_GPR_U32(ctx, 31, 0x48A574u);
    ctx->pc = 0x48A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A56Cu;
    // 0x48a570: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48A56Cu, 0x48A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A574u;
label_48a574:
    // 0x48a574: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48a578: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a57c: 0xc12258a  jal         func_489628
    ctx->pc = 0x48A57Cu;
    SET_GPR_U32(ctx, 31, 0x48A584u);
    ctx->pc = 0x48A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A57Cu;
    // 0x48a580: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489628u, 0x48A57Cu, 0x48A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A584u;
label_48a584:
    // 0x48a584: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a588: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a588u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a58c: 0x0  nop
    ctx->pc = 0x48a58cu;
    // NOP
    // 0x48a590: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x48A590u;
    {
        const bool branch_taken_0x48a590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a590) {
            ctx->pc = 0x48A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A590u;
            // 0x48a594: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A5E4u;
            goto label_48a5e4;
        }
    }
    ctx->pc = 0x48A598u;
    // 0x48a598: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x48a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a59c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x48a59cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a5a0: 0x0  nop
    ctx->pc = 0x48a5a0u;
    // NOP
    // 0x48a5a4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x48A5A4u;
    {
        const bool branch_taken_0x48a5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a5a4) {
            ctx->pc = 0x48A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A5A4u;
            // 0x48a5a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A5E4u;
            goto label_48a5e4;
        }
    }
    ctx->pc = 0x48A5ACu;
    // 0x48a5ac: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x48a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48a5b0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x48a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a5b4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x48a5b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x48a5b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x48a5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a5bc: 0x0  nop
    ctx->pc = 0x48a5bcu;
    // NOP
    // 0x48a5c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x48A5C0u;
    {
        const bool branch_taken_0x48a5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A5C0u;
        // 0x48a5c4: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a5c0) {
            ctx->pc = 0x48A5D0u;
            goto label_48a5d0;
        }
    }
    ctx->pc = 0x48A5C8u;
    // 0x48a5c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48a5c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x48a5cc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x48a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_48a5d0:
    // 0x48a5d0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x48a5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a5d4: 0x0  nop
    ctx->pc = 0x48a5d4u;
    // NOP
    // 0x48a5d8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x48A5D8u;
    {
        const bool branch_taken_0x48a5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a5d8) {
            ctx->pc = 0x48A5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A5D8u;
            // 0x48a5dc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A5E4u;
            goto label_48a5e4;
        }
    }
    ctx->pc = 0x48A5E0u;
    // 0x48a5e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48a5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a5e4:
    // 0x48a5e4: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x48a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x48a5e8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x48a5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48a5ec: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x48A5ECu;
    {
        const bool branch_taken_0x48a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A5ECu;
        // 0x48a5f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a5ec) {
            ctx->pc = 0x48A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a528;
        }
    }
    ctx->pc = 0x48A5F4u;
    // 0x48a5f4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x48a5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_48a5f8:
    // 0x48a5f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48a5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a600: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x48a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a604: 0x0  nop
    ctx->pc = 0x48a604u;
    // NOP
label_48a608:
    // 0x48a608: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x48a608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x48a60c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x48a60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a610: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x48a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x48a614: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x48a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a618: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48a618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a61c: 0x0  nop
    ctx->pc = 0x48a61cu;
    // NOP
    // 0x48a620: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x48A620u;
    {
        const bool branch_taken_0x48a620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a620) {
            ctx->pc = 0x48A624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A620u;
            // 0x48a624: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A628u;
            goto label_48a628;
        }
    }
    ctx->pc = 0x48A628u;
label_48a628:
    // 0x48a628: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x48a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x48a62c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x48a62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x48a630: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x48A630u;
    {
        const bool branch_taken_0x48a630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A630u;
        // 0x48a634: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a630) {
            ctx->pc = 0x48A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a608;
        }
    }
    ctx->pc = 0x48A638u;
    // 0x48a638: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x48a638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x48a63c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x48a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a640: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x48a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x48a644: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x48a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48a648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a64c: 0x0  nop
    ctx->pc = 0x48a64cu;
    // NOP
    // 0x48a650: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x48A650u;
    {
        const bool branch_taken_0x48a650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A650u;
        // 0x48a654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a650) {
            ctx->pc = 0x48A6B4u;
            goto label_48a6b4;
        }
    }
    ctx->pc = 0x48A658u;
    // 0x48a658: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x48a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x48a65c: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x48a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x48a660: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x48a660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48a664: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x48a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x48a668: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x48a668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x48a66c: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x48a66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x48a670: 0x6a66000f  ldl         $a2, 0xF($s3)
    ctx->pc = 0x48a670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x48a674: 0x6e660008  ldr         $a2, 0x8($s3)
    ctx->pc = 0x48a674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x48a678: 0x6a670017  ldl         $a3, 0x17($s3)
    ctx->pc = 0x48a678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x48a67c: 0x6e670010  ldr         $a3, 0x10($s3)
    ctx->pc = 0x48a67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x48a680: 0x6a68001f  ldl         $t0, 0x1F($s3)
    ctx->pc = 0x48a680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x48a684: 0x6e680018  ldr         $t0, 0x18($s3)
    ctx->pc = 0x48a684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x48a688: 0xb2c20007  sdl         $v0, 0x7($s6)
    ctx->pc = 0x48a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a68c: 0xb6c20000  sdr         $v0, 0x0($s6)
    ctx->pc = 0x48a68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a690: 0xb2c6000f  sdl         $a2, 0xF($s6)
    ctx->pc = 0x48a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a694: 0xb6c60008  sdr         $a2, 0x8($s6)
    ctx->pc = 0x48a694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a698: 0xb2c70017  sdl         $a3, 0x17($s6)
    ctx->pc = 0x48a698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a69c: 0xb6c70010  sdr         $a3, 0x10($s6)
    ctx->pc = 0x48a69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a6a0: 0xb2c8001f  sdl         $t0, 0x1F($s6)
    ctx->pc = 0x48a6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a6a4: 0xb6c80018  sdr         $t0, 0x18($s6)
    ctx->pc = 0x48a6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48a6a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x48a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x48a6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a6b0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x48a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_48a6b4:
    // 0x48a6b4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x48a6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x48a6b8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x48a6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x48a6bc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x48a6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x48a6c0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x48a6c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x48a6c4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x48a6c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x48a6c8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x48a6c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x48a6cc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x48a6ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48a6d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x48a6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48a6d4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x48a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x48a6d8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x48a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48a6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x48A6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A6DCu;
        // 0x48a6e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A6E4u;
    // 0x48a6e4: 0x0  nop
    ctx->pc = 0x48a6e4u;
    // NOP
    ctx->pc = 0x48a6e8u;
}
