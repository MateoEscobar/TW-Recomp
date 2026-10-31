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

// Function: sub_00452590
// Address: 0x452590 - 0x452600
void sub_00452590_0x452590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452590_0x452590");
#endif

    switch (ctx->pc) {
        case 0x4525c8u: goto label_4525c8;
        case 0x4525d8u: goto label_4525d8;
        default: break;
    }

    ctx->pc = 0x452590u;

    // 0x452590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x452590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x452594: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x452594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x452598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45259c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x45259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4525a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4525a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4525a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4525A4u;
    {
        const bool branch_taken_0x4525a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4525A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4525A4u;
        // 0x4525a8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525a4) {
            ctx->pc = 0x4525D0u;
            goto label_4525d0;
        }
    }
    ctx->pc = 0x4525ACu;
    // 0x4525ac: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4525acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4525b0: 0x68e20077  ldl         $v0, 0x77($a3)
    ctx->pc = 0x4525b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4525b4: 0x6ce20070  ldr         $v0, 0x70($a3)
    ctx->pc = 0x4525b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4525b8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4525b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4525bc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4525bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4525c0: 0xc1140c8  jal         func_450320
    ctx->pc = 0x4525C0u;
    SET_GPR_U32(ctx, 31, 0x4525C8u);
    ctx->pc = 0x4525C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4525C0u;
    // 0x4525c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450320u, 0x4525C0u, 0x4525C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4525C8u;
label_4525c8:
    // 0x4525c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4525C8u;
    {
        const bool branch_taken_0x4525c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4525CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4525C8u;
        // 0x4525cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525c8) {
            ctx->pc = 0x4525F8u;
            goto label_4525f8;
        }
    }
    ctx->pc = 0x4525D0u;
label_4525d0:
    // 0x4525d0: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4525D0u;
    {
        const bool branch_taken_0x4525d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4525D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4525D0u;
        // 0x4525d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525d0) {
            ctx->pc = 0x4525F8u;
            goto label_4525f8;
        }
    }
    ctx->pc = 0x4525D8u;
label_4525d8:
    // 0x4525d8: 0x68e20077  ldl         $v0, 0x77($a3)
    ctx->pc = 0x4525d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4525dc: 0x6ce20070  ldr         $v0, 0x70($a3)
    ctx->pc = 0x4525dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4525e0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4525e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4525e4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4525e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4525e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4525e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4525ec: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4525ECu;
    {
        const bool branch_taken_0x4525ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4525F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4525ECu;
        // 0x4525f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525ec) {
            ctx->pc = 0x4525D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4525d8;
        }
    }
    ctx->pc = 0x4525F4u;
    // 0x4525f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4525f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4525f8:
    // 0x4525f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4525F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4525FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4525F8u;
        // 0x4525fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4525F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452600u;
}
