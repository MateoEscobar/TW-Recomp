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

// Function: sub_0027BCD8
// Address: 0x27bcd8 - 0x27bd98
void sub_0027BCD8_0x27bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BCD8_0x27bcd8");
#endif

    switch (ctx->pc) {
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd68u: goto label_27bd68;
        default: break;
    }

    ctx->pc = 0x27bcd8u;

    // 0x27bcd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27bcdc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x27bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x27bce0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x27bce0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x27bce4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27bce8: 0x8e62097c  lw          $v0, 0x97C($s3)
    ctx->pc = 0x27bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51097Cu));
    // 0x27bcec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bcf0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x27bcf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27bcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27bcf8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27BCF8u;
    {
        const bool branch_taken_0x27bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCF8u;
        // 0x27bcfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcf8) {
            ctx->pc = 0x27BD30u;
            goto label_27bd30;
        }
    }
    ctx->pc = 0x27BD00u;
    // 0x27bd00: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BD00u;
    SET_GPR_U32(ctx, 31, 0x27BD08u);
    ctx->pc = 0x27BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD00u;
    // 0x27bd04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BD00u, 0x27BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD08u;
label_27bd08:
    // 0x27bd08: 0x8e030980  lw          $v1, 0x980($s0)
    ctx->pc = 0x27bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
    // 0x27bd0c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BD0Cu;
    {
        const bool branch_taken_0x27bd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD0Cu;
        // 0x27bd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd0c) {
            ctx->pc = 0x27BD50u;
            goto label_27bd50;
        }
    }
    ctx->pc = 0x27BD14u;
    // 0x27bd14: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BD14u;
    SET_GPR_U32(ctx, 31, 0x27BD1Cu);
    ctx->pc = 0x27BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD14u;
    // 0x27bd18: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BD14u, 0x27BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD1Cu;
label_27bd1c:
    // 0x27bd1c: 0x8e030984  lw          $v1, 0x984($s0)
    ctx->pc = 0x27bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2436)));
    // 0x27bd20: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27BD20u;
    {
        const bool branch_taken_0x27bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD20u;
        // 0x27bd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd20) {
            ctx->pc = 0x27BD7Cu;
            goto label_27bd7c;
        }
    }
    ctx->pc = 0x27BD28u;
    // 0x27bd28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27BD28u;
    {
        const bool branch_taken_0x27bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD28u;
        // 0x27bd2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd28) {
            ctx->pc = 0x27BD54u;
            goto label_27bd54;
        }
    }
    ctx->pc = 0x27BD30u;
label_27bd30:
    // 0x27bd30: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27bd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bd34: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x27BD34u;
    {
        const bool branch_taken_0x27bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x27BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD34u;
        // 0x27bd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd34) {
            ctx->pc = 0x27BD60u;
            goto label_27bd60;
        }
    }
    ctx->pc = 0x27BD3Cu;
    // 0x27bd3c: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BD3Cu;
    SET_GPR_U32(ctx, 31, 0x27BD44u);
    ctx->pc = 0x27BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD3Cu;
    // 0x27bd40: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BD3Cu, 0x27BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD44u;
label_27bd44:
    // 0x27bd44: 0x8e030980  lw          $v1, 0x980($s0)
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
    // 0x27bd48: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27BD48u;
    {
        const bool branch_taken_0x27bd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD48u;
        // 0x27bd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd48) {
            ctx->pc = 0x27BD7Cu;
            goto label_27bd7c;
        }
    }
    ctx->pc = 0x27BD50u;
label_27bd50:
    // 0x27bd50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27bd54:
    // 0x27bd54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bd58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD58u;
        // 0x27bd5c: 0xae63097c  sw          $v1, 0x97C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BD7Cu;
            goto label_27bd7c;
        }
    }
    ctx->pc = 0x27BD60u;
label_27bd60:
    // 0x27bd60: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BD60u;
    SET_GPR_U32(ctx, 31, 0x27BD68u);
    ctx->pc = 0x27BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD60u;
    // 0x27bd64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BD60u, 0x27BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD68u;
label_27bd68:
    // 0x27bd68: 0x8e030984  lw          $v1, 0x984($s0)
    ctx->pc = 0x27bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2436)));
    // 0x27bd6c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD6Cu;
    {
        const bool branch_taken_0x27bd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD6Cu;
        // 0x27bd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd6c) {
            ctx->pc = 0x27BD7Cu;
            goto label_27bd7c;
        }
    }
    ctx->pc = 0x27BD74u;
    // 0x27bd74: 0xae72097c  sw          $s2, 0x97C($s3)
    ctx->pc = 0x27bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2428), GPR_U32(ctx, 18));
    // 0x27bd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bd7c:
    // 0x27bd7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27bd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bd80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27bd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bd84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27bd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bd88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27bd88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bd8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd90: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD90u;
        // 0x27bd94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BD98u;
}
