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

// Function: sub_00199E50
// Address: 0x199e50 - 0x19a048
void sub_00199E50_0x199e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199E50_0x199e50");
#endif

    switch (ctx->pc) {
        case 0x199e98u: goto label_199e98;
        case 0x199f04u: goto label_199f04;
        case 0x199f2cu: goto label_199f2c;
        case 0x199f3cu: goto label_199f3c;
        case 0x199f48u: goto label_199f48;
        case 0x199f58u: goto label_199f58;
        case 0x199f80u: goto label_199f80;
        case 0x199f98u: goto label_199f98;
        case 0x199fa8u: goto label_199fa8;
        case 0x199fb4u: goto label_199fb4;
        case 0x199fc4u: goto label_199fc4;
        case 0x199fd0u: goto label_199fd0;
        case 0x199fe4u: goto label_199fe4;
        default: break;
    }

    ctx->pc = 0x199e50u;

    // 0x199e50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x199e54: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x199e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x199e58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x199e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x199e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x199e60: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x199e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x199e64: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x199e64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e68: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x199e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x199e6c: 0x26760098  addiu       $s6, $s3, 0x98
    ctx->pc = 0x199e6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x199e70: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x199e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x199e74: 0x267700b0  addiu       $s7, $s3, 0xB0
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x199e78: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x199e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x199e7c: 0x267e00ac  addiu       $fp, $s3, 0xAC
    ctx->pc = 0x199e7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
    // 0x199e80: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x199e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x199e84: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x199e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x199e88: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x199e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x199e8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199e90: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x199e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x199e94: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x199e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_199e98:
    // 0x199e98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199e9c: 0x2a28018  mult        $s0, $s5, $v0
    ctx->pc = 0x199e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x199ea0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x199ea4: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x199ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x199ea8: 0x6845000b  ldl         $a1, 0xB($v0)
    ctx->pc = 0x199ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x199eac: 0x6c450004  ldr         $a1, 0x4($v0)
    ctx->pc = 0x199eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x199eb0: 0x68460013  ldl         $a2, 0x13($v0)
    ctx->pc = 0x199eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x199eb4: 0x6c46000c  ldr         $a2, 0xC($v0)
    ctx->pc = 0x199eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x199eb8: 0x6847001b  ldl         $a3, 0x1B($v0)
    ctx->pc = 0x199eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x199ebc: 0x6c470014  ldr         $a3, 0x14($v0)
    ctx->pc = 0x199ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x199ec0: 0x8c48001c  lw          $t0, 0x1C($v0)
    ctx->pc = 0x199ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x199ec4: 0xb085009f  sdl         $a1, 0x9F($a0)
    ctx->pc = 0x199ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ec8: 0xb4850098  sdr         $a1, 0x98($a0)
    ctx->pc = 0x199ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ecc: 0xb08600a7  sdl         $a2, 0xA7($a0)
    ctx->pc = 0x199eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ed0: 0xb48600a0  sdr         $a2, 0xA0($a0)
    ctx->pc = 0x199ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ed4: 0xb08700af  sdl         $a3, 0xAF($a0)
    ctx->pc = 0x199ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ed8: 0xb48700a8  sdr         $a3, 0xA8($a0)
    ctx->pc = 0x199ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199edc: 0xac8800b0  sw          $t0, 0xB0($a0)
    ctx->pc = 0x199edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 8));
    // 0x199ee0: 0x3d01821  addu        $v1, $fp, $s0
    ctx->pc = 0x199ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x199ee4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x199ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x199ee8: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x199ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x199eec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x199eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x199ef0: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x199ef4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x199EF4u;
    {
        const bool branch_taken_0x199ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EF4u;
        // 0x199ef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ef4) {
            ctx->pc = 0x199F58u;
            goto label_199f58;
        }
    }
    ctx->pc = 0x199EFCu;
    // 0x199efc: 0xc066efe  jal         func_19BBF8
    ctx->pc = 0x199EFCu;
    SET_GPR_U32(ctx, 31, 0x199F04u);
    ctx->pc = 0x199F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EFCu;
    // 0x199f00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x199EFCu, 0x199F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F04u;
label_199f04:
    // 0x199f04: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x199f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x199f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f0c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x199f10: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x199f14: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x199F14u;
    {
        const bool branch_taken_0x199f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F14u;
        // 0x199f18: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f14) {
            ctx->pc = 0x199F58u;
            goto label_199f58;
        }
    }
    ctx->pc = 0x199F1Cu;
    // 0x199f1c: 0x8e1100c4  lw          $s1, 0xC4($s0)
    ctx->pc = 0x199f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x199f20: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    // 0x199f24: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x199F24u;
    SET_GPR_U32(ctx, 31, 0x199F2Cu);
    ctx->pc = 0x199F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F24u;
    // 0x199f28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x199F24u, 0x199F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F2Cu;
label_199f2c:
    // 0x199f2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199F2Cu;
    {
        const bool branch_taken_0x199f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F2Cu;
        // 0x199f30: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f2c) {
            ctx->pc = 0x199F3Cu;
            goto label_199f3c;
        }
    }
    ctx->pc = 0x199F34u;
    // 0x199f34: 0xc062be2  jal         func_18AF88
    ctx->pc = 0x199F34u;
    SET_GPR_U32(ctx, 31, 0x199F3Cu);
    ctx->pc = 0x199F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F34u;
    // 0x199f38: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x199F34u, 0x199F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F3Cu;
label_199f3c:
    // 0x199f3c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x199f40: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x199F40u;
    SET_GPR_U32(ctx, 31, 0x199F48u);
    ctx->pc = 0x199F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F40u;
    // 0x199f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x199F40u, 0x199F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F48u;
label_199f48:
    // 0x199f48: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x199f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f50: 0xc068a46  jal         func_1A2918
    ctx->pc = 0x199F50u;
    SET_GPR_U32(ctx, 31, 0x199F58u);
    ctx->pc = 0x199F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F50u;
    // 0x199f54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2918u, 0x199F50u, 0x199F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F58u;
label_199f58:
    // 0x199f58: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x199f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x199f5c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x199f5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199f60: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x199f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x199f64: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x199F64u;
    {
        const bool branch_taken_0x199f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F64u;
        // 0x199f68: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f64) {
            ctx->pc = 0x199E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e98;
        }
    }
    ctx->pc = 0x199F6Cu;
    // 0x199f6c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x199f70: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x199F70u;
    {
        const bool branch_taken_0x199f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F70u;
        // 0x199f74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f70) {
            ctx->pc = 0x19A01Cu;
            goto label_19a01c;
        }
    }
    ctx->pc = 0x199F78u;
    // 0x199f78: 0xc066812  jal         func_19A048
    ctx->pc = 0x199F78u;
    SET_GPR_U32(ctx, 31, 0x199F80u);
    ctx->pc = 0x199F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F78u;
    // 0x199f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A048u, 0x199F78u, 0x199F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F80u;
label_199f80:
    // 0x199f80: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x199f84: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x199F84u;
    {
        const bool branch_taken_0x199f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F84u;
        // 0x199f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f84) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x199F8Cu;
    // 0x199f8c: 0x267500f4  addiu       $s5, $s3, 0xF4
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 244));
    // 0x199f90: 0x2676002c  addiu       $s6, $s3, 0x2C
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x199f94: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x199f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_199f98:
    // 0x199f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x199f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f9c: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x199fa0: 0x2342821  addu        $a1, $s1, $s4
    ctx->pc = 0x199fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x199fa4: 0x0  nop
    ctx->pc = 0x199fa4u;
    // NOP
label_199fa8:
    // 0x199fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x199fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fac: 0xc066efe  jal         func_19BBF8
    ctx->pc = 0x199FACu;
    SET_GPR_U32(ctx, 31, 0x199FB4u);
    ctx->pc = 0x199FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FACu;
    // 0x199fb0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x199FACu, 0x199FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FB4u;
label_199fb4:
    // 0x199fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fbc: 0xc066efe  jal         func_19BBF8
    ctx->pc = 0x199FBCu;
    SET_GPR_U32(ctx, 31, 0x199FC4u);
    ctx->pc = 0x199FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FBCu;
    // 0x199fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x199FBCu, 0x199FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC4u;
label_199fc4:
    // 0x199fc4: 0x8c4500c8  lw          $a1, 0xC8($v0)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x199fc8: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x199FC8u;
    SET_GPR_U32(ctx, 31, 0x199FD0u);
    ctx->pc = 0x199FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FC8u;
    // 0x199fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x199FC8u, 0x199FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FD0u;
label_199fd0:
    // 0x199fd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x199fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fd8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x199fdc: 0xc068a46  jal         func_1A2918
    ctx->pc = 0x199FDCu;
    SET_GPR_U32(ctx, 31, 0x199FE4u);
    ctx->pc = 0x199FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FDCu;
    // 0x199fe0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2918u, 0x199FDCu, 0x199FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FE4u;
label_199fe4:
    // 0x199fe4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x199fe8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x199fe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199fec: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x199fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x199ff0: 0x5460ffed  bnel        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x199FF0u;
    {
        const bool branch_taken_0x199ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ff0) {
            ctx->pc = 0x199FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199FF0u;
            // 0x199ff4: 0x2342821  addu        $a1, $s1, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199fa8;
        }
    }
    ctx->pc = 0x199FF8u;
    // 0x199ff8: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x199ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x199ffc: 0x2c820019  sltiu       $v0, $a0, 0x19
    ctx->pc = 0x199ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x19a000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A000u;
    {
        const bool branch_taken_0x19a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A000u;
        // 0x19a004: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a000) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x19A008u;
    // 0x19a008: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19a00c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a010: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x19A010u;
    {
        const bool branch_taken_0x19a010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A010u;
        // 0x19a014: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a010) {
            ctx->pc = 0x199F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f98;
        }
    }
    ctx->pc = 0x19A018u;
label_19a018:
    // 0x19a018: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19a018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19a01c:
    // 0x19a01c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19a01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a020: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19a020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a024: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19a024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a028: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19a028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a02c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19a02cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a030: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19a030u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a034: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x19a034u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a038: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x19a038u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a040: 0x3e00008  jr          $ra
    ctx->pc = 0x19A040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A040u;
        // 0x19a044: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A048u;
}
