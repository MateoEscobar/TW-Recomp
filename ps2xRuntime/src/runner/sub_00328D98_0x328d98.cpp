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

// Function: sub_00328D98
// Address: 0x328d98 - 0x328df0
void sub_00328D98_0x328d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328D98_0x328d98");
#endif

    switch (ctx->pc) {
        case 0x328db8u: goto label_328db8;
        case 0x328dccu: goto label_328dcc;
        case 0x328ddcu: goto label_328ddc;
        default: break;
    }

    ctx->pc = 0x328d98u;

    // 0x328d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x328d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x328da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328da4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x328da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x328da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328DA8u;
    {
        const bool branch_taken_0x328da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DA8u;
        // 0x328dac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328da8) {
            ctx->pc = 0x328DC0u;
            goto label_328dc0;
        }
    }
    ctx->pc = 0x328DB0u;
    // 0x328db0: 0xc0ccd62  jal         func_333588
    ctx->pc = 0x328DB0u;
    SET_GPR_U32(ctx, 31, 0x328DB8u);
    ctx->pc = 0x328DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DB0u;
    // 0x328db4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333588u, 0x328DB0u, 0x328DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DB8u;
label_328db8:
    // 0x328db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x328DB8u;
    {
        const bool branch_taken_0x328db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DB8u;
        // 0x328dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328db8) {
            ctx->pc = 0x328DD0u;
            goto label_328dd0;
        }
    }
    ctx->pc = 0x328DC0u;
label_328dc0:
    // 0x328dc0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x328dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x328dc4: 0xc0cb60a  jal         func_32D828
    ctx->pc = 0x328DC4u;
    SET_GPR_U32(ctx, 31, 0x328DCCu);
    ctx->pc = 0x328DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DC4u;
    // 0x328dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D828u, 0x328DC4u, 0x328DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DCCu;
label_328dcc:
    // 0x328dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328dd0:
    // 0x328dd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x328dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328dd4: 0xc0cce4e  jal         func_333938
    ctx->pc = 0x328DD4u;
    SET_GPR_U32(ctx, 31, 0x328DDCu);
    ctx->pc = 0x328DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DD4u;
    // 0x328dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333938u, 0x328DD4u, 0x328DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DDCu;
label_328ddc:
    // 0x328ddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x328ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328de4: 0x3e00008  jr          $ra
    ctx->pc = 0x328DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DE4u;
        // 0x328de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328DECu;
    // 0x328dec: 0x0  nop
    ctx->pc = 0x328decu;
    // NOP
    ctx->pc = 0x328df0u;
}
