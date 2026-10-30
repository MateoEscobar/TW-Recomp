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

// Function: sub_0031CCE0
// Address: 0x31cce0 - 0x31cf80
void sub_0031CCE0_0x31cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CCE0_0x31cce0");
#endif

    switch (ctx->pc) {
        case 0x31cce0u: goto label_31cce0;
        case 0x31cce4u: goto label_31cce4;
        case 0x31cce8u: goto label_31cce8;
        case 0x31ccecu: goto label_31ccec;
        case 0x31ccf0u: goto label_31ccf0;
        case 0x31ccf4u: goto label_31ccf4;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31ccfcu: goto label_31ccfc;
        case 0x31cd00u: goto label_31cd00;
        case 0x31cd04u: goto label_31cd04;
        case 0x31cd08u: goto label_31cd08;
        case 0x31cd0cu: goto label_31cd0c;
        case 0x31cd10u: goto label_31cd10;
        case 0x31cd14u: goto label_31cd14;
        case 0x31cd18u: goto label_31cd18;
        case 0x31cd1cu: goto label_31cd1c;
        case 0x31cd20u: goto label_31cd20;
        case 0x31cd24u: goto label_31cd24;
        case 0x31cd28u: goto label_31cd28;
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd30u: goto label_31cd30;
        case 0x31cd34u: goto label_31cd34;
        case 0x31cd38u: goto label_31cd38;
        case 0x31cd3cu: goto label_31cd3c;
        case 0x31cd40u: goto label_31cd40;
        case 0x31cd44u: goto label_31cd44;
        case 0x31cd48u: goto label_31cd48;
        case 0x31cd4cu: goto label_31cd4c;
        case 0x31cd50u: goto label_31cd50;
        case 0x31cd54u: goto label_31cd54;
        case 0x31cd58u: goto label_31cd58;
        case 0x31cd5cu: goto label_31cd5c;
        case 0x31cd60u: goto label_31cd60;
        case 0x31cd64u: goto label_31cd64;
        case 0x31cd68u: goto label_31cd68;
        case 0x31cd6cu: goto label_31cd6c;
        case 0x31cd70u: goto label_31cd70;
        case 0x31cd74u: goto label_31cd74;
        case 0x31cd78u: goto label_31cd78;
        case 0x31cd7cu: goto label_31cd7c;
        case 0x31cd80u: goto label_31cd80;
        case 0x31cd84u: goto label_31cd84;
        case 0x31cd88u: goto label_31cd88;
        case 0x31cd8cu: goto label_31cd8c;
        case 0x31cd90u: goto label_31cd90;
        case 0x31cd94u: goto label_31cd94;
        case 0x31cd98u: goto label_31cd98;
        case 0x31cd9cu: goto label_31cd9c;
        case 0x31cda0u: goto label_31cda0;
        case 0x31cda4u: goto label_31cda4;
        case 0x31cda8u: goto label_31cda8;
        case 0x31cdacu: goto label_31cdac;
        case 0x31cdb0u: goto label_31cdb0;
        case 0x31cdb4u: goto label_31cdb4;
        case 0x31cdb8u: goto label_31cdb8;
        case 0x31cdbcu: goto label_31cdbc;
        case 0x31cdc0u: goto label_31cdc0;
        case 0x31cdc4u: goto label_31cdc4;
        case 0x31cdc8u: goto label_31cdc8;
        case 0x31cdccu: goto label_31cdcc;
        case 0x31cdd0u: goto label_31cdd0;
        case 0x31cdd4u: goto label_31cdd4;
        case 0x31cdd8u: goto label_31cdd8;
        case 0x31cddcu: goto label_31cddc;
        case 0x31cde0u: goto label_31cde0;
        case 0x31cde4u: goto label_31cde4;
        case 0x31cde8u: goto label_31cde8;
        case 0x31cdecu: goto label_31cdec;
        case 0x31cdf0u: goto label_31cdf0;
        case 0x31cdf4u: goto label_31cdf4;
        case 0x31cdf8u: goto label_31cdf8;
        case 0x31cdfcu: goto label_31cdfc;
        case 0x31ce00u: goto label_31ce00;
        case 0x31ce04u: goto label_31ce04;
        case 0x31ce08u: goto label_31ce08;
        case 0x31ce0cu: goto label_31ce0c;
        case 0x31ce10u: goto label_31ce10;
        case 0x31ce14u: goto label_31ce14;
        case 0x31ce18u: goto label_31ce18;
        case 0x31ce1cu: goto label_31ce1c;
        case 0x31ce20u: goto label_31ce20;
        case 0x31ce24u: goto label_31ce24;
        case 0x31ce28u: goto label_31ce28;
        case 0x31ce2cu: goto label_31ce2c;
        case 0x31ce30u: goto label_31ce30;
        case 0x31ce34u: goto label_31ce34;
        case 0x31ce38u: goto label_31ce38;
        case 0x31ce3cu: goto label_31ce3c;
        case 0x31ce40u: goto label_31ce40;
        case 0x31ce44u: goto label_31ce44;
        case 0x31ce48u: goto label_31ce48;
        case 0x31ce4cu: goto label_31ce4c;
        case 0x31ce50u: goto label_31ce50;
        case 0x31ce54u: goto label_31ce54;
        case 0x31ce58u: goto label_31ce58;
        case 0x31ce5cu: goto label_31ce5c;
        case 0x31ce60u: goto label_31ce60;
        case 0x31ce64u: goto label_31ce64;
        case 0x31ce68u: goto label_31ce68;
        case 0x31ce6cu: goto label_31ce6c;
        case 0x31ce70u: goto label_31ce70;
        case 0x31ce74u: goto label_31ce74;
        case 0x31ce78u: goto label_31ce78;
        case 0x31ce7cu: goto label_31ce7c;
        case 0x31ce80u: goto label_31ce80;
        case 0x31ce84u: goto label_31ce84;
        case 0x31ce88u: goto label_31ce88;
        case 0x31ce8cu: goto label_31ce8c;
        case 0x31ce90u: goto label_31ce90;
        case 0x31ce94u: goto label_31ce94;
        case 0x31ce98u: goto label_31ce98;
        case 0x31ce9cu: goto label_31ce9c;
        case 0x31cea0u: goto label_31cea0;
        case 0x31cea4u: goto label_31cea4;
        case 0x31cea8u: goto label_31cea8;
        case 0x31ceacu: goto label_31ceac;
        case 0x31ceb0u: goto label_31ceb0;
        case 0x31ceb4u: goto label_31ceb4;
        case 0x31ceb8u: goto label_31ceb8;
        case 0x31cebcu: goto label_31cebc;
        case 0x31cec0u: goto label_31cec0;
        case 0x31cec4u: goto label_31cec4;
        case 0x31cec8u: goto label_31cec8;
        case 0x31ceccu: goto label_31cecc;
        case 0x31ced0u: goto label_31ced0;
        case 0x31ced4u: goto label_31ced4;
        case 0x31ced8u: goto label_31ced8;
        case 0x31cedcu: goto label_31cedc;
        case 0x31cee0u: goto label_31cee0;
        case 0x31cee4u: goto label_31cee4;
        case 0x31cee8u: goto label_31cee8;
        case 0x31ceecu: goto label_31ceec;
        case 0x31cef0u: goto label_31cef0;
        case 0x31cef4u: goto label_31cef4;
        case 0x31cef8u: goto label_31cef8;
        case 0x31cefcu: goto label_31cefc;
        case 0x31cf00u: goto label_31cf00;
        case 0x31cf04u: goto label_31cf04;
        case 0x31cf08u: goto label_31cf08;
        case 0x31cf0cu: goto label_31cf0c;
        case 0x31cf10u: goto label_31cf10;
        case 0x31cf14u: goto label_31cf14;
        case 0x31cf18u: goto label_31cf18;
        case 0x31cf1cu: goto label_31cf1c;
        case 0x31cf20u: goto label_31cf20;
        case 0x31cf24u: goto label_31cf24;
        case 0x31cf28u: goto label_31cf28;
        case 0x31cf2cu: goto label_31cf2c;
        case 0x31cf30u: goto label_31cf30;
        case 0x31cf34u: goto label_31cf34;
        case 0x31cf38u: goto label_31cf38;
        case 0x31cf3cu: goto label_31cf3c;
        case 0x31cf40u: goto label_31cf40;
        case 0x31cf44u: goto label_31cf44;
        case 0x31cf48u: goto label_31cf48;
        case 0x31cf4cu: goto label_31cf4c;
        case 0x31cf50u: goto label_31cf50;
        case 0x31cf54u: goto label_31cf54;
        case 0x31cf58u: goto label_31cf58;
        case 0x31cf5cu: goto label_31cf5c;
        case 0x31cf60u: goto label_31cf60;
        case 0x31cf64u: goto label_31cf64;
        case 0x31cf68u: goto label_31cf68;
        case 0x31cf6cu: goto label_31cf6c;
        case 0x31cf70u: goto label_31cf70;
        case 0x31cf74u: goto label_31cf74;
        case 0x31cf78u: goto label_31cf78;
        case 0x31cf7cu: goto label_31cf7c;
        default: break;
    }

    ctx->pc = 0x31cce0u;

label_31cce0:
    // 0x31cce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31cce4:
    // 0x31cce4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31cce8:
    // 0x31cce8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31ccec:
    // 0x31ccec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31ccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ccf0:
    // 0x31ccf0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31ccf4:
    // 0x31ccf4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31ccf8:
    // 0x31ccf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31ccfc:
    // 0x31ccfc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31cd00:
    // 0x31cd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31cd04:
    // 0x31cd04: 0xc05959e  jal         func_165678
label_31cd08:
    if (ctx->pc == 0x31CD08u) {
        ctx->pc = 0x31CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD04u;
        // 0x31cd08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD0Cu;
        goto label_31cd0c;
    }
    ctx->pc = 0x31CD04u;
    SET_GPR_U32(ctx, 31, 0x31CD0Cu);
    ctx->pc = 0x31CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD04u;
    // 0x31cd08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31CD04u, 0x31CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD0Cu;
label_31cd0c:
    // 0x31cd0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31cd0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cd10:
    // 0x31cd10: 0x12800093  beqz        $s4, . + 4 + (0x93 << 2)
label_31cd14:
    if (ctx->pc == 0x31CD14u) {
        ctx->pc = 0x31CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD10u;
        // 0x31cd14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD18u;
        goto label_31cd18;
    }
    ctx->pc = 0x31CD10u;
    {
        const bool branch_taken_0x31cd10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD10u;
        // 0x31cd14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd10) {
            ctx->pc = 0x31CF60u;
            goto label_31cf60;
        }
    }
    ctx->pc = 0x31CD18u;
label_31cd18:
    // 0x31cd18: 0xc087502  jal         func_21D408
label_31cd1c:
    if (ctx->pc == 0x31CD1Cu) {
        ctx->pc = 0x31CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD18u;
        // 0x31cd1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD20u;
        goto label_31cd20;
    }
    ctx->pc = 0x31CD18u;
    SET_GPR_U32(ctx, 31, 0x31CD20u);
    ctx->pc = 0x31CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD18u;
    // 0x31cd1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31CD18u, 0x31CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD20u;
label_31cd20:
    // 0x31cd20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31cd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cd24:
    // 0x31cd24: 0xc0a3630  jal         func_28D8C0
label_31cd28:
    if (ctx->pc == 0x31CD28u) {
        ctx->pc = 0x31CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD24u;
        // 0x31cd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD2Cu;
        goto label_31cd2c;
    }
    ctx->pc = 0x31CD24u;
    SET_GPR_U32(ctx, 31, 0x31CD2Cu);
    ctx->pc = 0x31CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD24u;
    // 0x31cd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31CD24u, 0x31CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD2Cu;
label_31cd2c:
    // 0x31cd2c: 0xc0a3628  jal         func_28D8A0
label_31cd30:
    if (ctx->pc == 0x31CD30u) {
        ctx->pc = 0x31CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD2Cu;
        // 0x31cd30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD34u;
        goto label_31cd34;
    }
    ctx->pc = 0x31CD2Cu;
    SET_GPR_U32(ctx, 31, 0x31CD34u);
    ctx->pc = 0x31CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD2Cu;
    // 0x31cd30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31CD2Cu, 0x31CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD34u;
label_31cd34:
    // 0x31cd34: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x31cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31cd38:
    // 0x31cd38: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
label_31cd3c:
    if (ctx->pc == 0x31CD3Cu) {
        ctx->pc = 0x31CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD38u;
        // 0x31cd3c: 0x86840092  lh          $a0, 0x92($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD40u;
        goto label_31cd40;
    }
    ctx->pc = 0x31CD38u;
    {
        const bool branch_taken_0x31cd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd38) {
            ctx->pc = 0x31CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CD38u;
            // 0x31cd3c: 0x86840092  lh          $a0, 0x92($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CD9Cu;
            goto label_31cd9c;
        }
    }
    ctx->pc = 0x31CD40u;
label_31cd40:
    // 0x31cd40: 0xc0a4e54  jal         func_293950
label_31cd44:
    if (ctx->pc == 0x31CD44u) {
        ctx->pc = 0x31CD48u;
        goto label_31cd48;
    }
    ctx->pc = 0x31CD40u;
    SET_GPR_U32(ctx, 31, 0x31CD48u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31CD40u, 0x31CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD48u;
label_31cd48:
    // 0x31cd48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31cd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cd4c:
    // 0x31cd4c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_31cd50:
    if (ctx->pc == 0x31CD50u) {
        ctx->pc = 0x31CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD4Cu;
        // 0x31cd50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD54u;
        goto label_31cd54;
    }
    ctx->pc = 0x31CD4Cu;
    {
        const bool branch_taken_0x31cd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD4Cu;
        // 0x31cd50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd4c) {
            ctx->pc = 0x31CD88u;
            goto label_31cd88;
        }
    }
    ctx->pc = 0x31CD54u;
label_31cd54:
    // 0x31cd54: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x31cd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_31cd58:
    // 0x31cd58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31cd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cd5c:
    // 0x31cd5c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x31cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31cd60:
    // 0x31cd60: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x31cd60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_31cd64:
    // 0x31cd64: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x31cd64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_31cd68:
    // 0x31cd68: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x31cd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31cd6c:
    // 0x31cd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31cd70:
    // 0x31cd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31cd74:
    // 0x31cd74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31cd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31cd78:
    // 0x31cd78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31cd7c:
    // 0x31cd7c: 0x862a003c  lh          $t2, 0x3C($s1)
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_31cd80:
    // 0x31cd80: 0xc0b81d2  jal         func_2E0748
label_31cd84:
    if (ctx->pc == 0x31CD84u) {
        ctx->pc = 0x31CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD80u;
        // 0x31cd84: 0x8e2b0030  lw          $t3, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD88u;
        goto label_31cd88;
    }
    ctx->pc = 0x31CD80u;
    SET_GPR_U32(ctx, 31, 0x31CD88u);
    ctx->pc = 0x31CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD80u;
    // 0x31cd84: 0x8e2b0030  lw          $t3, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x31CD80u, 0x31CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD88u;
label_31cd88:
    // 0x31cd88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31cd8c:
    // 0x31cd8c: 0xc0a35d6  jal         func_28D758
label_31cd90:
    if (ctx->pc == 0x31CD90u) {
        ctx->pc = 0x31CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD8Cu;
        // 0x31cd90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD94u;
        goto label_31cd94;
    }
    ctx->pc = 0x31CD8Cu;
    SET_GPR_U32(ctx, 31, 0x31CD94u);
    ctx->pc = 0x31CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD8Cu;
    // 0x31cd90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31CD8Cu, 0x31CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD94u;
label_31cd94:
    // 0x31cd94: 0x10000019  b           . + 4 + (0x19 << 2)
label_31cd98:
    if (ctx->pc == 0x31CD98u) {
        ctx->pc = 0x31CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD94u;
        // 0x31cd98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CD9Cu;
        goto label_31cd9c;
    }
    ctx->pc = 0x31CD94u;
    {
        const bool branch_taken_0x31cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD94u;
        // 0x31cd98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd94) {
            ctx->pc = 0x31CDFCu;
            goto label_31cdfc;
        }
    }
    ctx->pc = 0x31CD9Cu;
label_31cd9c:
    // 0x31cd9c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31cda0:
    // 0x31cda0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31cda4:
    // 0x31cda4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31cda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31cda8:
    // 0x31cda8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31cdac:
    // 0x31cdac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31cdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cdb0:
    // 0x31cdb0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31cdb4:
    // 0x31cdb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31cdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cdb8:
    // 0x31cdb8: 0xc0ab6b0  jal         func_2ADAC0
label_31cdbc:
    if (ctx->pc == 0x31CDBCu) {
        ctx->pc = 0x31CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDB8u;
        // 0x31cdbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDC0u;
        goto label_31cdc0;
    }
    ctx->pc = 0x31CDB8u;
    SET_GPR_U32(ctx, 31, 0x31CDC0u);
    ctx->pc = 0x31CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDB8u;
    // 0x31cdbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x31CDB8u, 0x31CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDC0u;
label_31cdc0:
    // 0x31cdc0: 0xc0a4e54  jal         func_293950
label_31cdc4:
    if (ctx->pc == 0x31CDC4u) {
        ctx->pc = 0x31CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDC0u;
        // 0x31cdc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDC8u;
        goto label_31cdc8;
    }
    ctx->pc = 0x31CDC0u;
    SET_GPR_U32(ctx, 31, 0x31CDC8u);
    ctx->pc = 0x31CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDC0u;
    // 0x31cdc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31CDC0u, 0x31CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDC8u;
label_31cdc8:
    // 0x31cdc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31cdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cdcc:
    // 0x31cdcc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_31cdd0:
    if (ctx->pc == 0x31CDD0u) {
        ctx->pc = 0x31CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDCCu;
        // 0x31cdd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDD4u;
        goto label_31cdd4;
    }
    ctx->pc = 0x31CDCCu;
    {
        const bool branch_taken_0x31cdcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDCCu;
        // 0x31cdd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdcc) {
            ctx->pc = 0x31CDECu;
            goto label_31cdec;
        }
    }
    ctx->pc = 0x31CDD4u;
label_31cdd4:
    // 0x31cdd4: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x31cdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31cdd8:
    // 0x31cdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31cddc:
    // 0x31cddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31cddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31cde0:
    // 0x31cde0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31cde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cde4:
    // 0x31cde4: 0xc0a9e90  jal         func_2A7A40
label_31cde8:
    if (ctx->pc == 0x31CDE8u) {
        ctx->pc = 0x31CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDE4u;
        // 0x31cde8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDECu;
        goto label_31cdec;
    }
    ctx->pc = 0x31CDE4u;
    SET_GPR_U32(ctx, 31, 0x31CDECu);
    ctx->pc = 0x31CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDE4u;
    // 0x31cde8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A40u, 0x31CDE4u, 0x31CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDECu;
label_31cdec:
    // 0x31cdec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31cdf0:
    // 0x31cdf0: 0xc0a35d6  jal         func_28D758
label_31cdf4:
    if (ctx->pc == 0x31CDF4u) {
        ctx->pc = 0x31CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDF0u;
        // 0x31cdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CDF8u;
        goto label_31cdf8;
    }
    ctx->pc = 0x31CDF0u;
    SET_GPR_U32(ctx, 31, 0x31CDF8u);
    ctx->pc = 0x31CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDF0u;
    // 0x31cdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31CDF0u, 0x31CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDF8u;
label_31cdf8:
    // 0x31cdf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31cdfc:
    // 0x31cdfc: 0xc08750a  jal         func_21D428
label_31ce00:
    if (ctx->pc == 0x31CE00u) {
        ctx->pc = 0x31CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDFCu;
        // 0x31ce00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE04u;
        goto label_31ce04;
    }
    ctx->pc = 0x31CDFCu;
    SET_GPR_U32(ctx, 31, 0x31CE04u);
    ctx->pc = 0x31CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDFCu;
    // 0x31ce00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31CDFCu, 0x31CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE04u;
label_31ce04:
    // 0x31ce04: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x31ce04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31ce08:
    // 0x31ce08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31ce08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ce0c:
    // 0x31ce0c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x31ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_31ce10:
    // 0x31ce10: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
label_31ce14:
    if (ctx->pc == 0x31CE14u) {
        ctx->pc = 0x31CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE10u;
        // 0x31ce14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE18u;
        goto label_31ce18;
    }
    ctx->pc = 0x31CE10u;
    {
        const bool branch_taken_0x31ce10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x31ce10) {
            ctx->pc = 0x31CE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CE10u;
            // 0x31ce14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CE24u;
            goto label_31ce24;
        }
    }
    ctx->pc = 0x31CE18u;
label_31ce18:
    // 0x31ce18: 0x92420270  lbu         $v0, 0x270($s2)
    ctx->pc = 0x31ce18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 624)));
label_31ce1c:
    // 0x31ce1c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x31ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_31ce20:
    // 0x31ce20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31ce24:
    // 0x31ce24: 0xc059856  jal         func_166158
label_31ce28:
    if (ctx->pc == 0x31CE28u) {
        ctx->pc = 0x31CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE24u;
        // 0x31ce28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE2Cu;
        goto label_31ce2c;
    }
    ctx->pc = 0x31CE24u;
    SET_GPR_U32(ctx, 31, 0x31CE2Cu);
    ctx->pc = 0x31CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE24u;
    // 0x31ce28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31CE24u, 0x31CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE2Cu;
label_31ce2c:
    // 0x31ce2c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x31ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_31ce30:
    // 0x31ce30: 0x14b30011  bne         $a1, $s3, . + 4 + (0x11 << 2)
label_31ce34:
    if (ctx->pc == 0x31CE34u) {
        ctx->pc = 0x31CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE30u;
        // 0x31ce34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE38u;
        goto label_31ce38;
    }
    ctx->pc = 0x31CE30u;
    {
        const bool branch_taken_0x31ce30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 19));
        ctx->pc = 0x31CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE30u;
        // 0x31ce34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce30) {
            ctx->pc = 0x31CE78u;
            goto label_31ce78;
        }
    }
    ctx->pc = 0x31CE38u;
label_31ce38:
    // 0x31ce38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ce3c:
    // 0x31ce3c: 0xc0a576c  jal         func_295DB0
label_31ce40:
    if (ctx->pc == 0x31CE40u) {
        ctx->pc = 0x31CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE3Cu;
        // 0x31ce40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE44u;
        goto label_31ce44;
    }
    ctx->pc = 0x31CE3Cu;
    SET_GPR_U32(ctx, 31, 0x31CE44u);
    ctx->pc = 0x31CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE3Cu;
    // 0x31ce40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31CE3Cu, 0x31CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE44u;
label_31ce44:
    // 0x31ce44: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31ce44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_31ce48:
    // 0x31ce48: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x31ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_31ce4c:
    // 0x31ce4c: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x31ce4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_31ce50:
    // 0x31ce50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ce50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ce54:
    // 0x31ce54: 0xc0a5776  jal         func_295DD8
label_31ce58:
    if (ctx->pc == 0x31CE58u) {
        ctx->pc = 0x31CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE54u;
        // 0x31ce58: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE5Cu;
        goto label_31ce5c;
    }
    ctx->pc = 0x31CE54u;
    SET_GPR_U32(ctx, 31, 0x31CE5Cu);
    ctx->pc = 0x31CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE54u;
    // 0x31ce58: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x31CE54u, 0x31CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE5Cu;
label_31ce5c:
    // 0x31ce5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31ce60:
    // 0x31ce60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ce60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31ce64:
    // 0x31ce64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ce68:
    // 0x31ce68: 0xc0a5922  jal         func_296488
label_31ce6c:
    if (ctx->pc == 0x31CE6Cu) {
        ctx->pc = 0x31CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE68u;
        // 0x31ce6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE70u;
        goto label_31ce70;
    }
    ctx->pc = 0x31CE68u;
    SET_GPR_U32(ctx, 31, 0x31CE70u);
    ctx->pc = 0x31CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE68u;
    // 0x31ce6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x31CE68u, 0x31CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE70u;
label_31ce70:
    // 0x31ce70: 0x10000004  b           . + 4 + (0x4 << 2)
label_31ce74:
    if (ctx->pc == 0x31CE74u) {
        ctx->pc = 0x31CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE70u;
        // 0x31ce74: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE78u;
        goto label_31ce78;
    }
    ctx->pc = 0x31CE70u;
    {
        const bool branch_taken_0x31ce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE70u;
        // 0x31ce74: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce70) {
            ctx->pc = 0x31CE84u;
            goto label_31ce84;
        }
    }
    ctx->pc = 0x31CE78u;
label_31ce78:
    // 0x31ce78: 0xc0a576c  jal         func_295DB0
label_31ce7c:
    if (ctx->pc == 0x31CE7Cu) {
        ctx->pc = 0x31CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE78u;
        // 0x31ce7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE80u;
        goto label_31ce80;
    }
    ctx->pc = 0x31CE78u;
    SET_GPR_U32(ctx, 31, 0x31CE80u);
    ctx->pc = 0x31CE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE78u;
    // 0x31ce7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31CE78u, 0x31CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE80u;
label_31ce80:
    // 0x31ce80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31ce84:
    // 0x31ce84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ce84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ce88:
    // 0x31ce88: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31ce88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31ce8c:
    // 0x31ce8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ce90:
    // 0x31ce90: 0xc137826  jal         func_4DE098
label_31ce94:
    if (ctx->pc == 0x31CE94u) {
        ctx->pc = 0x31CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE90u;
        // 0x31ce94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CE98u;
        goto label_31ce98;
    }
    ctx->pc = 0x31CE90u;
    SET_GPR_U32(ctx, 31, 0x31CE98u);
    ctx->pc = 0x31CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE90u;
    // 0x31ce94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31CE90u, 0x31CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE98u;
label_31ce98:
    // 0x31ce98: 0xc0e409a  jal         func_390268
label_31ce9c:
    if (ctx->pc == 0x31CE9Cu) {
        ctx->pc = 0x31CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE98u;
        // 0x31ce9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEA0u;
        goto label_31cea0;
    }
    ctx->pc = 0x31CE98u;
    SET_GPR_U32(ctx, 31, 0x31CEA0u);
    ctx->pc = 0x31CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE98u;
    // 0x31ce9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31CE98u, 0x31CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEA0u;
label_31cea0:
    // 0x31cea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31cea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cea4:
    // 0x31cea4: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_31cea8:
    if (ctx->pc == 0x31CEA8u) {
        ctx->pc = 0x31CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEA4u;
        // 0x31cea8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEACu;
        goto label_31ceac;
    }
    ctx->pc = 0x31CEA4u;
    {
        const bool branch_taken_0x31cea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cea4) {
            ctx->pc = 0x31CEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CEA4u;
            // 0x31cea8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CF50u;
            goto label_31cf50;
        }
    }
    ctx->pc = 0x31CEACu;
label_31ceac:
    // 0x31ceac: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31ceacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31ceb0:
    // 0x31ceb0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31ceb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31ceb4:
    // 0x31ceb4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31ceb8:
    if (ctx->pc == 0x31CEB8u) {
        ctx->pc = 0x31CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEB4u;
        // 0x31ceb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEBCu;
        goto label_31cebc;
    }
    ctx->pc = 0x31CEB4u;
    {
        const bool branch_taken_0x31ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEB4u;
        // 0x31ceb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ceb4) {
            ctx->pc = 0x31CF4Cu;
            goto label_31cf4c;
        }
    }
    ctx->pc = 0x31CEBCu;
label_31cebc:
    // 0x31cebc: 0x52340024  beql        $s1, $s4, . + 4 + (0x24 << 2)
label_31cec0:
    if (ctx->pc == 0x31CEC0u) {
        ctx->pc = 0x31CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEBCu;
        // 0x31cec0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEC4u;
        goto label_31cec4;
    }
    ctx->pc = 0x31CEBCu;
    {
        const bool branch_taken_0x31cebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x31cebc) {
            ctx->pc = 0x31CEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CEBCu;
            // 0x31cec0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CF50u;
            goto label_31cf50;
        }
    }
    ctx->pc = 0x31CEC4u;
label_31cec4:
    // 0x31cec4: 0xc088edc  jal         func_223B70
label_31cec8:
    if (ctx->pc == 0x31CEC8u) {
        ctx->pc = 0x31CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEC4u;
        // 0x31cec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CECCu;
        goto label_31cecc;
    }
    ctx->pc = 0x31CEC4u;
    SET_GPR_U32(ctx, 31, 0x31CECCu);
    ctx->pc = 0x31CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEC4u;
    // 0x31cec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31CEC4u, 0x31CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CECCu;
label_31cecc:
    // 0x31cecc: 0x50500020  beql        $v0, $s0, . + 4 + (0x20 << 2)
label_31ced0:
    if (ctx->pc == 0x31CED0u) {
        ctx->pc = 0x31CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CECCu;
        // 0x31ced0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CED4u;
        goto label_31ced4;
    }
    ctx->pc = 0x31CECCu;
    {
        const bool branch_taken_0x31cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31cecc) {
            ctx->pc = 0x31CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CECCu;
            // 0x31ced0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CF50u;
            goto label_31cf50;
        }
    }
    ctx->pc = 0x31CED4u;
label_31ced4:
    // 0x31ced4: 0xc089f98  jal         func_227E60
label_31ced8:
    if (ctx->pc == 0x31CED8u) {
        ctx->pc = 0x31CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CED4u;
        // 0x31ced8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEDCu;
        goto label_31cedc;
    }
    ctx->pc = 0x31CED4u;
    SET_GPR_U32(ctx, 31, 0x31CEDCu);
    ctx->pc = 0x31CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CED4u;
    // 0x31ced8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31CED4u, 0x31CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEDCu;
label_31cedc:
    // 0x31cedc: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_31cee0:
    if (ctx->pc == 0x31CEE0u) {
        ctx->pc = 0x31CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEDCu;
        // 0x31cee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEE4u;
        goto label_31cee4;
    }
    ctx->pc = 0x31CEDCu;
    {
        const bool branch_taken_0x31cedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEDCu;
        // 0x31cee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cedc) {
            ctx->pc = 0x31CF4Cu;
            goto label_31cf4c;
        }
    }
    ctx->pc = 0x31CEE4u;
label_31cee4:
    // 0x31cee4: 0xc0a57ca  jal         func_295F28
label_31cee8:
    if (ctx->pc == 0x31CEE8u) {
        ctx->pc = 0x31CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEE4u;
        // 0x31cee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEECu;
        goto label_31ceec;
    }
    ctx->pc = 0x31CEE4u;
    SET_GPR_U32(ctx, 31, 0x31CEECu);
    ctx->pc = 0x31CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEE4u;
    // 0x31cee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x31CEE4u, 0x31CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEECu;
label_31ceec:
    // 0x31ceec: 0xc087502  jal         func_21D408
label_31cef0:
    if (ctx->pc == 0x31CEF0u) {
        ctx->pc = 0x31CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEECu;
        // 0x31cef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEF4u;
        goto label_31cef4;
    }
    ctx->pc = 0x31CEECu;
    SET_GPR_U32(ctx, 31, 0x31CEF4u);
    ctx->pc = 0x31CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEECu;
    // 0x31cef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31CEECu, 0x31CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEF4u;
label_31cef4:
    // 0x31cef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31cef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cef8:
    // 0x31cef8: 0xc0a3630  jal         func_28D8C0
label_31cefc:
    if (ctx->pc == 0x31CEFCu) {
        ctx->pc = 0x31CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEF8u;
        // 0x31cefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF00u;
        goto label_31cf00;
    }
    ctx->pc = 0x31CEF8u;
    SET_GPR_U32(ctx, 31, 0x31CF00u);
    ctx->pc = 0x31CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEF8u;
    // 0x31cefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31CEF8u, 0x31CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF00u;
label_31cf00:
    // 0x31cf00: 0xc0a3628  jal         func_28D8A0
label_31cf04:
    if (ctx->pc == 0x31CF04u) {
        ctx->pc = 0x31CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF00u;
        // 0x31cf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF08u;
        goto label_31cf08;
    }
    ctx->pc = 0x31CF00u;
    SET_GPR_U32(ctx, 31, 0x31CF08u);
    ctx->pc = 0x31CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF00u;
    // 0x31cf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31CF00u, 0x31CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF08u;
label_31cf08:
    // 0x31cf08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31cf0c:
    // 0x31cf0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31cf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31cf10:
    // 0x31cf10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31cf14:
    // 0x31cf14: 0x40f809  jalr        $v0
label_31cf18:
    if (ctx->pc == 0x31CF18u) {
        ctx->pc = 0x31CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF14u;
        // 0x31cf18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF1Cu;
        goto label_31cf1c;
    }
    ctx->pc = 0x31CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CF1Cu);
        ctx->pc = 0x31CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF14u;
        // 0x31cf18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF14u, 0x31CF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CF1Cu;
label_31cf1c:
    // 0x31cf1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x31cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31cf20:
    // 0x31cf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31cf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cf24:
    // 0x31cf24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31cf24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31cf28:
    // 0x31cf28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31cf2c:
    // 0x31cf2c: 0x40f809  jalr        $v0
label_31cf30:
    if (ctx->pc == 0x31CF30u) {
        ctx->pc = 0x31CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF2Cu;
        // 0x31cf30: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF34u;
        goto label_31cf34;
    }
    ctx->pc = 0x31CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CF34u);
        ctx->pc = 0x31CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF2Cu;
        // 0x31cf30: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF2Cu, 0x31CF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CF34u;
label_31cf34:
    // 0x31cf34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31cf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31cf38:
    // 0x31cf38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31cf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31cf3c:
    // 0x31cf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31cf40:
    // 0x31cf40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cf44:
    // 0x31cf44: 0xc0b78b2  jal         func_2DE2C8
label_31cf48:
    if (ctx->pc == 0x31CF48u) {
        ctx->pc = 0x31CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF44u;
        // 0x31cf48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF4Cu;
        goto label_31cf4c;
    }
    ctx->pc = 0x31CF44u;
    SET_GPR_U32(ctx, 31, 0x31CF4Cu);
    ctx->pc = 0x31CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF44u;
    // 0x31cf48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x31CF44u, 0x31CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF4Cu;
label_31cf4c:
    // 0x31cf4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31cf4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31cf50:
    // 0x31cf50: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31cf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31cf54:
    // 0x31cf54: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_31cf58:
    if (ctx->pc == 0x31CF58u) {
        ctx->pc = 0x31CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF54u;
        // 0x31cf58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF5Cu;
        goto label_31cf5c;
    }
    ctx->pc = 0x31CF54u;
    {
        const bool branch_taken_0x31cf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF54u;
        // 0x31cf58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf54) {
            ctx->pc = 0x31CE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ce90;
        }
    }
    ctx->pc = 0x31CF5Cu;
label_31cf5c:
    // 0x31cf5c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31cf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31cf60:
    // 0x31cf60: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31cf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31cf64:
    // 0x31cf64: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31cf64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31cf68:
    // 0x31cf68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cf68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31cf6c:
    // 0x31cf6c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31cf6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31cf70:
    // 0x31cf70: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31cf70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31cf74:
    // 0x31cf74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31cf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31cf78:
    // 0x31cf78: 0x3e00008  jr          $ra
label_31cf7c:
    if (ctx->pc == 0x31CF7Cu) {
        ctx->pc = 0x31CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF78u;
        // 0x31cf7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF80u;
        goto label_fallthrough_0x31cf78;
    }
    ctx->pc = 0x31CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF78u;
        // 0x31cf7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31cf78:
    ctx->pc = 0x31CF80u;
}
