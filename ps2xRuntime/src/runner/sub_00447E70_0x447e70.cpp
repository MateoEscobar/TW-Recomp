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

// Function: sub_00447E70
// Address: 0x447e70 - 0x447ff8
void sub_00447E70_0x447e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447E70_0x447e70");
#endif

    switch (ctx->pc) {
        case 0x447f04u: goto label_447f04;
        case 0x447f08u: goto label_447f08;
        default: break;
    }

    ctx->pc = 0x447e70u;

    // 0x447e70: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x447e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x447e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x447e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447e78: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x447E78u;
    {
        const bool branch_taken_0x447e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x447e78) {
            ctx->pc = 0x447F90u;
            goto label_447f90;
        }
    }
    ctx->pc = 0x447E80u;
    // 0x447e80: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x447e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x447e84: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x447E84u;
    {
        const bool branch_taken_0x447e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447e84) {
            ctx->pc = 0x447E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447E84u;
            // 0x447e88: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447F18u;
            goto label_447f18;
        }
    }
    ctx->pc = 0x447E8Cu;
    // 0x447e8c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x447E8Cu;
    {
        const bool branch_taken_0x447e8c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x447E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E8Cu;
        // 0x447e90: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e8c) {
            ctx->pc = 0x447EA0u;
            goto label_447ea0;
        }
    }
    ctx->pc = 0x447E94u;
    // 0x447e94: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x447e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x447e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447E98u;
    {
        const bool branch_taken_0x447e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E98u;
        // 0x447e9c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e98) {
            ctx->pc = 0x447EA4u;
            goto label_447ea4;
        }
    }
    ctx->pc = 0x447EA0u;
label_447ea0:
    // 0x447ea0: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x447ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_447ea4:
    // 0x447ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447ea8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x447ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x447eac: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447EACu;
    {
        const bool branch_taken_0x447eac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x447EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EACu;
        // 0x447eb0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447eac) {
            ctx->pc = 0x447EC0u;
            goto label_447ec0;
        }
    }
    ctx->pc = 0x447EB4u;
    // 0x447eb4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x447eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x447eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447EB8u;
    {
        const bool branch_taken_0x447eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EB8u;
        // 0x447ebc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447eb8) {
            ctx->pc = 0x447EC4u;
            goto label_447ec4;
        }
    }
    ctx->pc = 0x447EC0u;
label_447ec0:
    // 0x447ec0: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x447ec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_447ec4:
    // 0x447ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447ec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x447ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x447ecc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x447eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x447ed0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x447ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x447ed4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x447ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x447ed8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x447ED8u;
    {
        const bool branch_taken_0x447ed8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x447EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447ED8u;
        // 0x447edc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ed8) {
            ctx->pc = 0x447EE4u;
            goto label_447ee4;
        }
    }
    ctx->pc = 0x447EE0u;
    // 0x447ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_447ee4:
    // 0x447ee4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x447ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x447ee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447eec: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x447eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x447ef0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x447ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x447ef4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x447ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x447ef8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x447EF8u;
    {
        const bool branch_taken_0x447ef8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x447EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EF8u;
        // 0x447efc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ef8) {
            ctx->pc = 0x447F04u;
            goto label_447f04;
        }
    }
    ctx->pc = 0x447F00u;
    // 0x447f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_447f04:
    // 0x447f04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x447f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_447f08:
    // 0x447f08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x447f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x447f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447f10: 0x3e00008  jr          $ra
    ctx->pc = 0x447F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F10u;
        // 0x447f14: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447F18u;
label_447f18:
    // 0x447f18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x447f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447f1c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x447F1Cu;
    {
        const bool branch_taken_0x447f1c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x447F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F1Cu;
        // 0x447f20: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f1c) {
            ctx->pc = 0x447F28u;
            goto label_447f28;
        }
    }
    ctx->pc = 0x447F24u;
    // 0x447f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_447f28:
    // 0x447f28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x447f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x447f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447f30: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x447f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x447f34: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x447f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x447f38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x447f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x447f3c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x447F3Cu;
    {
        const bool branch_taken_0x447f3c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x447F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F3Cu;
        // 0x447f40: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f3c) {
            ctx->pc = 0x447F48u;
            goto label_447f48;
        }
    }
    ctx->pc = 0x447F44u;
    // 0x447f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_447f48:
    // 0x447f48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x447f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x447f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447f50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x447f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x447f54: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x447f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x447f58: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x447F58u;
    {
        const bool branch_taken_0x447f58 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x447F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F58u;
        // 0x447f5c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f58) {
            ctx->pc = 0x447F6Cu;
            goto label_447f6c;
        }
    }
    ctx->pc = 0x447F60u;
    // 0x447f60: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x447f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x447f64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447F64u;
    {
        const bool branch_taken_0x447f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F64u;
        // 0x447f68: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f64) {
            ctx->pc = 0x447F70u;
            goto label_447f70;
        }
    }
    ctx->pc = 0x447F6Cu;
label_447f6c:
    // 0x447f6c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x447f6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_447f70:
    // 0x447f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447f74: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x447f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x447f78: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x447F78u;
    {
        const bool branch_taken_0x447f78 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x447F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F78u;
        // 0x447f7c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f78) {
            ctx->pc = 0x447F88u;
            goto label_447f88;
        }
    }
    ctx->pc = 0x447F80u;
    // 0x447f80: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x447F80u;
    {
        const bool branch_taken_0x447f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F80u;
        // 0x447f84: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f80) {
            ctx->pc = 0x447F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447f04;
        }
    }
    ctx->pc = 0x447F88u;
label_447f88:
    // 0x447f88: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x447F88u;
    {
        const bool branch_taken_0x447f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F88u;
        // 0x447f8c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f88) {
            ctx->pc = 0x447F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447f08;
        }
    }
    ctx->pc = 0x447F90u;
label_447f90:
    // 0x447f90: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x447F90u;
    {
        const bool branch_taken_0x447f90 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x447F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F90u;
        // 0x447f94: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f90) {
            ctx->pc = 0x447FA4u;
            goto label_447fa4;
        }
    }
    ctx->pc = 0x447F98u;
    // 0x447f98: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x447f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x447f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447F9Cu;
    {
        const bool branch_taken_0x447f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F9Cu;
        // 0x447fa0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f9c) {
            ctx->pc = 0x447FA8u;
            goto label_447fa8;
        }
    }
    ctx->pc = 0x447FA4u;
label_447fa4:
    // 0x447fa4: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x447fa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_447fa8:
    // 0x447fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x447fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x447fac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x447facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x447fb0: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447FB0u;
    {
        const bool branch_taken_0x447fb0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x447FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FB0u;
        // 0x447fb4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447fb0) {
            ctx->pc = 0x447FC4u;
            goto label_447fc4;
        }
    }
    ctx->pc = 0x447FB8u;
    // 0x447fb8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x447fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x447fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447FBCu;
    {
        const bool branch_taken_0x447fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FBCu;
        // 0x447fc0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447fbc) {
            ctx->pc = 0x447FC8u;
            goto label_447fc8;
        }
    }
    ctx->pc = 0x447FC4u;
label_447fc4:
    // 0x447fc4: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x447fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_447fc8:
    // 0x447fc8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x447fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x447fcc: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x447fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x447fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x447fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447fd4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x447fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x447fd8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x447FD8u;
    {
        const bool branch_taken_0x447fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x447FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FD8u;
        // 0x447fdc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447fd8) {
            ctx->pc = 0x447FECu;
            goto label_447fec;
        }
    }
    ctx->pc = 0x447FE0u;
    // 0x447fe0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x447fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x447fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x447FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FE4u;
        // 0x447fe8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447FECu;
label_447fec:
    // 0x447fec: 0x3e00008  jr          $ra
    ctx->pc = 0x447FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FECu;
        // 0x447ff0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447FF4u;
    // 0x447ff4: 0x0  nop
    ctx->pc = 0x447ff4u;
    // NOP
    ctx->pc = 0x447ff8u;
}
