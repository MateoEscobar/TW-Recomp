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

// Function: sub_004BEEC0
// Address: 0x4beec0 - 0x4bef30
void sub_004BEEC0_0x4beec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEEC0_0x4beec0");
#endif

    switch (ctx->pc) {
        case 0x4bef10u: goto label_4bef10;
        default: break;
    }

    ctx->pc = 0x4beec0u;

    // 0x4beec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4beec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4beec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4beec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4beec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4beec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4beecc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x4beeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x4beed0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4beed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4beed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4beed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4beed8: 0xae0441f0  sw          $a0, 0x41F0($s0)
    ctx->pc = 0x4beed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7141F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7141F0u, _value); } while (0);
    // 0x4beedc: 0x261041f0  addiu       $s0, $s0, 0x41F0
    ctx->pc = 0x4beedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16880));
    // 0x4beee0: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x4beee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4beee4: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x4beee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4beee8: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x4beee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4beeec: 0xb206002b  sdl         $a2, 0x2B($s0)
    ctx->pc = 0x4beeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beef0: 0xb6060024  sdr         $a2, 0x24($s0)
    ctx->pc = 0x4beef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beef4: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x4beef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x71421Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71421Cu, _value); } while (0);
    // 0x4beef8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4beef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x714210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714210u, _value); } while (0);
    // 0x4beefc: 0x2465f138  addiu       $a1, $v1, -0xEC8
    ctx->pc = 0x4beefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963512));
    // 0x4bef00: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4bef00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x714220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714220u, _value); } while (0);
    // 0x4bef04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4bef04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bef08: 0xc11c72c  jal         func_471CB0
    ctx->pc = 0x4BEF08u;
    SET_GPR_U32(ctx, 31, 0x4BEF10u);
    ctx->pc = 0x4BEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEF08u;
    // 0x4bef0c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x4BEF08u, 0x4BEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEF10u;
label_4bef10:
    // 0x4bef10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4bef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4bef14: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4bef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4bef18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bef18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bef1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bef20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bef20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bef24: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEF24u;
        // 0x4bef28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEF2Cu;
    // 0x4bef2c: 0x0  nop
    ctx->pc = 0x4bef2cu;
    // NOP
    ctx->pc = 0x4bef30u;
}
