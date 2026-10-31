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

// Function: sub_0016AA98
// Address: 0x16aa98 - 0x16ab38
void sub_0016AA98_0x16aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AA98_0x16aa98");
#endif

    switch (ctx->pc) {
        case 0x16aa98u: goto label_16aa98;
        case 0x16aa9cu: goto label_16aa9c;
        case 0x16aaa0u: goto label_16aaa0;
        case 0x16aaa4u: goto label_16aaa4;
        case 0x16aaa8u: goto label_16aaa8;
        case 0x16aaacu: goto label_16aaac;
        case 0x16aab0u: goto label_16aab0;
        case 0x16aab4u: goto label_16aab4;
        case 0x16aab8u: goto label_16aab8;
        case 0x16aabcu: goto label_16aabc;
        case 0x16aac0u: goto label_16aac0;
        case 0x16aac4u: goto label_16aac4;
        case 0x16aac8u: goto label_16aac8;
        case 0x16aaccu: goto label_16aacc;
        case 0x16aad0u: goto label_16aad0;
        case 0x16aad4u: goto label_16aad4;
        case 0x16aad8u: goto label_16aad8;
        case 0x16aadcu: goto label_16aadc;
        case 0x16aae0u: goto label_16aae0;
        case 0x16aae4u: goto label_16aae4;
        case 0x16aae8u: goto label_16aae8;
        case 0x16aaecu: goto label_16aaec;
        case 0x16aaf0u: goto label_16aaf0;
        case 0x16aaf4u: goto label_16aaf4;
        case 0x16aaf8u: goto label_16aaf8;
        case 0x16aafcu: goto label_16aafc;
        case 0x16ab00u: goto label_16ab00;
        case 0x16ab04u: goto label_16ab04;
        case 0x16ab08u: goto label_16ab08;
        case 0x16ab0cu: goto label_16ab0c;
        case 0x16ab10u: goto label_16ab10;
        case 0x16ab14u: goto label_16ab14;
        case 0x16ab18u: goto label_16ab18;
        case 0x16ab1cu: goto label_16ab1c;
        case 0x16ab20u: goto label_16ab20;
        case 0x16ab24u: goto label_16ab24;
        case 0x16ab28u: goto label_16ab28;
        case 0x16ab2cu: goto label_16ab2c;
        case 0x16ab30u: goto label_16ab30;
        case 0x16ab34u: goto label_16ab34;
        default: break;
    }

    ctx->pc = 0x16aa98u;

label_16aa98:
    // 0x16aa98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16aa9c:
    // 0x16aa9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16aaa0:
    // 0x16aaa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_16aaa4:
    // 0x16aaa4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16aaa8:
    // 0x16aaa8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_16aaac:
    // 0x16aaac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16aaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16aab0:
    // 0x16aab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16aab4:
    // 0x16aab4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aab8:
    // 0x16aab8: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
label_16aabc:
    if (ctx->pc == 0x16AABCu) {
        ctx->pc = 0x16AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAB8u;
        // 0x16aabc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AAC0u;
        goto label_16aac0;
    }
    ctx->pc = 0x16AAB8u;
    {
        const bool branch_taken_0x16aab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAB8u;
        // 0x16aabc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aab8) {
            ctx->pc = 0x16AB1Cu;
            goto label_16ab1c;
        }
    }
    ctx->pc = 0x16AAC0u;
label_16aac0:
    // 0x16aac0: 0xc05b0e2  jal         func_16C388
label_16aac4:
    if (ctx->pc == 0x16AAC4u) {
        ctx->pc = 0x16AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAC0u;
        // 0x16aac4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AAC8u;
        goto label_16aac8;
    }
    ctx->pc = 0x16AAC0u;
    SET_GPR_U32(ctx, 31, 0x16AAC8u);
    ctx->pc = 0x16AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAC0u;
    // 0x16aac4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AAC0u, 0x16AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16aacc:
    // 0x16aacc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16aaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16aad0:
    // 0x16aad0: 0xc137866  jal         func_4DE198
label_16aad4:
    if (ctx->pc == 0x16AAD4u) {
        ctx->pc = 0x16AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAD0u;
        // 0x16aad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AAD8u;
        goto label_16aad8;
    }
    ctx->pc = 0x16AAD0u;
    SET_GPR_U32(ctx, 31, 0x16AAD8u);
    ctx->pc = 0x16AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAD0u;
    // 0x16aad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16AAD0u, 0x16AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAD8u;
label_16aad8:
    // 0x16aad8: 0xc0e409a  jal         func_390268
label_16aadc:
    if (ctx->pc == 0x16AADCu) {
        ctx->pc = 0x16AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAD8u;
        // 0x16aadc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AAE0u;
        goto label_16aae0;
    }
    ctx->pc = 0x16AAD8u;
    SET_GPR_U32(ctx, 31, 0x16AAE0u);
    ctx->pc = 0x16AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAD8u;
    // 0x16aadc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16AAD8u, 0x16AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAE0u;
label_16aae0:
    // 0x16aae0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16aae4:
    // 0x16aae4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_16aae8:
    if (ctx->pc == 0x16AAE8u) {
        ctx->pc = 0x16AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAE4u;
        // 0x16aae8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AAECu;
        goto label_16aaec;
    }
    ctx->pc = 0x16AAE4u;
    {
        const bool branch_taken_0x16aae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aae4) {
            ctx->pc = 0x16AAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AAE4u;
            // 0x16aae8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AB10u;
            goto label_16ab10;
        }
    }
    ctx->pc = 0x16AAECu;
label_16aaec:
    // 0x16aaec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16aaf0:
    // 0x16aaf0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16aaf4:
    // 0x16aaf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16aaf8:
    // 0x16aaf8: 0x40f809  jalr        $v0
label_16aafc:
    if (ctx->pc == 0x16AAFCu) {
        ctx->pc = 0x16AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAF8u;
        // 0x16aafc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB00u;
        goto label_16ab00;
    }
    ctx->pc = 0x16AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16AB00u);
        ctx->pc = 0x16AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAF8u;
        // 0x16aafc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AAF8u, 0x16AB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16AB00u;
label_16ab00:
    // 0x16ab00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ab04:
    // 0x16ab04: 0xc0a48cc  jal         func_292330
label_16ab08:
    if (ctx->pc == 0x16AB08u) {
        ctx->pc = 0x16AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB04u;
        // 0x16ab08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB0Cu;
        goto label_16ab0c;
    }
    ctx->pc = 0x16AB04u;
    SET_GPR_U32(ctx, 31, 0x16AB0Cu);
    ctx->pc = 0x16AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB04u;
    // 0x16ab08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x16AB04u, 0x16AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB0Cu;
label_16ab0c:
    // 0x16ab0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16ab10:
    // 0x16ab10: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16ab10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16ab14:
    // 0x16ab14: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_16ab18:
    if (ctx->pc == 0x16AB18u) {
        ctx->pc = 0x16AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB14u;
        // 0x16ab18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB1Cu;
        goto label_16ab1c;
    }
    ctx->pc = 0x16AB14u;
    {
        const bool branch_taken_0x16ab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab14) {
            ctx->pc = 0x16AB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AB14u;
            // 0x16ab18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aad0;
        }
    }
    ctx->pc = 0x16AB1Cu;
label_16ab1c:
    // 0x16ab1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ab1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ab20:
    // 0x16ab20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ab20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ab24:
    // 0x16ab24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16ab24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ab28:
    // 0x16ab28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ab2c:
    // 0x16ab2c: 0x3e00008  jr          $ra
label_16ab30:
    if (ctx->pc == 0x16AB30u) {
        ctx->pc = 0x16AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB2Cu;
        // 0x16ab30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB34u;
        goto label_16ab34;
    }
    ctx->pc = 0x16AB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB2Cu;
        // 0x16ab30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB34u;
label_16ab34:
    // 0x16ab34: 0x0  nop
    ctx->pc = 0x16ab34u;
    // NOP
    ctx->pc = 0x16ab38u;
}
