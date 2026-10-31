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

// Function: sub_00221038
// Address: 0x221038 - 0x221080
void sub_00221038_0x221038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221038_0x221038");
#endif

    switch (ctx->pc) {
        case 0x22105cu: goto label_22105c;
        default: break;
    }

    ctx->pc = 0x221038u;

    // 0x221038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22103c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221048: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x221048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
    // 0x22104c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22104Cu;
    {
        const bool branch_taken_0x22104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22104c) {
            ctx->pc = 0x22105Cu;
            goto label_22105c;
        }
    }
    ctx->pc = 0x221054u;
    // 0x221054: 0xc088420  jal         func_221080
    ctx->pc = 0x221054u;
    SET_GPR_U32(ctx, 31, 0x22105Cu);
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x221054u, 0x22105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22105Cu;
label_22105c:
    // 0x22105c: 0x6a0201c3  ldl         $v0, 0x1C3($s0)
    ctx->pc = 0x22105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x221060: 0x6e0201bc  ldr         $v0, 0x1BC($s0)
    ctx->pc = 0x221060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x221064: 0xb20201cb  sdl         $v0, 0x1CB($s0)
    ctx->pc = 0x221064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x221068: 0xb60201c4  sdr         $v0, 0x1C4($s0)
    ctx->pc = 0x221068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 452); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22106c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22106cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221074: 0x3e00008  jr          $ra
    ctx->pc = 0x221074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221074u;
        // 0x221078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22107Cu;
    // 0x22107c: 0x0  nop
    ctx->pc = 0x22107cu;
    // NOP
    ctx->pc = 0x221080u;
}
