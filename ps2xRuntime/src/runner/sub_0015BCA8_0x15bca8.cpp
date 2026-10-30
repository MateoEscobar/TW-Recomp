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

// Function: sub_0015BCA8
// Address: 0x15bca8 - 0x15be00
void sub_0015BCA8_0x15bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BCA8_0x15bca8");
#endif

    switch (ctx->pc) {
        case 0x15bca8u: goto label_15bca8;
        case 0x15bcacu: goto label_15bcac;
        case 0x15bcb0u: goto label_15bcb0;
        case 0x15bcb4u: goto label_15bcb4;
        case 0x15bcb8u: goto label_15bcb8;
        case 0x15bcbcu: goto label_15bcbc;
        case 0x15bcc0u: goto label_15bcc0;
        case 0x15bcc4u: goto label_15bcc4;
        case 0x15bcc8u: goto label_15bcc8;
        case 0x15bcccu: goto label_15bccc;
        case 0x15bcd0u: goto label_15bcd0;
        case 0x15bcd4u: goto label_15bcd4;
        case 0x15bcd8u: goto label_15bcd8;
        case 0x15bcdcu: goto label_15bcdc;
        case 0x15bce0u: goto label_15bce0;
        case 0x15bce4u: goto label_15bce4;
        case 0x15bce8u: goto label_15bce8;
        case 0x15bcecu: goto label_15bcec;
        case 0x15bcf0u: goto label_15bcf0;
        case 0x15bcf4u: goto label_15bcf4;
        case 0x15bcf8u: goto label_15bcf8;
        case 0x15bcfcu: goto label_15bcfc;
        case 0x15bd00u: goto label_15bd00;
        case 0x15bd04u: goto label_15bd04;
        case 0x15bd08u: goto label_15bd08;
        case 0x15bd0cu: goto label_15bd0c;
        case 0x15bd10u: goto label_15bd10;
        case 0x15bd14u: goto label_15bd14;
        case 0x15bd18u: goto label_15bd18;
        case 0x15bd1cu: goto label_15bd1c;
        case 0x15bd20u: goto label_15bd20;
        case 0x15bd24u: goto label_15bd24;
        case 0x15bd28u: goto label_15bd28;
        case 0x15bd2cu: goto label_15bd2c;
        case 0x15bd30u: goto label_15bd30;
        case 0x15bd34u: goto label_15bd34;
        case 0x15bd38u: goto label_15bd38;
        case 0x15bd3cu: goto label_15bd3c;
        case 0x15bd40u: goto label_15bd40;
        case 0x15bd44u: goto label_15bd44;
        case 0x15bd48u: goto label_15bd48;
        case 0x15bd4cu: goto label_15bd4c;
        case 0x15bd50u: goto label_15bd50;
        case 0x15bd54u: goto label_15bd54;
        case 0x15bd58u: goto label_15bd58;
        case 0x15bd5cu: goto label_15bd5c;
        case 0x15bd60u: goto label_15bd60;
        case 0x15bd64u: goto label_15bd64;
        case 0x15bd68u: goto label_15bd68;
        case 0x15bd6cu: goto label_15bd6c;
        case 0x15bd70u: goto label_15bd70;
        case 0x15bd74u: goto label_15bd74;
        case 0x15bd78u: goto label_15bd78;
        case 0x15bd7cu: goto label_15bd7c;
        case 0x15bd80u: goto label_15bd80;
        case 0x15bd84u: goto label_15bd84;
        case 0x15bd88u: goto label_15bd88;
        case 0x15bd8cu: goto label_15bd8c;
        case 0x15bd90u: goto label_15bd90;
        case 0x15bd94u: goto label_15bd94;
        case 0x15bd98u: goto label_15bd98;
        case 0x15bd9cu: goto label_15bd9c;
        case 0x15bda0u: goto label_15bda0;
        case 0x15bda4u: goto label_15bda4;
        case 0x15bda8u: goto label_15bda8;
        case 0x15bdacu: goto label_15bdac;
        case 0x15bdb0u: goto label_15bdb0;
        case 0x15bdb4u: goto label_15bdb4;
        case 0x15bdb8u: goto label_15bdb8;
        case 0x15bdbcu: goto label_15bdbc;
        case 0x15bdc0u: goto label_15bdc0;
        case 0x15bdc4u: goto label_15bdc4;
        case 0x15bdc8u: goto label_15bdc8;
        case 0x15bdccu: goto label_15bdcc;
        case 0x15bdd0u: goto label_15bdd0;
        case 0x15bdd4u: goto label_15bdd4;
        case 0x15bdd8u: goto label_15bdd8;
        case 0x15bddcu: goto label_15bddc;
        case 0x15bde0u: goto label_15bde0;
        case 0x15bde4u: goto label_15bde4;
        case 0x15bde8u: goto label_15bde8;
        case 0x15bdecu: goto label_15bdec;
        case 0x15bdf0u: goto label_15bdf0;
        case 0x15bdf4u: goto label_15bdf4;
        case 0x15bdf8u: goto label_15bdf8;
        case 0x15bdfcu: goto label_15bdfc;
        default: break;
    }

    ctx->pc = 0x15bca8u;

label_15bca8:
    // 0x15bca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15bcac:
    // 0x15bcac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bcb0:
    // 0x15bcb0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_15bcb4:
    // 0x15bcb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15bcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_15bcb8:
    // 0x15bcb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15bcbc:
    // 0x15bcbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15bcc0:
    // 0x15bcc0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_15bcc4:
    // 0x15bcc4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15bcc8:
    // 0x15bcc8: 0x8c43c714  lw          $v1, -0x38EC($v0)
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952724)));
label_15bccc:
    // 0x15bccc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15bcccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bcd0:
    // 0x15bcd0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_15bcd4:
    // 0x15bcd4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_15bcd8:
    // 0x15bcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15bcdc:
    // 0x15bcdc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_15bce0:
    if (ctx->pc == 0x15BCE0u) {
        ctx->pc = 0x15BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCDCu;
        // 0x15bce0: 0xac80c71c  sw          $zero, -0x38E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCE4u;
        goto label_15bce4;
    }
    ctx->pc = 0x15BCDCu;
    {
        const bool branch_taken_0x15bcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCDCu;
        // 0x15bce0: 0xac80c71c  sw          $zero, -0x38E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcdc) {
            ctx->pc = 0x15BD04u;
            goto label_15bd04;
        }
    }
    ctx->pc = 0x15BCE4u;
label_15bce4:
    // 0x15bce4: 0x8e455024  lw          $a1, 0x5024($s2)
    ctx->pc = 0x15bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_15bce8:
    // 0x15bce8: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bcec:
    // 0x15bcec: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_15bcf0:
    // 0x15bcf0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x15bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_15bcf4:
    // 0x15bcf4: 0x40f809  jalr        $v0
label_15bcf8:
    if (ctx->pc == 0x15BCF8u) {
        ctx->pc = 0x15BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF4u;
        // 0x15bcf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCFCu;
        goto label_15bcfc;
    }
    ctx->pc = 0x15BCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BCFCu);
        ctx->pc = 0x15BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF4u;
        // 0x15bcf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCF4u, 0x15BCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BCFCu;
label_15bcfc:
    // 0x15bcfc: 0xae22c71c  sw          $v0, -0x38E4($s1)
    ctx->pc = 0x15bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952732), GPR_U32(ctx, 2));
label_15bd00:
    // 0x15bd00: 0xae80c714  sw          $zero, -0x38EC($s4)
    ctx->pc = 0x15bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952724), GPR_U32(ctx, 0));
label_15bd04:
    // 0x15bd04: 0x8e455024  lw          $a1, 0x5024($s2)
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_15bd08:
    // 0x15bd08: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15bd08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15bd0c:
    // 0x15bd0c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x15bd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15bd10:
    // 0x15bd10: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bd14:
    // 0x15bd14: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x15bd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_15bd18:
    // 0x15bd18: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x15bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_15bd1c:
    // 0x15bd1c: 0x40f809  jalr        $v0
label_15bd20:
    if (ctx->pc == 0x15BD20u) {
        ctx->pc = 0x15BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD1Cu;
        // 0x15bd20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD24u;
        goto label_15bd24;
    }
    ctx->pc = 0x15BD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BD24u);
        ctx->pc = 0x15BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD1Cu;
        // 0x15bd20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD1Cu, 0x15BD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BD24u;
label_15bd24:
    // 0x15bd24: 0x8e03c710  lw          $v1, -0x38F0($s0)
    ctx->pc = 0x15bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952720)));
label_15bd28:
    // 0x15bd28: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_15bd2c:
    if (ctx->pc == 0x15BD2Cu) {
        ctx->pc = 0x15BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD28u;
        // 0x15bd2c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD30u;
        goto label_15bd30;
    }
    ctx->pc = 0x15BD28u;
    {
        const bool branch_taken_0x15bd28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD28u;
        // 0x15bd2c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd28) {
            ctx->pc = 0x15BD48u;
            goto label_15bd48;
        }
    }
    ctx->pc = 0x15BD30u;
label_15bd30:
    // 0x15bd30: 0x8e22c71c  lw          $v0, -0x38E4($s1)
    ctx->pc = 0x15bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952732)));
label_15bd34:
    // 0x15bd34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15bd38:
    if (ctx->pc == 0x15BD38u) {
        ctx->pc = 0x15BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD34u;
        // 0x15bd38: 0x8e455024  lw          $a1, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD3Cu;
        goto label_15bd3c;
    }
    ctx->pc = 0x15BD34u;
    {
        const bool branch_taken_0x15bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD34u;
        // 0x15bd38: 0x8e455024  lw          $a1, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd34) {
            ctx->pc = 0x15BD4Cu;
            goto label_15bd4c;
        }
    }
    ctx->pc = 0x15BD3Cu;
label_15bd3c:
    // 0x15bd3c: 0x8c82c718  lw          $v0, -0x38E8($a0)
    ctx->pc = 0x15bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952728)));
label_15bd40:
    // 0x15bd40: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_15bd44:
    if (ctx->pc == 0x15BD44u) {
        ctx->pc = 0x15BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD40u;
        // 0x15bd44: 0x8ca30128  lw          $v1, 0x128($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD48u;
        goto label_15bd48;
    }
    ctx->pc = 0x15BD40u;
    {
        const bool branch_taken_0x15bd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd40) {
            ctx->pc = 0x15BD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BD40u;
            // 0x15bd44: 0x8ca30128  lw          $v1, 0x128($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BDA4u;
            goto label_15bda4;
        }
    }
    ctx->pc = 0x15BD48u;
label_15bd48:
    // 0x15bd48: 0x8e455024  lw          $a1, 0x5024($s2)
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_15bd4c:
    // 0x15bd4c: 0xac80c718  sw          $zero, -0x38E8($a0)
    ctx->pc = 0x15bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952728), GPR_U32(ctx, 0));
label_15bd50:
    // 0x15bd50: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bd54:
    // 0x15bd54: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x15bd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_15bd58:
    // 0x15bd58: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x15bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_15bd5c:
    // 0x15bd5c: 0x40f809  jalr        $v0
label_15bd60:
    if (ctx->pc == 0x15BD60u) {
        ctx->pc = 0x15BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD5Cu;
        // 0x15bd60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD64u;
        goto label_15bd64;
    }
    ctx->pc = 0x15BD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BD64u);
        ctx->pc = 0x15BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD5Cu;
        // 0x15bd60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD5Cu, 0x15BD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BD64u;
label_15bd64:
    // 0x15bd64: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15bd68:
    // 0x15bd68: 0xae62c710  sw          $v0, -0x38F0($s3)
    ctx->pc = 0x15bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952720), GPR_U32(ctx, 2));
label_15bd6c:
    // 0x15bd6c: 0x8c645d80  lw          $a0, 0x5D80($v1)
    ctx->pc = 0x15bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23936)));
label_15bd70:
    // 0x15bd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bd74:
    // 0x15bd74: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
label_15bd78:
    if (ctx->pc == 0x15BD78u) {
        ctx->pc = 0x15BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD74u;
        // 0x15bd78: 0xae20c71c  sw          $zero, -0x38E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD7Cu;
        goto label_15bd7c;
    }
    ctx->pc = 0x15BD74u;
    {
        const bool branch_taken_0x15bd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bd74) {
            ctx->pc = 0x15BD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BD74u;
            // 0x15bd78: 0xae20c71c  sw          $zero, -0x38E4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294952732), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BD7Cu;
            goto label_15bd7c;
        }
    }
    ctx->pc = 0x15BD7Cu;
label_15bd7c:
    // 0x15bd7c: 0x8e22c71c  lw          $v0, -0x38E4($s1)
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952732)));
label_15bd80:
    // 0x15bd80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15bd84:
    if (ctx->pc == 0x15BD84u) {
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD80u;
        // 0x15bd84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD88u;
        goto label_15bd88;
    }
    ctx->pc = 0x15BD80u;
    {
        const bool branch_taken_0x15bd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD80u;
        // 0x15bd84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd80) {
            ctx->pc = 0x15BD8Cu;
            goto label_15bd8c;
        }
    }
    ctx->pc = 0x15BD88u;
label_15bd88:
    // 0x15bd88: 0xac40c704  sw          $zero, -0x38FC($v0)
    ctx->pc = 0x15bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952708), GPR_U32(ctx, 0));
label_15bd8c:
    // 0x15bd8c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15bd90:
    // 0x15bd90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15bd94:
    // 0x15bd94: 0x2442a448  addiu       $v0, $v0, -0x5BB8
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943816));
label_15bd98:
    // 0x15bd98: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15bd9c:
    // 0x15bd9c: 0x8e455024  lw          $a1, 0x5024($s2)
    ctx->pc = 0x15bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_15bda0:
    // 0x15bda0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bda4:
    // 0x15bda4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x15bda4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15bda8:
    // 0x15bda8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x15bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15bdac:
    // 0x15bdac: 0x40f809  jalr        $v0
label_15bdb0:
    if (ctx->pc == 0x15BDB0u) {
        ctx->pc = 0x15BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDACu;
        // 0x15bdb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDB4u;
        goto label_15bdb4;
    }
    ctx->pc = 0x15BDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BDB4u);
        ctx->pc = 0x15BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDACu;
        // 0x15bdb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDACu, 0x15BDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BDB4u;
label_15bdb4:
    // 0x15bdb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15bdb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bdb8:
    // 0x15bdb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bdbc:
    // 0x15bdbc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_15bdc0:
    if (ctx->pc == 0x15BDC0u) {
        ctx->pc = 0x15BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDBCu;
        // 0x15bdc0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDC4u;
        goto label_15bdc4;
    }
    ctx->pc = 0x15BDBCu;
    {
        const bool branch_taken_0x15bdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDBCu;
        // 0x15bdc0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdbc) {
            ctx->pc = 0x15BDE4u;
            goto label_15bde4;
        }
    }
    ctx->pc = 0x15BDC4u;
label_15bdc4:
    // 0x15bdc4: 0x8e455024  lw          $a1, 0x5024($s2)
    ctx->pc = 0x15bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_15bdc8:
    // 0x15bdc8: 0xae83c714  sw          $v1, -0x38EC($s4)
    ctx->pc = 0x15bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952724), GPR_U32(ctx, 3));
label_15bdcc:
    // 0x15bdcc: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bdd0:
    // 0x15bdd0: 0x844400f0  lh          $a0, 0xF0($v0)
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_15bdd4:
    // 0x15bdd4: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x15bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_15bdd8:
    // 0x15bdd8: 0x60f809  jalr        $v1
label_15bddc:
    if (ctx->pc == 0x15BDDCu) {
        ctx->pc = 0x15BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDD8u;
        // 0x15bddc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDE0u;
        goto label_15bde0;
    }
    ctx->pc = 0x15BDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BDE0u);
        ctx->pc = 0x15BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDD8u;
        // 0x15bddc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDD8u, 0x15BDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BDE0u;
label_15bde0:
    // 0x15bde0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15bde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15bde4:
    // 0x15bde4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15bde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15bde8:
    // 0x15bde8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15bde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15bdec:
    // 0x15bdec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15bdecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15bdf0:
    // 0x15bdf0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15bdf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bdf4:
    // 0x15bdf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bdf8:
    // 0x15bdf8: 0x3e00008  jr          $ra
label_15bdfc:
    if (ctx->pc == 0x15BDFCu) {
        ctx->pc = 0x15BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDF8u;
        // 0x15bdfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE00u;
        goto label_fallthrough_0x15bdf8;
    }
    ctx->pc = 0x15BDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDF8u;
        // 0x15bdfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bdf8:
    ctx->pc = 0x15BE00u;
}
