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

// Function: sub_004DDB58
// Address: 0x4ddb58 - 0x4ddbf8
void sub_004DDB58_0x4ddb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDB58_0x4ddb58");
#endif

    switch (ctx->pc) {
        case 0x4ddb58u: goto label_4ddb58;
        case 0x4ddb5cu: goto label_4ddb5c;
        case 0x4ddb60u: goto label_4ddb60;
        case 0x4ddb64u: goto label_4ddb64;
        case 0x4ddb68u: goto label_4ddb68;
        case 0x4ddb6cu: goto label_4ddb6c;
        case 0x4ddb70u: goto label_4ddb70;
        case 0x4ddb74u: goto label_4ddb74;
        case 0x4ddb78u: goto label_4ddb78;
        case 0x4ddb7cu: goto label_4ddb7c;
        case 0x4ddb80u: goto label_4ddb80;
        case 0x4ddb84u: goto label_4ddb84;
        case 0x4ddb88u: goto label_4ddb88;
        case 0x4ddb8cu: goto label_4ddb8c;
        case 0x4ddb90u: goto label_4ddb90;
        case 0x4ddb94u: goto label_4ddb94;
        case 0x4ddb98u: goto label_4ddb98;
        case 0x4ddb9cu: goto label_4ddb9c;
        case 0x4ddba0u: goto label_4ddba0;
        case 0x4ddba4u: goto label_4ddba4;
        case 0x4ddba8u: goto label_4ddba8;
        case 0x4ddbacu: goto label_4ddbac;
        case 0x4ddbb0u: goto label_4ddbb0;
        case 0x4ddbb4u: goto label_4ddbb4;
        case 0x4ddbb8u: goto label_4ddbb8;
        case 0x4ddbbcu: goto label_4ddbbc;
        case 0x4ddbc0u: goto label_4ddbc0;
        case 0x4ddbc4u: goto label_4ddbc4;
        case 0x4ddbc8u: goto label_4ddbc8;
        case 0x4ddbccu: goto label_4ddbcc;
        case 0x4ddbd0u: goto label_4ddbd0;
        case 0x4ddbd4u: goto label_4ddbd4;
        case 0x4ddbd8u: goto label_4ddbd8;
        case 0x4ddbdcu: goto label_4ddbdc;
        case 0x4ddbe0u: goto label_4ddbe0;
        case 0x4ddbe4u: goto label_4ddbe4;
        case 0x4ddbe8u: goto label_4ddbe8;
        case 0x4ddbecu: goto label_4ddbec;
        case 0x4ddbf0u: goto label_4ddbf0;
        case 0x4ddbf4u: goto label_4ddbf4;
        default: break;
    }

    ctx->pc = 0x4ddb58u;

label_4ddb58:
    // 0x4ddb58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ddb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ddb5c:
    // 0x4ddb5c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ddb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4ddb60:
    // 0x4ddb60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ddb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ddb64:
    // 0x4ddb64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ddb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ddb68:
    // 0x4ddb68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ddb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4ddb6c:
    // 0x4ddb6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ddb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ddb70:
    // 0x4ddb70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4ddb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4ddb74:
    // 0x4ddb74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4ddb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4ddb78:
    // 0x4ddb78: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_4ddb7c:
    if (ctx->pc == 0x4DDB7Cu) {
        ctx->pc = 0x4DDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB78u;
        // 0x4ddb7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDB80u;
        goto label_4ddb80;
    }
    ctx->pc = 0x4DDB78u;
    {
        const bool branch_taken_0x4ddb78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB78u;
        // 0x4ddb7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddb78) {
            ctx->pc = 0x4DDBD0u;
            goto label_4ddbd0;
        }
    }
    ctx->pc = 0x4DDB80u;
label_4ddb80:
    // 0x4ddb80: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4ddb80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4ddb84:
    // 0x4ddb84: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4ddb84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4ddb88:
    // 0x4ddb88: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4ddb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4ddb8c:
    // 0x4ddb8c: 0x0  nop
    ctx->pc = 0x4ddb8cu;
    // NOP
label_4ddb90:
    // 0x4ddb90: 0xc1376d6  jal         func_4DDB58
label_4ddb94:
    if (ctx->pc == 0x4DDB94u) {
        ctx->pc = 0x4DDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB90u;
        // 0x4ddb94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDB98u;
        goto label_4ddb98;
    }
    ctx->pc = 0x4DDB90u;
    SET_GPR_U32(ctx, 31, 0x4DDB98u);
    ctx->pc = 0x4DDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB90u;
    // 0x4ddb94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    goto label_4ddb58;
    ctx->pc = 0x4DDB98u;
label_4ddb98:
    // 0x4ddb98: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_4ddb9c:
    if (ctx->pc == 0x4DDB9Cu) {
        ctx->pc = 0x4DDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB98u;
        // 0x4ddb9c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDBA0u;
        goto label_4ddba0;
    }
    ctx->pc = 0x4DDB98u;
    {
        const bool branch_taken_0x4ddb98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB98u;
        // 0x4ddb9c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddb98) {
            ctx->pc = 0x4DDBC4u;
            goto label_4ddbc4;
        }
    }
    ctx->pc = 0x4DDBA0u;
label_4ddba0:
    // 0x4ddba0: 0x8e88b9c0  lw          $t0, -0x4640($s4)
    ctx->pc = 0x4ddba0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949312)));
label_4ddba4:
    // 0x4ddba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ddba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddba8:
    // 0x4ddba8: 0x2666e648  addiu       $a2, $s3, -0x19B8
    ctx->pc = 0x4ddba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960712));
label_4ddbac:
    // 0x4ddbac: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4ddbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4ddbb0:
    // 0x4ddbb0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ddbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ddbb4:
    // 0x4ddbb4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ddbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ddbb8:
    // 0x4ddbb8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ddbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ddbbc:
    // 0x4ddbbc: 0x60f809  jalr        $v1
label_4ddbc0:
    if (ctx->pc == 0x4DDBC0u) {
        ctx->pc = 0x4DDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBBCu;
        // 0x4ddbc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDBC4u;
        goto label_4ddbc4;
    }
    ctx->pc = 0x4DDBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DDBC4u);
        ctx->pc = 0x4DDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBBCu;
        // 0x4ddbc0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDBBCu, 0x4DDBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DDBC4u;
label_4ddbc4:
    // 0x4ddbc4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4ddbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ddbc8:
    // 0x4ddbc8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_4ddbcc:
    if (ctx->pc == 0x4DDBCCu) {
        ctx->pc = 0x4DDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBC8u;
        // 0x4ddbcc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDBD0u;
        goto label_4ddbd0;
    }
    ctx->pc = 0x4DDBC8u;
    {
        const bool branch_taken_0x4ddbc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ddbc8) {
            ctx->pc = 0x4DDBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDBC8u;
            // 0x4ddbcc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ddb90;
        }
    }
    ctx->pc = 0x4DDBD0u;
label_4ddbd0:
    // 0x4ddbd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ddbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ddbd4:
    // 0x4ddbd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ddbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ddbd8:
    // 0x4ddbd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ddbd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ddbdc:
    // 0x4ddbdc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ddbdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ddbe0:
    // 0x4ddbe0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ddbe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ddbe4:
    // 0x4ddbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ddbe8:
    // 0x4ddbe8: 0x3e00008  jr          $ra
label_4ddbec:
    if (ctx->pc == 0x4DDBECu) {
        ctx->pc = 0x4DDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBE8u;
        // 0x4ddbec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDBF0u;
        goto label_4ddbf0;
    }
    ctx->pc = 0x4DDBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBE8u;
        // 0x4ddbec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDBF0u;
label_4ddbf0:
    // 0x4ddbf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ddbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4ddbf4:
    // 0x4ddbf4: 0x0  nop
    ctx->pc = 0x4ddbf4u;
    // NOP
    ctx->pc = 0x4ddbf8u;
}
