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

// Function: sub_00191DD8
// Address: 0x191dd8 - 0x192588
void sub_00191DD8_0x191dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191DD8_0x191dd8");
#endif

    switch (ctx->pc) {
        case 0x191e20u: goto label_191e20;
        case 0x191e40u: goto label_191e40;
        case 0x191f80u: goto label_191f80;
        case 0x191f90u: goto label_191f90;
        case 0x191fa8u: goto label_191fa8;
        case 0x191fb4u: goto label_191fb4;
        case 0x191fc4u: goto label_191fc4;
        case 0x191fdcu: goto label_191fdc;
        case 0x191fe8u: goto label_191fe8;
        case 0x191ff4u: goto label_191ff4;
        case 0x192008u: goto label_192008;
        case 0x192048u: goto label_192048;
        case 0x192070u: goto label_192070;
        case 0x192230u: goto label_192230;
        case 0x1923b8u: goto label_1923b8;
        case 0x192540u: goto label_192540;
        case 0x192548u: goto label_192548;
        default: break;
    }

    ctx->pc = 0x191dd8u;

    // 0x191dd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x191dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x191ddc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x191ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x191de0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x191de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x191de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191de8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x191de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x191dec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x191decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x191df0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x191df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x191df4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x191df8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x191df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x191dfc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x191dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x191e00: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x191e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x191e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191e08: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x191e08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x191e0c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x191e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x191e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191E10u;
    {
        const bool branch_taken_0x191e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E10u;
        // 0x191e14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e10) {
            ctx->pc = 0x191E28u;
            goto label_191e28;
        }
    }
    ctx->pc = 0x191E18u;
    // 0x191e18: 0xc064642  jal         func_191908
    ctx->pc = 0x191E18u;
    SET_GPR_U32(ctx, 31, 0x191E20u);
    ctx->pc = 0x191908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191908u, 0x191E18u, 0x191E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E20u;
label_191e20:
    // 0x191e20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E20u;
            // 0x191e24: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191E30u;
            goto label_191e30;
        }
    }
    ctx->pc = 0x191E28u;
label_191e28:
    // 0x191e28: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x191E28u;
    {
        const bool branch_taken_0x191e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E28u;
        // 0x191e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e28) {
            ctx->pc = 0x192550u;
            goto label_192550;
        }
    }
    ctx->pc = 0x191E30u;
label_191e30:
    // 0x191e30: 0x24050ffa  addiu       $a1, $zero, 0xFFA
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4090));
    // 0x191e34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x191e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e38: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x191E38u;
    SET_GPR_U32(ctx, 31, 0x191E40u);
    ctx->pc = 0x191E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E38u;
    // 0x191e3c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x191E38u, 0x191E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E40u;
label_191e40:
    // 0x191e40: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x191e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x191e44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x191e4c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x191e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x191e50: 0xc441cd84  lwc1        $f1, -0x327C($v0)
    ctx->pc = 0x191e50u;
    { uint32_t bits = FAST_READ32(0x50CD84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191e58: 0x0  nop
    ctx->pc = 0x191e58u;
    // NOP
    // 0x191e5c: 0x450001b6  bc1f        . + 4 + (0x1B6 << 2)
    ctx->pc = 0x191E5Cu;
    {
        const bool branch_taken_0x191e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191e5c) {
            ctx->pc = 0x192538u;
            goto label_192538;
        }
    }
    ctx->pc = 0x191E64u;
    // 0x191e64: 0xe6340060  swc1        $f20, 0x60($s1)
    ctx->pc = 0x191e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x191e68: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x191e68u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e6c: 0x0  nop
    ctx->pc = 0x191e6cu;
    // NOP
    // 0x191e70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191e74: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x191e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e78: 0x8a220067  lwl         $v0, 0x67($s1)
    ctx->pc = 0x191e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x191e7c: 0x9a220064  lwr         $v0, 0x64($s1)
    ctx->pc = 0x191e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x191e80: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x191e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x191e84: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x191e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x191e88: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x191e8c: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x191e8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191e90: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
    // 0x191e94: 0x8ef60030  lw          $s6, 0x30($s7)
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x191e98: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x191e9c: 0x8ef30034  lw          $s3, 0x34($s7)
    ctx->pc = 0x191e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x191ea0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191EA0u;
    {
        const bool branch_taken_0x191ea0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x191EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EA0u;
        // 0x191ea4: 0x8c550014  lw          $s5, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ea0) {
            ctx->pc = 0x191EBCu;
            goto label_191ebc;
        }
    }
    ctx->pc = 0x191EA8u;
    // 0x191ea8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x191ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191eac: 0x0  nop
    ctx->pc = 0x191eacu;
    // NOP
    // 0x191eb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191EB4u;
    {
        const bool branch_taken_0x191eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191eb4) {
            ctx->pc = 0x191ED8u;
            goto label_191ed8;
        }
    }
    ctx->pc = 0x191EBCu;
label_191ebc:
    // 0x191ebc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x191ec0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x191ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x191ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ecc: 0x0  nop
    ctx->pc = 0x191eccu;
    // NOP
    // 0x191ed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191ed4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x191ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_191ed8:
    // 0x191ed8: 0x0  nop
    ctx->pc = 0x191ed8u;
    // NOP
    // 0x191edc: 0x0  nop
    ctx->pc = 0x191edcu;
    // NOP
    // 0x191ee0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x191ee0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191ee4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x191ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x191ee8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x191ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x191eec: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x191eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x191ef0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191EF0u;
    {
        const bool branch_taken_0x191ef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EF0u;
        // 0x191ef4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ef0) {
            ctx->pc = 0x191F0Cu;
            goto label_191f0c;
        }
    }
    ctx->pc = 0x191EF8u;
    // 0x191ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191efc: 0x0  nop
    ctx->pc = 0x191efcu;
    // NOP
    // 0x191f00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191F04u;
    {
        const bool branch_taken_0x191f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F04u;
        // 0x191f08: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f04) {
            ctx->pc = 0x191F28u;
            goto label_191f28;
        }
    }
    ctx->pc = 0x191F0Cu;
label_191f0c:
    // 0x191f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191f10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191f14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191f18: 0x0  nop
    ctx->pc = 0x191f18u;
    // NOP
    // 0x191f1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191f20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x191f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x191f24: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x191f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_191f28:
    // 0x191f28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191f2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191F2Cu;
    {
        const bool branch_taken_0x191f2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F2Cu;
        // 0x191f30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f2c) {
            ctx->pc = 0x191F48u;
            goto label_191f48;
        }
    }
    ctx->pc = 0x191F34u;
    // 0x191f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f38: 0x0  nop
    ctx->pc = 0x191f38u;
    // NOP
    // 0x191f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191f40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x191F40u;
    {
        const bool branch_taken_0x191f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f40) {
            ctx->pc = 0x191F60u;
            goto label_191f60;
        }
    }
    ctx->pc = 0x191F48u;
label_191f48:
    // 0x191f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191f4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f54: 0x0  nop
    ctx->pc = 0x191f54u;
    // NOP
    // 0x191f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191f5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x191f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_191f60:
    // 0x191f60: 0x0  nop
    ctx->pc = 0x191f60u;
    // NOP
    // 0x191f64: 0x0  nop
    ctx->pc = 0x191f64u;
    // NOP
    // 0x191f68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x191f68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191f6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x191f70: 0xc44ccd90  lwc1        $f12, -0x3270($v0)
    ctx->pc = 0x191f70u;
    { uint32_t bits = FAST_READ32(0x50CD90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191f74: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x191f74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x191f78: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x191F78u;
    SET_GPR_U32(ctx, 31, 0x191F80u);
    ctx->pc = 0x191F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F78u;
    // 0x191f7c: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x191F78u, 0x191F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F80u;
label_191f80:
    // 0x191f80: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x191f84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f88: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x191F88u;
    SET_GPR_U32(ctx, 31, 0x191F90u);
    ctx->pc = 0x191F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F88u;
    // 0x191f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x191F88u, 0x191F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F90u;
label_191f90:
    // 0x191f90: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191F90u;
    {
        const bool branch_taken_0x191f90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x191f90) {
            ctx->pc = 0x191F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191F90u;
            // 0x191f94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FACu;
            goto label_191fac;
        }
    }
    ctx->pc = 0x191F98u;
    // 0x191f98: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x191f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x191f9c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x191f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x191fa0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x191FA0u;
    SET_GPR_U32(ctx, 31, 0x191FA8u);
    ctx->pc = 0x191FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FA0u;
    // 0x191fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x191FA0u, 0x191FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FA8u;
label_191fa8:
    // 0x191fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x191fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_191fac:
    // 0x191fac: 0xc12e3c4  jal         func_4B8F10
    ctx->pc = 0x191FACu;
    SET_GPR_U32(ctx, 31, 0x191FB4u);
    ctx->pc = 0x191FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FACu;
    // 0x191fb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8F10u, 0x191FACu, 0x191FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FB4u;
label_191fb4:
    // 0x191fb4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x191fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x191fb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fbc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x191FBCu;
    SET_GPR_U32(ctx, 31, 0x191FC4u);
    ctx->pc = 0x191FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FBCu;
    // 0x191fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x191FBCu, 0x191FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FC4u;
label_191fc4:
    // 0x191fc4: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191FC4u;
    {
        const bool branch_taken_0x191fc4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x191fc4) {
            ctx->pc = 0x191FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191FC4u;
            // 0x191fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FE0u;
            goto label_191fe0;
        }
    }
    ctx->pc = 0x191FCCu;
    // 0x191fcc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x191fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x191fd0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x191fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x191fd4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x191FD4u;
    SET_GPR_U32(ctx, 31, 0x191FDCu);
    ctx->pc = 0x191FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FD4u;
    // 0x191fd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x191FD4u, 0x191FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FDCu;
label_191fdc:
    // 0x191fdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x191fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_191fe0:
    // 0x191fe0: 0xc10b000  jal         func_42C000
    ctx->pc = 0x191FE0u;
    SET_GPR_U32(ctx, 31, 0x191FE8u);
    ctx->pc = 0x191FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FE0u;
    // 0x191fe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x191FE0u, 0x191FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FE8u;
label_191fe8:
    // 0x191fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x191fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x191FECu;
    SET_GPR_U32(ctx, 31, 0x191FF4u);
    ctx->pc = 0x191FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FECu;
    // 0x191ff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x191FECu, 0x191FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FF4u;
label_191ff4:
    // 0x191ff4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x191ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x191ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x191ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192000: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x192000u;
    {
        const bool branch_taken_0x192000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192000u;
        // 0x192004: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192000) {
            ctx->pc = 0x192214u;
            goto label_192214;
        }
    }
    ctx->pc = 0x192008u;
label_192008:
    // 0x192008: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192008u;
    {
        const bool branch_taken_0x192008 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192008u;
        // 0x19200c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192008) {
            ctx->pc = 0x192024u;
            goto label_192024;
        }
    }
    ctx->pc = 0x192010u;
    // 0x192010: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x192010u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192014: 0x0  nop
    ctx->pc = 0x192014u;
    // NOP
    // 0x192018: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x192018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19201c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19201Cu;
    {
        const bool branch_taken_0x19201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19201Cu;
        // 0x192020: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19201c) {
            ctx->pc = 0x192040u;
            goto label_192040;
        }
    }
    ctx->pc = 0x192024u;
label_192024:
    // 0x192024: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x192024u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x192028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19202c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19202cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192030: 0x0  nop
    ctx->pc = 0x192030u;
    // NOP
    // 0x192034: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x192034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x192038: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x192038u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x19203c: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x19203cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_192040:
    // 0x192040: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x192040u;
    SET_GPR_U32(ctx, 31, 0x192048u);
    ctx->pc = 0x192044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192040u;
    // 0x192044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x192040u, 0x192048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192048u;
label_192048:
    // 0x192048: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x192048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19204c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x19204cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x192050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192054: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x192054u;
    {
        const bool branch_taken_0x192054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192054u;
        // 0x192058: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192054) {
            ctx->pc = 0x1921FCu;
            goto label_1921fc;
        }
    }
    ctx->pc = 0x19205Cu;
    // 0x19205c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x192060: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x192064: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x192064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192068: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19206c: 0x0  nop
    ctx->pc = 0x19206cu;
    // NOP
label_192070:
    // 0x192070: 0xc560cd88  lwc1        $f0, -0x3278($t3)
    ctx->pc = 0x192070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294954376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192074: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x192074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x192078: 0xc541cd8c  lwc1        $f1, -0x3274($t2)
    ctx->pc = 0x192078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294954380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19207c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19207cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x192080: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192088: 0xc91818  mult        $v1, $a2, $t1
    ctx->pc = 0x192088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19208c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x192090: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x192094: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192098: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x192098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19209c: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x19209cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1920a0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1920a4: 0xa3a40003  sb          $a0, 0x3($sp)
    ctx->pc = 0x1920a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1920a8: 0x733821  addu        $a3, $v1, $s3
    ctx->pc = 0x1920a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1920ac: 0x8ba40003  lwl         $a0, 0x3($sp)
    ctx->pc = 0x1920acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1920b0: 0x9ba40000  lwr         $a0, 0x0($sp)
    ctx->pc = 0x1920b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1920b4: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x1920b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1920b8: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x1920b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1920bc: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x1920bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1920c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1920c4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1920c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1920c8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1920cc: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1920ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1920d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1920D0u;
    {
        const bool branch_taken_0x1920d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1920D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D0u;
        // 0x1920d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920d0) {
            ctx->pc = 0x1920ECu;
            goto label_1920ec;
        }
    }
    ctx->pc = 0x1920D8u;
    // 0x1920d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1920d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1920dc: 0x0  nop
    ctx->pc = 0x1920dcu;
    // NOP
    // 0x1920e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1920e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1920e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1920E4u;
    {
        const bool branch_taken_0x1920e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E4u;
        // 0x1920e8: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920e4) {
            ctx->pc = 0x192108u;
            goto label_192108;
        }
    }
    ctx->pc = 0x1920ECu;
label_1920ec:
    // 0x1920ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1920ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1920f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1920f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1920f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1920f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1920f8: 0x0  nop
    ctx->pc = 0x1920f8u;
    // NOP
    // 0x1920fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1920fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192100: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192104: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_192108:
    // 0x192108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19210c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19210Cu;
    {
        const bool branch_taken_0x19210c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19210Cu;
        // 0x192110: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19210c) {
            ctx->pc = 0x192128u;
            goto label_192128;
        }
    }
    ctx->pc = 0x192114u;
    // 0x192114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192118: 0x0  nop
    ctx->pc = 0x192118u;
    // NOP
    // 0x19211c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19211cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192120u;
    {
        const bool branch_taken_0x192120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192120) {
            ctx->pc = 0x192140u;
            goto label_192140;
        }
    }
    ctx->pc = 0x192128u;
label_192128:
    // 0x192128: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19212c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192134: 0x0  nop
    ctx->pc = 0x192134u;
    // NOP
    // 0x192138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19213c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19213cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192140:
    // 0x192140: 0x0  nop
    ctx->pc = 0x192140u;
    // NOP
    // 0x192144: 0x0  nop
    ctx->pc = 0x192144u;
    // NOP
    // 0x192148: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x192148u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19214c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x192150: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192154: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x192154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x192158: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x192158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19215c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x192160: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x192160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192164: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192164u;
    {
        const bool branch_taken_0x192164 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192164u;
        // 0x192168: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192164) {
            ctx->pc = 0x192180u;
            goto label_192180;
        }
    }
    ctx->pc = 0x19216Cu;
    // 0x19216c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19216cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192170: 0x0  nop
    ctx->pc = 0x192170u;
    // NOP
    // 0x192174: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192178u;
    {
        const bool branch_taken_0x192178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192178u;
        // 0x19217c: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192178) {
            ctx->pc = 0x19219Cu;
            goto label_19219c;
        }
    }
    ctx->pc = 0x192180u;
label_192180:
    // 0x192180: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19218c: 0x0  nop
    ctx->pc = 0x19218cu;
    // NOP
    // 0x192190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192194: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192198: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_19219c:
    // 0x19219c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1921a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1921A0u;
    {
        const bool branch_taken_0x1921a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1921A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A0u;
        // 0x1921a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921a0) {
            ctx->pc = 0x1921BCu;
            goto label_1921bc;
        }
    }
    ctx->pc = 0x1921A8u;
    // 0x1921a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1921a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1921ac: 0x0  nop
    ctx->pc = 0x1921acu;
    // NOP
    // 0x1921b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1921b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1921b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1921B4u;
    {
        const bool branch_taken_0x1921b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921b4) {
            ctx->pc = 0x1921D4u;
            goto label_1921d4;
        }
    }
    ctx->pc = 0x1921BCu;
label_1921bc:
    // 0x1921bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1921bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1921c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1921c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1921c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1921c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1921c8: 0x0  nop
    ctx->pc = 0x1921c8u;
    // NOP
    // 0x1921cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1921ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1921d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1921d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1921d4:
    // 0x1921d4: 0x0  nop
    ctx->pc = 0x1921d4u;
    // NOP
    // 0x1921d8: 0x0  nop
    ctx->pc = 0x1921d8u;
    // NOP
    // 0x1921dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1921dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1921e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1921e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1921e4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1921e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1921e8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1921e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1921ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1921ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1921f0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1921f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1921f4: 0x5440ff9e  bnel        $v0, $zero, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1921F4u;
    {
        const bool branch_taken_0x1921f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1921f4) {
            ctx->pc = 0x1921F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921F4u;
            // 0x1921f8: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192070;
        }
    }
    ctx->pc = 0x1921FCu;
label_1921fc:
    // 0x1921fc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1921fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x192200: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x192200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192204: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x192204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x192208: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x192208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19220c: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x19220Cu;
    {
        const bool branch_taken_0x19220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19220c) {
            ctx->pc = 0x192008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192008;
        }
    }
    ctx->pc = 0x192214u;
label_192214:
    // 0x192214: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x192218: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x192218u;
    {
        const bool branch_taken_0x192218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192218u;
        // 0x19221c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192218) {
            ctx->pc = 0x1923A0u;
            goto label_1923a0;
        }
    }
    ctx->pc = 0x192220u;
    // 0x192220: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192224: 0x26a80008  addiu       $t0, $s5, 0x8
    ctx->pc = 0x192224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192228: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x192228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19222c: 0x0  nop
    ctx->pc = 0x19222cu;
    // NOP
label_192230:
    // 0x192230: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x192230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192234: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192238: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x192238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19223c: 0xa91818  mult        $v1, $a1, $t1
    ctx->pc = 0x19223cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x192240: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x192244: 0x88e60003  lwl         $a2, 0x3($a3)
    ctx->pc = 0x192244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x192248: 0x98e60000  lwr         $a2, 0x0($a3)
    ctx->pc = 0x192248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x19224c: 0xa8460003  swl         $a2, 0x3($v0)
    ctx->pc = 0x19224cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x192250: 0xb8460000  swr         $a2, 0x0($v0)
    ctx->pc = 0x192250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x192254: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x192258: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x192258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19225c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x19225cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x192260: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x192260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x192264: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x192264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x192268: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x192268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19226c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19226Cu;
    {
        const bool branch_taken_0x19226c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19226Cu;
        // 0x192270: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19226c) {
            ctx->pc = 0x192288u;
            goto label_192288;
        }
    }
    ctx->pc = 0x192274u;
    // 0x192274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192278: 0x0  nop
    ctx->pc = 0x192278u;
    // NOP
    // 0x19227c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19227cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192280: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192280u;
    {
        const bool branch_taken_0x192280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192280u;
        // 0x192284: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192280) {
            ctx->pc = 0x1922A8u;
            goto label_1922a8;
        }
    }
    ctx->pc = 0x192288u;
label_192288:
    // 0x192288: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19228c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192298: 0x0  nop
    ctx->pc = 0x192298u;
    // NOP
    // 0x19229c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19229cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1922a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1922a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1922a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1922a8:
    // 0x1922a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1922a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1922ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1922ACu;
    {
        const bool branch_taken_0x1922ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1922B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922ACu;
        // 0x1922b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922ac) {
            ctx->pc = 0x1922C8u;
            goto label_1922c8;
        }
    }
    ctx->pc = 0x1922B4u;
    // 0x1922b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1922b8: 0x0  nop
    ctx->pc = 0x1922b8u;
    // NOP
    // 0x1922bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1922bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1922c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1922C0u;
    {
        const bool branch_taken_0x1922c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1922c0) {
            ctx->pc = 0x1922E0u;
            goto label_1922e0;
        }
    }
    ctx->pc = 0x1922C8u;
label_1922c8:
    // 0x1922c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1922c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1922cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1922ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1922d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1922d4: 0x0  nop
    ctx->pc = 0x1922d4u;
    // NOP
    // 0x1922d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1922d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1922dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1922dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1922e0:
    // 0x1922e0: 0x0  nop
    ctx->pc = 0x1922e0u;
    // NOP
    // 0x1922e4: 0x0  nop
    ctx->pc = 0x1922e4u;
    // NOP
    // 0x1922e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1922e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1922ec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1922f0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1922f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1922f4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1922f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1922f8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1922f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1922fc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x192300: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x192300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192304: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192304u;
    {
        const bool branch_taken_0x192304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192304u;
        // 0x192308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192304) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x19230Cu;
    // 0x19230c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19230cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192310: 0x0  nop
    ctx->pc = 0x192310u;
    // NOP
    // 0x192314: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192318u;
    {
        const bool branch_taken_0x192318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192318) {
            ctx->pc = 0x19233Cu;
            goto label_19233c;
        }
    }
    ctx->pc = 0x192320u;
label_192320:
    // 0x192320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19232c: 0x0  nop
    ctx->pc = 0x19232cu;
    // NOP
    // 0x192330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192334: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192338: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x192338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_19233c:
    // 0x19233c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192340: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192340u;
    {
        const bool branch_taken_0x192340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192340u;
        // 0x192344: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192340) {
            ctx->pc = 0x19235Cu;
            goto label_19235c;
        }
    }
    ctx->pc = 0x192348u;
    // 0x192348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19234c: 0x0  nop
    ctx->pc = 0x19234cu;
    // NOP
    // 0x192350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192354: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192354u;
    {
        const bool branch_taken_0x192354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192354) {
            ctx->pc = 0x192374u;
            goto label_192374;
        }
    }
    ctx->pc = 0x19235Cu;
label_19235c:
    // 0x19235c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192368: 0x0  nop
    ctx->pc = 0x192368u;
    // NOP
    // 0x19236c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19236cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192370: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192374:
    // 0x192374: 0x0  nop
    ctx->pc = 0x192374u;
    // NOP
    // 0x192378: 0x0  nop
    ctx->pc = 0x192378u;
    // NOP
    // 0x19237c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19237cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192384: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x192384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x192388: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x192388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x19238c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x192390: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x192390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x192394: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x192394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192398: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x192398u;
    {
        const bool branch_taken_0x192398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192398u;
        // 0x19239c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192398) {
            ctx->pc = 0x192230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192230;
        }
    }
    ctx->pc = 0x1923A0u;
label_1923a0:
    // 0x1923a0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1923a4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1923A4u;
    {
        const bool branch_taken_0x1923a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A4u;
        // 0x1923a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923a4) {
            ctx->pc = 0x192538u;
            goto label_192538;
        }
    }
    ctx->pc = 0x1923ACu;
    // 0x1923ac: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1923b0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1923b4: 0x0  nop
    ctx->pc = 0x1923b4u;
    // NOP
label_1923b8:
    // 0x1923b8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1923b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1923bc: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1923c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1923c4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1923c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1923c8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1923cc: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x1923d0: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x1923d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1923d4: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x1923d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1923d8: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x1923d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1923dc: 0xc81818  mult        $v1, $a2, $t0
    ctx->pc = 0x1923dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1923e0: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x1923e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1923e4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1923e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1923e8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1923e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1923ec: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1923f0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1923f4: 0x733821  addu        $a3, $v1, $s3
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1923f8: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x1923f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1923fc: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x192400: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x192400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192404: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x192404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x192408: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x192408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x19240c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x19240cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192410: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192410u;
    {
        const bool branch_taken_0x192410 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192410u;
        // 0x192414: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192410) {
            ctx->pc = 0x19242Cu;
            goto label_19242c;
        }
    }
    ctx->pc = 0x192418u;
    // 0x192418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19241c: 0x0  nop
    ctx->pc = 0x19241cu;
    // NOP
    // 0x192420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192424u;
        // 0x192428: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192448u;
            goto label_192448;
        }
    }
    ctx->pc = 0x19242Cu;
label_19242c:
    // 0x19242c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192438: 0x0  nop
    ctx->pc = 0x192438u;
    // NOP
    // 0x19243c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19243cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192440: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192444: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_192448:
    // 0x192448: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19244c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19244Cu;
    {
        const bool branch_taken_0x19244c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19244Cu;
        // 0x192450: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19244c) {
            ctx->pc = 0x192468u;
            goto label_192468;
        }
    }
    ctx->pc = 0x192454u;
    // 0x192454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192458: 0x0  nop
    ctx->pc = 0x192458u;
    // NOP
    // 0x19245c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19245cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192460u;
    {
        const bool branch_taken_0x192460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192460) {
            ctx->pc = 0x192480u;
            goto label_192480;
        }
    }
    ctx->pc = 0x192468u;
label_192468:
    // 0x192468: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19246c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192474: 0x0  nop
    ctx->pc = 0x192474u;
    // NOP
    // 0x192478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19247c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19247cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192480:
    // 0x192480: 0x0  nop
    ctx->pc = 0x192480u;
    // NOP
    // 0x192484: 0x0  nop
    ctx->pc = 0x192484u;
    // NOP
    // 0x192488: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x192488u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19248c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x192490: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192494: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x192494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x192498: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x192498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19249c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x19249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1924a0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1924a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1924a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1924A4u;
    {
        const bool branch_taken_0x1924a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1924A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924A4u;
        // 0x1924a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924a4) {
            ctx->pc = 0x1924C0u;
            goto label_1924c0;
        }
    }
    ctx->pc = 0x1924ACu;
    // 0x1924ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1924acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1924b0: 0x0  nop
    ctx->pc = 0x1924b0u;
    // NOP
    // 0x1924b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1924b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1924b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1924B8u;
    {
        const bool branch_taken_0x1924b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924B8u;
        // 0x1924bc: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924b8) {
            ctx->pc = 0x1924DCu;
            goto label_1924dc;
        }
    }
    ctx->pc = 0x1924C0u;
label_1924c0:
    // 0x1924c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1924c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1924c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1924c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1924c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1924c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1924cc: 0x0  nop
    ctx->pc = 0x1924ccu;
    // NOP
    // 0x1924d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1924d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1924d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1924d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1924d8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1924dc:
    // 0x1924dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1924dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1924e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1924E0u;
    {
        const bool branch_taken_0x1924e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1924E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924E0u;
        // 0x1924e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924e0) {
            ctx->pc = 0x1924FCu;
            goto label_1924fc;
        }
    }
    ctx->pc = 0x1924E8u;
    // 0x1924e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1924e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1924ec: 0x0  nop
    ctx->pc = 0x1924ecu;
    // NOP
    // 0x1924f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1924f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1924f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1924F4u;
    {
        const bool branch_taken_0x1924f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924f4) {
            ctx->pc = 0x192514u;
            goto label_192514;
        }
    }
    ctx->pc = 0x1924FCu;
label_1924fc:
    // 0x1924fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1924fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192500: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192508: 0x0  nop
    ctx->pc = 0x192508u;
    // NOP
    // 0x19250c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19250cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192510: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192514:
    // 0x192514: 0x0  nop
    ctx->pc = 0x192514u;
    // NOP
    // 0x192518: 0x0  nop
    ctx->pc = 0x192518u;
    // NOP
    // 0x19251c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19251cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192520: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x192524: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x192524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x192528: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x192528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19252c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x19252cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192530: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x192530u;
    {
        const bool branch_taken_0x192530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192530) {
            ctx->pc = 0x192534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192530u;
            // 0x192534: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1923B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1923b8;
        }
    }
    ctx->pc = 0x192538u;
label_192538:
    // 0x192538: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x192538u;
    SET_GPR_U32(ctx, 31, 0x192540u);
    ctx->pc = 0x19253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192538u;
    // 0x19253c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x192538u, 0x192540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192540u;
label_192540:
    // 0x192540: 0xc11a840  jal         func_46A100
    ctx->pc = 0x192540u;
    SET_GPR_U32(ctx, 31, 0x192548u);
    ctx->pc = 0x192544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192540u;
    // 0x192544: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A100u, 0x192540u, 0x192548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192548u;
label_192548:
    // 0x192548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x192548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19254c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192550:
    // 0x192550: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x192550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192554: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x192554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192558: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x192558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19255c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x19255cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192560: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x192560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192564: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x192564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192568: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x192568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19256c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x19256cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192574: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x192574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x192578: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x192578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19257c: 0x3e00008  jr          $ra
    ctx->pc = 0x19257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19257Cu;
        // 0x192580: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192584u;
    // 0x192584: 0x0  nop
    ctx->pc = 0x192584u;
    // NOP
    ctx->pc = 0x192588u;
}
