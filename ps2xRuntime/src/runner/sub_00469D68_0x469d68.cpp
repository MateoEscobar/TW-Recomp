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

// Function: sub_00469D68
// Address: 0x469d68 - 0x469dd8
void sub_00469D68_0x469d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469D68_0x469d68");
#endif

    switch (ctx->pc) {
        case 0x469d8cu: goto label_469d8c;
        case 0x469db4u: goto label_469db4;
        default: break;
    }

    ctx->pc = 0x469d68u;

    // 0x469d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469d6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x469d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x469d70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x469d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x469d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x469d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469d80: 0x278588c0  addiu       $a1, $gp, -0x7740
    ctx->pc = 0x469d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936768));
    // 0x469d84: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x469D84u;
    SET_GPR_U32(ctx, 31, 0x469D8Cu);
    ctx->pc = 0x469D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469D84u;
    // 0x469d88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x469D84u, 0x469D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D8Cu;
label_469d8c:
    // 0x469d8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x469D8Cu;
    {
        const bool branch_taken_0x469d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469D8Cu;
        // 0x469d90: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469d8c) {
            ctx->pc = 0x469D9Cu;
            goto label_469d9c;
        }
    }
    ctx->pc = 0x469D94u;
    // 0x469d94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x469D94u;
    {
        const bool branch_taken_0x469d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469D94u;
        // 0x469d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469d94) {
            ctx->pc = 0x469DC4u;
            goto label_469dc4;
        }
    }
    ctx->pc = 0x469D9Cu;
label_469d9c:
    // 0x469d9c: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x469D9Cu;
    {
        const bool branch_taken_0x469d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x469d9c) {
            ctx->pc = 0x469DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x469D9Cu;
            // 0x469da0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x469DC4u;
            goto label_469dc4;
        }
    }
    ctx->pc = 0x469DA4u;
    // 0x469da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469da8: 0x278588c4  addiu       $a1, $gp, -0x773C
    ctx->pc = 0x469da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936772));
    // 0x469dac: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x469DACu;
    SET_GPR_U32(ctx, 31, 0x469DB4u);
    ctx->pc = 0x469DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469DACu;
    // 0x469db0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x469DACu, 0x469DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469DB4u;
label_469db4:
    // 0x469db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x469db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469db8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x469DB8u;
    {
        const bool branch_taken_0x469db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x469DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469DB8u;
        // 0x469dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469db8) {
            ctx->pc = 0x469DC4u;
            goto label_469dc4;
        }
    }
    ctx->pc = 0x469DC0u;
    // 0x469dc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x469dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469dc4:
    // 0x469dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x469dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x469DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469DD0u;
        // 0x469dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469DD8u;
}
