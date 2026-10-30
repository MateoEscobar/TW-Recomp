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

// Function: sub_004F1758
// Address: 0x4f1758 - 0x4f17b0
void sub_004F1758_0x4f1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1758_0x4f1758");
#endif

    switch (ctx->pc) {
        case 0x4f1760u: goto label_4f1760;
        default: break;
    }

    ctx->pc = 0x4f1758u;

    // 0x4f1758: 0x10850012  beq         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F1758u;
    {
        const bool branch_taken_0x4f1758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4F175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1758u;
        // 0x4f175c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1758) {
            ctx->pc = 0x4F17A4u;
            goto label_4f17a4;
        }
    }
    ctx->pc = 0x4F1760u;
label_4f1760:
    // 0x4f1760: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4F1760u;
    {
        const bool branch_taken_0x4f1760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1760) {
            ctx->pc = 0x4F1764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1760u;
            // 0x4f1764: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F179Cu;
            goto label_4f179c;
        }
    }
    ctx->pc = 0x4F1768u;
    // 0x4f1768: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x4f1768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4f176c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x4f176cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4f1770: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x4f1770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4f1774: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x4f1774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4f1778: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x4f1778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4f177c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x4f177cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4f1780: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4f1780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f1784: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4f1784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f1788: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x4f1788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f178c: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x4f178cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f1790: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x4f1790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f1794: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x4f1794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f1798: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4f1798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_4f179c:
    // 0x4f179c: 0x1485fff0  bne         $a0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4F179Cu;
    {
        const bool branch_taken_0x4f179c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F179Cu;
        // 0x4f17a0: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f179c) {
            ctx->pc = 0x4F1760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1760;
        }
    }
    ctx->pc = 0x4F17A4u;
label_4f17a4:
    // 0x4f17a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F17A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F17A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F17ACu;
    // 0x4f17ac: 0x0  nop
    ctx->pc = 0x4f17acu;
    // NOP
    ctx->pc = 0x4f17b0u;
}
