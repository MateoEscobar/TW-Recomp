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

// Function: sub_0042EB3C
// Address: 0x42eb3c - 0x42ebf8
void sub_0042EB3C_0x42eb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EB3C_0x42eb3c");
#endif

    switch (ctx->pc) {
        case 0x42eb40u: goto label_42eb40;
        case 0x42eb58u: goto label_42eb58;
        case 0x42eb80u: goto label_42eb80;
        case 0x42eba0u: goto label_42eba0;
        case 0x42ebc4u: goto label_42ebc4;
        default: break;
    }

    ctx->pc = 0x42eb3cu;

    // 0x42eb3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42eb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42eb40:
    // 0x42eb40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42eb44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x42eb44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42eb48: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x42eb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42eb4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x42eb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x42EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB50u;
        // 0x42eb54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EB58u;
label_42eb58:
    // 0x42eb58: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x42eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x42eb5c: 0x8c62f2d0  lw          $v0, -0xD30($v1)
    ctx->pc = 0x42eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FF2D0u));
    // 0x42eb60: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x42eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x42eb64: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x42eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x42eb68: 0xac65f2d0  sw          $a1, -0xD30($v1)
    ctx->pc = 0x42eb68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6FF2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FF2D0u, _value); } while (0);
    // 0x42eb6c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x42eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x42eb70: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x42eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x42eb74: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x42eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x42eb78: 0x3e00008  jr          $ra
    ctx->pc = 0x42EB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB78u;
        // 0x42eb7c: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EB80u;
label_42eb80:
    // 0x42eb80: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42eb84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42eb84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42eb88: 0x8c43f2d0  lw          $v1, -0xD30($v0)
    ctx->pc = 0x42eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6FF2D0u));
    // 0x42eb8c: 0x2445f2d0  addiu       $a1, $v0, -0xD30
    ctx->pc = 0x42eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
    // 0x42eb90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42eb94: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x42EB94u;
    {
        const bool branch_taken_0x42eb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EB94u;
        // 0x42eb98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eb94) {
            ctx->pc = 0x42EBD4u;
            goto label_42ebd4;
        }
    }
    ctx->pc = 0x42EB9Cu;
    // 0x42eb9c: 0x0  nop
    ctx->pc = 0x42eb9cu;
    // NOP
label_42eba0:
    // 0x42eba0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x42eba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42eba4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x42eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x42eba8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42EBA8u;
    {
        const bool branch_taken_0x42eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x42EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EBA8u;
        // 0x42ebac: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42eba8) {
            ctx->pc = 0x42EBCCu;
            goto label_42ebcc;
        }
    }
    ctx->pc = 0x42EBB0u;
    // 0x42ebb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42ebb4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x42EBB4u;
    {
        const bool branch_taken_0x42ebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EBB4u;
        // 0x42ebb8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ebb4) {
            ctx->pc = 0x42EBE4u;
            goto label_42ebe4;
        }
    }
    ctx->pc = 0x42EBBCu;
    // 0x42ebbc: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x42EBBCu;
    SET_GPR_U32(ctx, 31, 0x42EBC4u);
    ctx->pc = 0x42EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EBBCu;
    // 0x42ebc0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x42EBBCu, 0x42EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EBC4u;
label_42ebc4:
    // 0x42ebc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x42EBC4u;
    {
        const bool branch_taken_0x42ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EBC4u;
        // 0x42ebc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ebc4) {
            ctx->pc = 0x42EBE8u;
            goto label_42ebe8;
        }
    }
    ctx->pc = 0x42EBCCu;
label_42ebcc:
    // 0x42ebcc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42EBCCu;
    {
        const bool branch_taken_0x42ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EBCCu;
        // 0x42ebd0: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ebcc) {
            ctx->pc = 0x42EBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42eba0;
        }
    }
    ctx->pc = 0x42EBD4u;
label_42ebd4:
    // 0x42ebd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42ebd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ebd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42ebd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ebdc: 0x810ce84  j           func_433A10
    ctx->pc = 0x42EBDCu;
    ctx->pc = 0x42EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EBDCu;
    // 0x42ebe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A10u;
    sub_00433A10_0x433a10(rdram, ctx, runtime); return;
    ctx->pc = 0x42EBE4u;
label_42ebe4:
    // 0x42ebe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42ebe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ebe8:
    // 0x42ebe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ebec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42ebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x42EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EBF0u;
        // 0x42ebf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EBF8u;
}
