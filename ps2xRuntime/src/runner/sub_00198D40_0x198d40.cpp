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

// Function: sub_00198D40
// Address: 0x198d40 - 0x198db8
void sub_00198D40_0x198d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198D40_0x198d40");
#endif

    switch (ctx->pc) {
        case 0x198d60u: goto label_198d60;
        default: break;
    }

    ctx->pc = 0x198d40u;

    // 0x198d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198d4c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198d58: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x198D58u;
    SET_GPR_U32(ctx, 31, 0x198D60u);
    ctx->pc = 0x198D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D58u;
    // 0x198d5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x198D58u, 0x198D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D60u;
label_198d60:
    // 0x198d60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x198d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x198d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d68: 0x8c64ced0  lw          $a0, -0x3130($v1)
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CED0u));
    // 0x198d6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198d70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198d78: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x198d7c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x198d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x198d80: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x198d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x198d84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198d88: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x198d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x198d8c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x198d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x198d90: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x198d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x198d94: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x198d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198d98: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x198d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198d9c: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x198d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198da0: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x198da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198da4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x198da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x198da8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198dac: 0x3e00008  jr          $ra
    ctx->pc = 0x198DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DACu;
        // 0x198db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198DB4u;
    // 0x198db4: 0x0  nop
    ctx->pc = 0x198db4u;
    // NOP
    ctx->pc = 0x198db8u;
}
