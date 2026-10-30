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

// Function: sub_00165B70
// Address: 0x165b70 - 0x165c88
void sub_00165B70_0x165b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165B70_0x165b70");
#endif

    switch (ctx->pc) {
        case 0x165bacu: goto label_165bac;
        case 0x165bbcu: goto label_165bbc;
        case 0x165bccu: goto label_165bcc;
        case 0x165bd8u: goto label_165bd8;
        case 0x165becu: goto label_165bec;
        case 0x165bf8u: goto label_165bf8;
        case 0x165c18u: goto label_165c18;
        case 0x165c20u: goto label_165c20;
        case 0x165c28u: goto label_165c28;
        case 0x165c50u: goto label_165c50;
        case 0x165c5cu: goto label_165c5c;
        default: break;
    }

    ctx->pc = 0x165b70u;

    // 0x165b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165b74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x165b78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x165b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x165b7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x165b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x165b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b84: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x165b84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x165b88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x165b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x165b90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x165b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x165b94: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165B94u;
    {
        const bool branch_taken_0x165b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x165B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B94u;
        // 0x165b98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b94) {
            ctx->pc = 0x165BA4u;
            goto label_165ba4;
        }
    }
    ctx->pc = 0x165B9Cu;
    // 0x165b9c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x165B9Cu;
    {
        const bool branch_taken_0x165b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B9Cu;
        // 0x165ba0: 0xae320010  sw          $s2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b9c) {
            ctx->pc = 0x165C68u;
            goto label_165c68;
        }
    }
    ctx->pc = 0x165BA4u;
label_165ba4:
    // 0x165ba4: 0xc05959e  jal         func_165678
    ctx->pc = 0x165BA4u;
    SET_GPR_U32(ctx, 31, 0x165BACu);
    ctx->pc = 0x165BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BA4u;
    // 0x165ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x165BA4u, 0x165BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BACu;
label_165bac:
    // 0x165bac: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x165BACu;
    {
        const bool branch_taken_0x165bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BACu;
        // 0x165bb0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bac) {
            ctx->pc = 0x165C6Cu;
            goto label_165c6c;
        }
    }
    ctx->pc = 0x165BB4u;
    // 0x165bb4: 0xc087502  jal         func_21D408
    ctx->pc = 0x165BB4u;
    SET_GPR_U32(ctx, 31, 0x165BBCu);
    ctx->pc = 0x165BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BB4u;
    // 0x165bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165BB4u, 0x165BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BBCu;
label_165bbc:
    // 0x165bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x165bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bc4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165BC4u;
    SET_GPR_U32(ctx, 31, 0x165BCCu);
    ctx->pc = 0x165BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BC4u;
    // 0x165bc8: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165BC4u, 0x165BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BCCu;
label_165bcc:
    // 0x165bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bd0: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x165BD0u;
    SET_GPR_U32(ctx, 31, 0x165BD8u);
    ctx->pc = 0x165BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BD0u;
    // 0x165bd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x165BD0u, 0x165BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BD8u;
label_165bd8:
    // 0x165bd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x165bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bdc: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x165BDCu;
    {
        const bool branch_taken_0x165bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BDCu;
        // 0x165be0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bdc) {
            ctx->pc = 0x165C6Cu;
            goto label_165c6c;
        }
    }
    ctx->pc = 0x165BE4u;
    // 0x165be4: 0xc087502  jal         func_21D408
    ctx->pc = 0x165BE4u;
    SET_GPR_U32(ctx, 31, 0x165BECu);
    ctx->pc = 0x165BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BE4u;
    // 0x165be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165BE4u, 0x165BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BECu;
label_165bec:
    // 0x165bec: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x165becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x165bf0: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x165BF0u;
    SET_GPR_U32(ctx, 31, 0x165BF8u);
    ctx->pc = 0x165BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BF0u;
    // 0x165bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x165BF0u, 0x165BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BF8u;
label_165bf8:
    // 0x165bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165bfc: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x165BFCu;
    {
        const bool branch_taken_0x165bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x165C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BFCu;
        // 0x165c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bfc) {
            ctx->pc = 0x165C68u;
            goto label_165c68;
        }
    }
    ctx->pc = 0x165C04u;
    // 0x165c04: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x165c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x165c08: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x165c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x165c0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x165c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c14: 0x0  nop
    ctx->pc = 0x165c14u;
    // NOP
label_165c18:
    // 0x165c18: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165C18u;
    SET_GPR_U32(ctx, 31, 0x165C20u);
    ctx->pc = 0x165C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C18u;
    // 0x165c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165C18u, 0x165C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C20u;
label_165c20:
    // 0x165c20: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165C20u;
    SET_GPR_U32(ctx, 31, 0x165C28u);
    ctx->pc = 0x165C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C20u;
    // 0x165c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165C20u, 0x165C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C28u;
label_165c28:
    // 0x165c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c2c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165C2Cu;
    {
        const bool branch_taken_0x165c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c2c) {
            ctx->pc = 0x165C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165C2Cu;
            // 0x165c30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165C5Cu;
            goto label_165c5c;
        }
    }
    ctx->pc = 0x165C34u;
    // 0x165c34: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x165c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x165c38: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x165c38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x165c3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x165c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165c40: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x165C40u;
    {
        const bool branch_taken_0x165c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x165C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C40u;
        // 0x165c44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c40) {
            ctx->pc = 0x165C5Cu;
            goto label_165c5c;
        }
    }
    ctx->pc = 0x165C48u;
    // 0x165c48: 0xc087502  jal         func_21D408
    ctx->pc = 0x165C48u;
    SET_GPR_U32(ctx, 31, 0x165C50u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165C48u, 0x165C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C50u;
label_165c50:
    // 0x165c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c54: 0xc0a354e  jal         func_28D538
    ctx->pc = 0x165C54u;
    SET_GPR_U32(ctx, 31, 0x165C5Cu);
    ctx->pc = 0x165C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C54u;
    // 0x165c58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x165C54u, 0x165C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C5Cu;
label_165c5c:
    // 0x165c5c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x165c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165c60: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x165C60u;
    {
        const bool branch_taken_0x165c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C60u;
        // 0x165c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c60) {
            ctx->pc = 0x165C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165c18;
        }
    }
    ctx->pc = 0x165C68u;
label_165c68:
    // 0x165c68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x165c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165c6c:
    // 0x165c6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x165c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165c70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x165c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165c74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x165c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x165C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C7Cu;
        // 0x165c80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C84u;
    // 0x165c84: 0x0  nop
    ctx->pc = 0x165c84u;
    // NOP
    ctx->pc = 0x165c88u;
}
