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

// Function: sub_002B2D00
// Address: 0x2b2d00 - 0x2b2d70
void sub_002B2D00_0x2b2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2D00_0x2b2d00");
#endif

    switch (ctx->pc) {
        case 0x2b2d20u: goto label_2b2d20;
        case 0x2b2d2cu: goto label_2b2d2c;
        case 0x2b2d48u: goto label_2b2d48;
        default: break;
    }

    ctx->pc = 0x2b2d00u;

    // 0x2b2d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2d14: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b2d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2d18: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B2D18u;
    SET_GPR_U32(ctx, 31, 0x2B2D20u);
    ctx->pc = 0x2B2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D18u;
    // 0x2b2d1c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B2D18u, 0x2B2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D20u;
label_2b2d20:
    // 0x2b2d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b2d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d24: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B2D24u;
    SET_GPR_U32(ctx, 31, 0x2B2D2Cu);
    ctx->pc = 0x2B2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D24u;
    // 0x2b2d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B2D24u, 0x2B2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D2Cu;
label_2b2d2c:
    // 0x2b2d2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b2d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2D30u;
    {
        const bool branch_taken_0x2b2d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D30u;
        // 0x2b2d34: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d30) {
            ctx->pc = 0x2B2D5Cu;
            goto label_2b2d5c;
        }
    }
    ctx->pc = 0x2B2D38u;
    // 0x2b2d38: 0x68463fcf  ldl         $a2, 0x3FCF($v0)
    ctx->pc = 0x2b2d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b2d3c: 0x6c463fc8  ldr         $a2, 0x3FC8($v0)
    ctx->pc = 0x2b2d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b2d40: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B2D40u;
    SET_GPR_U32(ctx, 31, 0x2B2D48u);
    ctx->pc = 0x2B2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D40u;
    // 0x2b2d44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B2D40u, 0x2B2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D48u;
label_2b2d48:
    // 0x2b2d48: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b2d4c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2b2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2b2d50: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2b2d54: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b2d58: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2b2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2b2d5c:
    // 0x2b2d5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D68u;
        // 0x2b2d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D70u;
}
