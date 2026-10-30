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

// Function: sub_003EBB70
// Address: 0x3ebb70 - 0x3ebed8
void sub_003EBB70_0x3ebb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBB70_0x3ebb70");
#endif

    switch (ctx->pc) {
        case 0x3ebb70u: goto label_3ebb70;
        case 0x3ebb74u: goto label_3ebb74;
        case 0x3ebb78u: goto label_3ebb78;
        case 0x3ebb7cu: goto label_3ebb7c;
        case 0x3ebb80u: goto label_3ebb80;
        case 0x3ebb84u: goto label_3ebb84;
        case 0x3ebb88u: goto label_3ebb88;
        case 0x3ebb8cu: goto label_3ebb8c;
        case 0x3ebb90u: goto label_3ebb90;
        case 0x3ebb94u: goto label_3ebb94;
        case 0x3ebb98u: goto label_3ebb98;
        case 0x3ebb9cu: goto label_3ebb9c;
        case 0x3ebba0u: goto label_3ebba0;
        case 0x3ebba4u: goto label_3ebba4;
        case 0x3ebba8u: goto label_3ebba8;
        case 0x3ebbacu: goto label_3ebbac;
        case 0x3ebbb0u: goto label_3ebbb0;
        case 0x3ebbb4u: goto label_3ebbb4;
        case 0x3ebbb8u: goto label_3ebbb8;
        case 0x3ebbbcu: goto label_3ebbbc;
        case 0x3ebbc0u: goto label_3ebbc0;
        case 0x3ebbc4u: goto label_3ebbc4;
        case 0x3ebbc8u: goto label_3ebbc8;
        case 0x3ebbccu: goto label_3ebbcc;
        case 0x3ebbd0u: goto label_3ebbd0;
        case 0x3ebbd4u: goto label_3ebbd4;
        case 0x3ebbd8u: goto label_3ebbd8;
        case 0x3ebbdcu: goto label_3ebbdc;
        case 0x3ebbe0u: goto label_3ebbe0;
        case 0x3ebbe4u: goto label_3ebbe4;
        case 0x3ebbe8u: goto label_3ebbe8;
        case 0x3ebbecu: goto label_3ebbec;
        case 0x3ebbf0u: goto label_3ebbf0;
        case 0x3ebbf4u: goto label_3ebbf4;
        case 0x3ebbf8u: goto label_3ebbf8;
        case 0x3ebbfcu: goto label_3ebbfc;
        case 0x3ebc00u: goto label_3ebc00;
        case 0x3ebc04u: goto label_3ebc04;
        case 0x3ebc08u: goto label_3ebc08;
        case 0x3ebc0cu: goto label_3ebc0c;
        case 0x3ebc10u: goto label_3ebc10;
        case 0x3ebc14u: goto label_3ebc14;
        case 0x3ebc18u: goto label_3ebc18;
        case 0x3ebc1cu: goto label_3ebc1c;
        case 0x3ebc20u: goto label_3ebc20;
        case 0x3ebc24u: goto label_3ebc24;
        case 0x3ebc28u: goto label_3ebc28;
        case 0x3ebc2cu: goto label_3ebc2c;
        case 0x3ebc30u: goto label_3ebc30;
        case 0x3ebc34u: goto label_3ebc34;
        case 0x3ebc38u: goto label_3ebc38;
        case 0x3ebc3cu: goto label_3ebc3c;
        case 0x3ebc40u: goto label_3ebc40;
        case 0x3ebc44u: goto label_3ebc44;
        case 0x3ebc48u: goto label_3ebc48;
        case 0x3ebc4cu: goto label_3ebc4c;
        case 0x3ebc50u: goto label_3ebc50;
        case 0x3ebc54u: goto label_3ebc54;
        case 0x3ebc58u: goto label_3ebc58;
        case 0x3ebc5cu: goto label_3ebc5c;
        case 0x3ebc60u: goto label_3ebc60;
        case 0x3ebc64u: goto label_3ebc64;
        case 0x3ebc68u: goto label_3ebc68;
        case 0x3ebc6cu: goto label_3ebc6c;
        case 0x3ebc70u: goto label_3ebc70;
        case 0x3ebc74u: goto label_3ebc74;
        case 0x3ebc78u: goto label_3ebc78;
        case 0x3ebc7cu: goto label_3ebc7c;
        case 0x3ebc80u: goto label_3ebc80;
        case 0x3ebc84u: goto label_3ebc84;
        case 0x3ebc88u: goto label_3ebc88;
        case 0x3ebc8cu: goto label_3ebc8c;
        case 0x3ebc90u: goto label_3ebc90;
        case 0x3ebc94u: goto label_3ebc94;
        case 0x3ebc98u: goto label_3ebc98;
        case 0x3ebc9cu: goto label_3ebc9c;
        case 0x3ebca0u: goto label_3ebca0;
        case 0x3ebca4u: goto label_3ebca4;
        case 0x3ebca8u: goto label_3ebca8;
        case 0x3ebcacu: goto label_3ebcac;
        case 0x3ebcb0u: goto label_3ebcb0;
        case 0x3ebcb4u: goto label_3ebcb4;
        case 0x3ebcb8u: goto label_3ebcb8;
        case 0x3ebcbcu: goto label_3ebcbc;
        case 0x3ebcc0u: goto label_3ebcc0;
        case 0x3ebcc4u: goto label_3ebcc4;
        case 0x3ebcc8u: goto label_3ebcc8;
        case 0x3ebcccu: goto label_3ebccc;
        case 0x3ebcd0u: goto label_3ebcd0;
        case 0x3ebcd4u: goto label_3ebcd4;
        case 0x3ebcd8u: goto label_3ebcd8;
        case 0x3ebcdcu: goto label_3ebcdc;
        case 0x3ebce0u: goto label_3ebce0;
        case 0x3ebce4u: goto label_3ebce4;
        case 0x3ebce8u: goto label_3ebce8;
        case 0x3ebcecu: goto label_3ebcec;
        case 0x3ebcf0u: goto label_3ebcf0;
        case 0x3ebcf4u: goto label_3ebcf4;
        case 0x3ebcf8u: goto label_3ebcf8;
        case 0x3ebcfcu: goto label_3ebcfc;
        case 0x3ebd00u: goto label_3ebd00;
        case 0x3ebd04u: goto label_3ebd04;
        case 0x3ebd08u: goto label_3ebd08;
        case 0x3ebd0cu: goto label_3ebd0c;
        case 0x3ebd10u: goto label_3ebd10;
        case 0x3ebd14u: goto label_3ebd14;
        case 0x3ebd18u: goto label_3ebd18;
        case 0x3ebd1cu: goto label_3ebd1c;
        case 0x3ebd20u: goto label_3ebd20;
        case 0x3ebd24u: goto label_3ebd24;
        case 0x3ebd28u: goto label_3ebd28;
        case 0x3ebd2cu: goto label_3ebd2c;
        case 0x3ebd30u: goto label_3ebd30;
        case 0x3ebd34u: goto label_3ebd34;
        case 0x3ebd38u: goto label_3ebd38;
        case 0x3ebd3cu: goto label_3ebd3c;
        case 0x3ebd40u: goto label_3ebd40;
        case 0x3ebd44u: goto label_3ebd44;
        case 0x3ebd48u: goto label_3ebd48;
        case 0x3ebd4cu: goto label_3ebd4c;
        case 0x3ebd50u: goto label_3ebd50;
        case 0x3ebd54u: goto label_3ebd54;
        case 0x3ebd58u: goto label_3ebd58;
        case 0x3ebd5cu: goto label_3ebd5c;
        case 0x3ebd60u: goto label_3ebd60;
        case 0x3ebd64u: goto label_3ebd64;
        case 0x3ebd68u: goto label_3ebd68;
        case 0x3ebd6cu: goto label_3ebd6c;
        case 0x3ebd70u: goto label_3ebd70;
        case 0x3ebd74u: goto label_3ebd74;
        case 0x3ebd78u: goto label_3ebd78;
        case 0x3ebd7cu: goto label_3ebd7c;
        case 0x3ebd80u: goto label_3ebd80;
        case 0x3ebd84u: goto label_3ebd84;
        case 0x3ebd88u: goto label_3ebd88;
        case 0x3ebd8cu: goto label_3ebd8c;
        case 0x3ebd90u: goto label_3ebd90;
        case 0x3ebd94u: goto label_3ebd94;
        case 0x3ebd98u: goto label_3ebd98;
        case 0x3ebd9cu: goto label_3ebd9c;
        case 0x3ebda0u: goto label_3ebda0;
        case 0x3ebda4u: goto label_3ebda4;
        case 0x3ebda8u: goto label_3ebda8;
        case 0x3ebdacu: goto label_3ebdac;
        case 0x3ebdb0u: goto label_3ebdb0;
        case 0x3ebdb4u: goto label_3ebdb4;
        case 0x3ebdb8u: goto label_3ebdb8;
        case 0x3ebdbcu: goto label_3ebdbc;
        case 0x3ebdc0u: goto label_3ebdc0;
        case 0x3ebdc4u: goto label_3ebdc4;
        case 0x3ebdc8u: goto label_3ebdc8;
        case 0x3ebdccu: goto label_3ebdcc;
        case 0x3ebdd0u: goto label_3ebdd0;
        case 0x3ebdd4u: goto label_3ebdd4;
        case 0x3ebdd8u: goto label_3ebdd8;
        case 0x3ebddcu: goto label_3ebddc;
        case 0x3ebde0u: goto label_3ebde0;
        case 0x3ebde4u: goto label_3ebde4;
        case 0x3ebde8u: goto label_3ebde8;
        case 0x3ebdecu: goto label_3ebdec;
        case 0x3ebdf0u: goto label_3ebdf0;
        case 0x3ebdf4u: goto label_3ebdf4;
        case 0x3ebdf8u: goto label_3ebdf8;
        case 0x3ebdfcu: goto label_3ebdfc;
        case 0x3ebe00u: goto label_3ebe00;
        case 0x3ebe04u: goto label_3ebe04;
        case 0x3ebe08u: goto label_3ebe08;
        case 0x3ebe0cu: goto label_3ebe0c;
        case 0x3ebe10u: goto label_3ebe10;
        case 0x3ebe14u: goto label_3ebe14;
        case 0x3ebe18u: goto label_3ebe18;
        case 0x3ebe1cu: goto label_3ebe1c;
        case 0x3ebe20u: goto label_3ebe20;
        case 0x3ebe24u: goto label_3ebe24;
        case 0x3ebe28u: goto label_3ebe28;
        case 0x3ebe2cu: goto label_3ebe2c;
        case 0x3ebe30u: goto label_3ebe30;
        case 0x3ebe34u: goto label_3ebe34;
        case 0x3ebe38u: goto label_3ebe38;
        case 0x3ebe3cu: goto label_3ebe3c;
        case 0x3ebe40u: goto label_3ebe40;
        case 0x3ebe44u: goto label_3ebe44;
        case 0x3ebe48u: goto label_3ebe48;
        case 0x3ebe4cu: goto label_3ebe4c;
        case 0x3ebe50u: goto label_3ebe50;
        case 0x3ebe54u: goto label_3ebe54;
        case 0x3ebe58u: goto label_3ebe58;
        case 0x3ebe5cu: goto label_3ebe5c;
        case 0x3ebe60u: goto label_3ebe60;
        case 0x3ebe64u: goto label_3ebe64;
        case 0x3ebe68u: goto label_3ebe68;
        case 0x3ebe6cu: goto label_3ebe6c;
        case 0x3ebe70u: goto label_3ebe70;
        case 0x3ebe74u: goto label_3ebe74;
        case 0x3ebe78u: goto label_3ebe78;
        case 0x3ebe7cu: goto label_3ebe7c;
        case 0x3ebe80u: goto label_3ebe80;
        case 0x3ebe84u: goto label_3ebe84;
        case 0x3ebe88u: goto label_3ebe88;
        case 0x3ebe8cu: goto label_3ebe8c;
        case 0x3ebe90u: goto label_3ebe90;
        case 0x3ebe94u: goto label_3ebe94;
        case 0x3ebe98u: goto label_3ebe98;
        case 0x3ebe9cu: goto label_3ebe9c;
        case 0x3ebea0u: goto label_3ebea0;
        case 0x3ebea4u: goto label_3ebea4;
        case 0x3ebea8u: goto label_3ebea8;
        case 0x3ebeacu: goto label_3ebeac;
        case 0x3ebeb0u: goto label_3ebeb0;
        case 0x3ebeb4u: goto label_3ebeb4;
        case 0x3ebeb8u: goto label_3ebeb8;
        case 0x3ebebcu: goto label_3ebebc;
        case 0x3ebec0u: goto label_3ebec0;
        case 0x3ebec4u: goto label_3ebec4;
        case 0x3ebec8u: goto label_3ebec8;
        case 0x3ebeccu: goto label_3ebecc;
        case 0x3ebed0u: goto label_3ebed0;
        case 0x3ebed4u: goto label_3ebed4;
        default: break;
    }

    ctx->pc = 0x3ebb70u;

label_3ebb70:
    // 0x3ebb70: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x3ebb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
label_3ebb74:
    // 0x3ebb74: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3ebb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3ebb78:
    // 0x3ebb78: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x3ebb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
label_3ebb7c:
    // 0x3ebb7c: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x3ebb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
label_3ebb80:
    // 0x3ebb80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ebb80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ebb84:
    // 0x3ebb84: 0x7fb60440  sq          $s6, 0x440($sp)
    ctx->pc = 0x3ebb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 22));
label_3ebb88:
    // 0x3ebb88: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3ebb88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_3ebb8c:
    // 0x3ebb8c: 0x7fb70430  sq          $s7, 0x430($sp)
    ctx->pc = 0x3ebb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 23));
label_3ebb90:
    // 0x3ebb90: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x3ebb90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_3ebb94:
    // 0x3ebb94: 0x7fbe0420  sq          $fp, 0x420($sp)
    ctx->pc = 0x3ebb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 30));
label_3ebb98:
    // 0x3ebb98: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3ebb98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_3ebb9c:
    // 0x3ebb9c: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3ebb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3ebba0:
    // 0x3ebba0: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x3ebba0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
label_3ebba4:
    // 0x3ebba4: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3ebba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3ebba8:
    // 0x3ebba8: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x3ebba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
label_3ebbac:
    // 0x3ebbac: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3ebbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3ebbb0:
    // 0x3ebbb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ebbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ebbb4:
    // 0x3ebbb4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ebbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ebbb8:
    // 0x3ebbb8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ebbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ebbbc:
    // 0x3ebbbc: 0x40f809  jalr        $v0
label_3ebbc0:
    if (ctx->pc == 0x3EBBC0u) {
        ctx->pc = 0x3EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBBCu;
        // 0x3ebbc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBBC4u;
        goto label_3ebbc4;
    }
    ctx->pc = 0x3EBBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBBC4u);
        ctx->pc = 0x3EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBBCu;
        // 0x3ebbc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBBBCu, 0x3EBBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBBC4u;
label_3ebbc4:
    // 0x3ebbc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ebbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebbc8:
    // 0x3ebbc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ebbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ebbcc:
    // 0x3ebbcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ebbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ebbd0:
    // 0x3ebbd0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ebbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ebbd4:
    // 0x3ebbd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ebbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ebbd8:
    // 0x3ebbd8: 0x0  nop
    ctx->pc = 0x3ebbd8u;
    // NOP
label_3ebbdc:
    // 0x3ebbdc: 0x0  nop
    ctx->pc = 0x3ebbdcu;
    // NOP
label_3ebbe0:
    // 0x3ebbe0: 0x0  nop
    ctx->pc = 0x3ebbe0u;
    // NOP
label_3ebbe4:
    // 0x3ebbe4: 0x0  nop
    ctx->pc = 0x3ebbe4u;
    // NOP
label_3ebbe8:
    // 0x3ebbe8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ebbec:
    if (ctx->pc == 0x3EBBECu) {
        ctx->pc = 0x3EBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBE8u;
        // 0x3ebbec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBBF0u;
        goto label_3ebbf0;
    }
    ctx->pc = 0x3EBBE8u;
    {
        const bool branch_taken_0x3ebbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBE8u;
        // 0x3ebbec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbe8) {
            ctx->pc = 0x3EBBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebbd8;
        }
    }
    ctx->pc = 0x3EBBF0u;
label_3ebbf0:
    // 0x3ebbf0: 0xc138ddc  jal         func_4E3770
label_3ebbf4:
    if (ctx->pc == 0x3EBBF4u) {
        ctx->pc = 0x3EBBF8u;
        goto label_3ebbf8;
    }
    ctx->pc = 0x3EBBF0u;
    SET_GPR_U32(ctx, 31, 0x3EBBF8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3EBBF0u, 0x3EBBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBBF8u;
label_3ebbf8:
    // 0x3ebbf8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3ebbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ebbfc:
    // 0x3ebbfc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3ebc00:
    if (ctx->pc == 0x3EBC00u) {
        ctx->pc = 0x3EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBFCu;
        // 0x3ebc00: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC04u;
        goto label_3ebc04;
    }
    ctx->pc = 0x3EBBFCu;
    {
        const bool branch_taken_0x3ebbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBFCu;
        // 0x3ebc00: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbfc) {
            ctx->pc = 0x3EBC74u;
            goto label_3ebc74;
        }
    }
    ctx->pc = 0x3EBC04u;
label_3ebc04:
    // 0x3ebc04: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3ebc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3ebc08:
    // 0x3ebc08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ebc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ebc0c:
    // 0x3ebc0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ebc10:
    if (ctx->pc == 0x3EBC10u) {
        ctx->pc = 0x3EBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC0Cu;
        // 0x3ebc10: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC14u;
        goto label_3ebc14;
    }
    ctx->pc = 0x3EBC0Cu;
    {
        const bool branch_taken_0x3ebc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC0Cu;
        // 0x3ebc10: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc0c) {
            ctx->pc = 0x3EBC1Cu;
            goto label_3ebc1c;
        }
    }
    ctx->pc = 0x3EBC14u;
label_3ebc14:
    // 0x3ebc14: 0x10000012  b           . + 4 + (0x12 << 2)
label_3ebc18:
    if (ctx->pc == 0x3EBC18u) {
        ctx->pc = 0x3EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC14u;
        // 0x3ebc18: 0x92500005  lbu         $s0, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC1Cu;
        goto label_3ebc1c;
    }
    ctx->pc = 0x3EBC14u;
    {
        const bool branch_taken_0x3ebc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC14u;
        // 0x3ebc18: 0x92500005  lbu         $s0, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc14) {
            ctx->pc = 0x3EBC60u;
            goto label_3ebc60;
        }
    }
    ctx->pc = 0x3EBC1Cu;
label_3ebc1c:
    // 0x3ebc1c: 0x92500004  lbu         $s0, 0x4($s2)
    ctx->pc = 0x3ebc1cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3ebc20:
    // 0x3ebc20: 0xc043d5e  jal         func_10F578
label_3ebc24:
    if (ctx->pc == 0x3EBC24u) {
        ctx->pc = 0x3EBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC20u;
        // 0x3ebc24: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC28u;
        goto label_3ebc28;
    }
    ctx->pc = 0x3EBC20u;
    SET_GPR_U32(ctx, 31, 0x3EBC28u);
    ctx->pc = 0x3EBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBC20u;
    // 0x3ebc24: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EBC20u, 0x3EBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBC28u;
label_3ebc28:
    // 0x3ebc28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3ebc2c:
    if (ctx->pc == 0x3EBC2Cu) {
        ctx->pc = 0x3EBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC28u;
        // 0x3ebc2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC30u;
        goto label_3ebc30;
    }
    ctx->pc = 0x3EBC28u;
    {
        const bool branch_taken_0x3ebc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC28u;
        // 0x3ebc2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc28) {
            ctx->pc = 0x3EBC64u;
            goto label_3ebc64;
        }
    }
    ctx->pc = 0x3EBC30u;
label_3ebc30:
    // 0x3ebc30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ebc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ebc34:
    // 0x3ebc34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ebc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ebc38:
    // 0x3ebc38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ebc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ebc3c:
    // 0x3ebc3c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ebc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ebc40:
    // 0x3ebc40: 0x3c05f164  lui         $a1, 0xF164
    ctx->pc = 0x3ebc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61796 << 16));
label_3ebc44:
    // 0x3ebc44: 0x34a5dfe0  ori         $a1, $a1, 0xDFE0
    ctx->pc = 0x3ebc44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57312);
label_3ebc48:
    // 0x3ebc48: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x3ebc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3ebc4c:
    // 0x3ebc4c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ebc4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ebc50:
    // 0x3ebc50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ebc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ebc54:
    // 0x3ebc54: 0xc043f74  jal         func_10FDD0
label_3ebc58:
    if (ctx->pc == 0x3EBC58u) {
        ctx->pc = 0x3EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC54u;
        // 0x3ebc58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC5Cu;
        goto label_3ebc5c;
    }
    ctx->pc = 0x3EBC54u;
    SET_GPR_U32(ctx, 31, 0x3EBC5Cu);
    ctx->pc = 0x3EBC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBC54u;
    // 0x3ebc58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3EBC54u, 0x3EBC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBC5Cu;
label_3ebc5c:
    // 0x3ebc5c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3ebc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3ebc60:
    // 0x3ebc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ebc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc64:
    // 0x3ebc64: 0xc0e858c  jal         func_3A1630
label_3ebc68:
    if (ctx->pc == 0x3EBC68u) {
        ctx->pc = 0x3EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC64u;
        // 0x3ebc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC6Cu;
        goto label_3ebc6c;
    }
    ctx->pc = 0x3EBC64u;
    SET_GPR_U32(ctx, 31, 0x3EBC6Cu);
    ctx->pc = 0x3EBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBC64u;
    // 0x3ebc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EBC64u, 0x3EBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBC6Cu;
label_3ebc6c:
    // 0x3ebc6c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ebc70:
    if (ctx->pc == 0x3EBC70u) {
        ctx->pc = 0x3EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC6Cu;
        // 0x3ebc70: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC74u;
        goto label_3ebc74;
    }
    ctx->pc = 0x3EBC6Cu;
    {
        const bool branch_taken_0x3ebc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC6Cu;
        // 0x3ebc70: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc6c) {
            ctx->pc = 0x3EBCACu;
            goto label_3ebcac;
        }
    }
    ctx->pc = 0x3EBC74u;
label_3ebc74:
    // 0x3ebc74: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3ebc74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ebc78:
    // 0x3ebc78: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ebc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ebc7c:
    // 0x3ebc7c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ebc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ebc80:
    // 0x3ebc80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ebc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ebc84:
    // 0x3ebc84: 0x118402  srl         $s0, $s1, 16
    ctx->pc = 0x3ebc84u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
label_3ebc88:
    // 0x3ebc88: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3ebc88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3ebc8c:
    // 0x3ebc8c: 0xc0cd4ee  jal         func_3353B8
label_3ebc90:
    if (ctx->pc == 0x3EBC90u) {
        ctx->pc = 0x3EBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC8Cu;
        // 0x3ebc90: 0x118e02  srl         $s1, $s1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBC94u;
        goto label_3ebc94;
    }
    ctx->pc = 0x3EBC8Cu;
    SET_GPR_U32(ctx, 31, 0x3EBC94u);
    ctx->pc = 0x3EBC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBC8Cu;
    // 0x3ebc90: 0x118e02  srl         $s1, $s1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EBC8Cu, 0x3EBC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBC94u;
label_3ebc94:
    // 0x3ebc94: 0x101823  negu        $v1, $s0
    ctx->pc = 0x3ebc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_3ebc98:
    // 0x3ebc98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ebc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc9c:
    // 0x3ebc9c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3ebc9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3ebca0:
    // 0x3ebca0: 0xc0e858c  jal         func_3A1630
label_3ebca4:
    if (ctx->pc == 0x3EBCA4u) {
        ctx->pc = 0x3EBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCA0u;
        // 0x3ebca4: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCA8u;
        goto label_3ebca8;
    }
    ctx->pc = 0x3EBCA0u;
    SET_GPR_U32(ctx, 31, 0x3EBCA8u);
    ctx->pc = 0x3EBCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBCA0u;
    // 0x3ebca4: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EBCA0u, 0x3EBCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBCA8u;
label_3ebca8:
    // 0x3ebca8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ebca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ebcac:
    // 0x3ebcac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3ebcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3ebcb0:
    // 0x3ebcb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ebcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ebcb4:
    // 0x3ebcb4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_3ebcb8:
    if (ctx->pc == 0x3EBCB8u) {
        ctx->pc = 0x3EBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCB4u;
        // 0x3ebcb8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCBCu;
        goto label_3ebcbc;
    }
    ctx->pc = 0x3EBCB4u;
    {
        const bool branch_taken_0x3ebcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcb4) {
            ctx->pc = 0x3EBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBCB4u;
            // 0x3ebcb8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBD38u;
            goto label_3ebd38;
        }
    }
    ctx->pc = 0x3EBCBCu;
label_3ebcbc:
    // 0x3ebcbc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3ebcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ebcc0:
    // 0x3ebcc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3ebcc4:
    if (ctx->pc == 0x3EBCC4u) {
        ctx->pc = 0x3EBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCC0u;
        // 0x3ebcc4: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCC8u;
        goto label_3ebcc8;
    }
    ctx->pc = 0x3EBCC0u;
    {
        const bool branch_taken_0x3ebcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcc0) {
            ctx->pc = 0x3EBCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBCC0u;
            // 0x3ebcc4: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBCDCu;
            goto label_3ebcdc;
        }
    }
    ctx->pc = 0x3EBCC8u;
label_3ebcc8:
    // 0x3ebcc8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ebcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ebccc:
    // 0x3ebccc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3ebcd0:
    if (ctx->pc == 0x3EBCD0u) {
        ctx->pc = 0x3EBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCCCu;
        // 0x3ebcd0: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCD4u;
        goto label_3ebcd4;
    }
    ctx->pc = 0x3EBCCCu;
    {
        const bool branch_taken_0x3ebccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebccc) {
            ctx->pc = 0x3EBCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBCCCu;
            // 0x3ebcd0: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBD18u;
            goto label_3ebd18;
        }
    }
    ctx->pc = 0x3EBCD4u;
label_3ebcd4:
    // 0x3ebcd4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3ebcd8:
    if (ctx->pc == 0x3EBCD8u) {
        ctx->pc = 0x3EBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCD4u;
        // 0x3ebcd8: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCDCu;
        goto label_3ebcdc;
    }
    ctx->pc = 0x3EBCD4u;
    {
        const bool branch_taken_0x3ebcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCD4u;
        // 0x3ebcd8: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebcd4) {
            ctx->pc = 0x3EBD18u;
            goto label_3ebd18;
        }
    }
    ctx->pc = 0x3EBCDCu;
label_3ebcdc:
    // 0x3ebcdc: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x3ebcdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_3ebce0:
    // 0x3ebce0: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ebce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ebce4:
    // 0x3ebce4: 0xc0cd4ee  jal         func_3353B8
label_3ebce8:
    if (ctx->pc == 0x3EBCE8u) {
        ctx->pc = 0x3EBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCE4u;
        // 0x3ebce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCECu;
        goto label_3ebcec;
    }
    ctx->pc = 0x3EBCE4u;
    SET_GPR_U32(ctx, 31, 0x3EBCECu);
    ctx->pc = 0x3EBCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBCE4u;
    // 0x3ebce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EBCE4u, 0x3EBCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBCECu;
label_3ebcec:
    // 0x3ebcec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ebcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebcf0:
    // 0x3ebcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ebcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebcf4:
    // 0x3ebcf4: 0xc0cd4ee  jal         func_3353B8
label_3ebcf8:
    if (ctx->pc == 0x3EBCF8u) {
        ctx->pc = 0x3EBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCF4u;
        // 0x3ebcf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBCFCu;
        goto label_3ebcfc;
    }
    ctx->pc = 0x3EBCF4u;
    SET_GPR_U32(ctx, 31, 0x3EBCFCu);
    ctx->pc = 0x3EBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBCF4u;
    // 0x3ebcf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EBCF4u, 0x3EBCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBCFCu;
label_3ebcfc:
    // 0x3ebcfc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3ebcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ebd00:
    // 0x3ebd00: 0x112023  negu        $a0, $s1
    ctx->pc = 0x3ebd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3ebd04:
    // 0x3ebd04: 0x92450007  lbu         $a1, 0x7($s2)
    ctx->pc = 0x3ebd04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_3ebd08:
    // 0x3ebd08: 0x82880b  movn        $s1, $a0, $v0
    ctx->pc = 0x3ebd08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_3ebd0c:
    // 0x3ebd0c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3ebd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3ebd10:
    // 0x3ebd10: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3ebd10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_3ebd14:
    // 0x3ebd14: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x3ebd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3ebd18:
    // 0x3ebd18: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3ebd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ebd1c:
    // 0x3ebd1c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3ebd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ebd20:
    // 0x3ebd20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ebd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ebd24:
    // 0x3ebd24: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x3ebd24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
label_3ebd28:
    // 0x3ebd28: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3ebd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3ebd2c:
    // 0x3ebd2c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3ebd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_3ebd30:
    // 0x3ebd30: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3ebd30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3ebd34:
    // 0x3ebd34: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3ebd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3ebd38:
    // 0x3ebd38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd3c:
    // 0x3ebd3c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3ebd40:
    if (ctx->pc == 0x3EBD40u) {
        ctx->pc = 0x3EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD3Cu;
        // 0x3ebd40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD44u;
        goto label_3ebd44;
    }
    ctx->pc = 0x3EBD3Cu;
    {
        const bool branch_taken_0x3ebd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD3Cu;
        // 0x3ebd40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd3c) {
            ctx->pc = 0x3EBDCCu;
            goto label_3ebdcc;
        }
    }
    ctx->pc = 0x3EBD44u;
label_3ebd44:
    // 0x3ebd44: 0x26a55bf0  addiu       $a1, $s5, 0x5BF0
    ctx->pc = 0x3ebd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23536));
label_3ebd48:
    // 0x3ebd48: 0xc0e9666  jal         func_3A5998
label_3ebd4c:
    if (ctx->pc == 0x3EBD4Cu) {
        ctx->pc = 0x3EBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD48u;
        // 0x3ebd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD50u;
        goto label_3ebd50;
    }
    ctx->pc = 0x3EBD48u;
    SET_GPR_U32(ctx, 31, 0x3EBD50u);
    ctx->pc = 0x3EBD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBD48u;
    // 0x3ebd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBD48u, 0x3EBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBD50u;
label_3ebd50:
    // 0x3ebd50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ebd54:
    if (ctx->pc == 0x3EBD54u) {
        ctx->pc = 0x3EBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD50u;
        // 0x3ebd54: 0x26c55ba8  addiu       $a1, $s6, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 23464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD58u;
        goto label_3ebd58;
    }
    ctx->pc = 0x3EBD50u;
    {
        const bool branch_taken_0x3ebd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD50u;
        // 0x3ebd54: 0x26c55ba8  addiu       $a1, $s6, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 23464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd50) {
            ctx->pc = 0x3EBD68u;
            goto label_3ebd68;
        }
    }
    ctx->pc = 0x3EBD58u;
label_3ebd58:
    // 0x3ebd58: 0x3c11e76d  lui         $s1, 0xE76D
    ctx->pc = 0x3ebd58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59245 << 16));
label_3ebd5c:
    // 0x3ebd5c: 0x3c10661a  lui         $s0, 0x661A
    ctx->pc = 0x3ebd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26138 << 16));
label_3ebd60:
    // 0x3ebd60: 0x363100ff  ori         $s1, $s1, 0xFF
    ctx->pc = 0x3ebd60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)255);
label_3ebd64:
    // 0x3ebd64: 0x36106599  ori         $s0, $s0, 0x6599
    ctx->pc = 0x3ebd64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)26009);
label_3ebd68:
    // 0x3ebd68: 0xc0e9666  jal         func_3A5998
label_3ebd6c:
    if (ctx->pc == 0x3EBD6Cu) {
        ctx->pc = 0x3EBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD68u;
        // 0x3ebd6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD70u;
        goto label_3ebd70;
    }
    ctx->pc = 0x3EBD68u;
    SET_GPR_U32(ctx, 31, 0x3EBD70u);
    ctx->pc = 0x3EBD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBD68u;
    // 0x3ebd6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBD68u, 0x3EBD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBD70u;
label_3ebd70:
    // 0x3ebd70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ebd74:
    if (ctx->pc == 0x3EBD74u) {
        ctx->pc = 0x3EBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD70u;
        // 0x3ebd74: 0x26e55bc0  addiu       $a1, $s7, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD78u;
        goto label_3ebd78;
    }
    ctx->pc = 0x3EBD70u;
    {
        const bool branch_taken_0x3ebd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD70u;
        // 0x3ebd74: 0x26e55bc0  addiu       $a1, $s7, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd70) {
            ctx->pc = 0x3EBD88u;
            goto label_3ebd88;
        }
    }
    ctx->pc = 0x3EBD78u;
label_3ebd78:
    // 0x3ebd78: 0x3c119727  lui         $s1, 0x9727
    ctx->pc = 0x3ebd78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38695 << 16));
label_3ebd7c:
    // 0x3ebd7c: 0x3c100f8f  lui         $s0, 0xF8F
    ctx->pc = 0x3ebd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3983 << 16));
label_3ebd80:
    // 0x3ebd80: 0x363124ff  ori         $s1, $s1, 0x24FF
    ctx->pc = 0x3ebd80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)9471);
label_3ebd84:
    // 0x3ebd84: 0x3610cdb6  ori         $s0, $s0, 0xCDB6
    ctx->pc = 0x3ebd84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)52662);
label_3ebd88:
    // 0x3ebd88: 0xc0e9666  jal         func_3A5998
label_3ebd8c:
    if (ctx->pc == 0x3EBD8Cu) {
        ctx->pc = 0x3EBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD88u;
        // 0x3ebd8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD90u;
        goto label_3ebd90;
    }
    ctx->pc = 0x3EBD88u;
    SET_GPR_U32(ctx, 31, 0x3EBD90u);
    ctx->pc = 0x3EBD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBD88u;
    // 0x3ebd8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBD88u, 0x3EBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBD90u;
label_3ebd90:
    // 0x3ebd90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ebd94:
    if (ctx->pc == 0x3EBD94u) {
        ctx->pc = 0x3EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD90u;
        // 0x3ebd94: 0x27c55be0  addiu       $a1, $fp, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBD98u;
        goto label_3ebd98;
    }
    ctx->pc = 0x3EBD90u;
    {
        const bool branch_taken_0x3ebd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD90u;
        // 0x3ebd94: 0x27c55be0  addiu       $a1, $fp, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd90) {
            ctx->pc = 0x3EBDA4u;
            goto label_3ebda4;
        }
    }
    ctx->pc = 0x3EBD98u;
label_3ebd98:
    // 0x3ebd98: 0x3c102607  lui         $s0, 0x2607
    ctx->pc = 0x3ebd98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)9735 << 16));
label_3ebd9c:
    // 0x3ebd9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebda0:
    // 0x3ebda0: 0x36101645  ori         $s0, $s0, 0x1645
    ctx->pc = 0x3ebda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5701);
label_3ebda4:
    // 0x3ebda4: 0xc0e9666  jal         func_3A5998
label_3ebda8:
    if (ctx->pc == 0x3EBDA8u) {
        ctx->pc = 0x3EBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDA4u;
        // 0x3ebda8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDACu;
        goto label_3ebdac;
    }
    ctx->pc = 0x3EBDA4u;
    SET_GPR_U32(ctx, 31, 0x3EBDACu);
    ctx->pc = 0x3EBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBDA4u;
    // 0x3ebda8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBDA4u, 0x3EBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBDACu;
label_3ebdac:
    // 0x3ebdac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3ebdb0:
    if (ctx->pc == 0x3EBDB0u) {
        ctx->pc = 0x3EBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDACu;
        // 0x3ebdb0: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDB4u;
        goto label_3ebdb4;
    }
    ctx->pc = 0x3EBDACu;
    {
        const bool branch_taken_0x3ebdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDACu;
        // 0x3ebdb0: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdac) {
            ctx->pc = 0x3EBE50u;
            goto label_3ebe50;
        }
    }
    ctx->pc = 0x3EBDB4u;
label_3ebdb4:
    // 0x3ebdb4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ebdb8:
    // 0x3ebdb8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x3ebdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_3ebdbc:
    // 0x3ebdbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebdc0:
    // 0x3ebdc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ebdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ebdc4:
    // 0x3ebdc4: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ebdc8:
    if (ctx->pc == 0x3EBDC8u) {
        ctx->pc = 0x3EBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDC4u;
        // 0x3ebdc8: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDCCu;
        goto label_3ebdcc;
    }
    ctx->pc = 0x3EBDC4u;
    {
        const bool branch_taken_0x3ebdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDC4u;
        // 0x3ebdc8: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdc4) {
            ctx->pc = 0x3EBE4Cu;
            goto label_3ebe4c;
        }
    }
    ctx->pc = 0x3EBDCCu;
label_3ebdcc:
    // 0x3ebdcc: 0x26a55bf0  addiu       $a1, $s5, 0x5BF0
    ctx->pc = 0x3ebdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23536));
label_3ebdd0:
    // 0x3ebdd0: 0xc0e9666  jal         func_3A5998
label_3ebdd4:
    if (ctx->pc == 0x3EBDD4u) {
        ctx->pc = 0x3EBDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDD0u;
        // 0x3ebdd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDD8u;
        goto label_3ebdd8;
    }
    ctx->pc = 0x3EBDD0u;
    SET_GPR_U32(ctx, 31, 0x3EBDD8u);
    ctx->pc = 0x3EBDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBDD0u;
    // 0x3ebdd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBDD0u, 0x3EBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBDD8u;
label_3ebdd8:
    // 0x3ebdd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ebddc:
    if (ctx->pc == 0x3EBDDCu) {
        ctx->pc = 0x3EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDD8u;
        // 0x3ebddc: 0x26c55ba8  addiu       $a1, $s6, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 23464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDE0u;
        goto label_3ebde0;
    }
    ctx->pc = 0x3EBDD8u;
    {
        const bool branch_taken_0x3ebdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDD8u;
        // 0x3ebddc: 0x26c55ba8  addiu       $a1, $s6, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 23464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdd8) {
            ctx->pc = 0x3EBDF0u;
            goto label_3ebdf0;
        }
    }
    ctx->pc = 0x3EBDE0u;
label_3ebde0:
    // 0x3ebde0: 0x3c11ea9e  lui         $s1, 0xEA9E
    ctx->pc = 0x3ebde0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60062 << 16));
label_3ebde4:
    // 0x3ebde4: 0x3c106102  lui         $s0, 0x6102
    ctx->pc = 0x3ebde4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24834 << 16));
label_3ebde8:
    // 0x3ebde8: 0x36315cff  ori         $s1, $s1, 0x5CFF
    ctx->pc = 0x3ebde8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)23807);
label_3ebdec:
    // 0x3ebdec: 0x36108fc6  ori         $s0, $s0, 0x8FC6
    ctx->pc = 0x3ebdecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)36806);
label_3ebdf0:
    // 0x3ebdf0: 0xc0e9666  jal         func_3A5998
label_3ebdf4:
    if (ctx->pc == 0x3EBDF4u) {
        ctx->pc = 0x3EBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDF0u;
        // 0x3ebdf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBDF8u;
        goto label_3ebdf8;
    }
    ctx->pc = 0x3EBDF0u;
    SET_GPR_U32(ctx, 31, 0x3EBDF8u);
    ctx->pc = 0x3EBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBDF0u;
    // 0x3ebdf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBDF0u, 0x3EBDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBDF8u;
label_3ebdf8:
    // 0x3ebdf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ebdfc:
    if (ctx->pc == 0x3EBDFCu) {
        ctx->pc = 0x3EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDF8u;
        // 0x3ebdfc: 0x26e55bc0  addiu       $a1, $s7, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE00u;
        goto label_3ebe00;
    }
    ctx->pc = 0x3EBDF8u;
    {
        const bool branch_taken_0x3ebdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDF8u;
        // 0x3ebdfc: 0x26e55bc0  addiu       $a1, $s7, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdf8) {
            ctx->pc = 0x3EBE0Cu;
            goto label_3ebe0c;
        }
    }
    ctx->pc = 0x3EBE00u;
label_3ebe00:
    // 0x3ebe00: 0x3c10caba  lui         $s0, 0xCABA
    ctx->pc = 0x3ebe00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51898 << 16));
label_3ebe04:
    // 0x3ebe04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebe04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe08:
    // 0x3ebe08: 0x36102737  ori         $s0, $s0, 0x2737
    ctx->pc = 0x3ebe08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10039);
label_3ebe0c:
    // 0x3ebe0c: 0xc0e9666  jal         func_3A5998
label_3ebe10:
    if (ctx->pc == 0x3EBE10u) {
        ctx->pc = 0x3EBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE0Cu;
        // 0x3ebe10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE14u;
        goto label_3ebe14;
    }
    ctx->pc = 0x3EBE0Cu;
    SET_GPR_U32(ctx, 31, 0x3EBE14u);
    ctx->pc = 0x3EBE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBE0Cu;
    // 0x3ebe10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBE0Cu, 0x3EBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBE14u;
label_3ebe14:
    // 0x3ebe14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ebe18:
    if (ctx->pc == 0x3EBE18u) {
        ctx->pc = 0x3EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE14u;
        // 0x3ebe18: 0x27c55be0  addiu       $a1, $fp, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE1Cu;
        goto label_3ebe1c;
    }
    ctx->pc = 0x3EBE14u;
    {
        const bool branch_taken_0x3ebe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE14u;
        // 0x3ebe18: 0x27c55be0  addiu       $a1, $fp, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe14) {
            ctx->pc = 0x3EBE2Cu;
            goto label_3ebe2c;
        }
    }
    ctx->pc = 0x3EBE1Cu;
label_3ebe1c:
    // 0x3ebe1c: 0x3c119727  lui         $s1, 0x9727
    ctx->pc = 0x3ebe1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38695 << 16));
label_3ebe20:
    // 0x3ebe20: 0x3c10399d  lui         $s0, 0x399D
    ctx->pc = 0x3ebe20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)14749 << 16));
label_3ebe24:
    // 0x3ebe24: 0x363124ff  ori         $s1, $s1, 0x24FF
    ctx->pc = 0x3ebe24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)9471);
label_3ebe28:
    // 0x3ebe28: 0x3610f390  ori         $s0, $s0, 0xF390
    ctx->pc = 0x3ebe28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)62352);
label_3ebe2c:
    // 0x3ebe2c: 0xc0e9666  jal         func_3A5998
label_3ebe30:
    if (ctx->pc == 0x3EBE30u) {
        ctx->pc = 0x3EBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE2Cu;
        // 0x3ebe30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE34u;
        goto label_3ebe34;
    }
    ctx->pc = 0x3EBE2Cu;
    SET_GPR_U32(ctx, 31, 0x3EBE34u);
    ctx->pc = 0x3EBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBE2Cu;
    // 0x3ebe30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3EBE2Cu, 0x3EBE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBE34u;
label_3ebe34:
    // 0x3ebe34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ebe38:
    if (ctx->pc == 0x3EBE38u) {
        ctx->pc = 0x3EBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE34u;
        // 0x3ebe38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE3Cu;
        goto label_3ebe3c;
    }
    ctx->pc = 0x3EBE34u;
    {
        const bool branch_taken_0x3ebe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE34u;
        // 0x3ebe38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe34) {
            ctx->pc = 0x3EBE54u;
            goto label_3ebe54;
        }
    }
    ctx->pc = 0x3EBE3Cu;
label_3ebe3c:
    // 0x3ebe3c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ebe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ebe40:
    // 0x3ebe40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebe40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe44:
    // 0x3ebe44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe48:
    // 0x3ebe48: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ebe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ebe4c:
    // 0x3ebe4c: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3ebe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3ebe50:
    // 0x3ebe50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ebe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe54:
    // 0x3ebe54: 0xc0e9132  jal         func_3A44C8
label_3ebe58:
    if (ctx->pc == 0x3EBE58u) {
        ctx->pc = 0x3EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE54u;
        // 0x3ebe58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE5Cu;
        goto label_3ebe5c;
    }
    ctx->pc = 0x3EBE54u;
    SET_GPR_U32(ctx, 31, 0x3EBE5Cu);
    ctx->pc = 0x3EBE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBE54u;
    // 0x3ebe58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EBE54u, 0x3EBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBE5Cu;
label_3ebe5c:
    // 0x3ebe5c: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3ebe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3ebe60:
    // 0x3ebe60: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3ebe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ebe64:
    // 0x3ebe64: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3ebe68:
    if (ctx->pc == 0x3EBE68u) {
        ctx->pc = 0x3EBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE64u;
        // 0x3ebe68: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE6Cu;
        goto label_3ebe6c;
    }
    ctx->pc = 0x3EBE64u;
    {
        const bool branch_taken_0x3ebe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe64) {
            ctx->pc = 0x3EBE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBE64u;
            // 0x3ebe68: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBE9Cu;
            goto label_3ebe9c;
        }
    }
    ctx->pc = 0x3EBE6Cu;
label_3ebe6c:
    // 0x3ebe6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ebe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe70:
    // 0x3ebe70: 0xc0ea16a  jal         func_3A85A8
label_3ebe74:
    if (ctx->pc == 0x3EBE74u) {
        ctx->pc = 0x3EBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE70u;
        // 0x3ebe74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE78u;
        goto label_3ebe78;
    }
    ctx->pc = 0x3EBE70u;
    SET_GPR_U32(ctx, 31, 0x3EBE78u);
    ctx->pc = 0x3EBE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBE70u;
    // 0x3ebe74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EBE70u, 0x3EBE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBE78u;
label_3ebe78:
    // 0x3ebe78: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x3ebe78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ebe7c:
    // 0x3ebe7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ebe7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe80:
    // 0x3ebe80: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3ebe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ebe84:
    // 0x3ebe84: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ebe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ebe88:
    // 0x3ebe88: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ebe88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ebe8c:
    // 0x3ebe8c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ebe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ebe90:
    // 0x3ebe90: 0x60f809  jalr        $v1
label_3ebe94:
    if (ctx->pc == 0x3EBE94u) {
        ctx->pc = 0x3EBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE90u;
        // 0x3ebe94: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBE98u;
        goto label_3ebe98;
    }
    ctx->pc = 0x3EBE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EBE98u);
        ctx->pc = 0x3EBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE90u;
        // 0x3ebe94: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBE90u, 0x3EBE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBE98u;
label_3ebe98:
    // 0x3ebe98: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3ebe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ebe9c:
    // 0x3ebe9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ebe9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebea0:
    // 0x3ebea0: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3ebea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3ebea4:
    // 0x3ebea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ebea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ebea8:
    // 0x3ebea8: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3ebea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ebeac:
    // 0x3ebeac: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3ebeacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_3ebeb0:
    // 0x3ebeb0: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3ebeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3ebeb4:
    // 0x3ebeb4: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x3ebeb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ebeb8:
    // 0x3ebeb8: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x3ebeb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3ebebc:
    // 0x3ebebc: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x3ebebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ebec0:
    // 0x3ebec0: 0x7bb60440  lq          $s6, 0x440($sp)
    ctx->pc = 0x3ebec0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ebec4:
    // 0x3ebec4: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x3ebec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ebec8:
    // 0x3ebec8: 0x7bbe0420  lq          $fp, 0x420($sp)
    ctx->pc = 0x3ebec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ebecc:
    // 0x3ebecc: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ebeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ebed0:
    // 0x3ebed0: 0x3e00008  jr          $ra
label_3ebed4:
    if (ctx->pc == 0x3EBED4u) {
        ctx->pc = 0x3EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBED0u;
        // 0x3ebed4: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBED8u;
        goto label_fallthrough_0x3ebed0;
    }
    ctx->pc = 0x3EBED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBED0u;
        // 0x3ebed4: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ebed0:
    ctx->pc = 0x3EBED8u;
}
