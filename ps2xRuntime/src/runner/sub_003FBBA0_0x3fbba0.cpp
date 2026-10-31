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

// Function: sub_003FBBA0
// Address: 0x3fbba0 - 0x3fbe98
void sub_003FBBA0_0x3fbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBBA0_0x3fbba0");
#endif

    switch (ctx->pc) {
        case 0x3fbba0u: goto label_3fbba0;
        case 0x3fbba4u: goto label_3fbba4;
        case 0x3fbba8u: goto label_3fbba8;
        case 0x3fbbacu: goto label_3fbbac;
        case 0x3fbbb0u: goto label_3fbbb0;
        case 0x3fbbb4u: goto label_3fbbb4;
        case 0x3fbbb8u: goto label_3fbbb8;
        case 0x3fbbbcu: goto label_3fbbbc;
        case 0x3fbbc0u: goto label_3fbbc0;
        case 0x3fbbc4u: goto label_3fbbc4;
        case 0x3fbbc8u: goto label_3fbbc8;
        case 0x3fbbccu: goto label_3fbbcc;
        case 0x3fbbd0u: goto label_3fbbd0;
        case 0x3fbbd4u: goto label_3fbbd4;
        case 0x3fbbd8u: goto label_3fbbd8;
        case 0x3fbbdcu: goto label_3fbbdc;
        case 0x3fbbe0u: goto label_3fbbe0;
        case 0x3fbbe4u: goto label_3fbbe4;
        case 0x3fbbe8u: goto label_3fbbe8;
        case 0x3fbbecu: goto label_3fbbec;
        case 0x3fbbf0u: goto label_3fbbf0;
        case 0x3fbbf4u: goto label_3fbbf4;
        case 0x3fbbf8u: goto label_3fbbf8;
        case 0x3fbbfcu: goto label_3fbbfc;
        case 0x3fbc00u: goto label_3fbc00;
        case 0x3fbc04u: goto label_3fbc04;
        case 0x3fbc08u: goto label_3fbc08;
        case 0x3fbc0cu: goto label_3fbc0c;
        case 0x3fbc10u: goto label_3fbc10;
        case 0x3fbc14u: goto label_3fbc14;
        case 0x3fbc18u: goto label_3fbc18;
        case 0x3fbc1cu: goto label_3fbc1c;
        case 0x3fbc20u: goto label_3fbc20;
        case 0x3fbc24u: goto label_3fbc24;
        case 0x3fbc28u: goto label_3fbc28;
        case 0x3fbc2cu: goto label_3fbc2c;
        case 0x3fbc30u: goto label_3fbc30;
        case 0x3fbc34u: goto label_3fbc34;
        case 0x3fbc38u: goto label_3fbc38;
        case 0x3fbc3cu: goto label_3fbc3c;
        case 0x3fbc40u: goto label_3fbc40;
        case 0x3fbc44u: goto label_3fbc44;
        case 0x3fbc48u: goto label_3fbc48;
        case 0x3fbc4cu: goto label_3fbc4c;
        case 0x3fbc50u: goto label_3fbc50;
        case 0x3fbc54u: goto label_3fbc54;
        case 0x3fbc58u: goto label_3fbc58;
        case 0x3fbc5cu: goto label_3fbc5c;
        case 0x3fbc60u: goto label_3fbc60;
        case 0x3fbc64u: goto label_3fbc64;
        case 0x3fbc68u: goto label_3fbc68;
        case 0x3fbc6cu: goto label_3fbc6c;
        case 0x3fbc70u: goto label_3fbc70;
        case 0x3fbc74u: goto label_3fbc74;
        case 0x3fbc78u: goto label_3fbc78;
        case 0x3fbc7cu: goto label_3fbc7c;
        case 0x3fbc80u: goto label_3fbc80;
        case 0x3fbc84u: goto label_3fbc84;
        case 0x3fbc88u: goto label_3fbc88;
        case 0x3fbc8cu: goto label_3fbc8c;
        case 0x3fbc90u: goto label_3fbc90;
        case 0x3fbc94u: goto label_3fbc94;
        case 0x3fbc98u: goto label_3fbc98;
        case 0x3fbc9cu: goto label_3fbc9c;
        case 0x3fbca0u: goto label_3fbca0;
        case 0x3fbca4u: goto label_3fbca4;
        case 0x3fbca8u: goto label_3fbca8;
        case 0x3fbcacu: goto label_3fbcac;
        case 0x3fbcb0u: goto label_3fbcb0;
        case 0x3fbcb4u: goto label_3fbcb4;
        case 0x3fbcb8u: goto label_3fbcb8;
        case 0x3fbcbcu: goto label_3fbcbc;
        case 0x3fbcc0u: goto label_3fbcc0;
        case 0x3fbcc4u: goto label_3fbcc4;
        case 0x3fbcc8u: goto label_3fbcc8;
        case 0x3fbcccu: goto label_3fbccc;
        case 0x3fbcd0u: goto label_3fbcd0;
        case 0x3fbcd4u: goto label_3fbcd4;
        case 0x3fbcd8u: goto label_3fbcd8;
        case 0x3fbcdcu: goto label_3fbcdc;
        case 0x3fbce0u: goto label_3fbce0;
        case 0x3fbce4u: goto label_3fbce4;
        case 0x3fbce8u: goto label_3fbce8;
        case 0x3fbcecu: goto label_3fbcec;
        case 0x3fbcf0u: goto label_3fbcf0;
        case 0x3fbcf4u: goto label_3fbcf4;
        case 0x3fbcf8u: goto label_3fbcf8;
        case 0x3fbcfcu: goto label_3fbcfc;
        case 0x3fbd00u: goto label_3fbd00;
        case 0x3fbd04u: goto label_3fbd04;
        case 0x3fbd08u: goto label_3fbd08;
        case 0x3fbd0cu: goto label_3fbd0c;
        case 0x3fbd10u: goto label_3fbd10;
        case 0x3fbd14u: goto label_3fbd14;
        case 0x3fbd18u: goto label_3fbd18;
        case 0x3fbd1cu: goto label_3fbd1c;
        case 0x3fbd20u: goto label_3fbd20;
        case 0x3fbd24u: goto label_3fbd24;
        case 0x3fbd28u: goto label_3fbd28;
        case 0x3fbd2cu: goto label_3fbd2c;
        case 0x3fbd30u: goto label_3fbd30;
        case 0x3fbd34u: goto label_3fbd34;
        case 0x3fbd38u: goto label_3fbd38;
        case 0x3fbd3cu: goto label_3fbd3c;
        case 0x3fbd40u: goto label_3fbd40;
        case 0x3fbd44u: goto label_3fbd44;
        case 0x3fbd48u: goto label_3fbd48;
        case 0x3fbd4cu: goto label_3fbd4c;
        case 0x3fbd50u: goto label_3fbd50;
        case 0x3fbd54u: goto label_3fbd54;
        case 0x3fbd58u: goto label_3fbd58;
        case 0x3fbd5cu: goto label_3fbd5c;
        case 0x3fbd60u: goto label_3fbd60;
        case 0x3fbd64u: goto label_3fbd64;
        case 0x3fbd68u: goto label_3fbd68;
        case 0x3fbd6cu: goto label_3fbd6c;
        case 0x3fbd70u: goto label_3fbd70;
        case 0x3fbd74u: goto label_3fbd74;
        case 0x3fbd78u: goto label_3fbd78;
        case 0x3fbd7cu: goto label_3fbd7c;
        case 0x3fbd80u: goto label_3fbd80;
        case 0x3fbd84u: goto label_3fbd84;
        case 0x3fbd88u: goto label_3fbd88;
        case 0x3fbd8cu: goto label_3fbd8c;
        case 0x3fbd90u: goto label_3fbd90;
        case 0x3fbd94u: goto label_3fbd94;
        case 0x3fbd98u: goto label_3fbd98;
        case 0x3fbd9cu: goto label_3fbd9c;
        case 0x3fbda0u: goto label_3fbda0;
        case 0x3fbda4u: goto label_3fbda4;
        case 0x3fbda8u: goto label_3fbda8;
        case 0x3fbdacu: goto label_3fbdac;
        case 0x3fbdb0u: goto label_3fbdb0;
        case 0x3fbdb4u: goto label_3fbdb4;
        case 0x3fbdb8u: goto label_3fbdb8;
        case 0x3fbdbcu: goto label_3fbdbc;
        case 0x3fbdc0u: goto label_3fbdc0;
        case 0x3fbdc4u: goto label_3fbdc4;
        case 0x3fbdc8u: goto label_3fbdc8;
        case 0x3fbdccu: goto label_3fbdcc;
        case 0x3fbdd0u: goto label_3fbdd0;
        case 0x3fbdd4u: goto label_3fbdd4;
        case 0x3fbdd8u: goto label_3fbdd8;
        case 0x3fbddcu: goto label_3fbddc;
        case 0x3fbde0u: goto label_3fbde0;
        case 0x3fbde4u: goto label_3fbde4;
        case 0x3fbde8u: goto label_3fbde8;
        case 0x3fbdecu: goto label_3fbdec;
        case 0x3fbdf0u: goto label_3fbdf0;
        case 0x3fbdf4u: goto label_3fbdf4;
        case 0x3fbdf8u: goto label_3fbdf8;
        case 0x3fbdfcu: goto label_3fbdfc;
        case 0x3fbe00u: goto label_3fbe00;
        case 0x3fbe04u: goto label_3fbe04;
        case 0x3fbe08u: goto label_3fbe08;
        case 0x3fbe0cu: goto label_3fbe0c;
        case 0x3fbe10u: goto label_3fbe10;
        case 0x3fbe14u: goto label_3fbe14;
        case 0x3fbe18u: goto label_3fbe18;
        case 0x3fbe1cu: goto label_3fbe1c;
        case 0x3fbe20u: goto label_3fbe20;
        case 0x3fbe24u: goto label_3fbe24;
        case 0x3fbe28u: goto label_3fbe28;
        case 0x3fbe2cu: goto label_3fbe2c;
        case 0x3fbe30u: goto label_3fbe30;
        case 0x3fbe34u: goto label_3fbe34;
        case 0x3fbe38u: goto label_3fbe38;
        case 0x3fbe3cu: goto label_3fbe3c;
        case 0x3fbe40u: goto label_3fbe40;
        case 0x3fbe44u: goto label_3fbe44;
        case 0x3fbe48u: goto label_3fbe48;
        case 0x3fbe4cu: goto label_3fbe4c;
        case 0x3fbe50u: goto label_3fbe50;
        case 0x3fbe54u: goto label_3fbe54;
        case 0x3fbe58u: goto label_3fbe58;
        case 0x3fbe5cu: goto label_3fbe5c;
        case 0x3fbe60u: goto label_3fbe60;
        case 0x3fbe64u: goto label_3fbe64;
        case 0x3fbe68u: goto label_3fbe68;
        case 0x3fbe6cu: goto label_3fbe6c;
        case 0x3fbe70u: goto label_3fbe70;
        case 0x3fbe74u: goto label_3fbe74;
        case 0x3fbe78u: goto label_3fbe78;
        case 0x3fbe7cu: goto label_3fbe7c;
        case 0x3fbe80u: goto label_3fbe80;
        case 0x3fbe84u: goto label_3fbe84;
        case 0x3fbe88u: goto label_3fbe88;
        case 0x3fbe8cu: goto label_3fbe8c;
        case 0x3fbe90u: goto label_3fbe90;
        case 0x3fbe94u: goto label_3fbe94;
        default: break;
    }

    ctx->pc = 0x3fbba0u;

label_3fbba0:
    // 0x3fbba0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3fbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3fbba4:
    // 0x3fbba4: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3fbba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3fbba8:
    // 0x3fbba8: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3fbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3fbbac:
    // 0x3fbbac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fbbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fbbb0:
    // 0x3fbbb0: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3fbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3fbbb4:
    // 0x3fbbb4: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3fbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3fbbb8:
    // 0x3fbbb8: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3fbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3fbbbc:
    // 0x3fbbbc: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3fbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3fbbc0:
    // 0x3fbbc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fbbc4:
    // 0x3fbbc4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fbbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fbbc8:
    // 0x3fbbc8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fbbcc:
    // 0x3fbbcc: 0x40f809  jalr        $v0
label_3fbbd0:
    if (ctx->pc == 0x3FBBD0u) {
        ctx->pc = 0x3FBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBCCu;
        // 0x3fbbd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBBD4u;
        goto label_3fbbd4;
    }
    ctx->pc = 0x3FBBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FBBD4u);
        ctx->pc = 0x3FBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBCCu;
        // 0x3fbbd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBBCCu, 0x3FBBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FBBD4u;
label_3fbbd4:
    // 0x3fbbd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fbbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fbbd8:
    // 0x3fbbd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fbbdc:
    // 0x3fbbdc: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3fbbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_3fbbe0:
    // 0x3fbbe0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3fbbe4:
    if (ctx->pc == 0x3FBBE4u) {
        ctx->pc = 0x3FBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBE0u;
        // 0x3fbbe4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBBE8u;
        goto label_3fbbe8;
    }
    ctx->pc = 0x3FBBE0u;
    {
        const bool branch_taken_0x3fbbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fbbe0) {
            ctx->pc = 0x3FBBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBBE0u;
            // 0x3fbbe4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBBF0u;
            goto label_3fbbf0;
        }
    }
    ctx->pc = 0x3FBBE8u;
label_3fbbe8:
    // 0x3fbbe8: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_3fbbec:
    if (ctx->pc == 0x3FBBECu) {
        ctx->pc = 0x3FBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBE8u;
        // 0x3fbbec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBBF0u;
        goto label_3fbbf0;
    }
    ctx->pc = 0x3FBBE8u;
    {
        const bool branch_taken_0x3fbbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBE8u;
        // 0x3fbbec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbbe8) {
            ctx->pc = 0x3FBE74u;
            goto label_3fbe74;
        }
    }
    ctx->pc = 0x3FBBF0u;
label_3fbbf0:
    // 0x3fbbf0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3fbbf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3fbbf4:
    // 0x3fbbf4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3fbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3fbbf8:
    // 0x3fbbf8: 0x40f809  jalr        $v0
label_3fbbfc:
    if (ctx->pc == 0x3FBBFCu) {
        ctx->pc = 0x3FBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBF8u;
        // 0x3fbbfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC00u;
        goto label_3fbc00;
    }
    ctx->pc = 0x3FBBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FBC00u);
        ctx->pc = 0x3FBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBF8u;
        // 0x3fbbfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBBF8u, 0x3FBC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FBC00u;
label_3fbc00:
    // 0x3fbc00: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3fbc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3fbc04:
    // 0x3fbc04: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3fbc08:
    if (ctx->pc == 0x3FBC08u) {
        ctx->pc = 0x3FBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC04u;
        // 0x3fbc08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC0Cu;
        goto label_3fbc0c;
    }
    ctx->pc = 0x3FBC04u;
    {
        const bool branch_taken_0x3fbc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC04u;
        // 0x3fbc08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc04) {
            ctx->pc = 0x3FBD30u;
            goto label_3fbd30;
        }
    }
    ctx->pc = 0x3FBC0Cu;
label_3fbc0c:
    // 0x3fbc0c: 0x9632006e  lhu         $s2, 0x6E($s1)
    ctx->pc = 0x3fbc0cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3fbc10:
    // 0x3fbc10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3fbc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3fbc14:
    // 0x3fbc14: 0x16420044  bne         $s2, $v0, . + 4 + (0x44 << 2)
label_3fbc18:
    if (ctx->pc == 0x3FBC18u) {
        ctx->pc = 0x3FBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC14u;
        // 0x3fbc18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC1Cu;
        goto label_3fbc1c;
    }
    ctx->pc = 0x3FBC14u;
    {
        const bool branch_taken_0x3fbc14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC14u;
        // 0x3fbc18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc14) {
            ctx->pc = 0x3FBD28u;
            goto label_3fbd28;
        }
    }
    ctx->pc = 0x3FBC1Cu;
label_3fbc1c:
    // 0x3fbc1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc20:
    // 0x3fbc20: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fbc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fbc24:
    // 0x3fbc24: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3fbc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3fbc28:
    // 0x3fbc28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fbc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fbc2c:
    // 0x3fbc2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fbc30:
    // 0x3fbc30: 0x0  nop
    ctx->pc = 0x3fbc30u;
    // NOP
label_3fbc34:
    // 0x3fbc34: 0x0  nop
    ctx->pc = 0x3fbc34u;
    // NOP
label_3fbc38:
    // 0x3fbc38: 0x0  nop
    ctx->pc = 0x3fbc38u;
    // NOP
label_3fbc3c:
    // 0x3fbc3c: 0x0  nop
    ctx->pc = 0x3fbc3cu;
    // NOP
label_3fbc40:
    // 0x3fbc40: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fbc44:
    if (ctx->pc == 0x3FBC44u) {
        ctx->pc = 0x3FBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC40u;
        // 0x3fbc44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC48u;
        goto label_3fbc48;
    }
    ctx->pc = 0x3FBC40u;
    {
        const bool branch_taken_0x3fbc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC40u;
        // 0x3fbc44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc40) {
            ctx->pc = 0x3FBC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fbc30;
        }
    }
    ctx->pc = 0x3FBC48u;
label_3fbc48:
    // 0x3fbc48: 0xc138ddc  jal         func_4E3770
label_3fbc4c:
    if (ctx->pc == 0x3FBC4Cu) {
        ctx->pc = 0x3FBC50u;
        goto label_3fbc50;
    }
    ctx->pc = 0x3FBC48u;
    SET_GPR_U32(ctx, 31, 0x3FBC50u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FBC48u, 0x3FBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC50u;
label_3fbc50:
    // 0x3fbc50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc54:
    // 0x3fbc54: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3fbc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc58:
    // 0x3fbc58: 0xc0ea176  jal         func_3A85D8
label_3fbc5c:
    if (ctx->pc == 0x3FBC5Cu) {
        ctx->pc = 0x3FBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC58u;
        // 0x3fbc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC60u;
        goto label_3fbc60;
    }
    ctx->pc = 0x3FBC58u;
    SET_GPR_U32(ctx, 31, 0x3FBC60u);
    ctx->pc = 0x3FBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC58u;
    // 0x3fbc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FBC58u, 0x3FBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC60u;
label_3fbc60:
    // 0x3fbc60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc64:
    // 0x3fbc64: 0xc0ea176  jal         func_3A85D8
label_3fbc68:
    if (ctx->pc == 0x3FBC68u) {
        ctx->pc = 0x3FBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC64u;
        // 0x3fbc68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC6Cu;
        goto label_3fbc6c;
    }
    ctx->pc = 0x3FBC64u;
    SET_GPR_U32(ctx, 31, 0x3FBC6Cu);
    ctx->pc = 0x3FBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC64u;
    // 0x3fbc68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FBC64u, 0x3FBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC6Cu;
label_3fbc6c:
    // 0x3fbc6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc70:
    // 0x3fbc70: 0xc0ea16a  jal         func_3A85A8
label_3fbc74:
    if (ctx->pc == 0x3FBC74u) {
        ctx->pc = 0x3FBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC70u;
        // 0x3fbc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC78u;
        goto label_3fbc78;
    }
    ctx->pc = 0x3FBC70u;
    SET_GPR_U32(ctx, 31, 0x3FBC78u);
    ctx->pc = 0x3FBC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC70u;
    // 0x3fbc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FBC70u, 0x3FBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC78u;
label_3fbc78:
    // 0x3fbc78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc7c:
    // 0x3fbc7c: 0xc0ea16a  jal         func_3A85A8
label_3fbc80:
    if (ctx->pc == 0x3FBC80u) {
        ctx->pc = 0x3FBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC7Cu;
        // 0x3fbc80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC84u;
        goto label_3fbc84;
    }
    ctx->pc = 0x3FBC7Cu;
    SET_GPR_U32(ctx, 31, 0x3FBC84u);
    ctx->pc = 0x3FBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC7Cu;
    // 0x3fbc80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FBC7Cu, 0x3FBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC84u;
label_3fbc84:
    // 0x3fbc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fbc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc88:
    // 0x3fbc88: 0xc0e90ca  jal         func_3A4328
label_3fbc8c:
    if (ctx->pc == 0x3FBC8Cu) {
        ctx->pc = 0x3FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC88u;
        // 0x3fbc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC90u;
        goto label_3fbc90;
    }
    ctx->pc = 0x3FBC88u;
    SET_GPR_U32(ctx, 31, 0x3FBC90u);
    ctx->pc = 0x3FBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC88u;
    // 0x3fbc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FBC88u, 0x3FBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC90u;
label_3fbc90:
    // 0x3fbc90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbc94:
    // 0x3fbc94: 0xc0ea158  jal         func_3A8560
label_3fbc98:
    if (ctx->pc == 0x3FBC98u) {
        ctx->pc = 0x3FBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC94u;
        // 0x3fbc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBC9Cu;
        goto label_3fbc9c;
    }
    ctx->pc = 0x3FBC94u;
    SET_GPR_U32(ctx, 31, 0x3FBC9Cu);
    ctx->pc = 0x3FBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC94u;
    // 0x3fbc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3FBC94u, 0x3FBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC9Cu;
label_3fbc9c:
    // 0x3fbc9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fbca0:
    // 0x3fbca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fbca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbca4:
    // 0x3fbca4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3fbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3fbca8:
    // 0x3fbca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbcac:
    // 0x3fbcac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3fbcacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbcb0:
    // 0x3fbcb0: 0xc0ea158  jal         func_3A8560
label_3fbcb4:
    if (ctx->pc == 0x3FBCB4u) {
        ctx->pc = 0x3FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCB0u;
        // 0x3fbcb4: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCB8u;
        goto label_3fbcb8;
    }
    ctx->pc = 0x3FBCB0u;
    SET_GPR_U32(ctx, 31, 0x3FBCB8u);
    ctx->pc = 0x3FBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCB0u;
    // 0x3fbcb4: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3FBCB0u, 0x3FBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCB8u;
label_3fbcb8:
    // 0x3fbcb8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fbcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fbcbc:
    // 0x3fbcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbcc0:
    // 0x3fbcc0: 0xc0e9666  jal         func_3A5998
label_3fbcc4:
    if (ctx->pc == 0x3FBCC4u) {
        ctx->pc = 0x3FBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCC0u;
        // 0x3fbcc4: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCC8u;
        goto label_3fbcc8;
    }
    ctx->pc = 0x3FBCC0u;
    SET_GPR_U32(ctx, 31, 0x3FBCC8u);
    ctx->pc = 0x3FBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCC0u;
    // 0x3fbcc4: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBCC0u, 0x3FBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCC8u;
label_3fbcc8:
    // 0x3fbcc8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3fbccc:
    if (ctx->pc == 0x3FBCCCu) {
        ctx->pc = 0x3FBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCC8u;
        // 0x3fbccc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCD0u;
        goto label_3fbcd0;
    }
    ctx->pc = 0x3FBCC8u;
    {
        const bool branch_taken_0x3fbcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCC8u;
        // 0x3fbccc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbcc8) {
            ctx->pc = 0x3FBD00u;
            goto label_3fbd00;
        }
    }
    ctx->pc = 0x3FBCD0u;
label_3fbcd0:
    // 0x3fbcd0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fbcd4:
    // 0x3fbcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbcd8:
    // 0x3fbcd8: 0xc0e9666  jal         func_3A5998
label_3fbcdc:
    if (ctx->pc == 0x3FBCDCu) {
        ctx->pc = 0x3FBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCD8u;
        // 0x3fbcdc: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCE0u;
        goto label_3fbce0;
    }
    ctx->pc = 0x3FBCD8u;
    SET_GPR_U32(ctx, 31, 0x3FBCE0u);
    ctx->pc = 0x3FBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCD8u;
    // 0x3fbcdc: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBCD8u, 0x3FBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCE0u;
label_3fbce0:
    // 0x3fbce0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3fbce4:
    if (ctx->pc == 0x3FBCE4u) {
        ctx->pc = 0x3FBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCE0u;
        // 0x3fbce4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCE8u;
        goto label_3fbce8;
    }
    ctx->pc = 0x3FBCE0u;
    {
        const bool branch_taken_0x3fbce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCE0u;
        // 0x3fbce4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbce0) {
            ctx->pc = 0x3FBD00u;
            goto label_3fbd00;
        }
    }
    ctx->pc = 0x3FBCE8u;
label_3fbce8:
    // 0x3fbce8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fbce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fbcec:
    // 0x3fbcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbcf0:
    // 0x3fbcf0: 0xc0e9666  jal         func_3A5998
label_3fbcf4:
    if (ctx->pc == 0x3FBCF4u) {
        ctx->pc = 0x3FBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCF0u;
        // 0x3fbcf4: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBCF8u;
        goto label_3fbcf8;
    }
    ctx->pc = 0x3FBCF0u;
    SET_GPR_U32(ctx, 31, 0x3FBCF8u);
    ctx->pc = 0x3FBCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCF0u;
    // 0x3fbcf4: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBCF0u, 0x3FBCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCF8u;
label_3fbcf8:
    // 0x3fbcf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3fbcfc:
    if (ctx->pc == 0x3FBCFCu) {
        ctx->pc = 0x3FBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCF8u;
        // 0x3fbcfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD00u;
        goto label_3fbd00;
    }
    ctx->pc = 0x3FBCF8u;
    {
        const bool branch_taken_0x3fbcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCF8u;
        // 0x3fbcfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbcf8) {
            ctx->pc = 0x3FBD14u;
            goto label_3fbd14;
        }
    }
    ctx->pc = 0x3FBD00u;
label_3fbd00:
    // 0x3fbd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd04:
    // 0x3fbd04: 0xc0fe90e  jal         func_3FA438
label_3fbd08:
    if (ctx->pc == 0x3FBD08u) {
        ctx->pc = 0x3FBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD04u;
        // 0x3fbd08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD0Cu;
        goto label_3fbd0c;
    }
    ctx->pc = 0x3FBD04u;
    SET_GPR_U32(ctx, 31, 0x3FBD0Cu);
    ctx->pc = 0x3FBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD04u;
    // 0x3fbd08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA438u, 0x3FBD04u, 0x3FBD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD0Cu;
label_3fbd0c:
    // 0x3fbd0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3fbd10:
    if (ctx->pc == 0x3FBD10u) {
        ctx->pc = 0x3FBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD0Cu;
        // 0x3fbd10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD14u;
        goto label_3fbd14;
    }
    ctx->pc = 0x3FBD0Cu;
    {
        const bool branch_taken_0x3fbd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD0Cu;
        // 0x3fbd10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd0c) {
            ctx->pc = 0x3FBD28u;
            goto label_3fbd28;
        }
    }
    ctx->pc = 0x3FBD14u;
label_3fbd14:
    // 0x3fbd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd18:
    // 0x3fbd18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fbd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd1c:
    // 0x3fbd1c: 0xc0fe6b4  jal         func_3F9AD0
label_3fbd20:
    if (ctx->pc == 0x3FBD20u) {
        ctx->pc = 0x3FBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD1Cu;
        // 0x3fbd20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD24u;
        goto label_3fbd24;
    }
    ctx->pc = 0x3FBD1Cu;
    SET_GPR_U32(ctx, 31, 0x3FBD24u);
    ctx->pc = 0x3FBD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD1Cu;
    // 0x3fbd20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9AD0u, 0x3FBD1Cu, 0x3FBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD24u;
label_3fbd24:
    // 0x3fbd24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fbd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd28:
    // 0x3fbd28: 0xc0e858c  jal         func_3A1630
label_3fbd2c:
    if (ctx->pc == 0x3FBD2Cu) {
        ctx->pc = 0x3FBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD28u;
        // 0x3fbd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD30u;
        goto label_3fbd30;
    }
    ctx->pc = 0x3FBD28u;
    SET_GPR_U32(ctx, 31, 0x3FBD30u);
    ctx->pc = 0x3FBD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD28u;
    // 0x3fbd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FBD28u, 0x3FBD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD30u;
label_3fbd30:
    // 0x3fbd30: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x3fbd30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_3fbd34:
    // 0x3fbd34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3fbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fbd38:
    // 0x3fbd38: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_3fbd3c:
    if (ctx->pc == 0x3FBD3Cu) {
        ctx->pc = 0x3FBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD38u;
        // 0x3fbd3c: 0x92630028  lbu         $v1, 0x28($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD40u;
        goto label_3fbd40;
    }
    ctx->pc = 0x3FBD38u;
    {
        const bool branch_taken_0x3fbd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fbd38) {
            ctx->pc = 0x3FBD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBD38u;
            // 0x3fbd3c: 0x92630028  lbu         $v1, 0x28($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBD70u;
            goto label_3fbd70;
        }
    }
    ctx->pc = 0x3FBD40u;
label_3fbd40:
    // 0x3fbd40: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x3fbd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fbd44:
    // 0x3fbd44: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3fbd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3fbd48:
    // 0x3fbd48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fbd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fbd4c:
    // 0x3fbd4c: 0x0  nop
    ctx->pc = 0x3fbd4cu;
    // NOP
label_3fbd50:
    // 0x3fbd50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fbd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fbd54:
    // 0x3fbd54: 0x0  nop
    ctx->pc = 0x3fbd54u;
    // NOP
label_3fbd58:
    // 0x3fbd58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3fbd5c:
    if (ctx->pc == 0x3FBD5Cu) {
        ctx->pc = 0x3FBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD58u;
        // 0x3fbd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD60u;
        goto label_3fbd60;
    }
    ctx->pc = 0x3FBD58u;
    {
        const bool branch_taken_0x3fbd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD58u;
        // 0x3fbd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd58) {
            ctx->pc = 0x3FBD6Cu;
            goto label_3fbd6c;
        }
    }
    ctx->pc = 0x3FBD60u;
label_3fbd60:
    // 0x3fbd60: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x3fbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_3fbd64:
    // 0x3fbd64: 0xc0e92b6  jal         func_3A4AD8
label_3fbd68:
    if (ctx->pc == 0x3FBD68u) {
        ctx->pc = 0x3FBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD64u;
        // 0x3fbd68: 0x8e2500dc  lw          $a1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD6Cu;
        goto label_3fbd6c;
    }
    ctx->pc = 0x3FBD64u;
    SET_GPR_U32(ctx, 31, 0x3FBD6Cu);
    ctx->pc = 0x3FBD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD64u;
    // 0x3fbd68: 0x8e2500dc  lw          $a1, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AD8u, 0x3FBD64u, 0x3FBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD6Cu;
label_3fbd6c:
    // 0x3fbd6c: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x3fbd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_3fbd70:
    // 0x3fbd70: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x3fbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_3fbd74:
    // 0x3fbd74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3fbd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3fbd78:
    // 0x3fbd78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3fbd7c:
    if (ctx->pc == 0x3FBD7Cu) {
        ctx->pc = 0x3FBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD78u;
        // 0x3fbd7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD80u;
        goto label_3fbd80;
    }
    ctx->pc = 0x3FBD78u;
    {
        const bool branch_taken_0x3fbd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD78u;
        // 0x3fbd7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd78) {
            ctx->pc = 0x3FBE10u;
            goto label_3fbe10;
        }
    }
    ctx->pc = 0x3FBD80u;
label_3fbd80:
    // 0x3fbd80: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_3fbd84:
    if (ctx->pc == 0x3FBD84u) {
        ctx->pc = 0x3FBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD80u;
        // 0x3fbd84: 0x92620028  lbu         $v0, 0x28($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD88u;
        goto label_3fbd88;
    }
    ctx->pc = 0x3FBD80u;
    {
        const bool branch_taken_0x3fbd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fbd80) {
            ctx->pc = 0x3FBD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBD80u;
            // 0x3fbd84: 0x92620028  lbu         $v0, 0x28($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBE08u;
            goto label_3fbe08;
        }
    }
    ctx->pc = 0x3FBD88u;
label_3fbd88:
    // 0x3fbd88: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3fbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3fbd8c:
    // 0x3fbd8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3fbd90:
    if (ctx->pc == 0x3FBD90u) {
        ctx->pc = 0x3FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD8Cu;
        // 0x3fbd90: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD94u;
        goto label_3fbd94;
    }
    ctx->pc = 0x3FBD8Cu;
    {
        const bool branch_taken_0x3fbd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD8Cu;
        // 0x3fbd90: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd8c) {
            ctx->pc = 0x3FBDD8u;
            goto label_3fbdd8;
        }
    }
    ctx->pc = 0x3FBD94u;
label_3fbd94:
    // 0x3fbd94: 0xc0e4080  jal         func_390200
label_3fbd98:
    if (ctx->pc == 0x3FBD98u) {
        ctx->pc = 0x3FBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD94u;
        // 0x3fbd98: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBD9Cu;
        goto label_3fbd9c;
    }
    ctx->pc = 0x3FBD94u;
    SET_GPR_U32(ctx, 31, 0x3FBD9Cu);
    ctx->pc = 0x3FBD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD94u;
    // 0x3fbd98: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FBD94u, 0x3FBD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD9Cu;
label_3fbd9c:
    // 0x3fbd9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fbd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fbda0:
    // 0x3fbda0: 0xc0e4080  jal         func_390200
label_3fbda4:
    if (ctx->pc == 0x3FBDA4u) {
        ctx->pc = 0x3FBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDA0u;
        // 0x3fbda4: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDA8u;
        goto label_3fbda8;
    }
    ctx->pc = 0x3FBDA0u;
    SET_GPR_U32(ctx, 31, 0x3FBDA8u);
    ctx->pc = 0x3FBDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDA0u;
    // 0x3fbda4: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FBDA0u, 0x3FBDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDA8u;
label_3fbda8:
    // 0x3fbda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fbda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdac:
    // 0x3fbdac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fbdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdb0:
    // 0x3fbdb0: 0x8e822c7c  lw          $v0, 0x2C7C($s4)
    ctx->pc = 0x3fbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3fbdb4:
    // 0x3fbdb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fbdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdb8:
    // 0x3fbdb8: 0xc0e637e  jal         func_398DF8
label_3fbdbc:
    if (ctx->pc == 0x3FBDBCu) {
        ctx->pc = 0x3FBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDB8u;
        // 0x3fbdbc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDC0u;
        goto label_3fbdc0;
    }
    ctx->pc = 0x3FBDB8u;
    SET_GPR_U32(ctx, 31, 0x3FBDC0u);
    ctx->pc = 0x3FBDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDB8u;
    // 0x3fbdbc: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3FBDB8u, 0x3FBDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDC0u;
label_3fbdc0:
    // 0x3fbdc0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3fbdc4:
    if (ctx->pc == 0x3FBDC4u) {
        ctx->pc = 0x3FBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDC0u;
        // 0x3fbdc4: 0x8e822c7c  lw          $v0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDC8u;
        goto label_3fbdc8;
    }
    ctx->pc = 0x3FBDC0u;
    {
        const bool branch_taken_0x3fbdc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDC0u;
        // 0x3fbdc4: 0x8e822c7c  lw          $v0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbdc0) {
            ctx->pc = 0x3FBDD8u;
            goto label_3fbdd8;
        }
    }
    ctx->pc = 0x3FBDC8u;
label_3fbdc8:
    // 0x3fbdc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fbdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdcc:
    // 0x3fbdcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fbdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdd0:
    // 0x3fbdd0: 0xc0e637e  jal         func_398DF8
label_3fbdd4:
    if (ctx->pc == 0x3FBDD4u) {
        ctx->pc = 0x3FBDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDD0u;
        // 0x3fbdd4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDD8u;
        goto label_3fbdd8;
    }
    ctx->pc = 0x3FBDD0u;
    SET_GPR_U32(ctx, 31, 0x3FBDD8u);
    ctx->pc = 0x3FBDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDD0u;
    // 0x3fbdd4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3FBDD0u, 0x3FBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDD8u;
label_3fbdd8:
    // 0x3fbdd8: 0xc0e8b48  jal         func_3A2D20
label_3fbddc:
    if (ctx->pc == 0x3FBDDCu) {
        ctx->pc = 0x3FBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDD8u;
        // 0x3fbddc: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDE0u;
        goto label_3fbde0;
    }
    ctx->pc = 0x3FBDD8u;
    SET_GPR_U32(ctx, 31, 0x3FBDE0u);
    ctx->pc = 0x3FBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDD8u;
    // 0x3fbddc: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3FBDD8u, 0x3FBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDE0u;
label_3fbde0:
    // 0x3fbde0: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x3fbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3fbde4:
    // 0x3fbde4: 0xc0e8b68  jal         func_3A2DA0
label_3fbde8:
    if (ctx->pc == 0x3FBDE8u) {
        ctx->pc = 0x3FBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDE4u;
        // 0x3fbde8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDECu;
        goto label_3fbdec;
    }
    ctx->pc = 0x3FBDE4u;
    SET_GPR_U32(ctx, 31, 0x3FBDECu);
    ctx->pc = 0x3FBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDE4u;
    // 0x3fbde8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3FBDE4u, 0x3FBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDECu;
label_3fbdec:
    // 0x3fbdec: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x3fbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3fbdf0:
    // 0x3fbdf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fbdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbdf4:
    // 0x3fbdf4: 0xc0e8b80  jal         func_3A2E00
label_3fbdf8:
    if (ctx->pc == 0x3FBDF8u) {
        ctx->pc = 0x3FBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDF4u;
        // 0x3fbdf8: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBDFCu;
        goto label_3fbdfc;
    }
    ctx->pc = 0x3FBDF4u;
    SET_GPR_U32(ctx, 31, 0x3FBDFCu);
    ctx->pc = 0x3FBDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDF4u;
    // 0x3fbdf8: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3FBDF4u, 0x3FBDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDFCu;
label_3fbdfc:
    // 0x3fbdfc: 0xc0e8b50  jal         func_3A2D40
label_3fbe00:
    if (ctx->pc == 0x3FBE00u) {
        ctx->pc = 0x3FBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDFCu;
        // 0x3fbe00: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE04u;
        goto label_3fbe04;
    }
    ctx->pc = 0x3FBDFCu;
    SET_GPR_U32(ctx, 31, 0x3FBE04u);
    ctx->pc = 0x3FBE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDFCu;
    // 0x3fbe00: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3FBDFCu, 0x3FBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBE04u;
label_3fbe04:
    // 0x3fbe04: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3fbe04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_3fbe08:
    // 0x3fbe08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fbe0c:
    // 0x3fbe0c: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x3fbe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
label_3fbe10:
    // 0x3fbe10: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x3fbe10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_3fbe14:
    // 0x3fbe14: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3fbe14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3fbe18:
    // 0x3fbe18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3fbe1c:
    if (ctx->pc == 0x3FBE1Cu) {
        ctx->pc = 0x3FBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE18u;
        // 0x3fbe1c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE20u;
        goto label_3fbe20;
    }
    ctx->pc = 0x3FBE18u;
    {
        const bool branch_taken_0x3fbe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE18u;
        // 0x3fbe1c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe18) {
            ctx->pc = 0x3FBE70u;
            goto label_3fbe70;
        }
    }
    ctx->pc = 0x3FBE20u;
label_3fbe20:
    // 0x3fbe20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3fbe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fbe24:
    // 0x3fbe24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3fbe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3fbe28:
    // 0x3fbe28: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
label_3fbe2c:
    if (ctx->pc == 0x3FBE2Cu) {
        ctx->pc = 0x3FBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE28u;
        // 0x3fbe2c: 0xa2620028  sb          $v0, 0x28($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE30u;
        goto label_3fbe30;
    }
    ctx->pc = 0x3FBE28u;
    {
        const bool branch_taken_0x3fbe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE28u;
        // 0x3fbe2c: 0xa2620028  sb          $v0, 0x28($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe28) {
            ctx->pc = 0x3FBE70u;
            goto label_3fbe70;
        }
    }
    ctx->pc = 0x3FBE30u;
label_3fbe30:
    // 0x3fbe30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fbe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe34:
    // 0x3fbe34: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fbe38:
    // 0x3fbe38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fbe3c:
    // 0x3fbe3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fbe40:
    // 0x3fbe40: 0x0  nop
    ctx->pc = 0x3fbe40u;
    // NOP
label_3fbe44:
    // 0x3fbe44: 0x0  nop
    ctx->pc = 0x3fbe44u;
    // NOP
label_3fbe48:
    // 0x3fbe48: 0x0  nop
    ctx->pc = 0x3fbe48u;
    // NOP
label_3fbe4c:
    // 0x3fbe4c: 0x0  nop
    ctx->pc = 0x3fbe4cu;
    // NOP
label_3fbe50:
    // 0x3fbe50: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fbe54:
    if (ctx->pc == 0x3FBE54u) {
        ctx->pc = 0x3FBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE50u;
        // 0x3fbe54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE58u;
        goto label_3fbe58;
    }
    ctx->pc = 0x3FBE50u;
    {
        const bool branch_taken_0x3fbe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE50u;
        // 0x3fbe54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe50) {
            ctx->pc = 0x3FBE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fbe40;
        }
    }
    ctx->pc = 0x3FBE58u;
label_3fbe58:
    // 0x3fbe58: 0xc138ddc  jal         func_4E3770
label_3fbe5c:
    if (ctx->pc == 0x3FBE5Cu) {
        ctx->pc = 0x3FBE60u;
        goto label_3fbe60;
    }
    ctx->pc = 0x3FBE58u;
    SET_GPR_U32(ctx, 31, 0x3FBE60u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FBE58u, 0x3FBE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBE60u;
label_3fbe60:
    // 0x3fbe60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fbe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe64:
    // 0x3fbe64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fbe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe68:
    // 0x3fbe68: 0xc0fe4da  jal         func_3F9368
label_3fbe6c:
    if (ctx->pc == 0x3FBE6Cu) {
        ctx->pc = 0x3FBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE68u;
        // 0x3fbe6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE70u;
        goto label_3fbe70;
    }
    ctx->pc = 0x3FBE68u;
    SET_GPR_U32(ctx, 31, 0x3FBE70u);
    ctx->pc = 0x3FBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBE68u;
    // 0x3fbe6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9368u, 0x3FBE68u, 0x3FBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBE70u;
label_3fbe70:
    // 0x3fbe70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fbe70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe74:
    // 0x3fbe74: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3fbe74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3fbe78:
    // 0x3fbe78: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3fbe78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3fbe7c:
    // 0x3fbe7c: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3fbe7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3fbe80:
    // 0x3fbe80: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3fbe80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3fbe84:
    // 0x3fbe84: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3fbe84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3fbe88:
    // 0x3fbe88: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3fbe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3fbe8c:
    // 0x3fbe8c: 0x3e00008  jr          $ra
label_3fbe90:
    if (ctx->pc == 0x3FBE90u) {
        ctx->pc = 0x3FBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE8Cu;
        // 0x3fbe90: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBE94u;
        goto label_3fbe94;
    }
    ctx->pc = 0x3FBE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE8Cu;
        // 0x3fbe90: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBE94u;
label_3fbe94:
    // 0x3fbe94: 0x0  nop
    ctx->pc = 0x3fbe94u;
    // NOP
    ctx->pc = 0x3fbe98u;
}
