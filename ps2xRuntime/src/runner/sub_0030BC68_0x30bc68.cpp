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

// Function: sub_0030BC68
// Address: 0x30bc68 - 0x30be90
void sub_0030BC68_0x30bc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BC68_0x30bc68");
#endif

    switch (ctx->pc) {
        case 0x30bc68u: goto label_30bc68;
        case 0x30bc6cu: goto label_30bc6c;
        case 0x30bc70u: goto label_30bc70;
        case 0x30bc74u: goto label_30bc74;
        case 0x30bc78u: goto label_30bc78;
        case 0x30bc7cu: goto label_30bc7c;
        case 0x30bc80u: goto label_30bc80;
        case 0x30bc84u: goto label_30bc84;
        case 0x30bc88u: goto label_30bc88;
        case 0x30bc8cu: goto label_30bc8c;
        case 0x30bc90u: goto label_30bc90;
        case 0x30bc94u: goto label_30bc94;
        case 0x30bc98u: goto label_30bc98;
        case 0x30bc9cu: goto label_30bc9c;
        case 0x30bca0u: goto label_30bca0;
        case 0x30bca4u: goto label_30bca4;
        case 0x30bca8u: goto label_30bca8;
        case 0x30bcacu: goto label_30bcac;
        case 0x30bcb0u: goto label_30bcb0;
        case 0x30bcb4u: goto label_30bcb4;
        case 0x30bcb8u: goto label_30bcb8;
        case 0x30bcbcu: goto label_30bcbc;
        case 0x30bcc0u: goto label_30bcc0;
        case 0x30bcc4u: goto label_30bcc4;
        case 0x30bcc8u: goto label_30bcc8;
        case 0x30bcccu: goto label_30bccc;
        case 0x30bcd0u: goto label_30bcd0;
        case 0x30bcd4u: goto label_30bcd4;
        case 0x30bcd8u: goto label_30bcd8;
        case 0x30bcdcu: goto label_30bcdc;
        case 0x30bce0u: goto label_30bce0;
        case 0x30bce4u: goto label_30bce4;
        case 0x30bce8u: goto label_30bce8;
        case 0x30bcecu: goto label_30bcec;
        case 0x30bcf0u: goto label_30bcf0;
        case 0x30bcf4u: goto label_30bcf4;
        case 0x30bcf8u: goto label_30bcf8;
        case 0x30bcfcu: goto label_30bcfc;
        case 0x30bd00u: goto label_30bd00;
        case 0x30bd04u: goto label_30bd04;
        case 0x30bd08u: goto label_30bd08;
        case 0x30bd0cu: goto label_30bd0c;
        case 0x30bd10u: goto label_30bd10;
        case 0x30bd14u: goto label_30bd14;
        case 0x30bd18u: goto label_30bd18;
        case 0x30bd1cu: goto label_30bd1c;
        case 0x30bd20u: goto label_30bd20;
        case 0x30bd24u: goto label_30bd24;
        case 0x30bd28u: goto label_30bd28;
        case 0x30bd2cu: goto label_30bd2c;
        case 0x30bd30u: goto label_30bd30;
        case 0x30bd34u: goto label_30bd34;
        case 0x30bd38u: goto label_30bd38;
        case 0x30bd3cu: goto label_30bd3c;
        case 0x30bd40u: goto label_30bd40;
        case 0x30bd44u: goto label_30bd44;
        case 0x30bd48u: goto label_30bd48;
        case 0x30bd4cu: goto label_30bd4c;
        case 0x30bd50u: goto label_30bd50;
        case 0x30bd54u: goto label_30bd54;
        case 0x30bd58u: goto label_30bd58;
        case 0x30bd5cu: goto label_30bd5c;
        case 0x30bd60u: goto label_30bd60;
        case 0x30bd64u: goto label_30bd64;
        case 0x30bd68u: goto label_30bd68;
        case 0x30bd6cu: goto label_30bd6c;
        case 0x30bd70u: goto label_30bd70;
        case 0x30bd74u: goto label_30bd74;
        case 0x30bd78u: goto label_30bd78;
        case 0x30bd7cu: goto label_30bd7c;
        case 0x30bd80u: goto label_30bd80;
        case 0x30bd84u: goto label_30bd84;
        case 0x30bd88u: goto label_30bd88;
        case 0x30bd8cu: goto label_30bd8c;
        case 0x30bd90u: goto label_30bd90;
        case 0x30bd94u: goto label_30bd94;
        case 0x30bd98u: goto label_30bd98;
        case 0x30bd9cu: goto label_30bd9c;
        case 0x30bda0u: goto label_30bda0;
        case 0x30bda4u: goto label_30bda4;
        case 0x30bda8u: goto label_30bda8;
        case 0x30bdacu: goto label_30bdac;
        case 0x30bdb0u: goto label_30bdb0;
        case 0x30bdb4u: goto label_30bdb4;
        case 0x30bdb8u: goto label_30bdb8;
        case 0x30bdbcu: goto label_30bdbc;
        case 0x30bdc0u: goto label_30bdc0;
        case 0x30bdc4u: goto label_30bdc4;
        case 0x30bdc8u: goto label_30bdc8;
        case 0x30bdccu: goto label_30bdcc;
        case 0x30bdd0u: goto label_30bdd0;
        case 0x30bdd4u: goto label_30bdd4;
        case 0x30bdd8u: goto label_30bdd8;
        case 0x30bddcu: goto label_30bddc;
        case 0x30bde0u: goto label_30bde0;
        case 0x30bde4u: goto label_30bde4;
        case 0x30bde8u: goto label_30bde8;
        case 0x30bdecu: goto label_30bdec;
        case 0x30bdf0u: goto label_30bdf0;
        case 0x30bdf4u: goto label_30bdf4;
        case 0x30bdf8u: goto label_30bdf8;
        case 0x30bdfcu: goto label_30bdfc;
        case 0x30be00u: goto label_30be00;
        case 0x30be04u: goto label_30be04;
        case 0x30be08u: goto label_30be08;
        case 0x30be0cu: goto label_30be0c;
        case 0x30be10u: goto label_30be10;
        case 0x30be14u: goto label_30be14;
        case 0x30be18u: goto label_30be18;
        case 0x30be1cu: goto label_30be1c;
        case 0x30be20u: goto label_30be20;
        case 0x30be24u: goto label_30be24;
        case 0x30be28u: goto label_30be28;
        case 0x30be2cu: goto label_30be2c;
        case 0x30be30u: goto label_30be30;
        case 0x30be34u: goto label_30be34;
        case 0x30be38u: goto label_30be38;
        case 0x30be3cu: goto label_30be3c;
        case 0x30be40u: goto label_30be40;
        case 0x30be44u: goto label_30be44;
        case 0x30be48u: goto label_30be48;
        case 0x30be4cu: goto label_30be4c;
        case 0x30be50u: goto label_30be50;
        case 0x30be54u: goto label_30be54;
        case 0x30be58u: goto label_30be58;
        case 0x30be5cu: goto label_30be5c;
        case 0x30be60u: goto label_30be60;
        case 0x30be64u: goto label_30be64;
        case 0x30be68u: goto label_30be68;
        case 0x30be6cu: goto label_30be6c;
        case 0x30be70u: goto label_30be70;
        case 0x30be74u: goto label_30be74;
        case 0x30be78u: goto label_30be78;
        case 0x30be7cu: goto label_30be7c;
        case 0x30be80u: goto label_30be80;
        case 0x30be84u: goto label_30be84;
        case 0x30be88u: goto label_30be88;
        case 0x30be8cu: goto label_30be8c;
        default: break;
    }

    ctx->pc = 0x30bc68u;

label_30bc68:
    // 0x30bc68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30bc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30bc6c:
    // 0x30bc6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_30bc70:
    // 0x30bc70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30bc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_30bc74:
    // 0x30bc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30bc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30bc78:
    // 0x30bc78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_30bc7c:
    // 0x30bc7c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30bc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_30bc80:
    // 0x30bc80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30bc84:
    // 0x30bc84: 0x92430026  lbu         $v1, 0x26($s2)
    ctx->pc = 0x30bc84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_30bc88:
    // 0x30bc88: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_30bc8c:
    if (ctx->pc == 0x30BC8Cu) {
        ctx->pc = 0x30BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC88u;
        // 0x30bc8c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BC90u;
        goto label_30bc90;
    }
    ctx->pc = 0x30BC88u;
    {
        const bool branch_taken_0x30bc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC88u;
        // 0x30bc8c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc88) {
            ctx->pc = 0x30BD98u;
            goto label_30bd98;
        }
    }
    ctx->pc = 0x30BC90u;
label_30bc90:
    // 0x30bc90: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30bc94:
    // 0x30bc94: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_30bc98:
    if (ctx->pc == 0x30BC98u) {
        ctx->pc = 0x30BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC94u;
        // 0x30bc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BC9Cu;
        goto label_30bc9c;
    }
    ctx->pc = 0x30BC94u;
    {
        const bool branch_taken_0x30bc94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC94u;
        // 0x30bc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc94) {
            ctx->pc = 0x30BCB0u;
            goto label_30bcb0;
        }
    }
    ctx->pc = 0x30BC9Cu;
label_30bc9c:
    // 0x30bc9c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_30bca0:
    // 0x30bca0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x30bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_30bca4:
    // 0x30bca4: 0x24631d4c  addiu       $v1, $v1, 0x1D4C
    ctx->pc = 0x30bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7500));
label_30bca8:
    // 0x30bca8: 0x10000072  b           . + 4 + (0x72 << 2)
label_30bcac:
    if (ctx->pc == 0x30BCACu) {
        ctx->pc = 0x30BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCA8u;
        // 0x30bcac: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCB0u;
        goto label_30bcb0;
    }
    ctx->pc = 0x30BCA8u;
    {
        const bool branch_taken_0x30bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCA8u;
        // 0x30bcac: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bca8) {
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BCB0u;
label_30bcb0:
    // 0x30bcb0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_30bcb4:
    // 0x30bcb4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x30bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_30bcb8:
    // 0x30bcb8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x30bcb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30bcbc:
    // 0x30bcbc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_30bcc0:
    if (ctx->pc == 0x30BCC0u) {
        ctx->pc = 0x30BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCBCu;
        // 0x30bcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCC4u;
        goto label_30bcc4;
    }
    ctx->pc = 0x30BCBCu;
    {
        const bool branch_taken_0x30bcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCBCu;
        // 0x30bcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcbc) {
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BCC4u;
label_30bcc4:
    // 0x30bcc4: 0xc0c2eee  jal         func_30BBB8
label_30bcc8:
    if (ctx->pc == 0x30BCC8u) {
        ctx->pc = 0x30BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCC4u;
        // 0x30bcc8: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCCCu;
        goto label_30bccc;
    }
    ctx->pc = 0x30BCC4u;
    SET_GPR_U32(ctx, 31, 0x30BCCCu);
    ctx->pc = 0x30BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCC4u;
    // 0x30bcc8: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BCC4u, 0x30BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCCCu;
label_30bccc:
    // 0x30bccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bcd0:
    // 0x30bcd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30bcd4:
    // 0x30bcd4: 0xc0c2eee  jal         func_30BBB8
label_30bcd8:
    if (ctx->pc == 0x30BCD8u) {
        ctx->pc = 0x30BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCD4u;
        // 0x30bcd8: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCDCu;
        goto label_30bcdc;
    }
    ctx->pc = 0x30BCD4u;
    SET_GPR_U32(ctx, 31, 0x30BCDCu);
    ctx->pc = 0x30BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCD4u;
    // 0x30bcd8: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BCD4u, 0x30BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCDCu;
label_30bcdc:
    // 0x30bcdc: 0x52000065  beql        $s0, $zero, . + 4 + (0x65 << 2)
label_30bce0:
    if (ctx->pc == 0x30BCE0u) {
        ctx->pc = 0x30BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCDCu;
        // 0x30bce0: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCE4u;
        goto label_30bce4;
    }
    ctx->pc = 0x30BCDCu;
    {
        const bool branch_taken_0x30bcdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bcdc) {
            ctx->pc = 0x30BCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BCDCu;
            // 0x30bce0: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BCE4u;
label_30bce4:
    // 0x30bce4: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
label_30bce8:
    if (ctx->pc == 0x30BCE8u) {
        ctx->pc = 0x30BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCE4u;
        // 0x30bce8: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCECu;
        goto label_30bcec;
    }
    ctx->pc = 0x30BCE4u;
    {
        const bool branch_taken_0x30bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bce4) {
            ctx->pc = 0x30BCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BCE4u;
            // 0x30bce8: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BCECu;
label_30bcec:
    // 0x30bcec: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x30bcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_30bcf0:
    // 0x30bcf0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30bcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_30bcf4:
    // 0x30bcf4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x30bcf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_30bcf8:
    // 0x30bcf8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x30bcf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_30bcfc:
    // 0x30bcfc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x30bcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_30bd00:
    // 0x30bd00: 0xc08997c  jal         func_2265F0
label_30bd04:
    if (ctx->pc == 0x30BD04u) {
        ctx->pc = 0x30BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD00u;
        // 0x30bd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD08u;
        goto label_30bd08;
    }
    ctx->pc = 0x30BD00u;
    SET_GPR_U32(ctx, 31, 0x30BD08u);
    ctx->pc = 0x30BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD00u;
    // 0x30bd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x30BD00u, 0x30BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD08u;
label_30bd08:
    // 0x30bd08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_30bd0c:
    if (ctx->pc == 0x30BD0Cu) {
        ctx->pc = 0x30BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD08u;
        // 0x30bd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD10u;
        goto label_30bd10;
    }
    ctx->pc = 0x30BD08u;
    {
        const bool branch_taken_0x30bd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD08u;
        // 0x30bd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd08) {
            ctx->pc = 0x30BD24u;
            goto label_30bd24;
        }
    }
    ctx->pc = 0x30BD10u;
label_30bd10:
    // 0x30bd10: 0xc08997c  jal         func_2265F0
label_30bd14:
    if (ctx->pc == 0x30BD14u) {
        ctx->pc = 0x30BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD10u;
        // 0x30bd14: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD18u;
        goto label_30bd18;
    }
    ctx->pc = 0x30BD10u;
    SET_GPR_U32(ctx, 31, 0x30BD18u);
    ctx->pc = 0x30BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD10u;
    // 0x30bd14: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x30BD10u, 0x30BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD18u;
label_30bd18:
    // 0x30bd18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bd1c:
    // 0x30bd1c: 0x54430055  bnel        $v0, $v1, . + 4 + (0x55 << 2)
label_30bd20:
    if (ctx->pc == 0x30BD20u) {
        ctx->pc = 0x30BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD1Cu;
        // 0x30bd20: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD24u;
        goto label_30bd24;
    }
    ctx->pc = 0x30BD1Cu;
    {
        const bool branch_taken_0x30bd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30bd1c) {
            ctx->pc = 0x30BD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BD1Cu;
            // 0x30bd20: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BD24u;
label_30bd24:
    // 0x30bd24: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x30bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_30bd28:
    // 0x30bd28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30bd2c:
    // 0x30bd2c: 0xc043d5e  jal         func_10F578
label_30bd30:
    if (ctx->pc == 0x30BD30u) {
        ctx->pc = 0x30BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD2Cu;
        // 0x30bd30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD34u;
        goto label_30bd34;
    }
    ctx->pc = 0x30BD2Cu;
    SET_GPR_U32(ctx, 31, 0x30BD34u);
    ctx->pc = 0x30BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD2Cu;
    // 0x30bd30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x30BD2Cu, 0x30BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD34u;
label_30bd34:
    // 0x30bd34: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_30bd38:
    if (ctx->pc == 0x30BD38u) {
        ctx->pc = 0x30BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD34u;
        // 0x30bd38: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD3Cu;
        goto label_30bd3c;
    }
    ctx->pc = 0x30BD34u;
    {
        const bool branch_taken_0x30bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bd34) {
            ctx->pc = 0x30BD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BD34u;
            // 0x30bd38: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BD3Cu;
label_30bd3c:
    // 0x30bd3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30bd40:
    // 0x30bd40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30bd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30bd44:
    // 0x30bd44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30bd48:
    // 0x30bd48: 0x40f809  jalr        $v0
label_30bd4c:
    if (ctx->pc == 0x30BD4Cu) {
        ctx->pc = 0x30BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD48u;
        // 0x30bd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD50u;
        goto label_30bd50;
    }
    ctx->pc = 0x30BD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30BD50u);
        ctx->pc = 0x30BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD48u;
        // 0x30bd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BD48u, 0x30BD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30BD50u;
label_30bd50:
    // 0x30bd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bd54:
    // 0x30bd54: 0xc08e556  jal         func_239558
label_30bd58:
    if (ctx->pc == 0x30BD58u) {
        ctx->pc = 0x30BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD54u;
        // 0x30bd58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD5Cu;
        goto label_30bd5c;
    }
    ctx->pc = 0x30BD54u;
    SET_GPR_U32(ctx, 31, 0x30BD5Cu);
    ctx->pc = 0x30BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD54u;
    // 0x30bd58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239558u, 0x30BD54u, 0x30BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD5Cu;
label_30bd5c:
    // 0x30bd5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30bd60:
    // 0x30bd60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30bd64:
    // 0x30bd64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30bd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30bd68:
    // 0x30bd68: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x30bd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_30bd6c:
    // 0x30bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30bd70:
    // 0x30bd70: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x30bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_30bd74:
    // 0x30bd74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bd78:
    // 0x30bd78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30bd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bd7c:
    // 0x30bd7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30bd7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bd80:
    // 0x30bd80: 0xc088178  jal         func_2205E0
label_30bd84:
    if (ctx->pc == 0x30BD84u) {
        ctx->pc = 0x30BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD80u;
        // 0x30bd84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD88u;
        goto label_30bd88;
    }
    ctx->pc = 0x30BD80u;
    SET_GPR_U32(ctx, 31, 0x30BD88u);
    ctx->pc = 0x30BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD80u;
    // 0x30bd84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x30BD80u, 0x30BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD88u;
label_30bd88:
    // 0x30bd88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bd8c:
    // 0x30bd8c: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x30bd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
label_30bd90:
    // 0x30bd90: 0x10000038  b           . + 4 + (0x38 << 2)
label_30bd94:
    if (ctx->pc == 0x30BD94u) {
        ctx->pc = 0x30BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD90u;
        // 0x30bd94: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD98u;
        goto label_30bd98;
    }
    ctx->pc = 0x30BD90u;
    {
        const bool branch_taken_0x30bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD90u;
        // 0x30bd94: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd90) {
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BD98u;
label_30bd98:
    // 0x30bd98: 0x14730028  bne         $v1, $s3, . + 4 + (0x28 << 2)
label_30bd9c:
    if (ctx->pc == 0x30BD9Cu) {
        ctx->pc = 0x30BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD98u;
        // 0x30bd9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDA0u;
        goto label_30bda0;
    }
    ctx->pc = 0x30BD98u;
    {
        const bool branch_taken_0x30bd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x30BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD98u;
        // 0x30bd9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd98) {
            ctx->pc = 0x30BE3Cu;
            goto label_30be3c;
        }
    }
    ctx->pc = 0x30BDA0u;
label_30bda0:
    // 0x30bda0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30bda4:
    // 0x30bda4: 0xc0c2eee  jal         func_30BBB8
label_30bda8:
    if (ctx->pc == 0x30BDA8u) {
        ctx->pc = 0x30BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDA4u;
        // 0x30bda8: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDACu;
        goto label_30bdac;
    }
    ctx->pc = 0x30BDA4u;
    SET_GPR_U32(ctx, 31, 0x30BDACu);
    ctx->pc = 0x30BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDA4u;
    // 0x30bda8: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BDA4u, 0x30BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDACu;
label_30bdac:
    // 0x30bdac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30bdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bdb0:
    // 0x30bdb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30bdb4:
    // 0x30bdb4: 0xc0c2eee  jal         func_30BBB8
label_30bdb8:
    if (ctx->pc == 0x30BDB8u) {
        ctx->pc = 0x30BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDB4u;
        // 0x30bdb8: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDBCu;
        goto label_30bdbc;
    }
    ctx->pc = 0x30BDB4u;
    SET_GPR_U32(ctx, 31, 0x30BDBCu);
    ctx->pc = 0x30BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDB4u;
    // 0x30bdb8: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BDB4u, 0x30BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDBCu;
label_30bdbc:
    // 0x30bdbc: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_30bdc0:
    if (ctx->pc == 0x30BDC0u) {
        ctx->pc = 0x30BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDBCu;
        // 0x30bdc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDC4u;
        goto label_30bdc4;
    }
    ctx->pc = 0x30BDBCu;
    {
        const bool branch_taken_0x30bdbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDBCu;
        // 0x30bdc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdbc) {
            ctx->pc = 0x30BE30u;
            goto label_30be30;
        }
    }
    ctx->pc = 0x30BDC4u;
label_30bdc4:
    // 0x30bdc4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_30bdc8:
    if (ctx->pc == 0x30BDC8u) {
        ctx->pc = 0x30BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDC4u;
        // 0x30bdc8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDCCu;
        goto label_30bdcc;
    }
    ctx->pc = 0x30BDC4u;
    {
        const bool branch_taken_0x30bdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDC4u;
        // 0x30bdc8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdc4) {
            ctx->pc = 0x30BE30u;
            goto label_30be30;
        }
    }
    ctx->pc = 0x30BDCCu;
label_30bdcc:
    // 0x30bdcc: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x30bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_30bdd0:
    // 0x30bdd0: 0xc043d5e  jal         func_10F578
label_30bdd4:
    if (ctx->pc == 0x30BDD4u) {
        ctx->pc = 0x30BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDD0u;
        // 0x30bdd4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDD8u;
        goto label_30bdd8;
    }
    ctx->pc = 0x30BDD0u;
    SET_GPR_U32(ctx, 31, 0x30BDD8u);
    ctx->pc = 0x30BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDD0u;
    // 0x30bdd4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x30BDD0u, 0x30BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDD8u;
label_30bdd8:
    // 0x30bdd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30bdd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30bddc:
    // 0x30bddc: 0x50530026  beql        $v0, $s3, . + 4 + (0x26 << 2)
label_30bde0:
    if (ctx->pc == 0x30BDE0u) {
        ctx->pc = 0x30BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDDCu;
        // 0x30bde0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDE4u;
        goto label_30bde4;
    }
    ctx->pc = 0x30BDDCu;
    {
        const bool branch_taken_0x30bddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30bddc) {
            ctx->pc = 0x30BDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BDDCu;
            // 0x30bde0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BDE4u;
label_30bde4:
    // 0x30bde4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30bde8:
    // 0x30bde8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30bde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30bdec:
    // 0x30bdec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30bdf0:
    // 0x30bdf0: 0x40f809  jalr        $v0
label_30bdf4:
    if (ctx->pc == 0x30BDF4u) {
        ctx->pc = 0x30BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDF0u;
        // 0x30bdf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDF8u;
        goto label_30bdf8;
    }
    ctx->pc = 0x30BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30BDF8u);
        ctx->pc = 0x30BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDF0u;
        // 0x30bdf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BDF0u, 0x30BDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30BDF8u;
label_30bdf8:
    // 0x30bdf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30bdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bdfc:
    // 0x30bdfc: 0xc08e556  jal         func_239558
label_30be00:
    if (ctx->pc == 0x30BE00u) {
        ctx->pc = 0x30BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDFCu;
        // 0x30be00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE04u;
        goto label_30be04;
    }
    ctx->pc = 0x30BDFCu;
    SET_GPR_U32(ctx, 31, 0x30BE04u);
    ctx->pc = 0x30BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDFCu;
    // 0x30be00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239558u, 0x30BDFCu, 0x30BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE04u;
label_30be04:
    // 0x30be04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30be08:
    // 0x30be08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30be0c:
    // 0x30be0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30be0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30be10:
    // 0x30be10: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x30be10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_30be14:
    // 0x30be14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30be18:
    // 0x30be18: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x30be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_30be1c:
    // 0x30be1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30be1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30be20:
    // 0x30be20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30be20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30be24:
    // 0x30be24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30be24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30be28:
    // 0x30be28: 0xc088178  jal         func_2205E0
label_30be2c:
    if (ctx->pc == 0x30BE2Cu) {
        ctx->pc = 0x30BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE28u;
        // 0x30be2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE30u;
        goto label_30be30;
    }
    ctx->pc = 0x30BE28u;
    SET_GPR_U32(ctx, 31, 0x30BE30u);
    ctx->pc = 0x30BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE28u;
    // 0x30be2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x30BE28u, 0x30BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE30u;
label_30be30:
    // 0x30be30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30be34:
    // 0x30be34: 0x1000000f  b           . + 4 + (0xF << 2)
label_30be38:
    if (ctx->pc == 0x30BE38u) {
        ctx->pc = 0x30BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE34u;
        // 0x30be38: 0xa2420026  sb          $v0, 0x26($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE3Cu;
        goto label_30be3c;
    }
    ctx->pc = 0x30BE34u;
    {
        const bool branch_taken_0x30be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE34u;
        // 0x30be38: 0xa2420026  sb          $v0, 0x26($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be34) {
            ctx->pc = 0x30BE74u;
            goto label_30be74;
        }
    }
    ctx->pc = 0x30BE3Cu;
label_30be3c:
    // 0x30be3c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_30be40:
    if (ctx->pc == 0x30BE40u) {
        ctx->pc = 0x30BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE3Cu;
        // 0x30be40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE44u;
        goto label_30be44;
    }
    ctx->pc = 0x30BE3Cu;
    {
        const bool branch_taken_0x30be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE3Cu;
        // 0x30be40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be3c) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BE44u;
label_30be44:
    // 0x30be44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30be44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30be48:
    // 0x30be48: 0xc0c2eee  jal         func_30BBB8
label_30be4c:
    if (ctx->pc == 0x30BE4Cu) {
        ctx->pc = 0x30BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE48u;
        // 0x30be4c: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE50u;
        goto label_30be50;
    }
    ctx->pc = 0x30BE48u;
    SET_GPR_U32(ctx, 31, 0x30BE50u);
    ctx->pc = 0x30BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE48u;
    // 0x30be4c: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BE48u, 0x30BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE50u;
label_30be50:
    // 0x30be50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_30be54:
    if (ctx->pc == 0x30BE54u) {
        ctx->pc = 0x30BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE50u;
        // 0x30be54: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE58u;
        goto label_30be58;
    }
    ctx->pc = 0x30BE50u;
    {
        const bool branch_taken_0x30be50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE50u;
        // 0x30be54: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be50) {
            ctx->pc = 0x30BE70u;
            goto label_30be70;
        }
    }
    ctx->pc = 0x30BE58u;
label_30be58:
    // 0x30be58: 0x8c420178  lw          $v0, 0x178($v0)
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
label_30be5c:
    // 0x30be5c: 0xc043d5e  jal         func_10F578
label_30be60:
    if (ctx->pc == 0x30BE60u) {
        ctx->pc = 0x30BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE5Cu;
        // 0x30be60: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE64u;
        goto label_30be64;
    }
    ctx->pc = 0x30BE5Cu;
    SET_GPR_U32(ctx, 31, 0x30BE64u);
    ctx->pc = 0x30BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE5Cu;
    // 0x30be60: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x30BE5Cu, 0x30BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE64u;
label_30be64:
    // 0x30be64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30be64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30be68:
    // 0x30be68: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
label_30be6c:
    if (ctx->pc == 0x30BE6Cu) {
        ctx->pc = 0x30BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE68u;
        // 0x30be6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE70u;
        goto label_30be70;
    }
    ctx->pc = 0x30BE68u;
    {
        const bool branch_taken_0x30be68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x30BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE68u;
        // 0x30be6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be68) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BE70u;
label_30be70:
    // 0x30be70: 0xa2400026  sb          $zero, 0x26($s2)
    ctx->pc = 0x30be70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 0));
label_30be74:
    // 0x30be74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30be74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30be78:
    // 0x30be78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30be78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30be7c:
    // 0x30be7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30be7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30be80:
    // 0x30be80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30be80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30be84:
    // 0x30be84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30be84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30be88:
    // 0x30be88: 0x3e00008  jr          $ra
label_30be8c:
    if (ctx->pc == 0x30BE8Cu) {
        ctx->pc = 0x30BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE88u;
        // 0x30be8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE90u;
        goto label_fallthrough_0x30be88;
    }
    ctx->pc = 0x30BE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE88u;
        // 0x30be8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30be88:
    ctx->pc = 0x30BE90u;
}
