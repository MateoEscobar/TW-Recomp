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

// Function: sub_0018FA68
// Address: 0x18fa68 - 0x18fee0
void sub_0018FA68_0x18fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FA68_0x18fa68");
#endif

    switch (ctx->pc) {
        case 0x18fad4u: goto label_18fad4;
        case 0x18fb98u: goto label_18fb98;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fec4u: goto label_18fec4;
        default: break;
    }

    ctx->pc = 0x18fa68u;

    // 0x18fa68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18fa6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18fa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18fa74: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18fa78: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18fa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18fa80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18fa80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18fa88: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FA88u;
    {
        const bool branch_taken_0x18fa88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA88u;
        // 0x18fa8c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa88) {
            ctx->pc = 0x18FAACu;
            goto label_18faac;
        }
    }
    ctx->pc = 0x18FA90u;
    // 0x18fa90: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x18fa94: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x18fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x18fa98: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x18fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x18fa9c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x18fa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18faa0: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x18faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x18faa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18FAA4u;
    {
        const bool branch_taken_0x18faa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA4u;
        // 0x18faa8: 0xa3a40003  sb          $a0, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18faa4) {
            ctx->pc = 0x18FAC0u;
            goto label_18fac0;
        }
    }
    ctx->pc = 0x18FAACu;
label_18faac:
    // 0x18faac: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18fab0: 0x2403008f  addiu       $v1, $zero, 0x8F
    ctx->pc = 0x18fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x18fab4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x18fab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fab8: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x18fab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18fabc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x18fabcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_18fac0:
    // 0x18fac0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x18fac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fac4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18fac8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18facc: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x18FACCu;
    SET_GPR_U32(ctx, 31, 0x18FAD4u);
    ctx->pc = 0x18FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FACCu;
    // 0x18fad0: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x18FACCu, 0x18FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAD4u;
label_18fad4:
    // 0x18fad4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x18fad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fad8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x18fad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x18fadc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18fadcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18fae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18fae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fae4: 0x8d22005c  lw          $v0, 0x5C($t1)
    ctx->pc = 0x18fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x18fae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18fae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18faec: 0xf0282b  sltu        $a1, $a3, $s0
    ctx->pc = 0x18faecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18faf0: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x18faf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x18faf4: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x18faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18faf8: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x18faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x18fafc: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fb00: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x18fb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x18fb04: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x18fb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x18fb08: 0xa8620007  swl         $v0, 0x7($v1)
    ctx->pc = 0x18fb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fb0c: 0xb8620004  swr         $v0, 0x4($v1)
    ctx->pc = 0x18fb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fb10: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fb14: 0x884c0007  lwl         $t4, 0x7($v0)
    ctx->pc = 0x18fb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x18fb18: 0x984c0004  lwr         $t4, 0x4($v0)
    ctx->pc = 0x18fb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x18fb1c: 0xa86c0003  swl         $t4, 0x3($v1)
    ctx->pc = 0x18fb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fb20: 0xb86c0000  swr         $t4, 0x0($v1)
    ctx->pc = 0x18fb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fb24: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x18fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fb28: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x18fb28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x18fb2c: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x18fb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x18fb30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fb34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fb34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18fb38: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x18fb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18fb3c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x18fb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x18fb40: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x18fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fb44: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18fb44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18fb48: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x18fb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x18fb4c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x18fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fb50: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x18fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fb54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18fb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18fb58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18fb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18fb5c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x18fb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x18fb60: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x18FB60u;
    {
        const bool branch_taken_0x18fb60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB60u;
        // 0x18fb64: 0xe501000c  swc1        $f1, 0xC($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb60) {
            ctx->pc = 0x18FCA8u;
            goto label_18fca8;
        }
    }
    ctx->pc = 0x18FB68u;
    // 0x18fb68: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x18fb6c: 0x320a0001  andi        $t2, $s0, 0x1
    ctx->pc = 0x18fb6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x18fb70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18fb74: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x18fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x18fb78: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x18fb78u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x18fb7c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x18fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x18fb80: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18fb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18fb84: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x18fb84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x18fb88: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fb8c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18fb90: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18fb94: 0x25050024  addiu       $a1, $t0, 0x24
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
label_18fb98:
    // 0x18fb98: 0x520c0022  beql        $s0, $t4, . + 4 + (0x22 << 2)
    ctx->pc = 0x18FB98u;
    {
        const bool branch_taken_0x18fb98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x18fb98) {
            ctx->pc = 0x18FB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FB98u;
            // 0x18fb9c: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FC24u;
            goto label_18fc24;
        }
    }
    ctx->pc = 0x18FBA0u;
    // 0x18fba0: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FBA0u;
    {
        const bool branch_taken_0x18fba0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x18FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBA0u;
        // 0x18fba4: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fba0) {
            ctx->pc = 0x18FBBCu;
            goto label_18fbbc;
        }
    }
    ctx->pc = 0x18FBA8u;
    // 0x18fba8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18fba8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fbac: 0x0  nop
    ctx->pc = 0x18fbacu;
    // NOP
    // 0x18fbb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fbb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fbb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FBB4u;
    {
        const bool branch_taken_0x18fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbb4) {
            ctx->pc = 0x18FBD4u;
            goto label_18fbd4;
        }
    }
    ctx->pc = 0x18FBBCu;
label_18fbbc:
    // 0x18fbbc: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x18fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x18fbc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fbc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fbc8: 0x0  nop
    ctx->pc = 0x18fbc8u;
    // NOP
    // 0x18fbcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fbd0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18fbd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18fbd4:
    // 0x18fbd4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FBD4u;
    {
        const bool branch_taken_0x18fbd4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18fbd4) {
            ctx->pc = 0x18FBF0u;
            goto label_18fbf0;
        }
    }
    ctx->pc = 0x18FBDCu;
    // 0x18fbdc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x18fbdcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fbe0: 0x0  nop
    ctx->pc = 0x18fbe0u;
    // NOP
    // 0x18fbe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fbe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FBE8u;
    {
        const bool branch_taken_0x18fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbe8) {
            ctx->pc = 0x18FC00u;
            goto label_18fc00;
        }
    }
    ctx->pc = 0x18FBF0u;
label_18fbf0:
    // 0x18fbf0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x18fbf0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fbf4: 0x0  nop
    ctx->pc = 0x18fbf4u;
    // NOP
    // 0x18fbf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fbf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fbfc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18fbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18fc00:
    // 0x18fc00: 0x0  nop
    ctx->pc = 0x18fc00u;
    // NOP
    // 0x18fc04: 0x0  nop
    ctx->pc = 0x18fc04u;
    // NOP
    // 0x18fc08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18fc08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18fc0c: 0x46060029  min.s       $f0, $f0, $f6
    ctx->pc = 0x18fc0cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[6]);
    // 0x18fc10: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x18fc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x18fc14: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18fc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18fc18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18fc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18fc1c: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x18fc20: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x18fc20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_18fc24:
    // 0x18fc24: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fc28: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18fc2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18fc30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fc34: 0xf0202b  sltu        $a0, $a3, $s0
    ctx->pc = 0x18fc34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fc38: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x18fc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x18fc3c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x18fc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x18fc40: 0xa8620007  swl         $v0, 0x7($v1)
    ctx->pc = 0x18fc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fc44: 0xb8620004  swr         $v0, 0x4($v1)
    ctx->pc = 0x18fc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fc48: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fc4c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x18fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18fc50: 0x88520003  lwl         $s2, 0x3($v0)
    ctx->pc = 0x18fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x18fc54: 0x98520000  lwr         $s2, 0x0($v0)
    ctx->pc = 0x18fc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
    // 0x18fc58: 0xa8720003  swl         $s2, 0x3($v1)
    ctx->pc = 0x18fc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fc5c: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x18fc60: 0xb8720000  swr         $s2, 0x0($v1)
    ctx->pc = 0x18fc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fc64: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x18fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fc68: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x18fc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18fc6c: 0x460408c0  add.s       $f3, $f1, $f4
    ctx->pc = 0x18fc6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x18fc70: 0xe4a1fff4  swc1        $f1, -0xC($a1)
    ctx->pc = 0x18fc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x18fc74: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x18fc74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x18fc78: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x18fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fc7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18fc80: 0xe4a0fffc  swc1        $f0, -0x4($a1)
    ctx->pc = 0x18fc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x18fc84: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x18fc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x18fc88: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x18fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fc8c: 0xe4a1fff4  swc1        $f1, -0xC($a1)
    ctx->pc = 0x18fc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x18fc90: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x18fc94: 0xe4a2fff8  swc1        $f2, -0x8($a1)
    ctx->pc = 0x18fc94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x18fc98: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x18fc98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18fc9c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x18fc9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x18fca0: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x18FCA0u;
    {
        const bool branch_taken_0x18fca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA0u;
        // 0x18fca4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca0) {
            ctx->pc = 0x18FB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fb98;
        }
    }
    ctx->pc = 0x18FCA8u;
label_18fca8:
    // 0x18fca8: 0x2ce20011  sltiu       $v0, $a3, 0x11
    ctx->pc = 0x18fca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x18fcac: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x18FCACu;
    {
        const bool branch_taken_0x18fcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCACu;
        // 0x18fcb0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcac) {
            ctx->pc = 0x18FE0Cu;
            goto label_18fe0c;
        }
    }
    ctx->pc = 0x18FCB4u;
    // 0x18fcb4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x18fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18fcb8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x18fcb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18fcbc: 0x516021  addu        $t4, $v0, $s1
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18fcc0: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x18fcc4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18fcc8: 0x320a0001  andi        $t2, $s0, 0x1
    ctx->pc = 0x18fcc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x18fccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18fcd0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x18fcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x18fcd4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x18fcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x18fcd8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18fcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18fcdc: 0x258bfff0  addiu       $t3, $t4, -0x10
    ctx->pc = 0x18fcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x18fce0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x18fce4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x18fce8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18fce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18fcec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18fcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18fcf0: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18fcf4: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18fcf8: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x18fcf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x18fcfc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fd00:
    // 0x18fd00: 0x520d0022  beql        $s0, $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x18FD00u;
    {
        const bool branch_taken_0x18fd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        if (branch_taken_0x18fd00) {
            ctx->pc = 0x18FD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FD00u;
            // 0x18fd04: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FD8Cu;
            goto label_18fd8c;
        }
    }
    ctx->pc = 0x18FD08u;
    // 0x18fd08: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FD08u;
    {
        const bool branch_taken_0x18fd08 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x18FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD08u;
        // 0x18fd0c: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd08) {
            ctx->pc = 0x18FD24u;
            goto label_18fd24;
        }
    }
    ctx->pc = 0x18FD10u;
    // 0x18fd10: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18fd10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fd14: 0x0  nop
    ctx->pc = 0x18fd14u;
    // NOP
    // 0x18fd18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fd18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fd1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FD1Cu;
    {
        const bool branch_taken_0x18fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd1c) {
            ctx->pc = 0x18FD3Cu;
            goto label_18fd3c;
        }
    }
    ctx->pc = 0x18FD24u;
label_18fd24:
    // 0x18fd24: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x18fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x18fd28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fd2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fd30: 0x0  nop
    ctx->pc = 0x18fd30u;
    // NOP
    // 0x18fd34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fd38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18fd38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18fd3c:
    // 0x18fd3c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FD3Cu;
    {
        const bool branch_taken_0x18fd3c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18fd3c) {
            ctx->pc = 0x18FD58u;
            goto label_18fd58;
        }
    }
    ctx->pc = 0x18FD44u;
    // 0x18fd44: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x18fd44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fd48: 0x0  nop
    ctx->pc = 0x18fd48u;
    // NOP
    // 0x18fd4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fd50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FD50u;
    {
        const bool branch_taken_0x18fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd50) {
            ctx->pc = 0x18FD68u;
            goto label_18fd68;
        }
    }
    ctx->pc = 0x18FD58u;
label_18fd58:
    // 0x18fd58: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x18fd58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fd5c: 0x0  nop
    ctx->pc = 0x18fd5cu;
    // NOP
    // 0x18fd60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fd64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18fd64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18fd68:
    // 0x18fd68: 0x0  nop
    ctx->pc = 0x18fd68u;
    // NOP
    // 0x18fd6c: 0x0  nop
    ctx->pc = 0x18fd6cu;
    // NOP
    // 0x18fd70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18fd70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18fd74: 0x46060029  min.s       $f0, $f0, $f6
    ctx->pc = 0x18fd74u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[6]);
    // 0x18fd78: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x18fd78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x18fd7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18fd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18fd80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18fd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18fd84: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x18fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x18fd88: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x18fd88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_18fd8c:
    // 0x18fd8c: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fd90: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18fd94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18fd98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fd9c: 0x2ce40011  sltiu       $a0, $a3, 0x11
    ctx->pc = 0x18fd9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x18fda0: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x18fda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x18fda4: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x18fda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x18fda8: 0xa8620007  swl         $v0, 0x7($v1)
    ctx->pc = 0x18fda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fdac: 0xb8620004  swr         $v0, 0x4($v1)
    ctx->pc = 0x18fdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fdb0: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fdb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18fdb8: 0x88530003  lwl         $s3, 0x3($v0)
    ctx->pc = 0x18fdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x18fdbc: 0x98530000  lwr         $s3, 0x0($v0)
    ctx->pc = 0x18fdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 19) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 19) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 19, merged64); }
    // 0x18fdc0: 0xa8730003  swl         $s3, 0x3($v1)
    ctx->pc = 0x18fdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fdc4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18fdc8: 0xb8730000  swr         $s3, 0x0($v1)
    ctx->pc = 0x18fdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fdcc: 0xc581fff0  lwc1        $f1, -0x10($t4)
    ctx->pc = 0x18fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fdd0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x18fdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18fdd4: 0x460408c0  add.s       $f3, $f1, $f4
    ctx->pc = 0x18fdd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x18fdd8: 0xe4a1fff4  swc1        $f1, -0xC($a1)
    ctx->pc = 0x18fdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x18fddc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x18fddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x18fde0: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x18fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fde4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fde4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18fde8: 0xe4a0fffc  swc1        $f0, -0x4($a1)
    ctx->pc = 0x18fde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x18fdec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x18fdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x18fdf0: 0xc5620008  lwc1        $f2, 0x8($t3)
    ctx->pc = 0x18fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fdf4: 0xe4a1fff4  swc1        $f1, -0xC($a1)
    ctx->pc = 0x18fdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x18fdf8: 0xe4a2fff8  swc1        $f2, -0x8($a1)
    ctx->pc = 0x18fdf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x18fdfc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x18fdfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18fe00: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x18fe00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x18fe04: 0x1480ffbe  bnez        $a0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x18FE04u;
    {
        const bool branch_taken_0x18fe04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE04u;
        // 0x18fe08: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe04) {
            ctx->pc = 0x18FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fd00;
        }
    }
    ctx->pc = 0x18FE0Cu;
label_18fe0c:
    // 0x18fe0c: 0x2ce20012  sltiu       $v0, $a3, 0x12
    ctx->pc = 0x18fe0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x18fe10: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18FE10u;
    {
        const bool branch_taken_0x18fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE10u;
        // 0x18fe14: 0x2402008f  addiu       $v0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe10) {
            ctx->pc = 0x18FEBCu;
            goto label_18febc;
        }
    }
    ctx->pc = 0x18FE18u;
    // 0x18fe18: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x18fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18fe1c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x18fe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fe20: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x18fe20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18fe24: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x18fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18fe28: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18fe2c: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fe30: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x18fe34: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x18fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x18fe38: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x18fe3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18fe40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18fe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fe44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18fe48: 0x8bb30003  lwl         $s3, 0x3($sp)
    ctx->pc = 0x18fe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x18fe4c: 0x9bb30000  lwr         $s3, 0x0($sp)
    ctx->pc = 0x18fe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 19) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 19) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 19, merged64); }
    // 0x18fe50: 0xa8b30007  swl         $s3, 0x7($a1)
    ctx->pc = 0x18fe50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fe54: 0xb8b30004  swr         $s3, 0x4($a1)
    ctx->pc = 0x18fe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fe58: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x18fe5c: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fe60: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x18fe64: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x18fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18fe68: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18fe6c: 0x884b0003  lwl         $t3, 0x3($v0)
    ctx->pc = 0x18fe6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x18fe70: 0x984b0000  lwr         $t3, 0x0($v0)
    ctx->pc = 0x18fe70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x18fe74: 0xa8ab0003  swl         $t3, 0x3($a1)
    ctx->pc = 0x18fe74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fe78: 0xb8ab0000  swr         $t3, 0x0($a1)
    ctx->pc = 0x18fe78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18fe7c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x18fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fe80: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18fe80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18fe84: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x18fe84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18fe88: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x18fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fe8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fe8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18fe90: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x18fe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18fe94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18fe98: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x18fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fe9c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18fe9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18fea0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18fea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18fea4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fea8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18fea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18feac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18feacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18feb0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x18feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18feb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18feb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18feb8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18feb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18febc:
    // 0x18febc: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x18FEBCu;
    SET_GPR_U32(ctx, 31, 0x18FEC4u);
    ctx->pc = 0x18FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEBCu;
    // 0x18fec0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x18FEBCu, 0x18FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEC4u;
label_18fec4:
    // 0x18fec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18fec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18fec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18feccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fed0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18fed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fed8: 0x3e00008  jr          $ra
    ctx->pc = 0x18FED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FED8u;
        // 0x18fedc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FEE0u;
}
