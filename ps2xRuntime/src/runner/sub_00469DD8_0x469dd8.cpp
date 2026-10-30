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

// Function: sub_00469DD8
// Address: 0x469dd8 - 0x469e40
void sub_00469DD8_0x469dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469DD8_0x469dd8");
#endif

    switch (ctx->pc) {
        case 0x469e00u: goto label_469e00;
        case 0x469e18u: goto label_469e18;
        default: break;
    }

    ctx->pc = 0x469dd8u;

    // 0x469dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469ddc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x469ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x469de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x469de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469dec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x469decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469df0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x469df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x469df4: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x469df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x469df8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x469DF8u;
    SET_GPR_U32(ctx, 31, 0x469E00u);
    ctx->pc = 0x469DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469DF8u;
    // 0x469dfc: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x469DF8u, 0x469E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E00u;
label_469e00:
    // 0x469e00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x469E00u;
    {
        const bool branch_taken_0x469e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469E00u;
        // 0x469e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469e00) {
            ctx->pc = 0x469E24u;
            goto label_469e24;
        }
    }
    ctx->pc = 0x469E08u;
    // 0x469e08: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x469e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x469e0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x469e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x469e10: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x469E10u;
    SET_GPR_U32(ctx, 31, 0x469E18u);
    ctx->pc = 0x469E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469E10u;
    // 0x469e14: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x469E10u, 0x469E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E18u;
label_469e18:
    // 0x469e18: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x469e18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x469e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x469E1Cu;
    {
        const bool branch_taken_0x469e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469E1Cu;
        // 0x469e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469e1c) {
            ctx->pc = 0x469E28u;
            goto label_469e28;
        }
    }
    ctx->pc = 0x469E24u;
label_469e24:
    // 0x469e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469e28:
    // 0x469e28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x469e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469e34: 0x3e00008  jr          $ra
    ctx->pc = 0x469E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469E34u;
        // 0x469e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469E3Cu;
    // 0x469e3c: 0x0  nop
    ctx->pc = 0x469e3cu;
    // NOP
    ctx->pc = 0x469e40u;
}
