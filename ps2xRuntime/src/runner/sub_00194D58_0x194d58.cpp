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

// Function: sub_00194D58
// Address: 0x194d58 - 0x194e28
void sub_00194D58_0x194d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D58_0x194d58");
#endif

    switch (ctx->pc) {
        case 0x194d88u: goto label_194d88;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194dacu: goto label_194dac;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dd0u: goto label_194dd0;
        case 0x194ddcu: goto label_194ddc;
        case 0x194df0u: goto label_194df0;
        default: break;
    }

    ctx->pc = 0x194d58u;

    // 0x194d58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x194d5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x194d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x194d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x194d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x194d68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x194d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x194d6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x194d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x194d70: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x194d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194d74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x194d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x194d78: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x194d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x194d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194d80: 0xc05e872  jal         func_17A1C8
    ctx->pc = 0x194D80u;
    SET_GPR_U32(ctx, 31, 0x194D88u);
    ctx->pc = 0x194D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D80u;
    // 0x194d84: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A1C8u, 0x194D80u, 0x194D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D88u;
label_194d88:
    // 0x194d88: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x194d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x194d8c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x194d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x194d90: 0x24428d78  addiu       $v0, $v0, -0x7288
    ctx->pc = 0x194d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937976));
    // 0x194d94: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x194D94u;
    SET_GPR_U32(ctx, 31, 0x194D9Cu);
    ctx->pc = 0x194D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D94u;
    // 0x194d98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x194D94u, 0x194D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D9Cu;
label_194d9c:
    // 0x194d9c: 0x0  nop
    ctx->pc = 0x194d9cu;
    // NOP
label_194da0:
    // 0x194da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194da4: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x194DA4u;
    SET_GPR_U32(ctx, 31, 0x194DACu);
    ctx->pc = 0x194DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DA4u;
    // 0x194da8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x194DA4u, 0x194DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DACu;
label_194dac:
    // 0x194dac: 0x0  nop
    ctx->pc = 0x194dacu;
    // NOP
    // 0x194db0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x194DB0u;
    {
        const bool branch_taken_0x194db0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x194DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DB0u;
        // 0x194db4: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194db0) {
            ctx->pc = 0x194DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194da0;
        }
    }
    ctx->pc = 0x194DB8u;
    // 0x194db8: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x194dbc: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x194DBCu;
    SET_GPR_U32(ctx, 31, 0x194DC4u);
    ctx->pc = 0x194DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DBCu;
    // 0x194dc0: 0x26300250  addiu       $s0, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x194DBCu, 0x194DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DC4u;
label_194dc4:
    // 0x194dc4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x194dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194dc8: 0x263403d0  addiu       $s4, $s1, 0x3D0
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x194dcc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x194dccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194dd0:
    // 0x194dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194dd4: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x194DD4u;
    SET_GPR_U32(ctx, 31, 0x194DDCu);
    ctx->pc = 0x194DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DD4u;
    // 0x194dd8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x194DD4u, 0x194DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DDCu;
label_194ddc:
    // 0x194ddc: 0x0  nop
    ctx->pc = 0x194ddcu;
    // NOP
    // 0x194de0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x194DE0u;
    {
        const bool branch_taken_0x194de0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de0) {
            ctx->pc = 0x194DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194DE8u;
    // 0x194de8: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x194DE8u;
    SET_GPR_U32(ctx, 31, 0x194DF0u);
    ctx->pc = 0x194DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DE8u;
    // 0x194dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x194DE8u, 0x194DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DF0u;
label_194df0:
    // 0x194df0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x194df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194df4: 0xae20044c  sw          $zero, 0x44C($s1)
    ctx->pc = 0x194df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1100), GPR_U32(ctx, 0));
    // 0x194df8: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x194df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
    // 0x194dfc: 0xae200458  sw          $zero, 0x458($s1)
    ctx->pc = 0x194dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 0));
    // 0x194e00: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x194e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
    // 0x194e04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x194e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194e08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x194e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194e0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x194e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194e10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x194e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x194e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x194E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E1Cu;
        // 0x194e20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E24u;
    // 0x194e24: 0x0  nop
    ctx->pc = 0x194e24u;
    // NOP
    ctx->pc = 0x194e28u;
}
