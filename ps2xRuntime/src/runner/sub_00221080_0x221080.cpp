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

// Function: sub_00221080
// Address: 0x221080 - 0x221108
void sub_00221080_0x221080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221080_0x221080");
#endif

    switch (ctx->pc) {
        case 0x2210b8u: goto label_2210b8;
        case 0x2210c8u: goto label_2210c8;
        case 0x2210f8u: goto label_2210f8;
        default: break;
    }

    ctx->pc = 0x221080u;

    // 0x221080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x221084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22108c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22108cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221090: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x221090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
    // 0x221094: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x221094u;
    {
        const bool branch_taken_0x221094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221094u;
        // 0x221098: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221094) {
            ctx->pc = 0x2210C0u;
            goto label_2210c0;
        }
    }
    ctx->pc = 0x22109Cu;
    // 0x22109c: 0x6a0201cb  ldl         $v0, 0x1CB($s0)
    ctx->pc = 0x22109cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2210a0: 0x6e0201c4  ldr         $v0, 0x1C4($s0)
    ctx->pc = 0x2210a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 452); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2210a4: 0xb20201c3  sdl         $v0, 0x1C3($s0)
    ctx->pc = 0x2210a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2210a8: 0xb60201bc  sdr         $v0, 0x1BC($s0)
    ctx->pc = 0x2210a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2210ac: 0x260401c4  addiu       $a0, $s0, 0x1C4
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
    // 0x2210b0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x2210B0u;
    SET_GPR_U32(ctx, 31, 0x2210B8u);
    ctx->pc = 0x2210B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210B0u;
    // 0x2210b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2210B0u, 0x2210B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210B8u;
label_2210b8:
    // 0x2210b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2210B8u;
    {
        const bool branch_taken_0x2210b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210B8u;
        // 0x2210bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210b8) {
            ctx->pc = 0x2210FCu;
            goto label_2210fc;
        }
    }
    ctx->pc = 0x2210C0u;
label_2210c0:
    // 0x2210c0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2210C0u;
    SET_GPR_U32(ctx, 31, 0x2210C8u);
    ctx->pc = 0x2210C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210C0u;
    // 0x2210c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2210C0u, 0x2210C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210C8u;
label_2210c8:
    // 0x2210c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2210c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2210cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2210CCu;
    {
        const bool branch_taken_0x2210cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2210D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210CCu;
        // 0x2210d0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210cc) {
            ctx->pc = 0x2210F0u;
            goto label_2210f0;
        }
    }
    ctx->pc = 0x2210D4u;
    // 0x2210d4: 0x2445a458  addiu       $a1, $v0, -0x5BA8
    ctx->pc = 0x2210d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943832));
    // 0x2210d8: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x2210d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2210dc: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x2210dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2210e0: 0xb20601c3  sdl         $a2, 0x1C3($s0)
    ctx->pc = 0x2210e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2210e4: 0xb60601bc  sdr         $a2, 0x1BC($s0)
    ctx->pc = 0x2210e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2210e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2210E8u;
    {
        const bool branch_taken_0x2210e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210E8u;
        // 0x2210ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210e8) {
            ctx->pc = 0x2210FCu;
            goto label_2210fc;
        }
    }
    ctx->pc = 0x2210F0u;
label_2210f0:
    // 0x2210f0: 0xc089f12  jal         func_227C48
    ctx->pc = 0x2210F0u;
    SET_GPR_U32(ctx, 31, 0x2210F8u);
    ctx->pc = 0x2210F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210F0u;
    // 0x2210f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x2210F0u, 0x2210F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210F8u;
label_2210f8:
    // 0x2210f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2210f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2210fc:
    // 0x2210fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2210fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221100: 0x3e00008  jr          $ra
    ctx->pc = 0x221100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221100u;
        // 0x221104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221108u;
}
