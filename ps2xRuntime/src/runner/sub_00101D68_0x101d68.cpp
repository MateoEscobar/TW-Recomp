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

// Function: sub_00101D68
// Address: 0x101d68 - 0x101dd8
void sub_00101D68_0x101d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101D68_0x101d68");
#endif

    switch (ctx->pc) {
        case 0x101d84u: goto label_101d84;
        case 0x101d98u: goto label_101d98;
        default: break;
    }

    ctx->pc = 0x101d68u;

    // 0x101d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101d6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101d7c: 0xc040494  jal         func_101250
    ctx->pc = 0x101D7Cu;
    SET_GPR_U32(ctx, 31, 0x101D84u);
    ctx->pc = 0x101D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D7Cu;
    // 0x101d80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101D7Cu, 0x101D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D84u;
label_101d84:
    // 0x101d84: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x101d84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101d88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d8c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x101D8Cu;
    {
        const bool branch_taken_0x101d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D8Cu;
        // 0x101d90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d8c) {
            ctx->pc = 0x101DBCu;
            goto label_101dbc;
        }
    }
    ctx->pc = 0x101D94u;
    // 0x101d94: 0x0  nop
    ctx->pc = 0x101d94u;
    // NOP
label_101d98:
    // 0x101d98: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x101d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x101d9c: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x101D9Cu;
    {
        const bool branch_taken_0x101d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x101DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D9Cu;
        // 0x101da0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d9c) {
            ctx->pc = 0x101DACu;
            goto label_101dac;
        }
    }
    ctx->pc = 0x101DA4u;
    // 0x101da4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x101DA4u;
    {
        const bool branch_taken_0x101da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DA4u;
        // 0x101da8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101da4) {
            ctx->pc = 0x101DC0u;
            goto label_101dc0;
        }
    }
    ctx->pc = 0x101DACu;
label_101dac:
    // 0x101dac: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x101db0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x101db4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101DB4u;
    {
        const bool branch_taken_0x101db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DB4u;
        // 0x101db8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101db4) {
            ctx->pc = 0x101D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101d98;
        }
    }
    ctx->pc = 0x101DBCu;
label_101dbc:
    // 0x101dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101dc0:
    // 0x101dc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x101DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DCCu;
        // 0x101dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101DD4u;
    // 0x101dd4: 0x0  nop
    ctx->pc = 0x101dd4u;
    // NOP
    ctx->pc = 0x101dd8u;
}
