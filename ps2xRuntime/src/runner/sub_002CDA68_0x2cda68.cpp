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

// Function: sub_002CDA68
// Address: 0x2cda68 - 0x2cdae0
void sub_002CDA68_0x2cda68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA68_0x2cda68");
#endif

    switch (ctx->pc) {
        case 0x2cda68u: goto label_2cda68;
        case 0x2cda6cu: goto label_2cda6c;
        case 0x2cda70u: goto label_2cda70;
        case 0x2cda74u: goto label_2cda74;
        case 0x2cda78u: goto label_2cda78;
        case 0x2cda7cu: goto label_2cda7c;
        case 0x2cda80u: goto label_2cda80;
        case 0x2cda84u: goto label_2cda84;
        case 0x2cda88u: goto label_2cda88;
        case 0x2cda8cu: goto label_2cda8c;
        case 0x2cda90u: goto label_2cda90;
        case 0x2cda94u: goto label_2cda94;
        case 0x2cda98u: goto label_2cda98;
        case 0x2cda9cu: goto label_2cda9c;
        case 0x2cdaa0u: goto label_2cdaa0;
        case 0x2cdaa4u: goto label_2cdaa4;
        case 0x2cdaa8u: goto label_2cdaa8;
        case 0x2cdaacu: goto label_2cdaac;
        case 0x2cdab0u: goto label_2cdab0;
        case 0x2cdab4u: goto label_2cdab4;
        case 0x2cdab8u: goto label_2cdab8;
        case 0x2cdabcu: goto label_2cdabc;
        case 0x2cdac0u: goto label_2cdac0;
        case 0x2cdac4u: goto label_2cdac4;
        case 0x2cdac8u: goto label_2cdac8;
        case 0x2cdaccu: goto label_2cdacc;
        case 0x2cdad0u: goto label_2cdad0;
        case 0x2cdad4u: goto label_2cdad4;
        case 0x2cdad8u: goto label_2cdad8;
        case 0x2cdadcu: goto label_2cdadc;
        default: break;
    }

    ctx->pc = 0x2cda68u;

label_2cda68:
    // 0x2cda68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cda68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cda6c:
    // 0x2cda6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cda6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cda70:
    // 0x2cda70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cda74:
    // 0x2cda74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cda74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cda78:
    // 0x2cda78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cda78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cda7c:
    // 0x2cda7c: 0xc089bdc  jal         func_226F70
label_2cda80:
    if (ctx->pc == 0x2CDA80u) {
        ctx->pc = 0x2CDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA7Cu;
        // 0x2cda80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA84u;
        goto label_2cda84;
    }
    ctx->pc = 0x2CDA7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA84u);
    ctx->pc = 0x2CDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA7Cu;
    // 0x2cda80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2CDA7Cu, 0x2CDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA84u;
label_2cda84:
    // 0x2cda84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cda88:
    // 0x2cda88: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2cda8c:
    // 0x2cda8c: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2cda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2cda90:
    // 0x2cda90: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_2cda94:
    if (ctx->pc == 0x2CDA94u) {
        ctx->pc = 0x2CDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA90u;
        // 0x2cda94: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA98u;
        goto label_2cda98;
    }
    ctx->pc = 0x2CDA90u;
    {
        const bool branch_taken_0x2cda90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda90) {
            ctx->pc = 0x2CDA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA90u;
            // 0x2cda94: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDABCu;
            goto label_2cdabc;
        }
    }
    ctx->pc = 0x2CDA98u;
label_2cda98:
    // 0x2cda98: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2cda9c:
    // 0x2cda9c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2cda9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2cdaa0:
    // 0x2cdaa0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2cdaa4:
    // 0x2cdaa4: 0x40f809  jalr        $v0
label_2cdaa8:
    if (ctx->pc == 0x2CDAA8u) {
        ctx->pc = 0x2CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAA4u;
        // 0x2cdaa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAACu;
        goto label_2cdaac;
    }
    ctx->pc = 0x2CDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDAACu);
        ctx->pc = 0x2CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAA4u;
        // 0x2cdaa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDAA4u, 0x2CDAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDAACu;
label_2cdaac:
    // 0x2cdaac: 0x3842001c  xori        $v0, $v0, 0x1C
    ctx->pc = 0x2cdaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28);
label_2cdab0:
    // 0x2cdab0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cdab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cdab4:
    // 0x2cdab4: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x2cdab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
label_2cdab8:
    // 0x2cdab8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdabc:
    // 0x2cdabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cdac0:
    // 0x2cdac0: 0x90620265  lbu         $v0, 0x265($v1)
    ctx->pc = 0x2cdac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 613)));
label_2cdac4:
    // 0x2cdac4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cdac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cdac8:
    // 0x2cdac8: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x2cdac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_2cdacc:
    // 0x2cdacc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cdaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cdad0:
    // 0x2cdad0: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2cdad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
label_2cdad4:
    // 0x2cdad4: 0x3e00008  jr          $ra
label_2cdad8:
    if (ctx->pc == 0x2CDAD8u) {
        ctx->pc = 0x2CDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD4u;
        // 0x2cdad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDADCu;
        goto label_2cdadc;
    }
    ctx->pc = 0x2CDAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD4u;
        // 0x2cdad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDADCu;
label_2cdadc:
    // 0x2cdadc: 0x0  nop
    ctx->pc = 0x2cdadcu;
    // NOP
    ctx->pc = 0x2cdae0u;
}
