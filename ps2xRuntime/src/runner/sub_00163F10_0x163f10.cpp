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

// Function: sub_00163F10
// Address: 0x163f10 - 0x163fc0
void sub_00163F10_0x163f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163F10_0x163f10");
#endif

    switch (ctx->pc) {
        case 0x163f88u: goto label_163f88;
        default: break;
    }

    ctx->pc = 0x163f10u;

    // 0x163f10: 0x24020257  addiu       $v0, $zero, 0x257
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x163f14: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x163F14u;
    {
        const bool branch_taken_0x163f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F14u;
        // 0x163f18: 0x28a20258  slti        $v0, $a1, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f14) {
            ctx->pc = 0x163FA0u;
            goto label_163fa0;
        }
    }
    ctx->pc = 0x163F1Cu;
    // 0x163f1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163F1Cu;
    {
        const bool branch_taken_0x163f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F1Cu;
        // 0x163f20: 0x24020253  addiu       $v0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f1c) {
            ctx->pc = 0x163F3Cu;
            goto label_163f3c;
        }
    }
    ctx->pc = 0x163F24u;
    // 0x163f24: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x163F24u;
    {
        const bool branch_taken_0x163f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F24u;
        // 0x163f28: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f24) {
            ctx->pc = 0x163F94u;
            goto label_163f94;
        }
    }
    ctx->pc = 0x163F2Cu;
    // 0x163f2c: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x163F2Cu;
    {
        const bool branch_taken_0x163f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F2Cu;
        // 0x163f30: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f2c) {
            ctx->pc = 0x163FACu;
            goto label_163fac;
        }
    }
    ctx->pc = 0x163F34u;
    // 0x163f34: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x163F34u;
    {
        const bool branch_taken_0x163f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F34u;
        // 0x163f38: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f34) {
            ctx->pc = 0x163FB4u;
            goto label_163fb4;
        }
    }
    ctx->pc = 0x163F3Cu;
label_163f3c:
    // 0x163f3c: 0x2402025c  addiu       $v0, $zero, 0x25C
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x163f40: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x163F40u;
    {
        const bool branch_taken_0x163f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x28a2025d  slti        $v0, $a1, 0x25D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)605) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f40) {
            ctx->pc = 0x163F80u;
            goto label_163f80;
        }
    }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163F48u;
    {
        const bool branch_taken_0x163f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F48u;
        // 0x163f4c: 0x2402025b  addiu       $v0, $zero, 0x25B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f48) {
            ctx->pc = 0x163F60u;
            goto label_163f60;
        }
    }
    ctx->pc = 0x163F50u;
    // 0x163f50: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x163F50u;
    {
        const bool branch_taken_0x163f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F50u;
        // 0x163f54: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f50) {
            ctx->pc = 0x163F74u;
            goto label_163f74;
        }
    }
    ctx->pc = 0x163F58u;
    // 0x163f58: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x163F58u;
    {
        const bool branch_taken_0x163f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f58) {
            ctx->pc = 0x163FB4u;
            goto label_163fb4;
        }
    }
    ctx->pc = 0x163F60u;
label_163f60:
    // 0x163f60: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x163f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x163f64: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163F64u;
    {
        const bool branch_taken_0x163f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F64u;
        // 0x163f68: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f64) {
            ctx->pc = 0x163F84u;
            goto label_163f84;
        }
    }
    ctx->pc = 0x163F6Cu;
    // 0x163f6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x163F6Cu;
    {
        const bool branch_taken_0x163f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F6Cu;
        // 0x163f70: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f6c) {
            ctx->pc = 0x163FB4u;
            goto label_163fb4;
        }
    }
    ctx->pc = 0x163F74u;
label_163f74:
    // 0x163f74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x163f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x163f78: 0x3e00008  jr          $ra
    ctx->pc = 0x163F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F78u;
        // 0x163f7c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163F80u;
label_163f80:
    // 0x163f80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_163f84:
    // 0x163f84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_163f88:
    // 0x163f88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x163f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x163f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x163F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F8Cu;
        // 0x163f90: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163F94u;
label_163f94:
    // 0x163f94: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x163f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x163f98: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x163F98u;
    {
        const bool branch_taken_0x163f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F98u;
        // 0x163f9c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f98) {
            ctx->pc = 0x163F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163f88;
        }
    }
    ctx->pc = 0x163FA0u;
label_163fa0:
    // 0x163fa0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x163fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x163fa4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x163FA4u;
    {
        const bool branch_taken_0x163fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FA4u;
        // 0x163fa8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fa4) {
            ctx->pc = 0x163F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163f88;
        }
    }
    ctx->pc = 0x163FACu;
label_163fac:
    // 0x163fac: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x163FACu;
    {
        const bool branch_taken_0x163fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FACu;
        // 0x163fb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fac) {
            ctx->pc = 0x163F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163f88;
        }
    }
    ctx->pc = 0x163FB4u;
label_163fb4:
    // 0x163fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x163FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FB4u;
        // 0x163fb8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163FBCu;
    // 0x163fbc: 0x0  nop
    ctx->pc = 0x163fbcu;
    // NOP
    ctx->pc = 0x163fc0u;
}
