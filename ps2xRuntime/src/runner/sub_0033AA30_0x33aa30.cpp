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

// Function: sub_0033AA30
// Address: 0x33aa30 - 0x33ab28
void sub_0033AA30_0x33aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AA30_0x33aa30");
#endif

    switch (ctx->pc) {
        case 0x33aa60u: goto label_33aa60;
        case 0x33aa70u: goto label_33aa70;
        case 0x33aab0u: goto label_33aab0;
        case 0x33aae8u: goto label_33aae8;
        default: break;
    }

    ctx->pc = 0x33aa30u;

    // 0x33aa30: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x33aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x33aa34: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33aa34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33aa38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33aa3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33aa40: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33aa44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33aa48: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x33AA48u;
    {
        const bool branch_taken_0x33aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA48u;
        // 0x33aa4c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa48) {
            ctx->pc = 0x33AB1Cu;
            goto label_33ab1c;
        }
    }
    ctx->pc = 0x33AA50u;
    // 0x33aa50: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x33aa50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x33aa54: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33aa58: 0x3508fffe  ori         $t0, $t0, 0xFFFE
    ctx->pc = 0x33aa58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65534);
    // 0x33aa5c: 0x0  nop
    ctx->pc = 0x33aa5cu;
    // NOP
label_33aa60:
    // 0x33aa60: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x33aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aa64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33aa64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33aa6c: 0x0  nop
    ctx->pc = 0x33aa6cu;
    // NOP
label_33aa70:
    // 0x33aa70: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x33aa70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33aa74: 0x0  nop
    ctx->pc = 0x33aa74u;
    // NOP
    // 0x33aa78: 0x0  nop
    ctx->pc = 0x33aa78u;
    // NOP
    // 0x33aa7c: 0x0  nop
    ctx->pc = 0x33aa7cu;
    // NOP
    // 0x33aa80: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AA80u;
    {
        const bool branch_taken_0x33aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aa80) {
            ctx->pc = 0x33AA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA80u;
            // 0x33aa84: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aa70;
        }
    }
    ctx->pc = 0x33AA88u;
    // 0x33aa88: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x33aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x33aa8c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33aa90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33AA90u;
    {
        const bool branch_taken_0x33aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA90u;
        // 0x33aa94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa90) {
            ctx->pc = 0x33AAD0u;
            goto label_33aad0;
        }
    }
    ctx->pc = 0x33AA98u;
    // 0x33aa98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33aa9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33aaa0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33AAA0u;
    {
        const bool branch_taken_0x33aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAA0u;
        // 0x33aaa4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaa0) {
            ctx->pc = 0x33AB14u;
            goto label_33ab14;
        }
    }
    ctx->pc = 0x33AAA8u;
    // 0x33aaa8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33aaac: 0x0  nop
    ctx->pc = 0x33aaacu;
    // NOP
label_33aab0:
    // 0x33aab0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33aab4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x33aab8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33aabc: 0x0  nop
    ctx->pc = 0x33aabcu;
    // NOP
    // 0x33aac0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AAC0u;
    {
        const bool branch_taken_0x33aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aac0) {
            ctx->pc = 0x33AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAC0u;
            // 0x33aac4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aab0;
        }
    }
    ctx->pc = 0x33AAC8u;
    // 0x33aac8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33AAC8u;
    {
        const bool branch_taken_0x33aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAC8u;
        // 0x33aacc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aac8) {
            ctx->pc = 0x33AB14u;
            goto label_33ab14;
        }
    }
    ctx->pc = 0x33AAD0u;
label_33aad0:
    // 0x33aad0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x33aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33aad4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x33aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33aad8: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AAD8u;
    {
        const bool branch_taken_0x33aad8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x33aad8) {
            ctx->pc = 0x33AADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAD8u;
            // 0x33aadc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB04u;
            goto label_33ab04;
        }
    }
    ctx->pc = 0x33AAE0u;
    // 0x33aae0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x33aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x33aae4: 0x0  nop
    ctx->pc = 0x33aae4u;
    // NOP
label_33aae8:
    // 0x33aae8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x33aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33aaec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33aaf0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x33aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33aaf4: 0x0  nop
    ctx->pc = 0x33aaf4u;
    // NOP
    // 0x33aaf8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AAF8u;
    {
        const bool branch_taken_0x33aaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aaf8) {
            ctx->pc = 0x33AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAF8u;
            // 0x33aafc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aae8;
        }
    }
    ctx->pc = 0x33AB00u;
    // 0x33ab00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33ab04:
    // 0x33ab04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33ab08: 0x54650001  bnel        $v1, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x33AB08u;
    {
        const bool branch_taken_0x33ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x33ab08) {
            ctx->pc = 0x33AB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AB08u;
            // 0x33ab0c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB10u;
            goto label_33ab10;
        }
    }
    ctx->pc = 0x33AB10u;
label_33ab10:
    // 0x33ab10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ab14:
    // 0x33ab14: 0x1444ffd2  bne         $v0, $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x33AB14u;
    {
        const bool branch_taken_0x33ab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB14u;
        // 0x33ab18: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab14) {
            ctx->pc = 0x33AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aa60;
        }
    }
    ctx->pc = 0x33AB1Cu;
label_33ab1c:
    // 0x33ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB1Cu;
        // 0x33ab20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB24u;
    // 0x33ab24: 0x0  nop
    ctx->pc = 0x33ab24u;
    // NOP
    ctx->pc = 0x33ab28u;
}
