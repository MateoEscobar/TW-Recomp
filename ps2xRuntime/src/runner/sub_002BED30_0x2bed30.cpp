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

// Function: sub_002BED30
// Address: 0x2bed30 - 0x2bedb0
void sub_002BED30_0x2bed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED30_0x2bed30");
#endif

    switch (ctx->pc) {
        case 0x2bed30u: goto label_2bed30;
        case 0x2bed34u: goto label_2bed34;
        case 0x2bed38u: goto label_2bed38;
        case 0x2bed3cu: goto label_2bed3c;
        case 0x2bed40u: goto label_2bed40;
        case 0x2bed44u: goto label_2bed44;
        case 0x2bed48u: goto label_2bed48;
        case 0x2bed4cu: goto label_2bed4c;
        case 0x2bed50u: goto label_2bed50;
        case 0x2bed54u: goto label_2bed54;
        case 0x2bed58u: goto label_2bed58;
        case 0x2bed5cu: goto label_2bed5c;
        case 0x2bed60u: goto label_2bed60;
        case 0x2bed64u: goto label_2bed64;
        case 0x2bed68u: goto label_2bed68;
        case 0x2bed6cu: goto label_2bed6c;
        case 0x2bed70u: goto label_2bed70;
        case 0x2bed74u: goto label_2bed74;
        case 0x2bed78u: goto label_2bed78;
        case 0x2bed7cu: goto label_2bed7c;
        case 0x2bed80u: goto label_2bed80;
        case 0x2bed84u: goto label_2bed84;
        case 0x2bed88u: goto label_2bed88;
        case 0x2bed8cu: goto label_2bed8c;
        case 0x2bed90u: goto label_2bed90;
        case 0x2bed94u: goto label_2bed94;
        case 0x2bed98u: goto label_2bed98;
        case 0x2bed9cu: goto label_2bed9c;
        case 0x2beda0u: goto label_2beda0;
        case 0x2beda4u: goto label_2beda4;
        case 0x2beda8u: goto label_2beda8;
        case 0x2bedacu: goto label_2bedac;
        default: break;
    }

    ctx->pc = 0x2bed30u;

label_2bed30:
    // 0x2bed30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bed34:
    // 0x2bed34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bed38:
    // 0x2bed38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bed38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bed3c:
    // 0x2bed3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2bed40:
    // 0x2bed40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bed44:
    // 0x2bed44: 0xc0e4060  jal         func_390180
label_2bed48:
    if (ctx->pc == 0x2BED48u) {
        ctx->pc = 0x2BED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED44u;
        // 0x2bed48: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED4Cu;
        goto label_2bed4c;
    }
    ctx->pc = 0x2BED44u;
    SET_GPR_U32(ctx, 31, 0x2BED4Cu);
    ctx->pc = 0x2BED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED44u;
    // 0x2bed48: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BED44u, 0x2BED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED4Cu;
label_2bed4c:
    // 0x2bed4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bed4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bed50:
    // 0x2bed50: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2bed54:
    if (ctx->pc == 0x2BED54u) {
        ctx->pc = 0x2BED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED50u;
        // 0x2bed54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED58u;
        goto label_2bed58;
    }
    ctx->pc = 0x2BED50u;
    {
        const bool branch_taken_0x2bed50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED50u;
        // 0x2bed54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed50) {
            ctx->pc = 0x2BED90u;
            goto label_2bed90;
        }
    }
    ctx->pc = 0x2BED58u;
label_2bed58:
    // 0x2bed58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bed5c:
    // 0x2bed5c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2bed5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2bed60:
    // 0x2bed60: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2bed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2bed64:
    // 0x2bed64: 0x40f809  jalr        $v0
label_2bed68:
    if (ctx->pc == 0x2BED68u) {
        ctx->pc = 0x2BED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED64u;
        // 0x2bed68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED6Cu;
        goto label_2bed6c;
    }
    ctx->pc = 0x2BED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BED6Cu);
        ctx->pc = 0x2BED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED64u;
        // 0x2bed68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED64u, 0x2BED6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BED6Cu;
label_2bed6c:
    // 0x2bed6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bed6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bed70:
    // 0x2bed70: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2bed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2bed74:
    // 0x2bed74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2bed78:
    if (ctx->pc == 0x2BED78u) {
        ctx->pc = 0x2BED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED74u;
        // 0x2bed78: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED7Cu;
        goto label_2bed7c;
    }
    ctx->pc = 0x2BED74u;
    {
        const bool branch_taken_0x2bed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bed74) {
            ctx->pc = 0x2BED78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BED74u;
            // 0x2bed78: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BED8Cu;
            goto label_2bed8c;
        }
    }
    ctx->pc = 0x2BED7Cu;
label_2bed7c:
    // 0x2bed7c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2bed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2bed80:
    // 0x2bed80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bed84:
    if (ctx->pc == 0x2BED84u) {
        ctx->pc = 0x2BED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED80u;
        // 0x2bed84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED88u;
        goto label_2bed88;
    }
    ctx->pc = 0x2BED80u;
    {
        const bool branch_taken_0x2bed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED80u;
        // 0x2bed84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed80) {
            ctx->pc = 0x2BED90u;
            goto label_2bed90;
        }
    }
    ctx->pc = 0x2BED88u;
label_2bed88:
    // 0x2bed88: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2bed88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2bed8c:
    // 0x2bed8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bed90:
    // 0x2bed90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bed90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bed94:
    // 0x2bed94: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2bed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2bed98:
    // 0x2bed98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bed9c:
    // 0x2bed9c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_2beda0:
    // 0x2beda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2beda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2beda4:
    // 0x2beda4: 0x3e00008  jr          $ra
label_2beda8:
    if (ctx->pc == 0x2BEDA8u) {
        ctx->pc = 0x2BEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA4u;
        // 0x2beda8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDACu;
        goto label_2bedac;
    }
    ctx->pc = 0x2BEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA4u;
        // 0x2beda8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDACu;
label_2bedac:
    // 0x2bedac: 0x0  nop
    ctx->pc = 0x2bedacu;
    // NOP
    ctx->pc = 0x2bedb0u;
}
