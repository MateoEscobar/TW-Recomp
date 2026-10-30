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

// Function: sub_003BFCC8
// Address: 0x3bfcc8 - 0x3bffb0
void sub_003BFCC8_0x3bfcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFCC8_0x3bfcc8");
#endif

    switch (ctx->pc) {
        case 0x3bfcc8u: goto label_3bfcc8;
        case 0x3bfcccu: goto label_3bfccc;
        case 0x3bfcd0u: goto label_3bfcd0;
        case 0x3bfcd4u: goto label_3bfcd4;
        case 0x3bfcd8u: goto label_3bfcd8;
        case 0x3bfcdcu: goto label_3bfcdc;
        case 0x3bfce0u: goto label_3bfce0;
        case 0x3bfce4u: goto label_3bfce4;
        case 0x3bfce8u: goto label_3bfce8;
        case 0x3bfcecu: goto label_3bfcec;
        case 0x3bfcf0u: goto label_3bfcf0;
        case 0x3bfcf4u: goto label_3bfcf4;
        case 0x3bfcf8u: goto label_3bfcf8;
        case 0x3bfcfcu: goto label_3bfcfc;
        case 0x3bfd00u: goto label_3bfd00;
        case 0x3bfd04u: goto label_3bfd04;
        case 0x3bfd08u: goto label_3bfd08;
        case 0x3bfd0cu: goto label_3bfd0c;
        case 0x3bfd10u: goto label_3bfd10;
        case 0x3bfd14u: goto label_3bfd14;
        case 0x3bfd18u: goto label_3bfd18;
        case 0x3bfd1cu: goto label_3bfd1c;
        case 0x3bfd20u: goto label_3bfd20;
        case 0x3bfd24u: goto label_3bfd24;
        case 0x3bfd28u: goto label_3bfd28;
        case 0x3bfd2cu: goto label_3bfd2c;
        case 0x3bfd30u: goto label_3bfd30;
        case 0x3bfd34u: goto label_3bfd34;
        case 0x3bfd38u: goto label_3bfd38;
        case 0x3bfd3cu: goto label_3bfd3c;
        case 0x3bfd40u: goto label_3bfd40;
        case 0x3bfd44u: goto label_3bfd44;
        case 0x3bfd48u: goto label_3bfd48;
        case 0x3bfd4cu: goto label_3bfd4c;
        case 0x3bfd50u: goto label_3bfd50;
        case 0x3bfd54u: goto label_3bfd54;
        case 0x3bfd58u: goto label_3bfd58;
        case 0x3bfd5cu: goto label_3bfd5c;
        case 0x3bfd60u: goto label_3bfd60;
        case 0x3bfd64u: goto label_3bfd64;
        case 0x3bfd68u: goto label_3bfd68;
        case 0x3bfd6cu: goto label_3bfd6c;
        case 0x3bfd70u: goto label_3bfd70;
        case 0x3bfd74u: goto label_3bfd74;
        case 0x3bfd78u: goto label_3bfd78;
        case 0x3bfd7cu: goto label_3bfd7c;
        case 0x3bfd80u: goto label_3bfd80;
        case 0x3bfd84u: goto label_3bfd84;
        case 0x3bfd88u: goto label_3bfd88;
        case 0x3bfd8cu: goto label_3bfd8c;
        case 0x3bfd90u: goto label_3bfd90;
        case 0x3bfd94u: goto label_3bfd94;
        case 0x3bfd98u: goto label_3bfd98;
        case 0x3bfd9cu: goto label_3bfd9c;
        case 0x3bfda0u: goto label_3bfda0;
        case 0x3bfda4u: goto label_3bfda4;
        case 0x3bfda8u: goto label_3bfda8;
        case 0x3bfdacu: goto label_3bfdac;
        case 0x3bfdb0u: goto label_3bfdb0;
        case 0x3bfdb4u: goto label_3bfdb4;
        case 0x3bfdb8u: goto label_3bfdb8;
        case 0x3bfdbcu: goto label_3bfdbc;
        case 0x3bfdc0u: goto label_3bfdc0;
        case 0x3bfdc4u: goto label_3bfdc4;
        case 0x3bfdc8u: goto label_3bfdc8;
        case 0x3bfdccu: goto label_3bfdcc;
        case 0x3bfdd0u: goto label_3bfdd0;
        case 0x3bfdd4u: goto label_3bfdd4;
        case 0x3bfdd8u: goto label_3bfdd8;
        case 0x3bfddcu: goto label_3bfddc;
        case 0x3bfde0u: goto label_3bfde0;
        case 0x3bfde4u: goto label_3bfde4;
        case 0x3bfde8u: goto label_3bfde8;
        case 0x3bfdecu: goto label_3bfdec;
        case 0x3bfdf0u: goto label_3bfdf0;
        case 0x3bfdf4u: goto label_3bfdf4;
        case 0x3bfdf8u: goto label_3bfdf8;
        case 0x3bfdfcu: goto label_3bfdfc;
        case 0x3bfe00u: goto label_3bfe00;
        case 0x3bfe04u: goto label_3bfe04;
        case 0x3bfe08u: goto label_3bfe08;
        case 0x3bfe0cu: goto label_3bfe0c;
        case 0x3bfe10u: goto label_3bfe10;
        case 0x3bfe14u: goto label_3bfe14;
        case 0x3bfe18u: goto label_3bfe18;
        case 0x3bfe1cu: goto label_3bfe1c;
        case 0x3bfe20u: goto label_3bfe20;
        case 0x3bfe24u: goto label_3bfe24;
        case 0x3bfe28u: goto label_3bfe28;
        case 0x3bfe2cu: goto label_3bfe2c;
        case 0x3bfe30u: goto label_3bfe30;
        case 0x3bfe34u: goto label_3bfe34;
        case 0x3bfe38u: goto label_3bfe38;
        case 0x3bfe3cu: goto label_3bfe3c;
        case 0x3bfe40u: goto label_3bfe40;
        case 0x3bfe44u: goto label_3bfe44;
        case 0x3bfe48u: goto label_3bfe48;
        case 0x3bfe4cu: goto label_3bfe4c;
        case 0x3bfe50u: goto label_3bfe50;
        case 0x3bfe54u: goto label_3bfe54;
        case 0x3bfe58u: goto label_3bfe58;
        case 0x3bfe5cu: goto label_3bfe5c;
        case 0x3bfe60u: goto label_3bfe60;
        case 0x3bfe64u: goto label_3bfe64;
        case 0x3bfe68u: goto label_3bfe68;
        case 0x3bfe6cu: goto label_3bfe6c;
        case 0x3bfe70u: goto label_3bfe70;
        case 0x3bfe74u: goto label_3bfe74;
        case 0x3bfe78u: goto label_3bfe78;
        case 0x3bfe7cu: goto label_3bfe7c;
        case 0x3bfe80u: goto label_3bfe80;
        case 0x3bfe84u: goto label_3bfe84;
        case 0x3bfe88u: goto label_3bfe88;
        case 0x3bfe8cu: goto label_3bfe8c;
        case 0x3bfe90u: goto label_3bfe90;
        case 0x3bfe94u: goto label_3bfe94;
        case 0x3bfe98u: goto label_3bfe98;
        case 0x3bfe9cu: goto label_3bfe9c;
        case 0x3bfea0u: goto label_3bfea0;
        case 0x3bfea4u: goto label_3bfea4;
        case 0x3bfea8u: goto label_3bfea8;
        case 0x3bfeacu: goto label_3bfeac;
        case 0x3bfeb0u: goto label_3bfeb0;
        case 0x3bfeb4u: goto label_3bfeb4;
        case 0x3bfeb8u: goto label_3bfeb8;
        case 0x3bfebcu: goto label_3bfebc;
        case 0x3bfec0u: goto label_3bfec0;
        case 0x3bfec4u: goto label_3bfec4;
        case 0x3bfec8u: goto label_3bfec8;
        case 0x3bfeccu: goto label_3bfecc;
        case 0x3bfed0u: goto label_3bfed0;
        case 0x3bfed4u: goto label_3bfed4;
        case 0x3bfed8u: goto label_3bfed8;
        case 0x3bfedcu: goto label_3bfedc;
        case 0x3bfee0u: goto label_3bfee0;
        case 0x3bfee4u: goto label_3bfee4;
        case 0x3bfee8u: goto label_3bfee8;
        case 0x3bfeecu: goto label_3bfeec;
        case 0x3bfef0u: goto label_3bfef0;
        case 0x3bfef4u: goto label_3bfef4;
        case 0x3bfef8u: goto label_3bfef8;
        case 0x3bfefcu: goto label_3bfefc;
        case 0x3bff00u: goto label_3bff00;
        case 0x3bff04u: goto label_3bff04;
        case 0x3bff08u: goto label_3bff08;
        case 0x3bff0cu: goto label_3bff0c;
        case 0x3bff10u: goto label_3bff10;
        case 0x3bff14u: goto label_3bff14;
        case 0x3bff18u: goto label_3bff18;
        case 0x3bff1cu: goto label_3bff1c;
        case 0x3bff20u: goto label_3bff20;
        case 0x3bff24u: goto label_3bff24;
        case 0x3bff28u: goto label_3bff28;
        case 0x3bff2cu: goto label_3bff2c;
        case 0x3bff30u: goto label_3bff30;
        case 0x3bff34u: goto label_3bff34;
        case 0x3bff38u: goto label_3bff38;
        case 0x3bff3cu: goto label_3bff3c;
        case 0x3bff40u: goto label_3bff40;
        case 0x3bff44u: goto label_3bff44;
        case 0x3bff48u: goto label_3bff48;
        case 0x3bff4cu: goto label_3bff4c;
        case 0x3bff50u: goto label_3bff50;
        case 0x3bff54u: goto label_3bff54;
        case 0x3bff58u: goto label_3bff58;
        case 0x3bff5cu: goto label_3bff5c;
        case 0x3bff60u: goto label_3bff60;
        case 0x3bff64u: goto label_3bff64;
        case 0x3bff68u: goto label_3bff68;
        case 0x3bff6cu: goto label_3bff6c;
        case 0x3bff70u: goto label_3bff70;
        case 0x3bff74u: goto label_3bff74;
        case 0x3bff78u: goto label_3bff78;
        case 0x3bff7cu: goto label_3bff7c;
        case 0x3bff80u: goto label_3bff80;
        case 0x3bff84u: goto label_3bff84;
        case 0x3bff88u: goto label_3bff88;
        case 0x3bff8cu: goto label_3bff8c;
        case 0x3bff90u: goto label_3bff90;
        case 0x3bff94u: goto label_3bff94;
        case 0x3bff98u: goto label_3bff98;
        case 0x3bff9cu: goto label_3bff9c;
        case 0x3bffa0u: goto label_3bffa0;
        case 0x3bffa4u: goto label_3bffa4;
        case 0x3bffa8u: goto label_3bffa8;
        case 0x3bffacu: goto label_3bffac;
        default: break;
    }

    ctx->pc = 0x3bfcc8u;

label_3bfcc8:
    // 0x3bfcc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3bfcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3bfccc:
    // 0x3bfccc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3bfcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3bfcd0:
    // 0x3bfcd0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3bfcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3bfcd4:
    // 0x3bfcd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bfcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bfcd8:
    // 0x3bfcd8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3bfcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3bfcdc:
    // 0x3bfcdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3bfcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bfce0:
    // 0x3bfce0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3bfce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3bfce4:
    // 0x3bfce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bfce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfce8:
    // 0x3bfce8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3bfce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3bfcec:
    // 0x3bfcec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bfcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3bfcf0:
    // 0x3bfcf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bfcf4:
    // 0x3bfcf4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bfcf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfcf8:
    // 0x3bfcf8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfcfc:
    // 0x3bfcfc: 0x40f809  jalr        $v0
label_3bfd00:
    if (ctx->pc == 0x3BFD00u) {
        ctx->pc = 0x3BFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFCFCu;
        // 0x3bfd00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFD04u;
        goto label_3bfd04;
    }
    ctx->pc = 0x3BFCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFD04u);
        ctx->pc = 0x3BFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFCFCu;
        // 0x3bfd00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFCFCu, 0x3BFD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFD04u;
label_3bfd04:
    // 0x3bfd04: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3bfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3bfd08:
    // 0x3bfd08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bfd08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd0c:
    // 0x3bfd0c: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x3bfd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3bfd10:
    // 0x3bfd10: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_3bfd14:
    if (ctx->pc == 0x3BFD14u) {
        ctx->pc = 0x3BFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD10u;
        // 0x3bfd14: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFD18u;
        goto label_3bfd18;
    }
    ctx->pc = 0x3BFD10u;
    {
        const bool branch_taken_0x3bfd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD10u;
        // 0x3bfd14: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfd10) {
            ctx->pc = 0x3BFFB0u;
            return;
        }
    }
    ctx->pc = 0x3BFD18u;
label_3bfd18:
    // 0x3bfd18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3bfd1c:
    // 0x3bfd1c: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x3bfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
label_3bfd20:
    // 0x3bfd20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3bfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bfd24:
    // 0x3bfd24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3bfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bfd28:
    // 0x3bfd28: 0x800008  jr          $a0
label_3bfd2c:
    if (ctx->pc == 0x3BFD2Cu) {
        ctx->pc = 0x3BFD30u;
        goto label_3bfd30;
    }
    ctx->pc = 0x3BFD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BFD30u: goto label_3bfd30;
            case 0x3BFDF4u: goto label_3bfdf4;
            case 0x3BFE10u: goto label_3bfe10;
            case 0x3BFF14u: goto label_3bff14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFD28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3BFD30u;
label_3bfd30:
    // 0x3bfd30: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3bfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bfd34:
    // 0x3bfd34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3bfd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3bfd38:
    // 0x3bfd38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bfd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3bfd3c:
    // 0x3bfd3c: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3bfd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3bfd40:
    // 0x3bfd40: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3bfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3bfd44:
    // 0x3bfd44: 0x1460009b  bnez        $v1, . + 4 + (0x9B << 2)
label_3bfd48:
    if (ctx->pc == 0x3BFD48u) {
        ctx->pc = 0x3BFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD44u;
        // 0x3bfd48: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFD4Cu;
        goto label_3bfd4c;
    }
    ctx->pc = 0x3BFD44u;
    {
        const bool branch_taken_0x3bfd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD44u;
        // 0x3bfd48: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfd44) {
            ctx->pc = 0x3BFFB4u;
            return;
        }
    }
    ctx->pc = 0x3BFD4Cu;
label_3bfd4c:
    // 0x3bfd4c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3bfd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3bfd50:
    // 0x3bfd50: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3bfd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3bfd54:
    // 0x3bfd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3bfd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3bfd58:
    // 0x3bfd58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bfd5c:
    // 0x3bfd5c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3bfd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3bfd60:
    // 0x3bfd60: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3bfd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3bfd64:
    // 0x3bfd64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bfd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3bfd68:
    // 0x3bfd68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bfd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bfd6c:
    // 0x3bfd6c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3bfd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3bfd70:
    // 0x3bfd70: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3bfd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3bfd74:
    // 0x3bfd74: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3bfd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bfd78:
    // 0x3bfd78: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3bfd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3bfd7c:
    // 0x3bfd7c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3bfd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3bfd80:
    // 0x3bfd80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3bfd80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3bfd84:
    // 0x3bfd84: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3bfd84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3bfd88:
    // 0x3bfd88: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3bfd88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bfd8c:
    // 0x3bfd8c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3bfd8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bfd90:
    // 0x3bfd90: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3bfd90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3bfd94:
    // 0x3bfd94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3bfd94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bfd98:
    // 0x3bfd98: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3bfd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bfd9c:
    // 0x3bfd9c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3bfd9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3bfda0:
    // 0x3bfda0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3bfda0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bfda4:
    // 0x3bfda4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3bfda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3bfda8:
    // 0x3bfda8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3bfda8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3bfdac:
    // 0x3bfdac: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3bfdacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bfdb0:
    // 0x3bfdb0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3bfdb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bfdb4:
    // 0x3bfdb4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3bfdb4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bfdb8:
    // 0x3bfdb8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3bfdb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bfdbc:
    // 0x3bfdbc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3bfdbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bfdc0:
    // 0x3bfdc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3bfdc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3bfdc4:
    // 0x3bfdc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3bfdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3bfdc8:
    // 0x3bfdc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bfdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bfdcc:
    // 0x3bfdcc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3bfdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3bfdd0:
    // 0x3bfdd0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3bfdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bfdd4:
    // 0x3bfdd4: 0xc136b18  jal         func_4DAC60
label_3bfdd8:
    if (ctx->pc == 0x3BFDD8u) {
        ctx->pc = 0x3BFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDD4u;
        // 0x3bfdd8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDDCu;
        goto label_3bfddc;
    }
    ctx->pc = 0x3BFDD4u;
    SET_GPR_U32(ctx, 31, 0x3BFDDCu);
    ctx->pc = 0x3BFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFDD4u;
    // 0x3bfdd8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3BFDD4u, 0x3BFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFDDCu;
label_3bfddc:
    // 0x3bfddc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3bfddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bfde0:
    // 0x3bfde0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bfde4:
    // 0x3bfde4: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x3bfde4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_3bfde8:
    // 0x3bfde8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3bfde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3bfdec:
    // 0x3bfdec: 0x10000070  b           . + 4 + (0x70 << 2)
label_3bfdf0:
    if (ctx->pc == 0x3BFDF0u) {
        ctx->pc = 0x3BFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDECu;
        // 0x3bfdf0: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDF4u;
        goto label_3bfdf4;
    }
    ctx->pc = 0x3BFDECu;
    {
        const bool branch_taken_0x3bfdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDECu;
        // 0x3bfdf0: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfdec) {
            ctx->pc = 0x3BFFB0u;
            return;
        }
    }
    ctx->pc = 0x3BFDF4u;
label_3bfdf4:
    // 0x3bfdf4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bfdf8:
    // 0x3bfdf8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3bfdf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3bfdfc:
    // 0x3bfdfc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3bfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3bfe00:
    // 0x3bfe00: 0x60f809  jalr        $v1
label_3bfe04:
    if (ctx->pc == 0x3BFE04u) {
        ctx->pc = 0x3BFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE00u;
        // 0x3bfe04: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE08u;
        goto label_3bfe08;
    }
    ctx->pc = 0x3BFE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BFE08u);
        ctx->pc = 0x3BFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE00u;
        // 0x3bfe04: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFE00u, 0x3BFE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFE08u;
label_3bfe08:
    // 0x3bfe08: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3bfe0c:
    if (ctx->pc == 0x3BFE0Cu) {
        ctx->pc = 0x3BFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE08u;
        // 0x3bfe0c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE10u;
        goto label_3bfe10;
    }
    ctx->pc = 0x3BFE08u;
    {
        const bool branch_taken_0x3bfe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE08u;
        // 0x3bfe0c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe08) {
            ctx->pc = 0x3BFFB4u;
            return;
        }
    }
    ctx->pc = 0x3BFE10u;
label_3bfe10:
    // 0x3bfe10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfe14:
    // 0x3bfe14: 0xc0ea12a  jal         func_3A84A8
label_3bfe18:
    if (ctx->pc == 0x3BFE18u) {
        ctx->pc = 0x3BFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE14u;
        // 0x3bfe18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE1Cu;
        goto label_3bfe1c;
    }
    ctx->pc = 0x3BFE14u;
    SET_GPR_U32(ctx, 31, 0x3BFE1Cu);
    ctx->pc = 0x3BFE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE14u;
    // 0x3bfe18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFE14u, 0x3BFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE1Cu;
label_3bfe1c:
    // 0x3bfe1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfe1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfe20:
    // 0x3bfe20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfe24:
    // 0x3bfe24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bfe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe28:
    // 0x3bfe28: 0xc0ea12a  jal         func_3A84A8
label_3bfe2c:
    if (ctx->pc == 0x3BFE2Cu) {
        ctx->pc = 0x3BFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE28u;
        // 0x3bfe2c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE30u;
        goto label_3bfe30;
    }
    ctx->pc = 0x3BFE28u;
    SET_GPR_U32(ctx, 31, 0x3BFE30u);
    ctx->pc = 0x3BFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE28u;
    // 0x3bfe2c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFE28u, 0x3BFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE30u;
label_3bfe30:
    // 0x3bfe30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfe30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfe34:
    // 0x3bfe34: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3bfe34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3bfe38:
    // 0x3bfe38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bfe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3bfe3c:
    // 0x3bfe3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bfe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3bfe40:
    // 0x3bfe40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3bfe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3bfe44:
    // 0x3bfe44: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3bfe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3bfe48:
    // 0x3bfe48: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3bfe48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3bfe4c:
    // 0x3bfe4c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3bfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bfe50:
    // 0x3bfe50: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3bfe50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3bfe54:
    // 0x3bfe54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3bfe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bfe58:
    // 0x3bfe58: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3bfe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3bfe5c:
    // 0x3bfe5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3bfe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bfe60:
    // 0x3bfe60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bfe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3bfe64:
    // 0x3bfe64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bfe68:
    // 0x3bfe68: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3bfe68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3bfe6c:
    // 0x3bfe6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3bfe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3bfe70:
    // 0x3bfe70: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x3bfe70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3bfe74:
    // 0x3bfe74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3bfe74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3bfe78:
    // 0x3bfe78: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3bfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3bfe7c:
    // 0x3bfe7c: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x3bfe7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3bfe80:
    // 0x3bfe80: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3bfe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3bfe84:
    // 0x3bfe84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3bfe84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bfe88:
    // 0x3bfe88: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3bfe88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bfe8c:
    // 0x3bfe8c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3bfe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3bfe90:
    // 0x3bfe90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3bfe90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bfe94:
    // 0x3bfe94: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3bfe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3bfe98:
    // 0x3bfe98: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3bfe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3bfe9c:
    // 0x3bfe9c: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x3bfe9cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3bfea0:
    // 0x3bfea0: 0xc0cd518  jal         func_335460
label_3bfea4:
    if (ctx->pc == 0x3BFEA4u) {
        ctx->pc = 0x3BFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEA0u;
        // 0x3bfea4: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEA8u;
        goto label_3bfea8;
    }
    ctx->pc = 0x3BFEA0u;
    SET_GPR_U32(ctx, 31, 0x3BFEA8u);
    ctx->pc = 0x3BFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFEA0u;
    // 0x3bfea4: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3BFEA0u, 0x3BFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFEA8u;
label_3bfea8:
    // 0x3bfea8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3bfea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfeac:
    // 0x3bfeac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3bfeacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3bfeb0:
    // 0x3bfeb0: 0xc136b24  jal         func_4DAC90
label_3bfeb4:
    if (ctx->pc == 0x3BFEB4u) {
        ctx->pc = 0x3BFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEB0u;
        // 0x3bfeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEB8u;
        goto label_3bfeb8;
    }
    ctx->pc = 0x3BFEB0u;
    SET_GPR_U32(ctx, 31, 0x3BFEB8u);
    ctx->pc = 0x3BFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFEB0u;
    // 0x3bfeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3BFEB0u, 0x3BFEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFEB8u;
label_3bfeb8:
    // 0x3bfeb8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3bfeb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bfebc:
    // 0x3bfebc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bfec0:
    // 0x3bfec0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3bfec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3bfec4:
    // 0x3bfec4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bfec8:
    // 0x3bfec8: 0x40f809  jalr        $v0
label_3bfecc:
    if (ctx->pc == 0x3BFECCu) {
        ctx->pc = 0x3BFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEC8u;
        // 0x3bfecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFED0u;
        goto label_3bfed0;
    }
    ctx->pc = 0x3BFEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFED0u);
        ctx->pc = 0x3BFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEC8u;
        // 0x3bfecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFEC8u, 0x3BFED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFED0u;
label_3bfed0:
    // 0x3bfed0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bfed4:
    // 0x3bfed4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bfed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bfed8:
    // 0x3bfed8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3bfed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3bfedc:
    // 0x3bfedc: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3bfedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3bfee0:
    // 0x3bfee0: 0xc0f809  jalr        $a2
label_3bfee4:
    if (ctx->pc == 0x3BFEE4u) {
        ctx->pc = 0x3BFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEE0u;
        // 0x3bfee4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEE8u;
        goto label_3bfee8;
    }
    ctx->pc = 0x3BFEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3BFEE8u);
        ctx->pc = 0x3BFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEE0u;
        // 0x3bfee4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFEE0u, 0x3BFEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFEE8u;
label_3bfee8:
    // 0x3bfee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bfeec:
    // 0x3bfeec: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3bfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_3bfef0:
    // 0x3bfef0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bfef4:
    // 0x3bfef4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3bfef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3bfef8:
    // 0x3bfef8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3bfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3bfefc:
    // 0x3bfefc: 0x40f809  jalr        $v0
label_3bff00:
    if (ctx->pc == 0x3BFF00u) {
        ctx->pc = 0x3BFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEFCu;
        // 0x3bff00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF04u;
        goto label_3bff04;
    }
    ctx->pc = 0x3BFEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFF04u);
        ctx->pc = 0x3BFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEFCu;
        // 0x3bff00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFEFCu, 0x3BFF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFF04u;
label_3bff04:
    // 0x3bff04: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x3bff04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_3bff08:
    // 0x3bff08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3bff0c:
    // 0x3bff0c: 0x10000028  b           . + 4 + (0x28 << 2)
label_3bff10:
    if (ctx->pc == 0x3BFF10u) {
        ctx->pc = 0x3BFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF0Cu;
        // 0x3bff10: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF14u;
        goto label_3bff14;
    }
    ctx->pc = 0x3BFF0Cu;
    {
        const bool branch_taken_0x3bff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF0Cu;
        // 0x3bff10: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff0c) {
            ctx->pc = 0x3BFFB0u;
            return;
        }
    }
    ctx->pc = 0x3BFF14u;
label_3bff14:
    // 0x3bff14: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3bff14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3bff18:
    // 0x3bff18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3bff18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3bff1c:
    // 0x3bff1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3bff1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3bff20:
    // 0x3bff20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bff24:
    // 0x3bff24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3bff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3bff28:
    // 0x3bff28: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3bff28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3bff2c:
    // 0x3bff2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3bff30:
    // 0x3bff30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bff30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bff34:
    // 0x3bff34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3bff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3bff38:
    // 0x3bff38: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3bff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3bff3c:
    // 0x3bff3c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3bff3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bff40:
    // 0x3bff40: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3bff40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3bff44:
    // 0x3bff44: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3bff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3bff48:
    // 0x3bff48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3bff48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3bff4c:
    // 0x3bff4c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3bff4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3bff50:
    // 0x3bff50: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3bff50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bff54:
    // 0x3bff54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3bff54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bff58:
    // 0x3bff58: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3bff58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3bff5c:
    // 0x3bff5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3bff5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bff60:
    // 0x3bff60: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3bff60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bff64:
    // 0x3bff64: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3bff64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3bff68:
    // 0x3bff68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3bff68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bff6c:
    // 0x3bff6c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3bff6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3bff70:
    // 0x3bff70: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3bff70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3bff74:
    // 0x3bff74: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3bff74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bff78:
    // 0x3bff78: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3bff78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bff7c:
    // 0x3bff7c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3bff7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bff80:
    // 0x3bff80: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3bff80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bff84:
    // 0x3bff84: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3bff84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bff88:
    // 0x3bff88: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3bff88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3bff8c:
    // 0x3bff8c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3bff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3bff90:
    // 0x3bff90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bff94:
    // 0x3bff94: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3bff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3bff98:
    // 0x3bff98: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3bff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bff9c:
    // 0x3bff9c: 0xc136b18  jal         func_4DAC60
label_3bffa0:
    if (ctx->pc == 0x3BFFA0u) {
        ctx->pc = 0x3BFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF9Cu;
        // 0x3bffa0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFA4u;
        goto label_3bffa4;
    }
    ctx->pc = 0x3BFF9Cu;
    SET_GPR_U32(ctx, 31, 0x3BFFA4u);
    ctx->pc = 0x3BFFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFF9Cu;
    // 0x3bffa0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3BFF9Cu, 0x3BFFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFFA4u;
label_3bffa4:
    // 0x3bffa4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3bffa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bffa8:
    // 0x3bffa8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3bffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3bffac:
    // 0x3bffac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3bffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x3bffb0u;
}
