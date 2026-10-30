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

// Function: sub_001498A8
// Address: 0x1498a8 - 0x1499e8
void sub_001498A8_0x1498a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001498A8_0x1498a8");
#endif

    switch (ctx->pc) {
        case 0x1498e8u: goto label_1498e8;
        default: break;
    }

    ctx->pc = 0x1498a8u;

    // 0x1498a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1498ac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1498acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1498b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1498b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1498b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1498b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1498b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1498b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1498bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1498bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c0: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x1498c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1498c4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1498c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1498c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1498c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1498cc: 0x2474e3c0  addiu       $s4, $v1, -0x1C40
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960064));
    // 0x1498d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1498d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1498d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1498d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1498d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1498dc: 0x2748021  addu        $s0, $s3, $s4
    ctx->pc = 0x1498dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1498e0: 0xc0525dc  jal         func_149770
    ctx->pc = 0x1498E0u;
    SET_GPR_U32(ctx, 31, 0x1498E8u);
    ctx->pc = 0x1498E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498E0u;
    // 0x1498e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x1498E0u, 0x1498E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498E8u;
label_1498e8:
    // 0x1498e8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1498ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1498ECu;
    {
        const bool branch_taken_0x1498ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1498F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498ECu;
        // 0x1498f0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498ec) {
            ctx->pc = 0x14990Cu;
            goto label_14990c;
        }
    }
    ctx->pc = 0x1498F4u;
    // 0x1498f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1498f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1498f8: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x1498fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1498fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x149900: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x149900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149904: 0x50600031  beql        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x149904u;
    {
        const bool branch_taken_0x149904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149904) {
            ctx->pc = 0x149908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149904u;
            // 0x149908: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1499CCu;
            goto label_1499cc;
        }
    }
    ctx->pc = 0x14990Cu;
label_14990c:
    // 0x14990c: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x14990cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x149910: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x149914: 0x24c6b8d0  addiu       $a2, $a2, -0x4730
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949072));
    // 0x149918: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x14991c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14991cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149920: 0x26850116  addiu       $a1, $s4, 0x116
    ctx->pc = 0x149920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 278));
    // 0x149924: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x149924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x149928: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x149928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14992c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149930: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x149930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x149934: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x149934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x149938: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x149938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14993c: 0x92020111  lbu         $v0, 0x111($s0)
    ctx->pc = 0x14993cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 273)));
    // 0x149940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149944: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x149944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x149948: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x149948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14994c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14994cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149950: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x149950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x149954: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x149954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x149958: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x149958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x14995c: 0x92030111  lbu         $v1, 0x111($s0)
    ctx->pc = 0x14995cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 273)));
    // 0x149960: 0xa2230019  sb          $v1, 0x19($s1)
    ctx->pc = 0x149960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x149964: 0x96020114  lhu         $v0, 0x114($s0)
    ctx->pc = 0x149964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x149968: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x149968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x14996c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x14996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x149970: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x149970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x149974: 0x88a3000b  lwl         $v1, 0xB($a1)
    ctx->pc = 0x149974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x149978: 0x98a30008  lwr         $v1, 0x8($a1)
    ctx->pc = 0x149978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x14997c: 0xb222003b  sdl         $v0, 0x3B($s1)
    ctx->pc = 0x14997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149980: 0xb6220034  sdr         $v0, 0x34($s1)
    ctx->pc = 0x149980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x149984: 0xaa23003f  swl         $v1, 0x3F($s1)
    ctx->pc = 0x149984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x149988: 0xba23003c  swr         $v1, 0x3C($s1)
    ctx->pc = 0x149988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14998c: 0x92020112  lbu         $v0, 0x112($s0)
    ctx->pc = 0x14998cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x149990: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x149990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x149994: 0x92030113  lbu         $v1, 0x113($s0)
    ctx->pc = 0x149994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 275)));
    // 0x149998: 0xa223001b  sb          $v1, 0x1B($s1)
    ctx->pc = 0x149998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x14999c: 0x92020112  lbu         $v0, 0x112($s0)
    ctx->pc = 0x14999cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x1499a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1499a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1499a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1499a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1499a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1499a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1499ac: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1499acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1499b0: 0x92020113  lbu         $v0, 0x113($s0)
    ctx->pc = 0x1499b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 275)));
    // 0x1499b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1499b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1499b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1499b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1499bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1499bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1499c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1499c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1499c4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1499c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1499c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1499c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1499cc:
    // 0x1499cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1499ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1499d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1499d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1499d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1499d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1499d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1499d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1499dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1499dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1499E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1499E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499E0u;
        // 0x1499e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1499E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1499E8u;
}
