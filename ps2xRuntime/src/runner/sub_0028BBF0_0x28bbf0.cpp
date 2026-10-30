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

// Function: sub_0028BBF0
// Address: 0x28bbf0 - 0x28bec8
void sub_0028BBF0_0x28bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BBF0_0x28bbf0");
#endif

    switch (ctx->pc) {
        case 0x28bbf0u: goto label_28bbf0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bbf8u: goto label_28bbf8;
        case 0x28bbfcu: goto label_28bbfc;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc08u: goto label_28bc08;
        case 0x28bc0cu: goto label_28bc0c;
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc14u: goto label_28bc14;
        case 0x28bc18u: goto label_28bc18;
        case 0x28bc1cu: goto label_28bc1c;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc24u: goto label_28bc24;
        case 0x28bc28u: goto label_28bc28;
        case 0x28bc2cu: goto label_28bc2c;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc34u: goto label_28bc34;
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc3cu: goto label_28bc3c;
        case 0x28bc40u: goto label_28bc40;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc48u: goto label_28bc48;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc54u: goto label_28bc54;
        case 0x28bc58u: goto label_28bc58;
        case 0x28bc5cu: goto label_28bc5c;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc64u: goto label_28bc64;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc70u: goto label_28bc70;
        case 0x28bc74u: goto label_28bc74;
        case 0x28bc78u: goto label_28bc78;
        case 0x28bc7cu: goto label_28bc7c;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc84u: goto label_28bc84;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc8cu: goto label_28bc8c;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bc94u: goto label_28bc94;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bc9cu: goto label_28bc9c;
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        default: break;
    }

    ctx->pc = 0x28bbf0u;

label_28bbf0:
    // 0x28bbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28bbf4:
    // 0x28bbf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28bbf8:
    // 0x28bbf8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28bbfc:
    // 0x28bbfc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28bc00:
    // 0x28bc00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28bc04:
    // 0x28bc04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28bc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28bc08:
    // 0x28bc08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28bc0c:
    // 0x28bc0c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_28bc10:
    // 0x28bc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28bc14:
    // 0x28bc14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28bc18:
    if (ctx->pc == 0x28BC18u) {
        ctx->pc = 0x28BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC14u;
        // 0x28bc18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC1Cu;
        goto label_28bc1c;
    }
    ctx->pc = 0x28BC14u;
    {
        const bool branch_taken_0x28bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc14) {
            ctx->pc = 0x28BC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BC14u;
            // 0x28bc18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BC1Cu;
            goto label_28bc1c;
        }
    }
    ctx->pc = 0x28BC1Cu;
label_28bc1c:
    // 0x28bc1c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_28bc20:
    // 0x28bc20: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28bc20u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_28bc24:
    // 0x28bc24: 0x1810  mfhi        $v1
    ctx->pc = 0x28bc24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28bc28:
    // 0x28bc28: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_28bc2c:
    if (ctx->pc == 0x28BC2Cu) {
        ctx->pc = 0x28BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC28u;
        // 0x28bc2c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC30u;
        goto label_28bc30;
    }
    ctx->pc = 0x28BC28u;
    {
        const bool branch_taken_0x28bc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC28u;
        // 0x28bc2c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc28) {
            ctx->pc = 0x28BEA8u;
            goto label_28bea8;
        }
    }
    ctx->pc = 0x28BC30u;
label_28bc30:
    // 0x28bc30: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x28bc30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28bc34:
    // 0x28bc34: 0xc089f98  jal         func_227E60
label_28bc38:
    if (ctx->pc == 0x28BC38u) {
        ctx->pc = 0x28BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC34u;
        // 0x28bc38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC3Cu;
        goto label_28bc3c;
    }
    ctx->pc = 0x28BC34u;
    SET_GPR_U32(ctx, 31, 0x28BC3Cu);
    ctx->pc = 0x28BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC34u;
    // 0x28bc38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x28BC34u, 0x28BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC3Cu;
label_28bc3c:
    // 0x28bc3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28bc40:
    if (ctx->pc == 0x28BC40u) {
        ctx->pc = 0x28BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC3Cu;
        // 0x28bc40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC44u;
        goto label_28bc44;
    }
    ctx->pc = 0x28BC3Cu;
    {
        const bool branch_taken_0x28bc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC3Cu;
        // 0x28bc40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc3c) {
            ctx->pc = 0x28BC64u;
            goto label_28bc64;
        }
    }
    ctx->pc = 0x28BC44u;
label_28bc44:
    // 0x28bc44: 0xc088edc  jal         func_223B70
label_28bc48:
    if (ctx->pc == 0x28BC48u) {
        ctx->pc = 0x28BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC44u;
        // 0x28bc48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC4Cu;
        goto label_28bc4c;
    }
    ctx->pc = 0x28BC44u;
    SET_GPR_U32(ctx, 31, 0x28BC4Cu);
    ctx->pc = 0x28BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC44u;
    // 0x28bc48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x28BC44u, 0x28BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC4Cu;
label_28bc4c:
    // 0x28bc4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_28bc50:
    if (ctx->pc == 0x28BC50u) {
        ctx->pc = 0x28BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC4Cu;
        // 0x28bc50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC54u;
        goto label_28bc54;
    }
    ctx->pc = 0x28BC4Cu;
    {
        const bool branch_taken_0x28bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC4Cu;
        // 0x28bc50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc4c) {
            ctx->pc = 0x28BC64u;
            goto label_28bc64;
        }
    }
    ctx->pc = 0x28BC54u;
label_28bc54:
    // 0x28bc54: 0xc089fee  jal         func_227FB8
label_28bc58:
    if (ctx->pc == 0x28BC58u) {
        ctx->pc = 0x28BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC54u;
        // 0x28bc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC5Cu;
        goto label_28bc5c;
    }
    ctx->pc = 0x28BC54u;
    SET_GPR_U32(ctx, 31, 0x28BC5Cu);
    ctx->pc = 0x28BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC54u;
    // 0x28bc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x28BC54u, 0x28BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC5Cu;
label_28bc5c:
    // 0x28bc5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28bc60:
    if (ctx->pc == 0x28BC60u) {
        ctx->pc = 0x28BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC5Cu;
        // 0x28bc60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC64u;
        goto label_28bc64;
    }
    ctx->pc = 0x28BC5Cu;
    {
        const bool branch_taken_0x28bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC5Cu;
        // 0x28bc60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc5c) {
            ctx->pc = 0x28BC74u;
            goto label_28bc74;
        }
    }
    ctx->pc = 0x28BC64u;
label_28bc64:
    // 0x28bc64: 0xc088d68  jal         func_2235A0
label_28bc68:
    if (ctx->pc == 0x28BC68u) {
        ctx->pc = 0x28BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC64u;
        // 0x28bc68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC6Cu;
        goto label_28bc6c;
    }
    ctx->pc = 0x28BC64u;
    SET_GPR_U32(ctx, 31, 0x28BC6Cu);
    ctx->pc = 0x28BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC64u;
    // 0x28bc68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x28BC64u, 0x28BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC6Cu;
label_28bc6c:
    // 0x28bc6c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_28bc70:
    if (ctx->pc == 0x28BC70u) {
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC6Cu;
        // 0x28bc70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC74u;
        goto label_28bc74;
    }
    ctx->pc = 0x28BC6Cu;
    {
        const bool branch_taken_0x28bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC6Cu;
        // 0x28bc70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc6c) {
            ctx->pc = 0x28BEA8u;
            goto label_28bea8;
        }
    }
    ctx->pc = 0x28BC74u;
label_28bc74:
    // 0x28bc74: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_28bc78:
    // 0x28bc78: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x28bc78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28bc7c:
    // 0x28bc7c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x28bc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28bc80:
    // 0x28bc80: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_28bc84:
    if (ctx->pc == 0x28BC84u) {
        ctx->pc = 0x28BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC80u;
        // 0x28bc84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC88u;
        goto label_28bc88;
    }
    ctx->pc = 0x28BC80u;
    {
        const bool branch_taken_0x28bc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC80u;
        // 0x28bc84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc80) {
            ctx->pc = 0x28BD68u;
            goto label_28bd68;
        }
    }
    ctx->pc = 0x28BC88u;
label_28bc88:
    // 0x28bc88: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28bc8c:
    // 0x28bc8c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x28bc8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_28bc90:
    // 0x28bc90: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x28bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_28bc94:
    // 0x28bc94: 0x40f809  jalr        $v0
label_28bc98:
    if (ctx->pc == 0x28BC98u) {
        ctx->pc = 0x28BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC94u;
        // 0x28bc98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC9Cu;
        goto label_28bc9c;
    }
    ctx->pc = 0x28BC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BC9Cu);
        ctx->pc = 0x28BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC94u;
        // 0x28bc98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BC94u, 0x28BC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BC9Cu;
label_28bc9c:
    // 0x28bc9c: 0x5052002d  beql        $v0, $s2, . + 4 + (0x2D << 2)
label_28bca0:
    if (ctx->pc == 0x28BCA0u) {
        ctx->pc = 0x28BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC9Cu;
        // 0x28bca0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCA4u;
        goto label_28bca4;
    }
    ctx->pc = 0x28BC9Cu;
    {
        const bool branch_taken_0x28bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x28bc9c) {
            ctx->pc = 0x28BCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BC9Cu;
            // 0x28bca0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BD54u;
            goto label_28bd54;
        }
    }
    ctx->pc = 0x28BCA4u;
label_28bca4:
    // 0x28bca4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28bca8:
    // 0x28bca8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28bcac:
    // 0x28bcac: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_28bcb0:
    // 0x28bcb0: 0x40f809  jalr        $v0
label_28bcb4:
    if (ctx->pc == 0x28BCB4u) {
        ctx->pc = 0x28BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCB0u;
        // 0x28bcb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCB8u;
        goto label_28bcb8;
    }
    ctx->pc = 0x28BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BCB8u);
        ctx->pc = 0x28BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCB0u;
        // 0x28bcb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BCB0u, 0x28BCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BCB8u;
label_28bcb8:
    // 0x28bcb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28bcb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bcbc:
    // 0x28bcbc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_28bcc0:
    // 0x28bcc0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28bcc4:
    if (ctx->pc == 0x28BCC4u) {
        ctx->pc = 0x28BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC0u;
        // 0x28bcc4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCC8u;
        goto label_28bcc8;
    }
    ctx->pc = 0x28BCC0u;
    {
        const bool branch_taken_0x28bcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC0u;
        // 0x28bcc4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcc0) {
            ctx->pc = 0x28BCD8u;
            goto label_28bcd8;
        }
    }
    ctx->pc = 0x28BCC8u;
label_28bcc8:
    // 0x28bcc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28bccc:
    if (ctx->pc == 0x28BCCCu) {
        ctx->pc = 0x28BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC8u;
        // 0x28bccc: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCD0u;
        goto label_28bcd0;
    }
    ctx->pc = 0x28BCC8u;
    {
        const bool branch_taken_0x28bcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC8u;
        // 0x28bccc: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcc8) {
            ctx->pc = 0x28BCD8u;
            goto label_28bcd8;
        }
    }
    ctx->pc = 0x28BCD0u;
label_28bcd0:
    // 0x28bcd0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_28bcd4:
    if (ctx->pc == 0x28BCD4u) {
        ctx->pc = 0x28BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD0u;
        // 0x28bcd4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCD8u;
        goto label_28bcd8;
    }
    ctx->pc = 0x28BCD0u;
    {
        const bool branch_taken_0x28bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD0u;
        // 0x28bcd4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd0) {
            ctx->pc = 0x28BCF0u;
            goto label_28bcf0;
        }
    }
    ctx->pc = 0x28BCD8u;
label_28bcd8:
    // 0x28bcd8: 0xc0874fa  jal         func_21D3E8
label_28bcdc:
    if (ctx->pc == 0x28BCDCu) {
        ctx->pc = 0x28BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD8u;
        // 0x28bcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCE0u;
        goto label_28bce0;
    }
    ctx->pc = 0x28BCD8u;
    SET_GPR_U32(ctx, 31, 0x28BCE0u);
    ctx->pc = 0x28BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCD8u;
    // 0x28bcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28BCD8u, 0x28BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCE0u;
label_28bce0:
    // 0x28bce0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28bce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_28bce4:
    // 0x28bce4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28bce8:
    // 0x28bce8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28bcec:
    if (ctx->pc == 0x28BCECu) {
        ctx->pc = 0x28BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCE8u;
        // 0x28bcec: 0x43a00a  movz        $s4, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCF0u;
        goto label_28bcf0;
    }
    ctx->pc = 0x28BCE8u;
    {
        const bool branch_taken_0x28bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCE8u;
        // 0x28bcec: 0x43a00a  movz        $s4, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bce8) {
            ctx->pc = 0x28BD54u;
            goto label_28bd54;
        }
    }
    ctx->pc = 0x28BCF0u;
label_28bcf0:
    // 0x28bcf0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28bcf4:
    if (ctx->pc == 0x28BCF4u) {
        ctx->pc = 0x28BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCF0u;
        // 0x28bcf4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCF8u;
        goto label_28bcf8;
    }
    ctx->pc = 0x28BCF0u;
    {
        const bool branch_taken_0x28bcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCF0u;
        // 0x28bcf4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcf0) {
            ctx->pc = 0x28BD08u;
            goto label_28bd08;
        }
    }
    ctx->pc = 0x28BCF8u;
label_28bcf8:
    // 0x28bcf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28bcfc:
    if (ctx->pc == 0x28BCFCu) {
        ctx->pc = 0x28BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCF8u;
        // 0x28bcfc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD00u;
        goto label_28bd00;
    }
    ctx->pc = 0x28BCF8u;
    {
        const bool branch_taken_0x28bcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCF8u;
        // 0x28bcfc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcf8) {
            ctx->pc = 0x28BD08u;
            goto label_28bd08;
        }
    }
    ctx->pc = 0x28BD00u;
label_28bd00:
    // 0x28bd00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28bd04:
    if (ctx->pc == 0x28BD04u) {
        ctx->pc = 0x28BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD00u;
        // 0x28bd04: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD08u;
        goto label_28bd08;
    }
    ctx->pc = 0x28BD00u;
    {
        const bool branch_taken_0x28bd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD00u;
        // 0x28bd04: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd00) {
            ctx->pc = 0x28BD10u;
            goto label_28bd10;
        }
    }
    ctx->pc = 0x28BD08u;
label_28bd08:
    // 0x28bd08: 0x10000012  b           . + 4 + (0x12 << 2)
label_28bd0c:
    if (ctx->pc == 0x28BD0Cu) {
        ctx->pc = 0x28BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD08u;
        // 0x28bd0c: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD10u;
        goto label_28bd10;
    }
    ctx->pc = 0x28BD08u;
    {
        const bool branch_taken_0x28bd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD08u;
        // 0x28bd0c: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd08) {
            ctx->pc = 0x28BD54u;
            goto label_28bd54;
        }
    }
    ctx->pc = 0x28BD10u;
label_28bd10:
    // 0x28bd10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28bd14:
    // 0x28bd14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_28bd18:
    if (ctx->pc == 0x28BD18u) {
        ctx->pc = 0x28BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD14u;
        // 0x28bd18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD1Cu;
        goto label_28bd1c;
    }
    ctx->pc = 0x28BD14u;
    {
        const bool branch_taken_0x28bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bd14) {
            ctx->pc = 0x28BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BD14u;
            // 0x28bd18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BD54u;
            goto label_28bd54;
        }
    }
    ctx->pc = 0x28BD1Cu;
label_28bd1c:
    // 0x28bd1c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x28bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_28bd20:
    // 0x28bd20: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28bd24:
    if (ctx->pc == 0x28BD24u) {
        ctx->pc = 0x28BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD20u;
        // 0x28bd24: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD28u;
        goto label_28bd28;
    }
    ctx->pc = 0x28BD20u;
    {
        const bool branch_taken_0x28bd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD20u;
        // 0x28bd24: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd20) {
            ctx->pc = 0x28BD50u;
            goto label_28bd50;
        }
    }
    ctx->pc = 0x28BD28u;
label_28bd28:
    // 0x28bd28: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_28bd2c:
    if (ctx->pc == 0x28BD2Cu) {
        ctx->pc = 0x28BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD28u;
        // 0x28bd2c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD30u;
        goto label_28bd30;
    }
    ctx->pc = 0x28BD28u;
    {
        const bool branch_taken_0x28bd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD28u;
        // 0x28bd2c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd28) {
            ctx->pc = 0x28BD50u;
            goto label_28bd50;
        }
    }
    ctx->pc = 0x28BD30u;
label_28bd30:
    // 0x28bd30: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28bd34:
    if (ctx->pc == 0x28BD34u) {
        ctx->pc = 0x28BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD30u;
        // 0x28bd34: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD38u;
        goto label_28bd38;
    }
    ctx->pc = 0x28BD30u;
    {
        const bool branch_taken_0x28bd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD30u;
        // 0x28bd34: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd30) {
            ctx->pc = 0x28BD50u;
            goto label_28bd50;
        }
    }
    ctx->pc = 0x28BD38u;
label_28bd38:
    // 0x28bd38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28bd3c:
    if (ctx->pc == 0x28BD3Cu) {
        ctx->pc = 0x28BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD38u;
        // 0x28bd3c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD40u;
        goto label_28bd40;
    }
    ctx->pc = 0x28BD38u;
    {
        const bool branch_taken_0x28bd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD38u;
        // 0x28bd3c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd38) {
            ctx->pc = 0x28BD50u;
            goto label_28bd50;
        }
    }
    ctx->pc = 0x28BD40u;
label_28bd40:
    // 0x28bd40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28bd44:
    if (ctx->pc == 0x28BD44u) {
        ctx->pc = 0x28BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD40u;
        // 0x28bd44: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD48u;
        goto label_28bd48;
    }
    ctx->pc = 0x28BD40u;
    {
        const bool branch_taken_0x28bd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD40u;
        // 0x28bd44: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd40) {
            ctx->pc = 0x28BD50u;
            goto label_28bd50;
        }
    }
    ctx->pc = 0x28BD48u;
label_28bd48:
    // 0x28bd48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28bd4c:
    if (ctx->pc == 0x28BD4Cu) {
        ctx->pc = 0x28BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD48u;
        // 0x28bd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD50u;
        goto label_28bd50;
    }
    ctx->pc = 0x28BD48u;
    {
        const bool branch_taken_0x28bd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD48u;
        // 0x28bd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd48) {
            ctx->pc = 0x28BD58u;
            goto label_28bd58;
        }
    }
    ctx->pc = 0x28BD50u;
label_28bd50:
    // 0x28bd50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28bd50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd54:
    // 0x28bd54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28bd58:
    // 0x28bd58: 0xc088d68  jal         func_2235A0
label_28bd5c:
    if (ctx->pc == 0x28BD5Cu) {
        ctx->pc = 0x28BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD58u;
        // 0x28bd5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD60u;
        goto label_28bd60;
    }
    ctx->pc = 0x28BD58u;
    SET_GPR_U32(ctx, 31, 0x28BD60u);
    ctx->pc = 0x28BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD58u;
    // 0x28bd5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x28BD58u, 0x28BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD60u;
label_28bd60:
    // 0x28bd60: 0x10000051  b           . + 4 + (0x51 << 2)
label_28bd64:
    if (ctx->pc == 0x28BD64u) {
        ctx->pc = 0x28BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD60u;
        // 0x28bd64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD68u;
        goto label_28bd68;
    }
    ctx->pc = 0x28BD60u;
    {
        const bool branch_taken_0x28bd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD60u;
        // 0x28bd64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd60) {
            ctx->pc = 0x28BEA8u;
            goto label_28bea8;
        }
    }
    ctx->pc = 0x28BD68u;
label_28bd68:
    // 0x28bd68: 0xc0a40d2  jal         func_290348
label_28bd6c:
    if (ctx->pc == 0x28BD6Cu) {
        ctx->pc = 0x28BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD68u;
        // 0x28bd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD70u;
        goto label_28bd70;
    }
    ctx->pc = 0x28BD68u;
    SET_GPR_U32(ctx, 31, 0x28BD70u);
    ctx->pc = 0x28BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD68u;
    // 0x28bd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x28BD68u, 0x28BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD70u;
label_28bd70:
    // 0x28bd70: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
label_28bd74:
    if (ctx->pc == 0x28BD74u) {
        ctx->pc = 0x28BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD70u;
        // 0x28bd74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD78u;
        goto label_28bd78;
    }
    ctx->pc = 0x28BD70u;
    {
        const bool branch_taken_0x28bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x28bd70) {
            ctx->pc = 0x28BD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BD70u;
            // 0x28bd74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BD8Cu;
            goto label_28bd8c;
        }
    }
    ctx->pc = 0x28BD78u;
label_28bd78:
    // 0x28bd78: 0xc0a40ec  jal         func_2903B0
label_28bd7c:
    if (ctx->pc == 0x28BD7Cu) {
        ctx->pc = 0x28BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD78u;
        // 0x28bd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD80u;
        goto label_28bd80;
    }
    ctx->pc = 0x28BD78u;
    SET_GPR_U32(ctx, 31, 0x28BD80u);
    ctx->pc = 0x28BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD78u;
    // 0x28bd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x28BD78u, 0x28BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD80u;
label_28bd80:
    // 0x28bd80: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
label_28bd84:
    if (ctx->pc == 0x28BD84u) {
        ctx->pc = 0x28BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD80u;
        // 0x28bd84: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD88u;
        goto label_28bd88;
    }
    ctx->pc = 0x28BD80u;
    {
        const bool branch_taken_0x28bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x28bd80) {
            ctx->pc = 0x28BD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BD80u;
            // 0x28bd84: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BD90u;
            goto label_28bd90;
        }
    }
    ctx->pc = 0x28BD88u;
label_28bd88:
    // 0x28bd88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28bd88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd8c:
    // 0x28bd8c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28bd8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28bd90:
    // 0x28bd90: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28bd94:
    if (ctx->pc == 0x28BD94u) {
        ctx->pc = 0x28BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD90u;
        // 0x28bd94: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD98u;
        goto label_28bd98;
    }
    ctx->pc = 0x28BD90u;
    {
        const bool branch_taken_0x28bd90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD90u;
        // 0x28bd94: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd90) {
            ctx->pc = 0x28BDA4u;
            goto label_28bda4;
        }
    }
    ctx->pc = 0x28BD98u;
label_28bd98:
    // 0x28bd98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28bd9c:
    // 0x28bd9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28bda0:
    if (ctx->pc == 0x28BDA0u) {
        ctx->pc = 0x28BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD9Cu;
        // 0x28bda0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDA4u;
        goto label_28bda4;
    }
    ctx->pc = 0x28BD9Cu;
    {
        const bool branch_taken_0x28bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD9Cu;
        // 0x28bda0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd9c) {
            ctx->pc = 0x28BDA8u;
            goto label_28bda8;
        }
    }
    ctx->pc = 0x28BDA4u;
label_28bda4:
    // 0x28bda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bda8:
    // 0x28bda8: 0x50a0003c  beql        $a1, $zero, . + 4 + (0x3C << 2)
label_28bdac:
    if (ctx->pc == 0x28BDACu) {
        ctx->pc = 0x28BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA8u;
        // 0x28bdac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDB0u;
        goto label_28bdb0;
    }
    ctx->pc = 0x28BDA8u;
    {
        const bool branch_taken_0x28bda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bda8) {
            ctx->pc = 0x28BDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BDA8u;
            // 0x28bdac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE9Cu;
            goto label_28be9c;
        }
    }
    ctx->pc = 0x28BDB0u;
label_28bdb0:
    // 0x28bdb0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28bdb4:
    // 0x28bdb4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28bdb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28bdb8:
    // 0x28bdb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28bdbc:
    // 0x28bdbc: 0x40f809  jalr        $v0
label_28bdc0:
    if (ctx->pc == 0x28BDC0u) {
        ctx->pc = 0x28BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDBCu;
        // 0x28bdc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDC4u;
        goto label_28bdc4;
    }
    ctx->pc = 0x28BDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BDC4u);
        ctx->pc = 0x28BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDBCu;
        // 0x28bdc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDBCu, 0x28BDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BDC4u;
label_28bdc4:
    // 0x28bdc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28bdc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bdc8:
    // 0x28bdc8: 0x2462ffb1  addiu       $v0, $v1, -0x4F
    ctx->pc = 0x28bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967217));
label_28bdcc:
    // 0x28bdcc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28bdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28bdd0:
    // 0x28bdd0: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_28bdd4:
    if (ctx->pc == 0x28BDD4u) {
        ctx->pc = 0x28BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDD0u;
        // 0x28bdd4: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDD8u;
        goto label_28bdd8;
    }
    ctx->pc = 0x28BDD0u;
    {
        const bool branch_taken_0x28bdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bdd0) {
            ctx->pc = 0x28BDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BDD0u;
            // 0x28bdd4: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE98u;
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BDD8u;
label_28bdd8:
    // 0x28bdd8: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x28bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_28bddc:
    // 0x28bddc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_28bde0:
    if (ctx->pc == 0x28BDE0u) {
        ctx->pc = 0x28BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDDCu;
        // 0x28bde0: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDE4u;
        goto label_28bde4;
    }
    ctx->pc = 0x28BDDCu;
    {
        const bool branch_taken_0x28bddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDDCu;
        // 0x28bde0: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bddc) {
            ctx->pc = 0x28BE04u;
            goto label_28be04;
        }
    }
    ctx->pc = 0x28BDE4u;
label_28bde4:
    // 0x28bde4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28bde8:
    if (ctx->pc == 0x28BDE8u) {
        ctx->pc = 0x28BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDE4u;
        // 0x28bde8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDECu;
        goto label_28bdec;
    }
    ctx->pc = 0x28BDE4u;
    {
        const bool branch_taken_0x28bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDE4u;
        // 0x28bde8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bde4) {
            ctx->pc = 0x28BE04u;
            goto label_28be04;
        }
    }
    ctx->pc = 0x28BDECu;
label_28bdec:
    // 0x28bdec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28bdf0:
    if (ctx->pc == 0x28BDF0u) {
        ctx->pc = 0x28BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDECu;
        // 0x28bdf0: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDF4u;
        goto label_28bdf4;
    }
    ctx->pc = 0x28BDECu;
    {
        const bool branch_taken_0x28bdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDECu;
        // 0x28bdf0: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdec) {
            ctx->pc = 0x28BE04u;
            goto label_28be04;
        }
    }
    ctx->pc = 0x28BDF4u;
label_28bdf4:
    // 0x28bdf4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28bdf8:
    if (ctx->pc == 0x28BDF8u) {
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF4u;
        // 0x28bdf8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDFCu;
        goto label_28bdfc;
    }
    ctx->pc = 0x28BDF4u;
    {
        const bool branch_taken_0x28bdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF4u;
        // 0x28bdf8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf4) {
            ctx->pc = 0x28BE04u;
            goto label_28be04;
        }
    }
    ctx->pc = 0x28BDFCu;
label_28bdfc:
    // 0x28bdfc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28be00:
    if (ctx->pc == 0x28BE00u) {
        ctx->pc = 0x28BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDFCu;
        // 0x28be00: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE04u;
        goto label_28be04;
    }
    ctx->pc = 0x28BDFCu;
    {
        const bool branch_taken_0x28bdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDFCu;
        // 0x28be00: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdfc) {
            ctx->pc = 0x28BE0Cu;
            goto label_28be0c;
        }
    }
    ctx->pc = 0x28BE04u;
label_28be04:
    // 0x28be04: 0x10000024  b           . + 4 + (0x24 << 2)
label_28be08:
    if (ctx->pc == 0x28BE08u) {
        ctx->pc = 0x28BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE04u;
        // 0x28be08: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE0Cu;
        goto label_28be0c;
    }
    ctx->pc = 0x28BE04u;
    {
        const bool branch_taken_0x28be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE04u;
        // 0x28be08: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be04) {
            ctx->pc = 0x28BE98u;
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BE0Cu;
label_28be0c:
    // 0x28be0c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_28be10:
    if (ctx->pc == 0x28BE10u) {
        ctx->pc = 0x28BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE0Cu;
        // 0x28be10: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE14u;
        goto label_28be14;
    }
    ctx->pc = 0x28BE0Cu;
    {
        const bool branch_taken_0x28be0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE0Cu;
        // 0x28be10: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be0c) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE14u;
label_28be14:
    // 0x28be14: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28be18:
    if (ctx->pc == 0x28BE18u) {
        ctx->pc = 0x28BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE14u;
        // 0x28be18: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE1Cu;
        goto label_28be1c;
    }
    ctx->pc = 0x28BE14u;
    {
        const bool branch_taken_0x28be14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE14u;
        // 0x28be18: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be14) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE1Cu;
label_28be1c:
    // 0x28be1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_28be20:
    if (ctx->pc == 0x28BE20u) {
        ctx->pc = 0x28BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE1Cu;
        // 0x28be20: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE24u;
        goto label_28be24;
    }
    ctx->pc = 0x28BE1Cu;
    {
        const bool branch_taken_0x28be1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE1Cu;
        // 0x28be20: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be1c) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE24u;
label_28be24:
    // 0x28be24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28be28:
    if (ctx->pc == 0x28BE28u) {
        ctx->pc = 0x28BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE24u;
        // 0x28be28: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE2Cu;
        goto label_28be2c;
    }
    ctx->pc = 0x28BE24u;
    {
        const bool branch_taken_0x28be24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE24u;
        // 0x28be28: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be24) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE2Cu;
label_28be2c:
    // 0x28be2c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28be30:
    if (ctx->pc == 0x28BE30u) {
        ctx->pc = 0x28BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE2Cu;
        // 0x28be30: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE34u;
        goto label_28be34;
    }
    ctx->pc = 0x28BE2Cu;
    {
        const bool branch_taken_0x28be2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE2Cu;
        // 0x28be30: 0x2402008b  addiu       $v0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be2c) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE34u;
label_28be34:
    // 0x28be34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28be38:
    if (ctx->pc == 0x28BE38u) {
        ctx->pc = 0x28BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE34u;
        // 0x28be38: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE3Cu;
        goto label_28be3c;
    }
    ctx->pc = 0x28BE34u;
    {
        const bool branch_taken_0x28be34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE34u;
        // 0x28be38: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be34) {
            ctx->pc = 0x28BE44u;
            goto label_28be44;
        }
    }
    ctx->pc = 0x28BE3Cu;
label_28be3c:
    // 0x28be3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28be40:
    if (ctx->pc == 0x28BE40u) {
        ctx->pc = 0x28BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE3Cu;
        // 0x28be40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE44u;
        goto label_28be44;
    }
    ctx->pc = 0x28BE3Cu;
    {
        const bool branch_taken_0x28be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE3Cu;
        // 0x28be40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be3c) {
            ctx->pc = 0x28BE4Cu;
            goto label_28be4c;
        }
    }
    ctx->pc = 0x28BE44u;
label_28be44:
    // 0x28be44: 0x10000014  b           . + 4 + (0x14 << 2)
label_28be48:
    if (ctx->pc == 0x28BE48u) {
        ctx->pc = 0x28BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE44u;
        // 0x28be48: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE4Cu;
        goto label_28be4c;
    }
    ctx->pc = 0x28BE44u;
    {
        const bool branch_taken_0x28be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE44u;
        // 0x28be48: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be44) {
            ctx->pc = 0x28BE98u;
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BE4Cu;
label_28be4c:
    // 0x28be4c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_28be50:
    if (ctx->pc == 0x28BE50u) {
        ctx->pc = 0x28BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE4Cu;
        // 0x28be50: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE54u;
        goto label_28be54;
    }
    ctx->pc = 0x28BE4Cu;
    {
        const bool branch_taken_0x28be4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE4Cu;
        // 0x28be50: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be4c) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE54u;
label_28be54:
    // 0x28be54: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_28be58:
    if (ctx->pc == 0x28BE58u) {
        ctx->pc = 0x28BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE54u;
        // 0x28be58: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE5Cu;
        goto label_28be5c;
    }
    ctx->pc = 0x28BE54u;
    {
        const bool branch_taken_0x28be54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE54u;
        // 0x28be58: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be54) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE5Cu;
label_28be5c:
    // 0x28be5c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_28be60:
    if (ctx->pc == 0x28BE60u) {
        ctx->pc = 0x28BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE5Cu;
        // 0x28be60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE64u;
        goto label_28be64;
    }
    ctx->pc = 0x28BE5Cu;
    {
        const bool branch_taken_0x28be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE5Cu;
        // 0x28be60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be5c) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE64u;
label_28be64:
    // 0x28be64: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28be68:
    if (ctx->pc == 0x28BE68u) {
        ctx->pc = 0x28BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE64u;
        // 0x28be68: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE6Cu;
        goto label_28be6c;
    }
    ctx->pc = 0x28BE64u;
    {
        const bool branch_taken_0x28be64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE64u;
        // 0x28be68: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be64) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE6Cu;
label_28be6c:
    // 0x28be6c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_28be70:
    if (ctx->pc == 0x28BE70u) {
        ctx->pc = 0x28BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE6Cu;
        // 0x28be70: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE74u;
        goto label_28be74;
    }
    ctx->pc = 0x28BE6Cu;
    {
        const bool branch_taken_0x28be6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE6Cu;
        // 0x28be70: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be6c) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE74u;
label_28be74:
    // 0x28be74: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28be78:
    if (ctx->pc == 0x28BE78u) {
        ctx->pc = 0x28BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE74u;
        // 0x28be78: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE7Cu;
        goto label_28be7c;
    }
    ctx->pc = 0x28BE74u;
    {
        const bool branch_taken_0x28be74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE74u;
        // 0x28be78: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be74) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE7Cu;
label_28be7c:
    // 0x28be7c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_28be80:
    if (ctx->pc == 0x28BE80u) {
        ctx->pc = 0x28BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE7Cu;
        // 0x28be80: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE84u;
        goto label_28be84;
    }
    ctx->pc = 0x28BE7Cu;
    {
        const bool branch_taken_0x28be7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE7Cu;
        // 0x28be80: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be7c) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE84u;
label_28be84:
    // 0x28be84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_28be88:
    if (ctx->pc == 0x28BE88u) {
        ctx->pc = 0x28BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE84u;
        // 0x28be88: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE8Cu;
        goto label_28be8c;
    }
    ctx->pc = 0x28BE84u;
    {
        const bool branch_taken_0x28be84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE84u;
        // 0x28be88: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be84) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE8Cu;
label_28be8c:
    // 0x28be8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28be90:
    if (ctx->pc == 0x28BE90u) {
        ctx->pc = 0x28BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE8Cu;
        // 0x28be90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE94u;
        goto label_28be94;
    }
    ctx->pc = 0x28BE8Cu;
    {
        const bool branch_taken_0x28be8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE8Cu;
        // 0x28be90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be8c) {
            ctx->pc = 0x28BE9Cu;
            goto label_28be9c;
        }
    }
    ctx->pc = 0x28BE94u;
label_28be94:
    // 0x28be94: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x28be94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28be98:
    // 0x28be98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28be9c:
    // 0x28be9c: 0xc088d68  jal         func_2235A0
label_28bea0:
    if (ctx->pc == 0x28BEA0u) {
        ctx->pc = 0x28BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE9Cu;
        // 0x28bea0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEA4u;
        goto label_28bea4;
    }
    ctx->pc = 0x28BE9Cu;
    SET_GPR_U32(ctx, 31, 0x28BEA4u);
    ctx->pc = 0x28BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE9Cu;
    // 0x28bea0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x28BE9Cu, 0x28BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEA4u;
label_28bea4:
    // 0x28bea4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28bea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28bea8:
    // 0x28bea8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28bea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28beac:
    // 0x28beac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28beacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28beb0:
    // 0x28beb0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28beb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28beb4:
    // 0x28beb4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28beb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28beb8:
    // 0x28beb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28bebc:
    // 0x28bebc: 0x3e00008  jr          $ra
label_28bec0:
    if (ctx->pc == 0x28BEC0u) {
        ctx->pc = 0x28BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEBCu;
        // 0x28bec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEC4u;
        goto label_28bec4;
    }
    ctx->pc = 0x28BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEBCu;
        // 0x28bec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BEC4u;
label_28bec4:
    // 0x28bec4: 0x0  nop
    ctx->pc = 0x28bec4u;
    // NOP
    ctx->pc = 0x28bec8u;
}
