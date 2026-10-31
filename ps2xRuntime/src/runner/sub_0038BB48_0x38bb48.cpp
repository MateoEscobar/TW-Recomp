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

// Function: sub_0038BB48
// Address: 0x38bb48 - 0x38bea0
void sub_0038BB48_0x38bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BB48_0x38bb48");
#endif

    switch (ctx->pc) {
        case 0x38bb48u: goto label_38bb48;
        case 0x38bb4cu: goto label_38bb4c;
        case 0x38bb50u: goto label_38bb50;
        case 0x38bb54u: goto label_38bb54;
        case 0x38bb58u: goto label_38bb58;
        case 0x38bb5cu: goto label_38bb5c;
        case 0x38bb60u: goto label_38bb60;
        case 0x38bb64u: goto label_38bb64;
        case 0x38bb68u: goto label_38bb68;
        case 0x38bb6cu: goto label_38bb6c;
        case 0x38bb70u: goto label_38bb70;
        case 0x38bb74u: goto label_38bb74;
        case 0x38bb78u: goto label_38bb78;
        case 0x38bb7cu: goto label_38bb7c;
        case 0x38bb80u: goto label_38bb80;
        case 0x38bb84u: goto label_38bb84;
        case 0x38bb88u: goto label_38bb88;
        case 0x38bb8cu: goto label_38bb8c;
        case 0x38bb90u: goto label_38bb90;
        case 0x38bb94u: goto label_38bb94;
        case 0x38bb98u: goto label_38bb98;
        case 0x38bb9cu: goto label_38bb9c;
        case 0x38bba0u: goto label_38bba0;
        case 0x38bba4u: goto label_38bba4;
        case 0x38bba8u: goto label_38bba8;
        case 0x38bbacu: goto label_38bbac;
        case 0x38bbb0u: goto label_38bbb0;
        case 0x38bbb4u: goto label_38bbb4;
        case 0x38bbb8u: goto label_38bbb8;
        case 0x38bbbcu: goto label_38bbbc;
        case 0x38bbc0u: goto label_38bbc0;
        case 0x38bbc4u: goto label_38bbc4;
        case 0x38bbc8u: goto label_38bbc8;
        case 0x38bbccu: goto label_38bbcc;
        case 0x38bbd0u: goto label_38bbd0;
        case 0x38bbd4u: goto label_38bbd4;
        case 0x38bbd8u: goto label_38bbd8;
        case 0x38bbdcu: goto label_38bbdc;
        case 0x38bbe0u: goto label_38bbe0;
        case 0x38bbe4u: goto label_38bbe4;
        case 0x38bbe8u: goto label_38bbe8;
        case 0x38bbecu: goto label_38bbec;
        case 0x38bbf0u: goto label_38bbf0;
        case 0x38bbf4u: goto label_38bbf4;
        case 0x38bbf8u: goto label_38bbf8;
        case 0x38bbfcu: goto label_38bbfc;
        case 0x38bc00u: goto label_38bc00;
        case 0x38bc04u: goto label_38bc04;
        case 0x38bc08u: goto label_38bc08;
        case 0x38bc0cu: goto label_38bc0c;
        case 0x38bc10u: goto label_38bc10;
        case 0x38bc14u: goto label_38bc14;
        case 0x38bc18u: goto label_38bc18;
        case 0x38bc1cu: goto label_38bc1c;
        case 0x38bc20u: goto label_38bc20;
        case 0x38bc24u: goto label_38bc24;
        case 0x38bc28u: goto label_38bc28;
        case 0x38bc2cu: goto label_38bc2c;
        case 0x38bc30u: goto label_38bc30;
        case 0x38bc34u: goto label_38bc34;
        case 0x38bc38u: goto label_38bc38;
        case 0x38bc3cu: goto label_38bc3c;
        case 0x38bc40u: goto label_38bc40;
        case 0x38bc44u: goto label_38bc44;
        case 0x38bc48u: goto label_38bc48;
        case 0x38bc4cu: goto label_38bc4c;
        case 0x38bc50u: goto label_38bc50;
        case 0x38bc54u: goto label_38bc54;
        case 0x38bc58u: goto label_38bc58;
        case 0x38bc5cu: goto label_38bc5c;
        case 0x38bc60u: goto label_38bc60;
        case 0x38bc64u: goto label_38bc64;
        case 0x38bc68u: goto label_38bc68;
        case 0x38bc6cu: goto label_38bc6c;
        case 0x38bc70u: goto label_38bc70;
        case 0x38bc74u: goto label_38bc74;
        case 0x38bc78u: goto label_38bc78;
        case 0x38bc7cu: goto label_38bc7c;
        case 0x38bc80u: goto label_38bc80;
        case 0x38bc84u: goto label_38bc84;
        case 0x38bc88u: goto label_38bc88;
        case 0x38bc8cu: goto label_38bc8c;
        case 0x38bc90u: goto label_38bc90;
        case 0x38bc94u: goto label_38bc94;
        case 0x38bc98u: goto label_38bc98;
        case 0x38bc9cu: goto label_38bc9c;
        case 0x38bca0u: goto label_38bca0;
        case 0x38bca4u: goto label_38bca4;
        case 0x38bca8u: goto label_38bca8;
        case 0x38bcacu: goto label_38bcac;
        case 0x38bcb0u: goto label_38bcb0;
        case 0x38bcb4u: goto label_38bcb4;
        case 0x38bcb8u: goto label_38bcb8;
        case 0x38bcbcu: goto label_38bcbc;
        case 0x38bcc0u: goto label_38bcc0;
        case 0x38bcc4u: goto label_38bcc4;
        case 0x38bcc8u: goto label_38bcc8;
        case 0x38bcccu: goto label_38bccc;
        case 0x38bcd0u: goto label_38bcd0;
        case 0x38bcd4u: goto label_38bcd4;
        case 0x38bcd8u: goto label_38bcd8;
        case 0x38bcdcu: goto label_38bcdc;
        case 0x38bce0u: goto label_38bce0;
        case 0x38bce4u: goto label_38bce4;
        case 0x38bce8u: goto label_38bce8;
        case 0x38bcecu: goto label_38bcec;
        case 0x38bcf0u: goto label_38bcf0;
        case 0x38bcf4u: goto label_38bcf4;
        case 0x38bcf8u: goto label_38bcf8;
        case 0x38bcfcu: goto label_38bcfc;
        case 0x38bd00u: goto label_38bd00;
        case 0x38bd04u: goto label_38bd04;
        case 0x38bd08u: goto label_38bd08;
        case 0x38bd0cu: goto label_38bd0c;
        case 0x38bd10u: goto label_38bd10;
        case 0x38bd14u: goto label_38bd14;
        case 0x38bd18u: goto label_38bd18;
        case 0x38bd1cu: goto label_38bd1c;
        case 0x38bd20u: goto label_38bd20;
        case 0x38bd24u: goto label_38bd24;
        case 0x38bd28u: goto label_38bd28;
        case 0x38bd2cu: goto label_38bd2c;
        case 0x38bd30u: goto label_38bd30;
        case 0x38bd34u: goto label_38bd34;
        case 0x38bd38u: goto label_38bd38;
        case 0x38bd3cu: goto label_38bd3c;
        case 0x38bd40u: goto label_38bd40;
        case 0x38bd44u: goto label_38bd44;
        case 0x38bd48u: goto label_38bd48;
        case 0x38bd4cu: goto label_38bd4c;
        case 0x38bd50u: goto label_38bd50;
        case 0x38bd54u: goto label_38bd54;
        case 0x38bd58u: goto label_38bd58;
        case 0x38bd5cu: goto label_38bd5c;
        case 0x38bd60u: goto label_38bd60;
        case 0x38bd64u: goto label_38bd64;
        case 0x38bd68u: goto label_38bd68;
        case 0x38bd6cu: goto label_38bd6c;
        case 0x38bd70u: goto label_38bd70;
        case 0x38bd74u: goto label_38bd74;
        case 0x38bd78u: goto label_38bd78;
        case 0x38bd7cu: goto label_38bd7c;
        case 0x38bd80u: goto label_38bd80;
        case 0x38bd84u: goto label_38bd84;
        case 0x38bd88u: goto label_38bd88;
        case 0x38bd8cu: goto label_38bd8c;
        case 0x38bd90u: goto label_38bd90;
        case 0x38bd94u: goto label_38bd94;
        case 0x38bd98u: goto label_38bd98;
        case 0x38bd9cu: goto label_38bd9c;
        case 0x38bda0u: goto label_38bda0;
        case 0x38bda4u: goto label_38bda4;
        case 0x38bda8u: goto label_38bda8;
        case 0x38bdacu: goto label_38bdac;
        case 0x38bdb0u: goto label_38bdb0;
        case 0x38bdb4u: goto label_38bdb4;
        case 0x38bdb8u: goto label_38bdb8;
        case 0x38bdbcu: goto label_38bdbc;
        case 0x38bdc0u: goto label_38bdc0;
        case 0x38bdc4u: goto label_38bdc4;
        case 0x38bdc8u: goto label_38bdc8;
        case 0x38bdccu: goto label_38bdcc;
        case 0x38bdd0u: goto label_38bdd0;
        case 0x38bdd4u: goto label_38bdd4;
        case 0x38bdd8u: goto label_38bdd8;
        case 0x38bddcu: goto label_38bddc;
        case 0x38bde0u: goto label_38bde0;
        case 0x38bde4u: goto label_38bde4;
        case 0x38bde8u: goto label_38bde8;
        case 0x38bdecu: goto label_38bdec;
        case 0x38bdf0u: goto label_38bdf0;
        case 0x38bdf4u: goto label_38bdf4;
        case 0x38bdf8u: goto label_38bdf8;
        case 0x38bdfcu: goto label_38bdfc;
        case 0x38be00u: goto label_38be00;
        case 0x38be04u: goto label_38be04;
        case 0x38be08u: goto label_38be08;
        case 0x38be0cu: goto label_38be0c;
        case 0x38be10u: goto label_38be10;
        case 0x38be14u: goto label_38be14;
        case 0x38be18u: goto label_38be18;
        case 0x38be1cu: goto label_38be1c;
        case 0x38be20u: goto label_38be20;
        case 0x38be24u: goto label_38be24;
        case 0x38be28u: goto label_38be28;
        case 0x38be2cu: goto label_38be2c;
        case 0x38be30u: goto label_38be30;
        case 0x38be34u: goto label_38be34;
        case 0x38be38u: goto label_38be38;
        case 0x38be3cu: goto label_38be3c;
        case 0x38be40u: goto label_38be40;
        case 0x38be44u: goto label_38be44;
        case 0x38be48u: goto label_38be48;
        case 0x38be4cu: goto label_38be4c;
        case 0x38be50u: goto label_38be50;
        case 0x38be54u: goto label_38be54;
        case 0x38be58u: goto label_38be58;
        case 0x38be5cu: goto label_38be5c;
        case 0x38be60u: goto label_38be60;
        case 0x38be64u: goto label_38be64;
        case 0x38be68u: goto label_38be68;
        case 0x38be6cu: goto label_38be6c;
        case 0x38be70u: goto label_38be70;
        case 0x38be74u: goto label_38be74;
        case 0x38be78u: goto label_38be78;
        case 0x38be7cu: goto label_38be7c;
        case 0x38be80u: goto label_38be80;
        case 0x38be84u: goto label_38be84;
        case 0x38be88u: goto label_38be88;
        case 0x38be8cu: goto label_38be8c;
        case 0x38be90u: goto label_38be90;
        case 0x38be94u: goto label_38be94;
        case 0x38be98u: goto label_38be98;
        case 0x38be9cu: goto label_38be9c;
        default: break;
    }

    ctx->pc = 0x38bb48u;

label_38bb48:
    // 0x38bb48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_38bb4c:
    // 0x38bb4c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_38bb50:
    // 0x38bb50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x38bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_38bb54:
    // 0x38bb54: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x38bb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_38bb58:
    // 0x38bb58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38bb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bb5c:
    // 0x38bb5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x38bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_38bb60:
    // 0x38bb60: 0x26261204  addiu       $a2, $s1, 0x1204
    ctx->pc = 0x38bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4612));
label_38bb64:
    // 0x38bb64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38bb68:
    // 0x38bb68: 0x7a230190  lq          $v1, 0x190($s1)
    ctx->pc = 0x38bb68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 400)));
label_38bb6c:
    // 0x38bb6c: 0x8e241204  lw          $a0, 0x1204($s1)
    ctx->pc = 0x38bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4612)));
label_38bb70:
    // 0x38bb70: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x38bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_38bb74:
    // 0x38bb74: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x38bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_38bb78:
    // 0x38bb78: 0x1082005d  beq         $a0, $v0, . + 4 + (0x5D << 2)
label_38bb7c:
    if (ctx->pc == 0x38BB7Cu) {
        ctx->pc = 0x38BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB78u;
        // 0x38bb7c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB80u;
        goto label_38bb80;
    }
    ctx->pc = 0x38BB78u;
    {
        const bool branch_taken_0x38bb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x38BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB78u;
        // 0x38bb7c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb78) {
            ctx->pc = 0x38BCF0u;
            goto label_38bcf0;
        }
    }
    ctx->pc = 0x38BB80u;
label_38bb80:
    // 0x38bb80: 0xc0e4060  jal         func_390180
label_38bb84:
    if (ctx->pc == 0x38BB84u) {
        ctx->pc = 0x38BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB80u;
        // 0x38bb84: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB88u;
        goto label_38bb88;
    }
    ctx->pc = 0x38BB80u;
    SET_GPR_U32(ctx, 31, 0x38BB88u);
    ctx->pc = 0x38BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BB80u;
    // 0x38bb84: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38BB80u, 0x38BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BB88u;
label_38bb88:
    // 0x38bb88: 0xc0e57ce  jal         func_395F38
label_38bb8c:
    if (ctx->pc == 0x38BB8Cu) {
        ctx->pc = 0x38BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB88u;
        // 0x38bb8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB90u;
        goto label_38bb90;
    }
    ctx->pc = 0x38BB88u;
    SET_GPR_U32(ctx, 31, 0x38BB90u);
    ctx->pc = 0x38BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BB88u;
    // 0x38bb8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38BB88u, 0x38BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BB90u;
label_38bb90:
    // 0x38bb90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38bb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bb94:
    // 0x38bb94: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_38bb98:
    if (ctx->pc == 0x38BB98u) {
        ctx->pc = 0x38BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB94u;
        // 0x38bb98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB9Cu;
        goto label_38bb9c;
    }
    ctx->pc = 0x38BB94u;
    {
        const bool branch_taken_0x38bb94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB94u;
        // 0x38bb98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb94) {
            ctx->pc = 0x38BCF0u;
            goto label_38bcf0;
        }
    }
    ctx->pc = 0x38BB9Cu;
label_38bb9c:
    // 0x38bb9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bba0:
    // 0x38bba0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38bba0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38bba4:
    // 0x38bba4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38bba8:
    // 0x38bba8: 0x60f809  jalr        $v1
label_38bbac:
    if (ctx->pc == 0x38BBACu) {
        ctx->pc = 0x38BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BBA8u;
        // 0x38bbac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BBB0u;
        goto label_38bbb0;
    }
    ctx->pc = 0x38BBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38BBB0u);
        ctx->pc = 0x38BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BBA8u;
        // 0x38bbac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BBA8u, 0x38BBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BBB0u;
label_38bbb0:
    // 0x38bbb0: 0x8e2511e0  lw          $a1, 0x11E0($s1)
    ctx->pc = 0x38bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_38bbb4:
    // 0x38bbb4: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x38bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38bbb8:
    // 0x38bbb8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x38bbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38bbbc:
    // 0x38bbbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38bbc0:
    // 0x38bbc0: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38bbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38bbc4:
    // 0x38bbc4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x38bbc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38bbc8:
    // 0x38bbc8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38bbcc:
    // 0x38bbcc: 0x2484e4a0  addiu       $a0, $a0, -0x1B60
    ctx->pc = 0x38bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
label_38bbd0:
    // 0x38bbd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_38bbd4:
    // 0x38bbd4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38bbd8:
    // 0x38bbd8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x38bbd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38bbdc:
    // 0x38bbdc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38bbdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38bbe0:
    // 0x38bbe0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38bbe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38bbe4:
    // 0x38bbe4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38bbe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38bbe8:
    // 0x38bbe8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38bbe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bbec:
    // 0x38bbec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38bbecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38bbf0:
    // 0x38bbf0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38bbf0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38bbf4:
    // 0x38bbf4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38bbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bbf8:
    // 0x38bbf8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x38bbf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bbfc:
    // 0x38bbfc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x38bbfcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38bc00:
    // 0x38bc00: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38bc00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bc04:
    // 0x38bc04: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38bc04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38bc08:
    // 0x38bc08: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x38bc08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38bc0c:
    // 0x38bc0c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x38bc0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bc10:
    // 0x38bc10: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38bc10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38bc14:
    // 0x38bc14: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38bc14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bc18:
    // 0x38bc18: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x38bc18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bc1c:
    // 0x38bc1c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x38bc1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bc20:
    // 0x38bc20: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x38bc20u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_38bc24:
    // 0x38bc24: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x38bc24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38bc28:
    // 0x38bc28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38bc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38bc2c:
    // 0x38bc2c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38bc30:
    // 0x38bc30: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38bc30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38bc34:
    // 0x38bc34: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x38bc34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_38bc38:
    // 0x38bc38: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38bc38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38bc3c:
    // 0x38bc3c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38bc3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38bc40:
    // 0x38bc40: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38bc40u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_38bc44:
    // 0x38bc44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38bc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38bc48:
    // 0x38bc48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38bc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38bc4c:
    // 0x38bc4c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x38bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_38bc50:
    // 0x38bc50: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38bc54:
    // 0x38bc54: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_38bc58:
    // 0x38bc58: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_38bc5c:
    // 0x38bc5c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38bc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_38bc60:
    // 0x38bc60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bc64:
    // 0x38bc64: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x38bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_38bc68:
    // 0x38bc68: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x38bc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_38bc6c:
    // 0x38bc6c: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x38bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_38bc70:
    // 0x38bc70: 0xc0f809  jalr        $a2
label_38bc74:
    if (ctx->pc == 0x38BC74u) {
        ctx->pc = 0x38BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC70u;
        // 0x38bc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BC78u;
        goto label_38bc78;
    }
    ctx->pc = 0x38BC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38BC78u);
        ctx->pc = 0x38BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC70u;
        // 0x38bc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC70u, 0x38BC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BC78u;
label_38bc78:
    // 0x38bc78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bc7c:
    // 0x38bc7c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38bc7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38bc80:
    // 0x38bc80: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38bc84:
    // 0x38bc84: 0x40f809  jalr        $v0
label_38bc88:
    if (ctx->pc == 0x38BC88u) {
        ctx->pc = 0x38BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC84u;
        // 0x38bc88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BC8Cu;
        goto label_38bc8c;
    }
    ctx->pc = 0x38BC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BC8Cu);
        ctx->pc = 0x38BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC84u;
        // 0x38bc88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC84u, 0x38BC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BC8Cu;
label_38bc8c:
    // 0x38bc8c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_38bc90:
    if (ctx->pc == 0x38BC90u) {
        ctx->pc = 0x38BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC8Cu;
        // 0x38bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BC94u;
        goto label_38bc94;
    }
    ctx->pc = 0x38BC8Cu;
    {
        const bool branch_taken_0x38bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bc8c) {
            ctx->pc = 0x38BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BC8Cu;
            // 0x38bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BCE8u;
            goto label_38bce8;
        }
    }
    ctx->pc = 0x38BC94u;
label_38bc94:
    // 0x38bc94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bc98:
    // 0x38bc98: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38bc98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38bc9c:
    // 0x38bc9c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38bca0:
    // 0x38bca0: 0x40f809  jalr        $v0
label_38bca4:
    if (ctx->pc == 0x38BCA4u) {
        ctx->pc = 0x38BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCA0u;
        // 0x38bca4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BCA8u;
        goto label_38bca8;
    }
    ctx->pc = 0x38BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BCA8u);
        ctx->pc = 0x38BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCA0u;
        // 0x38bca4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BCA0u, 0x38BCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BCA8u;
label_38bca8:
    // 0x38bca8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x38bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_38bcac:
    // 0x38bcac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38bcb0:
    // 0x38bcb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38bcb4:
    // 0x38bcb4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x38bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_38bcb8:
    // 0x38bcb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bcbc:
    // 0x38bcbc: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x38bcbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_38bcc0:
    // 0x38bcc0: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x38bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_38bcc4:
    // 0x38bcc4: 0x40f809  jalr        $v0
label_38bcc8:
    if (ctx->pc == 0x38BCC8u) {
        ctx->pc = 0x38BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCC4u;
        // 0x38bcc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BCCCu;
        goto label_38bccc;
    }
    ctx->pc = 0x38BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BCCCu);
        ctx->pc = 0x38BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCC4u;
        // 0x38bcc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BCC4u, 0x38BCCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BCCCu;
label_38bccc:
    // 0x38bccc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38bcd0:
    // 0x38bcd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38bcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bcd4:
    // 0x38bcd4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38bcd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38bcd8:
    // 0x38bcd8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38bcdc:
    // 0x38bcdc: 0xc0f809  jalr        $a2
label_38bce0:
    if (ctx->pc == 0x38BCE0u) {
        ctx->pc = 0x38BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCDCu;
        // 0x38bce0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BCE4u;
        goto label_38bce4;
    }
    ctx->pc = 0x38BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38BCE4u);
        ctx->pc = 0x38BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCDCu;
        // 0x38bce0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BCDCu, 0x38BCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BCE4u;
label_38bce4:
    // 0x38bce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bce8:
    // 0x38bce8: 0xc0e858c  jal         func_3A1630
label_38bcec:
    if (ctx->pc == 0x38BCECu) {
        ctx->pc = 0x38BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCE8u;
        // 0x38bcec: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BCF0u;
        goto label_38bcf0;
    }
    ctx->pc = 0x38BCE8u;
    SET_GPR_U32(ctx, 31, 0x38BCF0u);
    ctx->pc = 0x38BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BCE8u;
    // 0x38bcec: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38BCE8u, 0x38BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BCF0u;
label_38bcf0:
    // 0x38bcf0: 0x8e43bd30  lw          $v1, -0x42D0($s2)
    ctx->pc = 0x38bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_38bcf4:
    // 0x38bcf4: 0x8e22120c  lw          $v0, 0x120C($s1)
    ctx->pc = 0x38bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4620)));
label_38bcf8:
    // 0x38bcf8: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_38bcfc:
    if (ctx->pc == 0x38BCFCu) {
        ctx->pc = 0x38BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCF8u;
        // 0x38bcfc: 0x2624120c  addiu       $a0, $s1, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BD00u;
        goto label_38bd00;
    }
    ctx->pc = 0x38BCF8u;
    {
        const bool branch_taken_0x38bcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCF8u;
        // 0x38bcfc: 0x2624120c  addiu       $a0, $s1, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcf8) {
            ctx->pc = 0x38BE7Cu;
            goto label_38be7c;
        }
    }
    ctx->pc = 0x38BD00u;
label_38bd00:
    // 0x38bd00: 0x922212e4  lbu         $v0, 0x12E4($s1)
    ctx->pc = 0x38bd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4836)));
label_38bd04:
    // 0x38bd04: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_38bd08:
    if (ctx->pc == 0x38BD08u) {
        ctx->pc = 0x38BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD04u;
        // 0x38bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BD0Cu;
        goto label_38bd0c;
    }
    ctx->pc = 0x38BD04u;
    {
        const bool branch_taken_0x38bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD04u;
        // 0x38bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd04) {
            ctx->pc = 0x38BE80u;
            goto label_38be80;
        }
    }
    ctx->pc = 0x38BD0Cu;
label_38bd0c:
    // 0x38bd0c: 0xc0e4060  jal         func_390180
label_38bd10:
    if (ctx->pc == 0x38BD10u) {
        ctx->pc = 0x38BD14u;
        goto label_38bd14;
    }
    ctx->pc = 0x38BD0Cu;
    SET_GPR_U32(ctx, 31, 0x38BD14u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38BD0Cu, 0x38BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD14u;
label_38bd14:
    // 0x38bd14: 0xc0e57ce  jal         func_395F38
label_38bd18:
    if (ctx->pc == 0x38BD18u) {
        ctx->pc = 0x38BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD14u;
        // 0x38bd18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BD1Cu;
        goto label_38bd1c;
    }
    ctx->pc = 0x38BD14u;
    SET_GPR_U32(ctx, 31, 0x38BD1Cu);
    ctx->pc = 0x38BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD14u;
    // 0x38bd18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38BD14u, 0x38BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD1Cu;
label_38bd1c:
    // 0x38bd1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bd20:
    // 0x38bd20: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_38bd24:
    if (ctx->pc == 0x38BD24u) {
        ctx->pc = 0x38BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD20u;
        // 0x38bd24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BD28u;
        goto label_38bd28;
    }
    ctx->pc = 0x38BD20u;
    {
        const bool branch_taken_0x38bd20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD20u;
        // 0x38bd24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd20) {
            ctx->pc = 0x38BE7Cu;
            goto label_38be7c;
        }
    }
    ctx->pc = 0x38BD28u;
label_38bd28:
    // 0x38bd28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bd2c:
    // 0x38bd2c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38bd2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38bd30:
    // 0x38bd30: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38bd34:
    // 0x38bd34: 0x60f809  jalr        $v1
label_38bd38:
    if (ctx->pc == 0x38BD38u) {
        ctx->pc = 0x38BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD34u;
        // 0x38bd38: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BD3Cu;
        goto label_38bd3c;
    }
    ctx->pc = 0x38BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38BD3Cu);
        ctx->pc = 0x38BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD34u;
        // 0x38bd38: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BD34u, 0x38BD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BD3Cu;
label_38bd3c:
    // 0x38bd3c: 0x8e2511e0  lw          $a1, 0x11E0($s1)
    ctx->pc = 0x38bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_38bd40:
    // 0x38bd40: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x38bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38bd44:
    // 0x38bd44: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x38bd44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38bd48:
    // 0x38bd48: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38bd4c:
    // 0x38bd4c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38bd4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38bd50:
    // 0x38bd50: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x38bd50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38bd54:
    // 0x38bd54: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38bd58:
    // 0x38bd58: 0x2484e4b0  addiu       $a0, $a0, -0x1B50
    ctx->pc = 0x38bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
label_38bd5c:
    // 0x38bd5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_38bd60:
    // 0x38bd60: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38bd64:
    // 0x38bd64: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x38bd64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38bd68:
    // 0x38bd68: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38bd68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38bd6c:
    // 0x38bd6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38bd6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38bd70:
    // 0x38bd70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38bd70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38bd74:
    // 0x38bd74: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38bd74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bd78:
    // 0x38bd78: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38bd78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38bd7c:
    // 0x38bd7c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38bd7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38bd80:
    // 0x38bd80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38bd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bd84:
    // 0x38bd84: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x38bd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bd88:
    // 0x38bd88: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x38bd88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38bd8c:
    // 0x38bd8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38bd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bd90:
    // 0x38bd90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38bd90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38bd94:
    // 0x38bd94: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x38bd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38bd98:
    // 0x38bd98: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x38bd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bd9c:
    // 0x38bd9c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38bd9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38bda0:
    // 0x38bda0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38bda0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38bda4:
    // 0x38bda4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x38bda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bda8:
    // 0x38bda8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x38bda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38bdac:
    // 0x38bdac: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x38bdacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_38bdb0:
    // 0x38bdb0: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x38bdb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38bdb4:
    // 0x38bdb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38bdb8:
    // 0x38bdb8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38bdbc:
    // 0x38bdbc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38bdbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38bdc0:
    // 0x38bdc0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x38bdc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_38bdc4:
    // 0x38bdc4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38bdc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38bdc8:
    // 0x38bdc8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38bdc8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38bdcc:
    // 0x38bdcc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38bdccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_38bdd0:
    // 0x38bdd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38bdd4:
    // 0x38bdd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38bdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38bdd8:
    // 0x38bdd8: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x38bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_38bddc:
    // 0x38bddc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38bde0:
    // 0x38bde0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x38bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_38bde4:
    // 0x38bde4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_38bde8:
    // 0x38bde8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38bde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_38bdec:
    // 0x38bdec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38bdf0:
    // 0x38bdf0: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x38bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_38bdf4:
    // 0x38bdf4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x38bdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_38bdf8:
    // 0x38bdf8: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x38bdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_38bdfc:
    // 0x38bdfc: 0xc0f809  jalr        $a2
label_38be00:
    if (ctx->pc == 0x38BE00u) {
        ctx->pc = 0x38BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDFCu;
        // 0x38be00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE04u;
        goto label_38be04;
    }
    ctx->pc = 0x38BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38BE04u);
        ctx->pc = 0x38BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDFCu;
        // 0x38be00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BDFCu, 0x38BE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BE04u;
label_38be04:
    // 0x38be04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38be08:
    // 0x38be08: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38be08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38be0c:
    // 0x38be0c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38be10:
    // 0x38be10: 0x40f809  jalr        $v0
label_38be14:
    if (ctx->pc == 0x38BE14u) {
        ctx->pc = 0x38BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE10u;
        // 0x38be14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE18u;
        goto label_38be18;
    }
    ctx->pc = 0x38BE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BE18u);
        ctx->pc = 0x38BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE10u;
        // 0x38be14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE10u, 0x38BE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BE18u;
label_38be18:
    // 0x38be18: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_38be1c:
    if (ctx->pc == 0x38BE1Cu) {
        ctx->pc = 0x38BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE18u;
        // 0x38be1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE20u;
        goto label_38be20;
    }
    ctx->pc = 0x38BE18u;
    {
        const bool branch_taken_0x38be18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38be18) {
            ctx->pc = 0x38BE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BE18u;
            // 0x38be1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BE74u;
            goto label_38be74;
        }
    }
    ctx->pc = 0x38BE20u;
label_38be20:
    // 0x38be20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38be20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38be24:
    // 0x38be24: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38be24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38be28:
    // 0x38be28: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38be2c:
    // 0x38be2c: 0x40f809  jalr        $v0
label_38be30:
    if (ctx->pc == 0x38BE30u) {
        ctx->pc = 0x38BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE2Cu;
        // 0x38be30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE34u;
        goto label_38be34;
    }
    ctx->pc = 0x38BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BE34u);
        ctx->pc = 0x38BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE2Cu;
        // 0x38be30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE2Cu, 0x38BE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BE34u;
label_38be34:
    // 0x38be34: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x38be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_38be38:
    // 0x38be38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38be38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38be3c:
    // 0x38be3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38be3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38be40:
    // 0x38be40: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x38be40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_38be44:
    // 0x38be44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38be44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38be48:
    // 0x38be48: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x38be48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_38be4c:
    // 0x38be4c: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x38be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_38be50:
    // 0x38be50: 0x40f809  jalr        $v0
label_38be54:
    if (ctx->pc == 0x38BE54u) {
        ctx->pc = 0x38BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE50u;
        // 0x38be54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE58u;
        goto label_38be58;
    }
    ctx->pc = 0x38BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BE58u);
        ctx->pc = 0x38BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE50u;
        // 0x38be54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE50u, 0x38BE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BE58u;
label_38be58:
    // 0x38be58: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38be5c:
    // 0x38be5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38be5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38be60:
    // 0x38be60: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38be60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38be64:
    // 0x38be64: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38be64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38be68:
    // 0x38be68: 0xc0f809  jalr        $a2
label_38be6c:
    if (ctx->pc == 0x38BE6Cu) {
        ctx->pc = 0x38BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE68u;
        // 0x38be6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE70u;
        goto label_38be70;
    }
    ctx->pc = 0x38BE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38BE70u);
        ctx->pc = 0x38BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE68u;
        // 0x38be6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE68u, 0x38BE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BE70u;
label_38be70:
    // 0x38be70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38be74:
    // 0x38be74: 0xc0e858c  jal         func_3A1630
label_38be78:
    if (ctx->pc == 0x38BE78u) {
        ctx->pc = 0x38BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE74u;
        // 0x38be78: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BE7Cu;
        goto label_38be7c;
    }
    ctx->pc = 0x38BE74u;
    SET_GPR_U32(ctx, 31, 0x38BE7Cu);
    ctx->pc = 0x38BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE74u;
    // 0x38be78: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38BE74u, 0x38BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE7Cu;
label_38be7c:
    // 0x38be7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38be80:
    // 0x38be80: 0xa22012d6  sb          $zero, 0x12D6($s1)
    ctx->pc = 0x38be80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4822), (uint8_t)GPR_U32(ctx, 0));
label_38be84:
    // 0x38be84: 0xa2221308  sb          $v0, 0x1308($s1)
    ctx->pc = 0x38be84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4872), (uint8_t)GPR_U32(ctx, 2));
label_38be88:
    // 0x38be88: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x38be88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38be8c:
    // 0x38be8c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x38be8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38be90:
    // 0x38be90: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x38be90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38be94:
    // 0x38be94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38be98:
    // 0x38be98: 0x3e00008  jr          $ra
label_38be9c:
    if (ctx->pc == 0x38BE9Cu) {
        ctx->pc = 0x38BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE98u;
        // 0x38be9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BEA0u;
        goto label_fallthrough_0x38be98;
    }
    ctx->pc = 0x38BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE98u;
        // 0x38be9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38be98:
    ctx->pc = 0x38BEA0u;
}
