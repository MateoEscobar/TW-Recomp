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

// Function: sub_0019BC10
// Address: 0x19bc10 - 0x19bd90
void sub_0019BC10_0x19bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BC10_0x19bc10");
#endif

    switch (ctx->pc) {
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc14u: goto label_19bc14;
        case 0x19bc18u: goto label_19bc18;
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc20u: goto label_19bc20;
        case 0x19bc24u: goto label_19bc24;
        case 0x19bc28u: goto label_19bc28;
        case 0x19bc2cu: goto label_19bc2c;
        case 0x19bc30u: goto label_19bc30;
        case 0x19bc34u: goto label_19bc34;
        case 0x19bc38u: goto label_19bc38;
        case 0x19bc3cu: goto label_19bc3c;
        case 0x19bc40u: goto label_19bc40;
        case 0x19bc44u: goto label_19bc44;
        case 0x19bc48u: goto label_19bc48;
        case 0x19bc4cu: goto label_19bc4c;
        case 0x19bc50u: goto label_19bc50;
        case 0x19bc54u: goto label_19bc54;
        case 0x19bc58u: goto label_19bc58;
        case 0x19bc5cu: goto label_19bc5c;
        case 0x19bc60u: goto label_19bc60;
        case 0x19bc64u: goto label_19bc64;
        case 0x19bc68u: goto label_19bc68;
        case 0x19bc6cu: goto label_19bc6c;
        case 0x19bc70u: goto label_19bc70;
        case 0x19bc74u: goto label_19bc74;
        case 0x19bc78u: goto label_19bc78;
        case 0x19bc7cu: goto label_19bc7c;
        case 0x19bc80u: goto label_19bc80;
        case 0x19bc84u: goto label_19bc84;
        case 0x19bc88u: goto label_19bc88;
        case 0x19bc8cu: goto label_19bc8c;
        case 0x19bc90u: goto label_19bc90;
        case 0x19bc94u: goto label_19bc94;
        case 0x19bc98u: goto label_19bc98;
        case 0x19bc9cu: goto label_19bc9c;
        case 0x19bca0u: goto label_19bca0;
        case 0x19bca4u: goto label_19bca4;
        case 0x19bca8u: goto label_19bca8;
        case 0x19bcacu: goto label_19bcac;
        case 0x19bcb0u: goto label_19bcb0;
        case 0x19bcb4u: goto label_19bcb4;
        case 0x19bcb8u: goto label_19bcb8;
        case 0x19bcbcu: goto label_19bcbc;
        case 0x19bcc0u: goto label_19bcc0;
        case 0x19bcc4u: goto label_19bcc4;
        case 0x19bcc8u: goto label_19bcc8;
        case 0x19bcccu: goto label_19bccc;
        case 0x19bcd0u: goto label_19bcd0;
        case 0x19bcd4u: goto label_19bcd4;
        case 0x19bcd8u: goto label_19bcd8;
        case 0x19bcdcu: goto label_19bcdc;
        case 0x19bce0u: goto label_19bce0;
        case 0x19bce4u: goto label_19bce4;
        case 0x19bce8u: goto label_19bce8;
        case 0x19bcecu: goto label_19bcec;
        case 0x19bcf0u: goto label_19bcf0;
        case 0x19bcf4u: goto label_19bcf4;
        case 0x19bcf8u: goto label_19bcf8;
        case 0x19bcfcu: goto label_19bcfc;
        case 0x19bd00u: goto label_19bd00;
        case 0x19bd04u: goto label_19bd04;
        case 0x19bd08u: goto label_19bd08;
        case 0x19bd0cu: goto label_19bd0c;
        case 0x19bd10u: goto label_19bd10;
        case 0x19bd14u: goto label_19bd14;
        case 0x19bd18u: goto label_19bd18;
        case 0x19bd1cu: goto label_19bd1c;
        case 0x19bd20u: goto label_19bd20;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd28u: goto label_19bd28;
        case 0x19bd2cu: goto label_19bd2c;
        case 0x19bd30u: goto label_19bd30;
        case 0x19bd34u: goto label_19bd34;
        case 0x19bd38u: goto label_19bd38;
        case 0x19bd3cu: goto label_19bd3c;
        case 0x19bd40u: goto label_19bd40;
        case 0x19bd44u: goto label_19bd44;
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd4cu: goto label_19bd4c;
        case 0x19bd50u: goto label_19bd50;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd58u: goto label_19bd58;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd60u: goto label_19bd60;
        case 0x19bd64u: goto label_19bd64;
        case 0x19bd68u: goto label_19bd68;
        case 0x19bd6cu: goto label_19bd6c;
        case 0x19bd70u: goto label_19bd70;
        case 0x19bd74u: goto label_19bd74;
        case 0x19bd78u: goto label_19bd78;
        case 0x19bd7cu: goto label_19bd7c;
        case 0x19bd80u: goto label_19bd80;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bd88u: goto label_19bd88;
        case 0x19bd8cu: goto label_19bd8c;
        default: break;
    }

    ctx->pc = 0x19bc10u;

label_19bc10:
    // 0x19bc10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19bc14:
    // 0x19bc14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19bc18:
    // 0x19bc18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19bc1c:
    // 0x19bc1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19bc20:
    // 0x19bc20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19bc20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bc24:
    // 0x19bc24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19bc28:
    // 0x19bc28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19bc2c:
    // 0x19bc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19bc30:
    // 0x19bc30: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_19bc34:
    // 0x19bc34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19bc38:
    // 0x19bc38: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x19bc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_19bc3c:
    // 0x19bc3c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_19bc40:
    // 0x19bc40: 0x40f809  jalr        $v0
label_19bc44:
    if (ctx->pc == 0x19BC44u) {
        ctx->pc = 0x19BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC40u;
        // 0x19bc44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC48u;
        goto label_19bc48;
    }
    ctx->pc = 0x19BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BC48u);
        ctx->pc = 0x19BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC40u;
        // 0x19bc44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC40u, 0x19BC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BC48u;
label_19bc48:
    // 0x19bc48: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_19bc4c:
    if (ctx->pc == 0x19BC4Cu) {
        ctx->pc = 0x19BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC48u;
        // 0x19bc4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC50u;
        goto label_19bc50;
    }
    ctx->pc = 0x19BC48u;
    {
        const bool branch_taken_0x19bc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC48u;
        // 0x19bc4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc48) {
            ctx->pc = 0x19BD74u;
            goto label_19bd74;
        }
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0xc0579c6  jal         func_15E718
label_19bc54:
    if (ctx->pc == 0x19BC54u) {
        ctx->pc = 0x19BC58u;
        goto label_19bc58;
    }
    ctx->pc = 0x19BC50u;
    SET_GPR_U32(ctx, 31, 0x19BC58u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x19BC50u, 0x19BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC58u;
label_19bc58:
    // 0x19bc58: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x19bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_19bc5c:
    // 0x19bc5c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x19bc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_19bc60:
    // 0x19bc60: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19bc64:
    // 0x19bc64: 0xa0f809  jalr        $a1
label_19bc68:
    if (ctx->pc == 0x19BC68u) {
        ctx->pc = 0x19BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC64u;
        // 0x19bc68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC6Cu;
        goto label_19bc6c;
    }
    ctx->pc = 0x19BC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19BC6Cu);
        ctx->pc = 0x19BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC64u;
        // 0x19bc68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC64u, 0x19BC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BC6Cu;
label_19bc6c:
    // 0x19bc6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19bc70:
    // 0x19bc70: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
label_19bc74:
    if (ctx->pc == 0x19BC74u) {
        ctx->pc = 0x19BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC70u;
        // 0x19bc74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC78u;
        goto label_19bc78;
    }
    ctx->pc = 0x19BC70u;
    {
        const bool branch_taken_0x19bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC70u;
        // 0x19bc74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc70) {
            ctx->pc = 0x19BD74u;
            goto label_19bd74;
        }
    }
    ctx->pc = 0x19BC78u;
label_19bc78:
    // 0x19bc78: 0xc0579c6  jal         func_15E718
label_19bc7c:
    if (ctx->pc == 0x19BC7Cu) {
        ctx->pc = 0x19BC80u;
        goto label_19bc80;
    }
    ctx->pc = 0x19BC78u;
    SET_GPR_U32(ctx, 31, 0x19BC80u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x19BC78u, 0x19BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC80u;
label_19bc80:
    // 0x19bc80: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x19bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_19bc84:
    // 0x19bc84: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_19bc88:
    // 0x19bc88: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19bc8c:
    // 0x19bc8c: 0xa0f809  jalr        $a1
label_19bc90:
    if (ctx->pc == 0x19BC90u) {
        ctx->pc = 0x19BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC8Cu;
        // 0x19bc90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC94u;
        goto label_19bc94;
    }
    ctx->pc = 0x19BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19BC94u);
        ctx->pc = 0x19BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC8Cu;
        // 0x19bc90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC8Cu, 0x19BC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BC94u;
label_19bc94:
    // 0x19bc94: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19bc98:
    // 0x19bc98: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_19bc9c:
    if (ctx->pc == 0x19BC9Cu) {
        ctx->pc = 0x19BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC98u;
        // 0x19bc9c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCA0u;
        goto label_19bca0;
    }
    ctx->pc = 0x19BC98u;
    {
        const bool branch_taken_0x19bc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC98u;
        // 0x19bc9c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc98) {
            ctx->pc = 0x19BD74u;
            goto label_19bd74;
        }
    }
    ctx->pc = 0x19BCA0u;
label_19bca0:
    // 0x19bca0: 0xc066f64  jal         func_19BD90
label_19bca4:
    if (ctx->pc == 0x19BCA4u) {
        ctx->pc = 0x19BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCA0u;
        // 0x19bca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCA8u;
        goto label_19bca8;
    }
    ctx->pc = 0x19BCA0u;
    SET_GPR_U32(ctx, 31, 0x19BCA8u);
    ctx->pc = 0x19BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCA0u;
    // 0x19bca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x19BCA0u, 0x19BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCA8u;
label_19bca8:
    // 0x19bca8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_19bcac:
    if (ctx->pc == 0x19BCACu) {
        ctx->pc = 0x19BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCA8u;
        // 0x19bcac: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCB0u;
        goto label_19bcb0;
    }
    ctx->pc = 0x19BCA8u;
    {
        const bool branch_taken_0x19bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCA8u;
        // 0x19bcac: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bca8) {
            ctx->pc = 0x19BD18u;
            goto label_19bd18;
        }
    }
    ctx->pc = 0x19BCB0u;
label_19bcb0:
    // 0x19bcb0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bcb4:
    // 0x19bcb4: 0x52220013  beql        $s1, $v0, . + 4 + (0x13 << 2)
label_19bcb8:
    if (ctx->pc == 0x19BCB8u) {
        ctx->pc = 0x19BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCB4u;
        // 0x19bcb8: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCBCu;
        goto label_19bcbc;
    }
    ctx->pc = 0x19BCB4u;
    {
        const bool branch_taken_0x19bcb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bcb4) {
            ctx->pc = 0x19BCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BCB4u;
            // 0x19bcb8: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD04u;
            goto label_19bd04;
        }
    }
    ctx->pc = 0x19BCBCu;
label_19bcbc:
    // 0x19bcbc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19bcc0:
    // 0x19bcc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bcc4:
    // 0x19bcc4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_19bcc8:
    // 0x19bcc8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_19bccc:
    // 0x19bccc: 0x40f809  jalr        $v0
label_19bcd0:
    if (ctx->pc == 0x19BCD0u) {
        ctx->pc = 0x19BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCCCu;
        // 0x19bcd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCD4u;
        goto label_19bcd4;
    }
    ctx->pc = 0x19BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BCD4u);
        ctx->pc = 0x19BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCCCu;
        // 0x19bcd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BCCCu, 0x19BCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BCD4u;
label_19bcd4:
    // 0x19bcd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_19bcd8:
    if (ctx->pc == 0x19BCD8u) {
        ctx->pc = 0x19BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCD4u;
        // 0x19bcd8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCDCu;
        goto label_19bcdc;
    }
    ctx->pc = 0x19BCD4u;
    {
        const bool branch_taken_0x19bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcd4) {
            ctx->pc = 0x19BCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BCD4u;
            // 0x19bcd8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BCF4u;
            goto label_19bcf4;
        }
    }
    ctx->pc = 0x19BCDCu;
label_19bcdc:
    // 0x19bcdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bce0:
    // 0x19bce0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_19bce4:
    // 0x19bce4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19bce8:
    // 0x19bce8: 0x60f809  jalr        $v1
label_19bcec:
    if (ctx->pc == 0x19BCECu) {
        ctx->pc = 0x19BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCE8u;
        // 0x19bcec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BCF0u;
        goto label_19bcf0;
    }
    ctx->pc = 0x19BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19BCF0u);
        ctx->pc = 0x19BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCE8u;
        // 0x19bcec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BCE8u, 0x19BCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BCF0u;
label_19bcf0:
    // 0x19bcf0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bcf4:
    // 0x19bcf4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19bcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19bcf8:
    // 0x19bcf8: 0x5622fff1  bnel        $s1, $v0, . + 4 + (-0xF << 2)
label_19bcfc:
    if (ctx->pc == 0x19BCFCu) {
        ctx->pc = 0x19BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCF8u;
        // 0x19bcfc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD00u;
        goto label_19bd00;
    }
    ctx->pc = 0x19BCF8u;
    {
        const bool branch_taken_0x19bcf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19bcf8) {
            ctx->pc = 0x19BCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BCF8u;
            // 0x19bcfc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bcc0;
        }
    }
    ctx->pc = 0x19BD00u;
label_19bd00:
    // 0x19bd00: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_19bd04:
    // 0x19bd04: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x19bd04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_19bd08:
    // 0x19bd08: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_19bd0c:
    // 0x19bd0c: 0x60f809  jalr        $v1
label_19bd10:
    if (ctx->pc == 0x19BD10u) {
        ctx->pc = 0x19BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD0Cu;
        // 0x19bd10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD14u;
        goto label_19bd14;
    }
    ctx->pc = 0x19BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19BD14u);
        ctx->pc = 0x19BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD0Cu;
        // 0x19bd10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD0Cu, 0x19BD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BD14u;
label_19bd14:
    // 0x19bd14: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19bd18:
    // 0x19bd18: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bd1c:
    // 0x19bd1c: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_19bd20:
    if (ctx->pc == 0x19BD20u) {
        ctx->pc = 0x19BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD1Cu;
        // 0x19bd20: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD24u;
        goto label_19bd24;
    }
    ctx->pc = 0x19BD1Cu;
    {
        const bool branch_taken_0x19bd1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD1Cu;
        // 0x19bd20: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd1c) {
            ctx->pc = 0x19BD70u;
            goto label_19bd70;
        }
    }
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x8e622c44  lw          $v0, 0x2C44($s3)
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11332)));
label_19bd28:
    // 0x19bd28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_19bd2c:
    if (ctx->pc == 0x19BD2Cu) {
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD30u;
        goto label_19bd30;
    }
    ctx->pc = 0x19BD28u;
    {
        const bool branch_taken_0x19bd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd28) {
            ctx->pc = 0x19BD60u;
            goto label_19bd60;
        }
    }
    ctx->pc = 0x19BD30u;
label_19bd30:
    // 0x19bd30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bd34:
    // 0x19bd34: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_19bd38:
    // 0x19bd38: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_19bd3c:
    // 0x19bd3c: 0x40f809  jalr        $v0
label_19bd40:
    if (ctx->pc == 0x19BD40u) {
        ctx->pc = 0x19BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD3Cu;
        // 0x19bd40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD44u;
        goto label_19bd44;
    }
    ctx->pc = 0x19BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BD44u);
        ctx->pc = 0x19BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD3Cu;
        // 0x19bd40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD3Cu, 0x19BD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BD44u;
label_19bd44:
    // 0x19bd44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_19bd48:
    if (ctx->pc == 0x19BD48u) {
        ctx->pc = 0x19BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD44u;
        // 0x19bd48: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD4Cu;
        goto label_19bd4c;
    }
    ctx->pc = 0x19BD44u;
    {
        const bool branch_taken_0x19bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd44) {
            ctx->pc = 0x19BD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BD44u;
            // 0x19bd48: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD64u;
            goto label_19bd64;
        }
    }
    ctx->pc = 0x19BD4Cu;
label_19bd4c:
    // 0x19bd4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bd50:
    // 0x19bd50: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x19bd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_19bd54:
    // 0x19bd54: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x19bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_19bd58:
    // 0x19bd58: 0x60f809  jalr        $v1
label_19bd5c:
    if (ctx->pc == 0x19BD5Cu) {
        ctx->pc = 0x19BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD58u;
        // 0x19bd5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD60u;
        goto label_19bd60;
    }
    ctx->pc = 0x19BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19BD60u);
        ctx->pc = 0x19BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD58u;
        // 0x19bd5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD58u, 0x19BD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BD60u;
label_19bd60:
    // 0x19bd60: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19bd64:
    // 0x19bd64: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19bd68:
    // 0x19bd68: 0x1622ffef  bne         $s1, $v0, . + 4 + (-0x11 << 2)
label_19bd6c:
    if (ctx->pc == 0x19BD6Cu) {
        ctx->pc = 0x19BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD68u;
        // 0x19bd6c: 0x8e622c44  lw          $v0, 0x2C44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD70u;
        goto label_19bd70;
    }
    ctx->pc = 0x19BD68u;
    {
        const bool branch_taken_0x19bd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD68u;
        // 0x19bd6c: 0x8e622c44  lw          $v0, 0x2C44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd68) {
            ctx->pc = 0x19BD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bd28;
        }
    }
    ctx->pc = 0x19BD70u;
label_19bd70:
    // 0x19bd70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19bd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19bd74:
    // 0x19bd74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19bd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19bd78:
    // 0x19bd78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bd78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19bd7c:
    // 0x19bd7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19bd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19bd80:
    // 0x19bd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bd84:
    // 0x19bd84: 0x3e00008  jr          $ra
label_19bd88:
    if (ctx->pc == 0x19BD88u) {
        ctx->pc = 0x19BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD84u;
        // 0x19bd88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD8Cu;
        goto label_19bd8c;
    }
    ctx->pc = 0x19BD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD84u;
        // 0x19bd88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BD8Cu;
label_19bd8c:
    // 0x19bd8c: 0x0  nop
    ctx->pc = 0x19bd8cu;
    // NOP
    ctx->pc = 0x19bd90u;
}
