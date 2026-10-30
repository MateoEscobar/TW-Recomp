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

// Function: sub_004828D0
// Address: 0x4828d0 - 0x482918
void sub_004828D0_0x4828d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004828D0_0x4828d0");
#endif

    switch (ctx->pc) {
        case 0x482904u: goto label_482904;
        default: break;
    }

    ctx->pc = 0x4828d0u;

    // 0x4828d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4828d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4828d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4828d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4828d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4828d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4828dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4828dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4828e0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4828e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4828e4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4828e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4828e8: 0xb202007f  sdl         $v0, 0x7F($s0)
    ctx->pc = 0x4828e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4828ec: 0xb6020078  sdr         $v0, 0x78($s0)
    ctx->pc = 0x4828ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4828f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4828f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4828f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4828F4u;
    {
        const bool branch_taken_0x4828f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4828F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4828F4u;
        // 0x4828f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4828f4) {
            ctx->pc = 0x482908u;
            goto label_482908;
        }
    }
    ctx->pc = 0x4828FCu;
    // 0x4828fc: 0xc12105a  jal         func_484168
    ctx->pc = 0x4828FCu;
    SET_GPR_U32(ctx, 31, 0x482904u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x4828FCu, 0x482904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482904u;
label_482904:
    // 0x482904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482908:
    // 0x482908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48290c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48290cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482910: 0x3e00008  jr          $ra
    ctx->pc = 0x482910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482910u;
        // 0x482914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482918u;
}
