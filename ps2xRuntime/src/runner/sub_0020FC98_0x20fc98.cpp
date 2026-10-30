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

// Function: sub_0020FC98
// Address: 0x20fc98 - 0x20fd40
void sub_0020FC98_0x20fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FC98_0x20fc98");
#endif

    switch (ctx->pc) {
        case 0x20fcb0u: goto label_20fcb0;
        case 0x20fce8u: goto label_20fce8;
        case 0x20fd18u: goto label_20fd18;
        default: break;
    }

    ctx->pc = 0x20fc98u;

    // 0x20fc98: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x20FC98u;
    {
        const bool branch_taken_0x20fc98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC98u;
        // 0x20fc9c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc98) {
            ctx->pc = 0x20FD0Cu;
            goto label_20fd0c;
        }
    }
    ctx->pc = 0x20FCA0u;
    // 0x20fca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x20fca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fca8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x20fcac: 0x25040044  addiu       $a0, $t0, 0x44
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
label_20fcb0:
    // 0x20fcb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fcb4: 0x10490007  beq         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FCB4u;
    {
        const bool branch_taken_0x20fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x20FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB4u;
        // 0x20fcb8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcb4) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FCBCu;
    // 0x20fcbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20fcc0: 0x2ce20006  sltiu       $v0, $a3, 0x6
    ctx->pc = 0x20fcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20fcc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20FCC4u;
    {
        const bool branch_taken_0x20fcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCC4u;
        // 0x20fcc8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcc4) {
            ctx->pc = 0x20FCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fcb0;
        }
    }
    ctx->pc = 0x20FCCCu;
    // 0x20fccc: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCD4u;
label_20fcd4:
    // 0x20fcd4: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x20fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20fcd8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x20fcdc: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x20fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    // 0x20fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE0u;
        // 0x20fce4: 0xac660048  sw          $a2, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCE8u;
label_20fce8:
    // 0x20fce8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x20fcec: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x20fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20fcf0: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x20fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x20fcf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20fcf8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20fcfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20fcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20fd00: 0xaca40044  sw          $a0, 0x44($a1)
    ctx->pc = 0x20fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 4));
    // 0x20fd04: 0x3e00008  jr          $ra
    ctx->pc = 0x20FD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD04u;
        // 0x20fd08: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FD0Cu;
label_20fd0c:
    // 0x20fd0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd10: 0x25030044  addiu       $v1, $t0, 0x44
    ctx->pc = 0x20fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x20fd14: 0x0  nop
    ctx->pc = 0x20fd14u;
    // NOP
label_20fd18:
    // 0x20fd18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fd1c: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20FD1Cu;
    {
        const bool branch_taken_0x20fd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD1Cu;
        // 0x20fd20: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd1c) {
            ctx->pc = 0x20FCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fce8;
        }
    }
    ctx->pc = 0x20FD24u;
    // 0x20fd24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fd28: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x20fd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20fd2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20FD2Cu;
    {
        const bool branch_taken_0x20fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD2Cu;
        // 0x20fd30: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd2c) {
            ctx->pc = 0x20FD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd18;
        }
    }
    ctx->pc = 0x20FD34u;
    // 0x20fd34: 0x3e00008  jr          $ra
    ctx->pc = 0x20FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FD3Cu;
    // 0x20fd3c: 0x0  nop
    ctx->pc = 0x20fd3cu;
    // NOP
    ctx->pc = 0x20fd40u;
}
