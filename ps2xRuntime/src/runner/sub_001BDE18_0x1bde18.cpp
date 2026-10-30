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

// Function: sub_001BDE18
// Address: 0x1bde18 - 0x1be070
void sub_001BDE18_0x1bde18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDE18_0x1bde18");
#endif

    switch (ctx->pc) {
        case 0x1bde18u: goto label_1bde18;
        case 0x1bde1cu: goto label_1bde1c;
        case 0x1bde20u: goto label_1bde20;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde28u: goto label_1bde28;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde30u: goto label_1bde30;
        case 0x1bde34u: goto label_1bde34;
        case 0x1bde38u: goto label_1bde38;
        case 0x1bde3cu: goto label_1bde3c;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bde48u: goto label_1bde48;
        case 0x1bde4cu: goto label_1bde4c;
        case 0x1bde50u: goto label_1bde50;
        case 0x1bde54u: goto label_1bde54;
        case 0x1bde58u: goto label_1bde58;
        case 0x1bde5cu: goto label_1bde5c;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde64u: goto label_1bde64;
        case 0x1bde68u: goto label_1bde68;
        case 0x1bde6cu: goto label_1bde6c;
        case 0x1bde70u: goto label_1bde70;
        case 0x1bde74u: goto label_1bde74;
        case 0x1bde78u: goto label_1bde78;
        case 0x1bde7cu: goto label_1bde7c;
        case 0x1bde80u: goto label_1bde80;
        case 0x1bde84u: goto label_1bde84;
        case 0x1bde88u: goto label_1bde88;
        case 0x1bde8cu: goto label_1bde8c;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bde94u: goto label_1bde94;
        case 0x1bde98u: goto label_1bde98;
        case 0x1bde9cu: goto label_1bde9c;
        case 0x1bdea0u: goto label_1bdea0;
        case 0x1bdea4u: goto label_1bdea4;
        case 0x1bdea8u: goto label_1bdea8;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeb0u: goto label_1bdeb0;
        case 0x1bdeb4u: goto label_1bdeb4;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdebcu: goto label_1bdebc;
        case 0x1bdec0u: goto label_1bdec0;
        case 0x1bdec4u: goto label_1bdec4;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bded0u: goto label_1bded0;
        case 0x1bded4u: goto label_1bded4;
        case 0x1bded8u: goto label_1bded8;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1bdee0u: goto label_1bdee0;
        case 0x1bdee4u: goto label_1bdee4;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdef0u: goto label_1bdef0;
        case 0x1bdef4u: goto label_1bdef4;
        case 0x1bdef8u: goto label_1bdef8;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf00u: goto label_1bdf00;
        case 0x1bdf04u: goto label_1bdf04;
        case 0x1bdf08u: goto label_1bdf08;
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf10u: goto label_1bdf10;
        case 0x1bdf14u: goto label_1bdf14;
        case 0x1bdf18u: goto label_1bdf18;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf20u: goto label_1bdf20;
        case 0x1bdf24u: goto label_1bdf24;
        case 0x1bdf28u: goto label_1bdf28;
        case 0x1bdf2cu: goto label_1bdf2c;
        case 0x1bdf30u: goto label_1bdf30;
        case 0x1bdf34u: goto label_1bdf34;
        case 0x1bdf38u: goto label_1bdf38;
        case 0x1bdf3cu: goto label_1bdf3c;
        case 0x1bdf40u: goto label_1bdf40;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf48u: goto label_1bdf48;
        case 0x1bdf4cu: goto label_1bdf4c;
        case 0x1bdf50u: goto label_1bdf50;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf58u: goto label_1bdf58;
        case 0x1bdf5cu: goto label_1bdf5c;
        case 0x1bdf60u: goto label_1bdf60;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf68u: goto label_1bdf68;
        case 0x1bdf6cu: goto label_1bdf6c;
        case 0x1bdf70u: goto label_1bdf70;
        case 0x1bdf74u: goto label_1bdf74;
        case 0x1bdf78u: goto label_1bdf78;
        case 0x1bdf7cu: goto label_1bdf7c;
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf8cu: goto label_1bdf8c;
        case 0x1bdf90u: goto label_1bdf90;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdf98u: goto label_1bdf98;
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfb4u: goto label_1bdfb4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1bdfecu: goto label_1bdfec;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdff4u: goto label_1bdff4;
        case 0x1bdff8u: goto label_1bdff8;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be000u: goto label_1be000;
        case 0x1be004u: goto label_1be004;
        case 0x1be008u: goto label_1be008;
        case 0x1be00cu: goto label_1be00c;
        case 0x1be010u: goto label_1be010;
        case 0x1be014u: goto label_1be014;
        case 0x1be018u: goto label_1be018;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be020u: goto label_1be020;
        case 0x1be024u: goto label_1be024;
        case 0x1be028u: goto label_1be028;
        case 0x1be02cu: goto label_1be02c;
        case 0x1be030u: goto label_1be030;
        case 0x1be034u: goto label_1be034;
        case 0x1be038u: goto label_1be038;
        case 0x1be03cu: goto label_1be03c;
        case 0x1be040u: goto label_1be040;
        case 0x1be044u: goto label_1be044;
        case 0x1be048u: goto label_1be048;
        case 0x1be04cu: goto label_1be04c;
        case 0x1be050u: goto label_1be050;
        case 0x1be054u: goto label_1be054;
        case 0x1be058u: goto label_1be058;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be060u: goto label_1be060;
        case 0x1be064u: goto label_1be064;
        case 0x1be068u: goto label_1be068;
        case 0x1be06cu: goto label_1be06c;
        default: break;
    }

    ctx->pc = 0x1bde18u;

label_1bde18:
    // 0x1bde18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bde1c:
    // 0x1bde1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bde1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bde20:
    // 0x1bde20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bde20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bde24:
    // 0x1bde24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bde24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bde28:
    // 0x1bde28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bde2c:
    // 0x1bde2c: 0x10b10029  beq         $a1, $s1, . + 4 + (0x29 << 2)
label_1bde30:
    if (ctx->pc == 0x1BDE30u) {
        ctx->pc = 0x1BDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE2Cu;
        // 0x1bde30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE34u;
        goto label_1bde34;
    }
    ctx->pc = 0x1BDE2Cu;
    {
        const bool branch_taken_0x1bde2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE2Cu;
        // 0x1bde30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde2c) {
            ctx->pc = 0x1BDED4u;
            goto label_1bded4;
        }
    }
    ctx->pc = 0x1BDE34u;
label_1bde34:
    // 0x1bde34: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1bde34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bde38:
    // 0x1bde38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bde3c:
    if (ctx->pc == 0x1BDE3Cu) {
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE40u;
        goto label_1bde40;
    }
    ctx->pc = 0x1BDE38u;
    {
        const bool branch_taken_0x1bde38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde38) {
            ctx->pc = 0x1BDE50u;
            goto label_1bde50;
        }
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1bde44:
    if (ctx->pc == 0x1BDE44u) {
        ctx->pc = 0x1BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE40u;
        // 0x1bde44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE48u;
        goto label_1bde48;
    }
    ctx->pc = 0x1BDE40u;
    {
        const bool branch_taken_0x1bde40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE40u;
        // 0x1bde44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde40) {
            ctx->pc = 0x1BDE68u;
            goto label_1bde68;
        }
    }
    ctx->pc = 0x1BDE48u;
label_1bde48:
    // 0x1bde48: 0x10000085  b           . + 4 + (0x85 << 2)
label_1bde4c:
    if (ctx->pc == 0x1BDE4Cu) {
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE50u;
        goto label_1bde50;
    }
    ctx->pc = 0x1BDE48u;
    {
        const bool branch_taken_0x1bde48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde48) {
            ctx->pc = 0x1BE060u;
            goto label_1be060;
        }
    }
    ctx->pc = 0x1BDE50u;
label_1bde50:
    // 0x1bde50: 0x10a20064  beq         $a1, $v0, . + 4 + (0x64 << 2)
label_1bde54:
    if (ctx->pc == 0x1BDE54u) {
        ctx->pc = 0x1BDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE50u;
        // 0x1bde54: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE58u;
        goto label_1bde58;
    }
    ctx->pc = 0x1BDE50u;
    {
        const bool branch_taken_0x1bde50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE50u;
        // 0x1bde54: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde50) {
            ctx->pc = 0x1BDFE4u;
            goto label_1bdfe4;
        }
    }
    ctx->pc = 0x1BDE58u;
label_1bde58:
    // 0x1bde58: 0x10a20042  beq         $a1, $v0, . + 4 + (0x42 << 2)
label_1bde5c:
    if (ctx->pc == 0x1BDE5Cu) {
        ctx->pc = 0x1BDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE58u;
        // 0x1bde5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE60u;
        goto label_1bde60;
    }
    ctx->pc = 0x1BDE58u;
    {
        const bool branch_taken_0x1bde58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE58u;
        // 0x1bde5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde58) {
            ctx->pc = 0x1BDF64u;
            goto label_1bdf64;
        }
    }
    ctx->pc = 0x1BDE60u;
label_1bde60:
    // 0x1bde60: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1bde64:
    if (ctx->pc == 0x1BDE64u) {
        ctx->pc = 0x1BDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE60u;
        // 0x1bde64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE68u;
        goto label_1bde68;
    }
    ctx->pc = 0x1BDE60u;
    {
        const bool branch_taken_0x1bde60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE60u;
        // 0x1bde64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde60) {
            ctx->pc = 0x1BE060u;
            goto label_1be060;
        }
    }
    ctx->pc = 0x1BDE68u;
label_1bde68:
    // 0x1bde68: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_1bde6c:
    // 0x1bde6c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_1bde70:
    if (ctx->pc == 0x1BDE70u) {
        ctx->pc = 0x1BDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE6Cu;
        // 0x1bde70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE74u;
        goto label_1bde74;
    }
    ctx->pc = 0x1BDE6Cu;
    {
        const bool branch_taken_0x1bde6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE6Cu;
        // 0x1bde70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde6c) {
            ctx->pc = 0x1BE05Cu;
            goto label_1be05c;
        }
    }
    ctx->pc = 0x1BDE74u;
label_1bde74:
    // 0x1bde74: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x1bde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_1bde78:
    // 0x1bde78: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1bde7c:
    // 0x1bde7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bde80:
    // 0x1bde80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bde84:
    // 0x1bde84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bde84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bde88:
    // 0x1bde88: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1bde8c:
    // 0x1bde8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1bde90:
    // 0x1bde90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bde90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bde94:
    // 0x1bde94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bde94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bde98:
    // 0x1bde98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bde9c:
    // 0x1bde9c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1bdea0:
    // 0x1bdea0: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1bdea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1bdea4:
    // 0x1bdea4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_1bdea8:
    if (ctx->pc == 0x1BDEA8u) {
        ctx->pc = 0x1BDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEA4u;
        // 0x1bdea8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEACu;
        goto label_1bdeac;
    }
    ctx->pc = 0x1BDEA4u;
    {
        const bool branch_taken_0x1bdea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdea4) {
            ctx->pc = 0x1BDEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDEA4u;
            // 0x1bdea8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDEC0u;
            goto label_1bdec0;
        }
    }
    ctx->pc = 0x1BDEACu;
label_1bdeac:
    // 0x1bdeac: 0xc074d2c  jal         func_1D34B0
label_1bdeb0:
    if (ctx->pc == 0x1BDEB0u) {
        ctx->pc = 0x1BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEACu;
        // 0x1bdeb0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEB4u;
        goto label_1bdeb4;
    }
    ctx->pc = 0x1BDEACu;
    SET_GPR_U32(ctx, 31, 0x1BDEB4u);
    ctx->pc = 0x1BDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEACu;
    // 0x1bdeb0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34B0u, 0x1BDEACu, 0x1BDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEB4u;
label_1bdeb4:
    // 0x1bdeb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bdeb8:
    // 0x1bdeb8: 0x10000063  b           . + 4 + (0x63 << 2)
label_1bdebc:
    if (ctx->pc == 0x1BDEBCu) {
        ctx->pc = 0x1BDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEB8u;
        // 0x1bdebc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEC0u;
        goto label_1bdec0;
    }
    ctx->pc = 0x1BDEB8u;
    {
        const bool branch_taken_0x1bdeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEB8u;
        // 0x1bdebc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdeb8) {
            ctx->pc = 0x1BE048u;
            goto label_1be048;
        }
    }
    ctx->pc = 0x1BDEC0u;
label_1bdec0:
    // 0x1bdec0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bdec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bdec4:
    // 0x1bdec4: 0xc043f0c  jal         func_10FC30
label_1bdec8:
    if (ctx->pc == 0x1BDEC8u) {
        ctx->pc = 0x1BDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEC4u;
        // 0x1bdec8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDECCu;
        goto label_1bdecc;
    }
    ctx->pc = 0x1BDEC4u;
    SET_GPR_U32(ctx, 31, 0x1BDECCu);
    ctx->pc = 0x1BDEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEC4u;
    // 0x1bdec8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDEC4u, 0x1BDECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDECCu;
label_1bdecc:
    // 0x1bdecc: 0x10000060  b           . + 4 + (0x60 << 2)
label_1bded0:
    if (ctx->pc == 0x1BDED0u) {
        ctx->pc = 0x1BDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDECCu;
        // 0x1bded0: 0xae1106a8  sw          $s1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDED4u;
        goto label_1bded4;
    }
    ctx->pc = 0x1BDECCu;
    {
        const bool branch_taken_0x1bdecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDECCu;
        // 0x1bded0: 0xae1106a8  sw          $s1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdecc) {
            ctx->pc = 0x1BE050u;
            goto label_1be050;
        }
    }
    ctx->pc = 0x1BDED4u;
label_1bded4:
    // 0x1bded4: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_1bded8:
    // 0x1bded8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_1bdedc:
    if (ctx->pc == 0x1BDEDCu) {
        ctx->pc = 0x1BDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDED8u;
        // 0x1bdedc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEE0u;
        goto label_1bdee0;
    }
    ctx->pc = 0x1BDED8u;
    {
        const bool branch_taken_0x1bded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDED8u;
        // 0x1bdedc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bded8) {
            ctx->pc = 0x1BE058u;
            goto label_1be058;
        }
    }
    ctx->pc = 0x1BDEE0u;
label_1bdee0:
    // 0x1bdee0: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_1bdee4:
    // 0x1bdee4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1bdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1bdee8:
    // 0x1bdee8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x1bdee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1bdeec:
    // 0x1bdeec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bdef0:
    // 0x1bdef0: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1bdef4:
    // 0x1bdef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdef8:
    // 0x1bdef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdefc:
    // 0x1bdefc: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1bdf00:
    // 0x1bdf00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1bdf04:
    // 0x1bdf04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bdf08:
    // 0x1bdf08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdf0c:
    // 0x1bdf0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdf10:
    // 0x1bdf10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bdf14:
    // 0x1bdf14: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1bdf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1bdf18:
    // 0x1bdf18: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x1bdf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_1bdf1c:
    // 0x1bdf1c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1bdf1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1bdf20:
    // 0x1bdf20: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bdf24:
    // 0x1bdf24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bdf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bdf28:
    // 0x1bdf28: 0x8ca214dc  lw          $v0, 0x14DC($a1)
    ctx->pc = 0x1bdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5340)));
label_1bdf2c:
    // 0x1bdf2c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1bdf2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bdf30:
    // 0x1bdf30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bdf34:
    if (ctx->pc == 0x1BDF34u) {
        ctx->pc = 0x1BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF30u;
        // 0x1bdf34: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF38u;
        goto label_1bdf38;
    }
    ctx->pc = 0x1BDF30u;
    {
        const bool branch_taken_0x1bdf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF30u;
        // 0x1bdf34: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf30) {
            ctx->pc = 0x1BDF4Cu;
            goto label_1bdf4c;
        }
    }
    ctx->pc = 0x1BDF38u;
label_1bdf38:
    // 0x1bdf38: 0xc074d2c  jal         func_1D34B0
label_1bdf3c:
    if (ctx->pc == 0x1BDF3Cu) {
        ctx->pc = 0x1BDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF38u;
        // 0x1bdf3c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF40u;
        goto label_1bdf40;
    }
    ctx->pc = 0x1BDF38u;
    SET_GPR_U32(ctx, 31, 0x1BDF40u);
    ctx->pc = 0x1BDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF38u;
    // 0x1bdf3c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34B0u, 0x1BDF38u, 0x1BDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF40u;
label_1bdf40:
    // 0x1bdf40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bdf44:
    // 0x1bdf44: 0x10000040  b           . + 4 + (0x40 << 2)
label_1bdf48:
    if (ctx->pc == 0x1BDF48u) {
        ctx->pc = 0x1BDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF44u;
        // 0x1bdf48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF4Cu;
        goto label_1bdf4c;
    }
    ctx->pc = 0x1BDF44u;
    {
        const bool branch_taken_0x1bdf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF44u;
        // 0x1bdf48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf44) {
            ctx->pc = 0x1BE048u;
            goto label_1be048;
        }
    }
    ctx->pc = 0x1BDF4Cu;
label_1bdf4c:
    // 0x1bdf4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bdf50:
    // 0x1bdf50: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bdf54:
    // 0x1bdf54: 0xc043f0c  jal         func_10FC30
label_1bdf58:
    if (ctx->pc == 0x1BDF58u) {
        ctx->pc = 0x1BDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF54u;
        // 0x1bdf58: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF5Cu;
        goto label_1bdf5c;
    }
    ctx->pc = 0x1BDF54u;
    SET_GPR_U32(ctx, 31, 0x1BDF5Cu);
    ctx->pc = 0x1BDF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF54u;
    // 0x1bdf58: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDF54u, 0x1BDF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF5Cu;
label_1bdf5c:
    // 0x1bdf5c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1bdf60:
    if (ctx->pc == 0x1BDF60u) {
        ctx->pc = 0x1BDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF5Cu;
        // 0x1bdf60: 0xae1106a8  sw          $s1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF64u;
        goto label_1bdf64;
    }
    ctx->pc = 0x1BDF5Cu;
    {
        const bool branch_taken_0x1bdf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF5Cu;
        // 0x1bdf60: 0xae1106a8  sw          $s1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf5c) {
            ctx->pc = 0x1BE050u;
            goto label_1be050;
        }
    }
    ctx->pc = 0x1BDF64u;
label_1bdf64:
    // 0x1bdf64: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_1bdf68:
    // 0x1bdf68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1bdf6c:
    if (ctx->pc == 0x1BDF6Cu) {
        ctx->pc = 0x1BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF68u;
        // 0x1bdf6c: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF70u;
        goto label_1bdf70;
    }
    ctx->pc = 0x1BDF68u;
    {
        const bool branch_taken_0x1bdf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF68u;
        // 0x1bdf6c: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf68) {
            ctx->pc = 0x1BDFA0u;
            goto label_1bdfa0;
        }
    }
    ctx->pc = 0x1BDF70u;
label_1bdf70:
    // 0x1bdf70: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_1bdf74:
    // 0x1bdf74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bdf78:
    // 0x1bdf78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bdf7c:
    // 0x1bdf7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdf80:
    // 0x1bdf80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdf84:
    // 0x1bdf84: 0xc07884c  jal         func_1E2130
label_1bdf88:
    if (ctx->pc == 0x1BDF88u) {
        ctx->pc = 0x1BDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF84u;
        // 0x1bdf88: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF8Cu;
        goto label_1bdf8c;
    }
    ctx->pc = 0x1BDF84u;
    SET_GPR_U32(ctx, 31, 0x1BDF8Cu);
    ctx->pc = 0x1BDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF84u;
    // 0x1bdf88: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2130u, 0x1BDF84u, 0x1BDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF8Cu;
label_1bdf8c:
    // 0x1bdf8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bdf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bdf90:
    // 0x1bdf90: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1bdf94:
    // 0x1bdf94: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1bdf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1bdf98:
    // 0x1bdf98: 0x60f809  jalr        $v1
label_1bdf9c:
    if (ctx->pc == 0x1BDF9Cu) {
        ctx->pc = 0x1BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF98u;
        // 0x1bdf9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFA0u;
        goto label_1bdfa0;
    }
    ctx->pc = 0x1BDF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDFA0u);
        ctx->pc = 0x1BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF98u;
        // 0x1bdf9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF98u, 0x1BDFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDFA0u;
label_1bdfa0:
    // 0x1bdfa0: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x1bdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
label_1bdfa4:
    // 0x1bdfa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdfa8:
    // 0x1bdfa8: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_1bdfac:
    // 0x1bdfac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bdfb0:
    // 0x1bdfb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bdfb4:
    // 0x1bdfb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdfb8:
    // 0x1bdfb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdfbc:
    // 0x1bdfbc: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1bdfc0:
    // 0x1bdfc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1bdfc4:
    // 0x1bdfc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bdfc8:
    // 0x1bdfc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdfcc:
    // 0x1bdfcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdfd0:
    // 0x1bdfd0: 0xc074d3a  jal         func_1D34E8
label_1bdfd4:
    if (ctx->pc == 0x1BDFD4u) {
        ctx->pc = 0x1BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFD0u;
        // 0x1bdfd4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFD8u;
        goto label_1bdfd8;
    }
    ctx->pc = 0x1BDFD0u;
    SET_GPR_U32(ctx, 31, 0x1BDFD8u);
    ctx->pc = 0x1BDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFD0u;
    // 0x1bdfd4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34E8u, 0x1BDFD0u, 0x1BDFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFD8u;
label_1bdfd8:
    // 0x1bdfd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bdfdc:
    // 0x1bdfdc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1bdfe0:
    if (ctx->pc == 0x1BDFE0u) {
        ctx->pc = 0x1BDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFDCu;
        // 0x1bdfe0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFE4u;
        goto label_1bdfe4;
    }
    ctx->pc = 0x1BDFDCu;
    {
        const bool branch_taken_0x1bdfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFDCu;
        // 0x1bdfe0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfdc) {
            ctx->pc = 0x1BE048u;
            goto label_1be048;
        }
    }
    ctx->pc = 0x1BDFE4u;
label_1bdfe4:
    // 0x1bdfe4: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_1bdfe8:
    // 0x1bdfe8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1bdfec:
    if (ctx->pc == 0x1BDFECu) {
        ctx->pc = 0x1BDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFE8u;
        // 0x1bdfec: 0x8e020580  lw          $v0, 0x580($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFF0u;
        goto label_1bdff0;
    }
    ctx->pc = 0x1BDFE8u;
    {
        const bool branch_taken_0x1bdfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdfe8) {
            ctx->pc = 0x1BDFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDFE8u;
            // 0x1bdfec: 0x8e020580  lw          $v0, 0x580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDFF8u;
            goto label_1bdff8;
        }
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bdff4:
    if (ctx->pc == 0x1BDFF4u) {
        ctx->pc = 0x1BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF0u;
        // 0x1bdff4: 0xa211069c  sb          $s1, 0x69C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1692), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFF8u;
        goto label_1bdff8;
    }
    ctx->pc = 0x1BDFF0u;
    {
        const bool branch_taken_0x1bdff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF0u;
        // 0x1bdff4: 0xa211069c  sb          $s1, 0x69C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1692), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff0) {
            ctx->pc = 0x1BE040u;
            goto label_1be040;
        }
    }
    ctx->pc = 0x1BDFF8u;
label_1bdff8:
    // 0x1bdff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdffc:
    // 0x1bdffc: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1be000:
    // 0x1be000: 0xae1106a4  sw          $s1, 0x6A4($s0)
    ctx->pc = 0x1be000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 17));
label_1be004:
    // 0x1be004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be008:
    // 0x1be008: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1be00c:
    // 0x1be00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1be010:
    // 0x1be010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be014:
    // 0x1be014: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1be018:
    // 0x1be018: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x1be018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1be01c:
    // 0x1be01c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1be020:
    // 0x1be020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1be024:
    // 0x1be024: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1be028:
    // 0x1be028: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1be02c:
    // 0x1be02c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1be030:
    // 0x1be030: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x1be030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
label_1be034:
    // 0x1be034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be038:
    // 0x1be038: 0xc074d3a  jal         func_1D34E8
label_1be03c:
    if (ctx->pc == 0x1BE03Cu) {
        ctx->pc = 0x1BE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE038u;
        // 0x1be03c: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE040u;
        goto label_1be040;
    }
    ctx->pc = 0x1BE038u;
    SET_GPR_U32(ctx, 31, 0x1BE040u);
    ctx->pc = 0x1BE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE038u;
    // 0x1be03c: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34E8u, 0x1BE038u, 0x1BE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE040u;
label_1be040:
    // 0x1be040: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be044:
    // 0x1be044: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1be048:
    // 0x1be048: 0xc043f0c  jal         func_10FC30
label_1be04c:
    if (ctx->pc == 0x1BE04Cu) {
        ctx->pc = 0x1BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE048u;
        // 0x1be04c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE050u;
        goto label_1be050;
    }
    ctx->pc = 0x1BE048u;
    SET_GPR_U32(ctx, 31, 0x1BE050u);
    ctx->pc = 0x1BE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE048u;
    // 0x1be04c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BE048u, 0x1BE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE050u;
label_1be050:
    // 0x1be050: 0x10000002  b           . + 4 + (0x2 << 2)
label_1be054:
    if (ctx->pc == 0x1BE054u) {
        ctx->pc = 0x1BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE050u;
        // 0x1be054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE058u;
        goto label_1be058;
    }
    ctx->pc = 0x1BE050u;
    {
        const bool branch_taken_0x1be050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE050u;
        // 0x1be054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be050) {
            ctx->pc = 0x1BE05Cu;
            goto label_1be05c;
        }
    }
    ctx->pc = 0x1BE058u;
label_1be058:
    // 0x1be058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be05c:
    // 0x1be05c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be060:
    // 0x1be060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be064:
    // 0x1be064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be068:
    // 0x1be068: 0x3e00008  jr          $ra
label_1be06c:
    if (ctx->pc == 0x1BE06Cu) {
        ctx->pc = 0x1BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE068u;
        // 0x1be06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE070u;
        goto label_fallthrough_0x1be068;
    }
    ctx->pc = 0x1BE068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE068u;
        // 0x1be06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be068:
    ctx->pc = 0x1BE070u;
}
