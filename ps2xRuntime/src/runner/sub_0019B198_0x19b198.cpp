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

// Function: sub_0019B198
// Address: 0x19b198 - 0x19b2a8
void sub_0019B198_0x19b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B198_0x19b198");
#endif

    switch (ctx->pc) {
        case 0x19b1dcu: goto label_19b1dc;
        case 0x19b1ecu: goto label_19b1ec;
        case 0x19b220u: goto label_19b220;
        case 0x19b240u: goto label_19b240;
        case 0x19b254u: goto label_19b254;
        case 0x19b268u: goto label_19b268;
        default: break;
    }

    ctx->pc = 0x19b198u;

    // 0x19b198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b19c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x19b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x19b1a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19b1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b1a8: 0x2451b8a8  addiu       $s1, $v0, -0x4758
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x19b1ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19b1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b4: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
    // 0x19b1b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b1bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b1c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19b1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1c4: 0x3c013ac4  lui         $at, 0x3AC4
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15044 << 16));
    // 0x19b1c8: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x19b1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x19b1cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19b1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b1d4: 0xc0cd508  jal         func_335420
    ctx->pc = 0x19B1D4u;
    SET_GPR_U32(ctx, 31, 0x19B1DCu);
    ctx->pc = 0x19B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1D4u;
    // 0x19b1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x19B1D4u, 0x19B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1DCu;
label_19b1dc:
    // 0x19b1dc: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x19b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b1e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19b1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19b1e4: 0xc10d272  jal         func_4349C8
    ctx->pc = 0x19B1E4u;
    SET_GPR_U32(ctx, 31, 0x19B1ECu);
    ctx->pc = 0x19B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1E4u;
    // 0x19b1e8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x19B1E4u, 0x19B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1ECu;
label_19b1ec:
    // 0x19b1ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B1F0u;
    {
        const bool branch_taken_0x19b1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1F0u;
        // 0x19b1f4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f0) {
            ctx->pc = 0x19B200u;
            goto label_19b200;
        }
    }
    ctx->pc = 0x19B1F8u;
    // 0x19b1f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19b1f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19b1fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19b1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19b200:
    // 0x19b200: 0x3c013fd0  lui         $at, 0x3FD0
    ctx->pc = 0x19b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16336 << 16));
    // 0x19b204: 0x34217508  ori         $at, $at, 0x7508
    ctx->pc = 0x19b204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29960);
    // 0x19b208: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b20c: 0x3c013ff6  lui         $at, 0x3FF6
    ctx->pc = 0x19b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16374 << 16));
    // 0x19b210: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x19b210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
    // 0x19b214: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19b218: 0xc0cd508  jal         func_335420
    ctx->pc = 0x19B218u;
    SET_GPR_U32(ctx, 31, 0x19B220u);
    ctx->pc = 0x19B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B218u;
    // 0x19b21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x19B218u, 0x19B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B220u;
label_19b220:
    // 0x19b220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19b224: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b22c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19b22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x19b230: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19b230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19b234: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19b238: 0xc0cd508  jal         func_335420
    ctx->pc = 0x19B238u;
    SET_GPR_U32(ctx, 31, 0x19B240u);
    ctx->pc = 0x19B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B238u;
    // 0x19b23c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x19B238u, 0x19B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B240u;
label_19b240:
    // 0x19b240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b244: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19b244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19b248: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x19b24c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x19B24Cu;
    SET_GPR_U32(ctx, 31, 0x19B254u);
    ctx->pc = 0x19B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B24Cu;
    // 0x19b250: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x19B24Cu, 0x19B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B254u;
label_19b254:
    // 0x19b254: 0x920600a1  lbu         $a2, 0xA1($s0)
    ctx->pc = 0x19b254u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 161)));
    // 0x19b258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b25c: 0x920500a0  lbu         $a1, 0xA0($s0)
    ctx->pc = 0x19b25cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x19b260: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x19B260u;
    SET_GPR_U32(ctx, 31, 0x19B268u);
    ctx->pc = 0x19B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B260u;
    // 0x19b264: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x19B260u, 0x19B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B268u;
label_19b268:
    // 0x19b268: 0xa3a2000c  sb          $v0, 0xC($sp)
    ctx->pc = 0x19b268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b26c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x19b26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19b270: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x19b270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19b274: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x19b274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x19b278: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x19b278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x19b27c: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x19b27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b280: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x19b280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b284: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x19b284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b288: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19b288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b28c: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x19b28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b290: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19b290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b294: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19b294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2A0u;
        // 0x19b2a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B2A8u;
}
