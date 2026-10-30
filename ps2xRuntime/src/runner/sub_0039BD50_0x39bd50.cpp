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

// Function: sub_0039BD50
// Address: 0x39bd50 - 0x39be28
void sub_0039BD50_0x39bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BD50_0x39bd50");
#endif

    switch (ctx->pc) {
        case 0x39bd7cu: goto label_39bd7c;
        case 0x39bd88u: goto label_39bd88;
        case 0x39bd9cu: goto label_39bd9c;
        case 0x39bdb4u: goto label_39bdb4;
        case 0x39bdc4u: goto label_39bdc4;
        case 0x39bdd4u: goto label_39bdd4;
        case 0x39bdf0u: goto label_39bdf0;
        case 0x39be04u: goto label_39be04;
        case 0x39be0cu: goto label_39be0c;
        default: break;
    }

    ctx->pc = 0x39bd50u;

    // 0x39bd50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39bd54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39bd58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x39bd5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39bd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39bd64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39bd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x39bd6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x39bd70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bd74: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39BD74u;
    SET_GPR_U32(ctx, 31, 0x39BD7Cu);
    ctx->pc = 0x39BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD74u;
    // 0x39bd78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39BD74u, 0x39BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD7Cu;
label_39bd7c:
    // 0x39bd7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39bd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd80: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x39BD80u;
    SET_GPR_U32(ctx, 31, 0x39BD88u);
    ctx->pc = 0x39BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD80u;
    // 0x39bd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x39BD80u, 0x39BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD88u;
label_39bd88:
    // 0x39bd88: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x39BD88u;
    {
        const bool branch_taken_0x39bd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD88u;
        // 0x39bd8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd88) {
            ctx->pc = 0x39BE0Cu;
            goto label_39be0c;
        }
    }
    ctx->pc = 0x39BD90u;
    // 0x39bd90: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x39bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x39bd94: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BD94u;
    SET_GPR_U32(ctx, 31, 0x39BD9Cu);
    ctx->pc = 0x39BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD94u;
    // 0x39bd98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BD94u, 0x39BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD9Cu;
label_39bd9c:
    // 0x39bd9c: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x39BD9Cu;
    {
        const bool branch_taken_0x39bd9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bd9c) {
            ctx->pc = 0x39BDDCu;
            goto label_39bddc;
        }
    }
    ctx->pc = 0x39BDA4u;
    // 0x39bda4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x39BDA4u;
    {
        const bool branch_taken_0x39bda4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDA4u;
        // 0x39bda8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bda4) {
            ctx->pc = 0x39BDBCu;
            goto label_39bdbc;
        }
    }
    ctx->pc = 0x39BDACu;
    // 0x39bdac: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BDACu;
    SET_GPR_U32(ctx, 31, 0x39BDB4u);
    ctx->pc = 0x39BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDACu;
    // 0x39bdb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BDACu, 0x39BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDB4u;
label_39bdb4:
    // 0x39bdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39BDB4u;
    {
        const bool branch_taken_0x39bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDB4u;
        // 0x39bdb8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bdb4) {
            ctx->pc = 0x39BDC8u;
            goto label_39bdc8;
        }
    }
    ctx->pc = 0x39BDBCu;
label_39bdbc:
    // 0x39bdbc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BDBCu;
    SET_GPR_U32(ctx, 31, 0x39BDC4u);
    ctx->pc = 0x39BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDBCu;
    // 0x39bdc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BDBCu, 0x39BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDC4u;
label_39bdc4:
    // 0x39bdc4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39bdc8:
    // 0x39bdc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39bdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bdcc: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BDCCu;
    SET_GPR_U32(ctx, 31, 0x39BDD4u);
    ctx->pc = 0x39BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDCCu;
    // 0x39bdd0: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BDCCu, 0x39BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDD4u;
label_39bdd4:
    // 0x39bdd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39BDD4u;
    {
        const bool branch_taken_0x39bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bdd4) {
            ctx->pc = 0x39BE04u;
            goto label_39be04;
        }
    }
    ctx->pc = 0x39BDDCu;
label_39bddc:
    // 0x39bddc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BDDCu;
    {
        const bool branch_taken_0x39bddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDDCu;
        // 0x39bde0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bddc) {
            ctx->pc = 0x39BDF8u;
            goto label_39bdf8;
        }
    }
    ctx->pc = 0x39BDE4u;
    // 0x39bde4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x39bde8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BDE8u;
    SET_GPR_U32(ctx, 31, 0x39BDF0u);
    ctx->pc = 0x39BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDE8u;
    // 0x39bdec: 0x24060039  addiu       $a2, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BDE8u, 0x39BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDF0u;
label_39bdf0:
    // 0x39bdf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39BDF0u;
    {
        const bool branch_taken_0x39bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bdf0) {
            ctx->pc = 0x39BE04u;
            goto label_39be04;
        }
    }
    ctx->pc = 0x39BDF8u;
label_39bdf8:
    // 0x39bdf8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x39bdfc: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BDFCu;
    SET_GPR_U32(ctx, 31, 0x39BE04u);
    ctx->pc = 0x39BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDFCu;
    // 0x39be00: 0x2406003a  addiu       $a2, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BDFCu, 0x39BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE04u;
label_39be04:
    // 0x39be04: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BE04u;
    SET_GPR_U32(ctx, 31, 0x39BE0Cu);
    ctx->pc = 0x39BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE04u;
    // 0x39be08: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BE04u, 0x39BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE0Cu;
label_39be0c:
    // 0x39be0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39be0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39be10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39be10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39be14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39be14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39be18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39be18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39be1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39be20: 0x3e00008  jr          $ra
    ctx->pc = 0x39BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE20u;
        // 0x39be24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BE28u;
}
