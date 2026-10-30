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

// Function: sub_0033EBB8
// Address: 0x33ebb8 - 0x33eee0
void sub_0033EBB8_0x33ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EBB8_0x33ebb8");
#endif

    switch (ctx->pc) {
        case 0x33ebb8u: goto label_33ebb8;
        case 0x33ebbcu: goto label_33ebbc;
        case 0x33ebc0u: goto label_33ebc0;
        case 0x33ebc4u: goto label_33ebc4;
        case 0x33ebc8u: goto label_33ebc8;
        case 0x33ebccu: goto label_33ebcc;
        case 0x33ebd0u: goto label_33ebd0;
        case 0x33ebd4u: goto label_33ebd4;
        case 0x33ebd8u: goto label_33ebd8;
        case 0x33ebdcu: goto label_33ebdc;
        case 0x33ebe0u: goto label_33ebe0;
        case 0x33ebe4u: goto label_33ebe4;
        case 0x33ebe8u: goto label_33ebe8;
        case 0x33ebecu: goto label_33ebec;
        case 0x33ebf0u: goto label_33ebf0;
        case 0x33ebf4u: goto label_33ebf4;
        case 0x33ebf8u: goto label_33ebf8;
        case 0x33ebfcu: goto label_33ebfc;
        case 0x33ec00u: goto label_33ec00;
        case 0x33ec04u: goto label_33ec04;
        case 0x33ec08u: goto label_33ec08;
        case 0x33ec0cu: goto label_33ec0c;
        case 0x33ec10u: goto label_33ec10;
        case 0x33ec14u: goto label_33ec14;
        case 0x33ec18u: goto label_33ec18;
        case 0x33ec1cu: goto label_33ec1c;
        case 0x33ec20u: goto label_33ec20;
        case 0x33ec24u: goto label_33ec24;
        case 0x33ec28u: goto label_33ec28;
        case 0x33ec2cu: goto label_33ec2c;
        case 0x33ec30u: goto label_33ec30;
        case 0x33ec34u: goto label_33ec34;
        case 0x33ec38u: goto label_33ec38;
        case 0x33ec3cu: goto label_33ec3c;
        case 0x33ec40u: goto label_33ec40;
        case 0x33ec44u: goto label_33ec44;
        case 0x33ec48u: goto label_33ec48;
        case 0x33ec4cu: goto label_33ec4c;
        case 0x33ec50u: goto label_33ec50;
        case 0x33ec54u: goto label_33ec54;
        case 0x33ec58u: goto label_33ec58;
        case 0x33ec5cu: goto label_33ec5c;
        case 0x33ec60u: goto label_33ec60;
        case 0x33ec64u: goto label_33ec64;
        case 0x33ec68u: goto label_33ec68;
        case 0x33ec6cu: goto label_33ec6c;
        case 0x33ec70u: goto label_33ec70;
        case 0x33ec74u: goto label_33ec74;
        case 0x33ec78u: goto label_33ec78;
        case 0x33ec7cu: goto label_33ec7c;
        case 0x33ec80u: goto label_33ec80;
        case 0x33ec84u: goto label_33ec84;
        case 0x33ec88u: goto label_33ec88;
        case 0x33ec8cu: goto label_33ec8c;
        case 0x33ec90u: goto label_33ec90;
        case 0x33ec94u: goto label_33ec94;
        case 0x33ec98u: goto label_33ec98;
        case 0x33ec9cu: goto label_33ec9c;
        case 0x33eca0u: goto label_33eca0;
        case 0x33eca4u: goto label_33eca4;
        case 0x33eca8u: goto label_33eca8;
        case 0x33ecacu: goto label_33ecac;
        case 0x33ecb0u: goto label_33ecb0;
        case 0x33ecb4u: goto label_33ecb4;
        case 0x33ecb8u: goto label_33ecb8;
        case 0x33ecbcu: goto label_33ecbc;
        case 0x33ecc0u: goto label_33ecc0;
        case 0x33ecc4u: goto label_33ecc4;
        case 0x33ecc8u: goto label_33ecc8;
        case 0x33ecccu: goto label_33eccc;
        case 0x33ecd0u: goto label_33ecd0;
        case 0x33ecd4u: goto label_33ecd4;
        case 0x33ecd8u: goto label_33ecd8;
        case 0x33ecdcu: goto label_33ecdc;
        case 0x33ece0u: goto label_33ece0;
        case 0x33ece4u: goto label_33ece4;
        case 0x33ece8u: goto label_33ece8;
        case 0x33ececu: goto label_33ecec;
        case 0x33ecf0u: goto label_33ecf0;
        case 0x33ecf4u: goto label_33ecf4;
        case 0x33ecf8u: goto label_33ecf8;
        case 0x33ecfcu: goto label_33ecfc;
        case 0x33ed00u: goto label_33ed00;
        case 0x33ed04u: goto label_33ed04;
        case 0x33ed08u: goto label_33ed08;
        case 0x33ed0cu: goto label_33ed0c;
        case 0x33ed10u: goto label_33ed10;
        case 0x33ed14u: goto label_33ed14;
        case 0x33ed18u: goto label_33ed18;
        case 0x33ed1cu: goto label_33ed1c;
        case 0x33ed20u: goto label_33ed20;
        case 0x33ed24u: goto label_33ed24;
        case 0x33ed28u: goto label_33ed28;
        case 0x33ed2cu: goto label_33ed2c;
        case 0x33ed30u: goto label_33ed30;
        case 0x33ed34u: goto label_33ed34;
        case 0x33ed38u: goto label_33ed38;
        case 0x33ed3cu: goto label_33ed3c;
        case 0x33ed40u: goto label_33ed40;
        case 0x33ed44u: goto label_33ed44;
        case 0x33ed48u: goto label_33ed48;
        case 0x33ed4cu: goto label_33ed4c;
        case 0x33ed50u: goto label_33ed50;
        case 0x33ed54u: goto label_33ed54;
        case 0x33ed58u: goto label_33ed58;
        case 0x33ed5cu: goto label_33ed5c;
        case 0x33ed60u: goto label_33ed60;
        case 0x33ed64u: goto label_33ed64;
        case 0x33ed68u: goto label_33ed68;
        case 0x33ed6cu: goto label_33ed6c;
        case 0x33ed70u: goto label_33ed70;
        case 0x33ed74u: goto label_33ed74;
        case 0x33ed78u: goto label_33ed78;
        case 0x33ed7cu: goto label_33ed7c;
        case 0x33ed80u: goto label_33ed80;
        case 0x33ed84u: goto label_33ed84;
        case 0x33ed88u: goto label_33ed88;
        case 0x33ed8cu: goto label_33ed8c;
        case 0x33ed90u: goto label_33ed90;
        case 0x33ed94u: goto label_33ed94;
        case 0x33ed98u: goto label_33ed98;
        case 0x33ed9cu: goto label_33ed9c;
        case 0x33eda0u: goto label_33eda0;
        case 0x33eda4u: goto label_33eda4;
        case 0x33eda8u: goto label_33eda8;
        case 0x33edacu: goto label_33edac;
        case 0x33edb0u: goto label_33edb0;
        case 0x33edb4u: goto label_33edb4;
        case 0x33edb8u: goto label_33edb8;
        case 0x33edbcu: goto label_33edbc;
        case 0x33edc0u: goto label_33edc0;
        case 0x33edc4u: goto label_33edc4;
        case 0x33edc8u: goto label_33edc8;
        case 0x33edccu: goto label_33edcc;
        case 0x33edd0u: goto label_33edd0;
        case 0x33edd4u: goto label_33edd4;
        case 0x33edd8u: goto label_33edd8;
        case 0x33eddcu: goto label_33eddc;
        case 0x33ede0u: goto label_33ede0;
        case 0x33ede4u: goto label_33ede4;
        case 0x33ede8u: goto label_33ede8;
        case 0x33edecu: goto label_33edec;
        case 0x33edf0u: goto label_33edf0;
        case 0x33edf4u: goto label_33edf4;
        case 0x33edf8u: goto label_33edf8;
        case 0x33edfcu: goto label_33edfc;
        case 0x33ee00u: goto label_33ee00;
        case 0x33ee04u: goto label_33ee04;
        case 0x33ee08u: goto label_33ee08;
        case 0x33ee0cu: goto label_33ee0c;
        case 0x33ee10u: goto label_33ee10;
        case 0x33ee14u: goto label_33ee14;
        case 0x33ee18u: goto label_33ee18;
        case 0x33ee1cu: goto label_33ee1c;
        case 0x33ee20u: goto label_33ee20;
        case 0x33ee24u: goto label_33ee24;
        case 0x33ee28u: goto label_33ee28;
        case 0x33ee2cu: goto label_33ee2c;
        case 0x33ee30u: goto label_33ee30;
        case 0x33ee34u: goto label_33ee34;
        case 0x33ee38u: goto label_33ee38;
        case 0x33ee3cu: goto label_33ee3c;
        case 0x33ee40u: goto label_33ee40;
        case 0x33ee44u: goto label_33ee44;
        case 0x33ee48u: goto label_33ee48;
        case 0x33ee4cu: goto label_33ee4c;
        case 0x33ee50u: goto label_33ee50;
        case 0x33ee54u: goto label_33ee54;
        case 0x33ee58u: goto label_33ee58;
        case 0x33ee5cu: goto label_33ee5c;
        case 0x33ee60u: goto label_33ee60;
        case 0x33ee64u: goto label_33ee64;
        case 0x33ee68u: goto label_33ee68;
        case 0x33ee6cu: goto label_33ee6c;
        case 0x33ee70u: goto label_33ee70;
        case 0x33ee74u: goto label_33ee74;
        case 0x33ee78u: goto label_33ee78;
        case 0x33ee7cu: goto label_33ee7c;
        case 0x33ee80u: goto label_33ee80;
        case 0x33ee84u: goto label_33ee84;
        case 0x33ee88u: goto label_33ee88;
        case 0x33ee8cu: goto label_33ee8c;
        case 0x33ee90u: goto label_33ee90;
        case 0x33ee94u: goto label_33ee94;
        case 0x33ee98u: goto label_33ee98;
        case 0x33ee9cu: goto label_33ee9c;
        case 0x33eea0u: goto label_33eea0;
        case 0x33eea4u: goto label_33eea4;
        case 0x33eea8u: goto label_33eea8;
        case 0x33eeacu: goto label_33eeac;
        case 0x33eeb0u: goto label_33eeb0;
        case 0x33eeb4u: goto label_33eeb4;
        case 0x33eeb8u: goto label_33eeb8;
        case 0x33eebcu: goto label_33eebc;
        case 0x33eec0u: goto label_33eec0;
        case 0x33eec4u: goto label_33eec4;
        case 0x33eec8u: goto label_33eec8;
        case 0x33eeccu: goto label_33eecc;
        case 0x33eed0u: goto label_33eed0;
        case 0x33eed4u: goto label_33eed4;
        case 0x33eed8u: goto label_33eed8;
        case 0x33eedcu: goto label_33eedc;
        default: break;
    }

    ctx->pc = 0x33ebb8u;

label_33ebb8:
    // 0x33ebb8: 0x27bdd0d0  addiu       $sp, $sp, -0x2F30
    ctx->pc = 0x33ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955216));
label_33ebbc:
    // 0x33ebbc: 0x7fb72eb0  sq          $s7, 0x2EB0($sp)
    ctx->pc = 0x33ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11952), GPR_VEC(ctx, 23));
label_33ebc0:
    // 0x33ebc0: 0x7fb22f00  sq          $s2, 0x2F00($sp)
    ctx->pc = 0x33ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12032), GPR_VEC(ctx, 18));
label_33ebc4:
    // 0x33ebc4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x33ebc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ebc8:
    // 0x33ebc8: 0x7fb02f20  sq          $s0, 0x2F20($sp)
    ctx->pc = 0x33ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12064), GPR_VEC(ctx, 16));
label_33ebcc:
    // 0x33ebcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33ebccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33ebd0:
    // 0x33ebd0: 0x7fb12f10  sq          $s1, 0x2F10($sp)
    ctx->pc = 0x33ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12048), GPR_VEC(ctx, 17));
label_33ebd4:
    // 0x33ebd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33ebd8:
    // 0x33ebd8: 0x7fb32ef0  sq          $s3, 0x2EF0($sp)
    ctx->pc = 0x33ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12016), GPR_VEC(ctx, 19));
label_33ebdc:
    // 0x33ebdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33ebdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ebe0:
    // 0x33ebe0: 0x7fb42ee0  sq          $s4, 0x2EE0($sp)
    ctx->pc = 0x33ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12000), GPR_VEC(ctx, 20));
label_33ebe4:
    // 0x33ebe4: 0x7fb52ed0  sq          $s5, 0x2ED0($sp)
    ctx->pc = 0x33ebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11984), GPR_VEC(ctx, 21));
label_33ebe8:
    // 0x33ebe8: 0x7fb62ec0  sq          $s6, 0x2EC0($sp)
    ctx->pc = 0x33ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11968), GPR_VEC(ctx, 22));
label_33ebec:
    // 0x33ebec: 0x7fbe2ea0  sq          $fp, 0x2EA0($sp)
    ctx->pc = 0x33ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11936), GPR_VEC(ctx, 30));
label_33ebf0:
    // 0x33ebf0: 0xffbf2e90  sd          $ra, 0x2E90($sp)
    ctx->pc = 0x33ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 11920), GPR_U64(ctx, 31));
label_33ebf4:
    // 0x33ebf4: 0xc0d0456  jal         func_341158
label_33ebf8:
    if (ctx->pc == 0x33EBF8u) {
        ctx->pc = 0x33EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBF4u;
        // 0x33ebf8: 0xafa52e84  sw          $a1, 0x2E84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EBFCu;
        goto label_33ebfc;
    }
    ctx->pc = 0x33EBF4u;
    SET_GPR_U32(ctx, 31, 0x33EBFCu);
    ctx->pc = 0x33EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EBF4u;
    // 0x33ebf8: 0xafa52e84  sw          $a1, 0x2E84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 11908), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33EBF4u, 0x33EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBFCu;
label_33ebfc:
    // 0x33ebfc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x33ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33ec00:
    // 0x33ec00: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x33ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_33ec04:
    // 0x33ec04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_33ec08:
    if (ctx->pc == 0x33EC08u) {
        ctx->pc = 0x33EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC04u;
        // 0x33ec08: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC0Cu;
        goto label_33ec0c;
    }
    ctx->pc = 0x33EC04u;
    {
        const bool branch_taken_0x33ec04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec04) {
            ctx->pc = 0x33EC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EC04u;
            // 0x33ec08: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EC14u;
            goto label_33ec14;
        }
    }
    ctx->pc = 0x33EC0Cu;
label_33ec0c:
    // 0x33ec0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_33ec10:
    if (ctx->pc == 0x33EC10u) {
        ctx->pc = 0x33EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC0Cu;
        // 0x33ec10: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC14u;
        goto label_33ec14;
    }
    ctx->pc = 0x33EC0Cu;
    {
        const bool branch_taken_0x33ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC0Cu;
        // 0x33ec10: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec0c) {
            ctx->pc = 0x33EC20u;
            goto label_33ec20;
        }
    }
    ctx->pc = 0x33EC14u;
label_33ec14:
    // 0x33ec14: 0xc0d058e  jal         func_341638
label_33ec18:
    if (ctx->pc == 0x33EC18u) {
        ctx->pc = 0x33EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC14u;
        // 0x33ec18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC1Cu;
        goto label_33ec1c;
    }
    ctx->pc = 0x33EC14u;
    SET_GPR_U32(ctx, 31, 0x33EC1Cu);
    ctx->pc = 0x33EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC14u;
    // 0x33ec18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x33EC14u, 0x33EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC1Cu;
label_33ec1c:
    // 0x33ec1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33ec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33ec20:
    // 0x33ec20: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x33ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33ec24:
    // 0x33ec24: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x33ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_33ec28:
    // 0x33ec28: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_33ec2c:
    if (ctx->pc == 0x33EC2Cu) {
        ctx->pc = 0x33EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC28u;
        // 0x33ec2c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC30u;
        goto label_33ec30;
    }
    ctx->pc = 0x33EC28u;
    {
        const bool branch_taken_0x33ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC28u;
        // 0x33ec2c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec28) {
            ctx->pc = 0x33EE48u;
            goto label_33ee48;
        }
    }
    ctx->pc = 0x33EC30u;
label_33ec30:
    // 0x33ec30: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_33ec34:
    // 0x33ec34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33ec38:
    if (ctx->pc == 0x33EC38u) {
        ctx->pc = 0x33EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC34u;
        // 0x33ec38: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC3Cu;
        goto label_33ec3c;
    }
    ctx->pc = 0x33EC34u;
    {
        const bool branch_taken_0x33ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC34u;
        // 0x33ec38: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec34) {
            ctx->pc = 0x33EC40u;
            goto label_33ec40;
        }
    }
    ctx->pc = 0x33EC3Cu;
label_33ec3c:
    // 0x33ec3c: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x33ec3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_33ec40:
    // 0x33ec40: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x33ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ec44:
    // 0x33ec44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x33ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33ec48:
    // 0x33ec48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33ec4c:
    // 0x33ec4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33ec4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ec50:
    // 0x33ec50: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x33ec50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_33ec54:
    // 0x33ec54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33ec54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ec58:
    // 0x33ec58: 0xc0cffac  jal         func_33FEB0
label_33ec5c:
    if (ctx->pc == 0x33EC5Cu) {
        ctx->pc = 0x33EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC58u;
        // 0x33ec5c: 0xafa02e80  sw          $zero, 0x2E80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC60u;
        goto label_33ec60;
    }
    ctx->pc = 0x33EC58u;
    SET_GPR_U32(ctx, 31, 0x33EC60u);
    ctx->pc = 0x33EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC58u;
    // 0x33ec5c: 0xafa02e80  sw          $zero, 0x2E80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 11904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FEB0u, 0x33EC58u, 0x33EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC60u;
label_33ec60:
    // 0x33ec60: 0x10000058  b           . + 4 + (0x58 << 2)
label_33ec64:
    if (ctx->pc == 0x33EC64u) {
        ctx->pc = 0x33EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC60u;
        // 0x33ec64: 0xafa22e88  sw          $v0, 0x2E88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC68u;
        goto label_33ec68;
    }
    ctx->pc = 0x33EC60u;
    {
        const bool branch_taken_0x33ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC60u;
        // 0x33ec64: 0xafa22e88  sw          $v0, 0x2E88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec60) {
            ctx->pc = 0x33EDC4u;
            goto label_33edc4;
        }
    }
    ctx->pc = 0x33EC68u;
label_33ec68:
    // 0x33ec68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x33ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_33ec6c:
    // 0x33ec6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_33ec70:
    // 0x33ec70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x33ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ec74:
    // 0x33ec74: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x33ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_33ec78:
    // 0x33ec78: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33ec7c:
    // 0x33ec7c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x33ec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_33ec80:
    // 0x33ec80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_33ec84:
    if (ctx->pc == 0x33EC84u) {
        ctx->pc = 0x33EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC80u;
        // 0x33ec84: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC88u;
        goto label_33ec88;
    }
    ctx->pc = 0x33EC80u;
    {
        const bool branch_taken_0x33ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC80u;
        // 0x33ec84: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec80) {
            ctx->pc = 0x33ECA8u;
            goto label_33eca8;
        }
    }
    ctx->pc = 0x33EC88u;
label_33ec88:
    // 0x33ec88: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x33ec88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_33ec8c:
    // 0x33ec8c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_33ec90:
    if (ctx->pc == 0x33EC90u) {
        ctx->pc = 0x33EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC8Cu;
        // 0x33ec90: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EC94u;
        goto label_33ec94;
    }
    ctx->pc = 0x33EC8Cu;
    {
        const bool branch_taken_0x33ec8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC8Cu;
        // 0x33ec90: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec8c) {
            ctx->pc = 0x33ECACu;
            goto label_33ecac;
        }
    }
    ctx->pc = 0x33EC94u;
label_33ec94:
    // 0x33ec94: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x33ec94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_33ec98:
    // 0x33ec98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33ec9c:
    if (ctx->pc == 0x33EC9Cu) {
        ctx->pc = 0x33EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC98u;
        // 0x33ec9c: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECA0u;
        goto label_33eca0;
    }
    ctx->pc = 0x33EC98u;
    {
        const bool branch_taken_0x33ec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec98) {
            ctx->pc = 0x33EC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EC98u;
            // 0x33ec9c: 0x30a20100  andi        $v0, $a1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ECACu;
            goto label_33ecac;
        }
    }
    ctx->pc = 0x33ECA0u;
label_33eca0:
    // 0x33eca0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_33eca4:
    if (ctx->pc == 0x33ECA4u) {
        ctx->pc = 0x33ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECA0u;
        // 0x33eca4: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECA8u;
        goto label_33eca8;
    }
    ctx->pc = 0x33ECA0u;
    {
        const bool branch_taken_0x33eca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECA0u;
        // 0x33eca4: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eca0) {
            ctx->pc = 0x33EDB8u;
            goto label_33edb8;
        }
    }
    ctx->pc = 0x33ECA8u;
label_33eca8:
    // 0x33eca8: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x33eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_33ecac:
    // 0x33ecac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_33ecb0:
    if (ctx->pc == 0x33ECB0u) {
        ctx->pc = 0x33ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECACu;
        // 0x33ecb0: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECB4u;
        goto label_33ecb4;
    }
    ctx->pc = 0x33ECACu;
    {
        const bool branch_taken_0x33ecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECACu;
        // 0x33ecb0: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecac) {
            ctx->pc = 0x33ECD8u;
            goto label_33ecd8;
        }
    }
    ctx->pc = 0x33ECB4u;
label_33ecb4:
    // 0x33ecb4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x33ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_33ecb8:
    // 0x33ecb8: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33ecbc:
    // 0x33ecbc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33ecc0:
    // 0x33ecc0: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x33ecc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_33ecc4:
    // 0x33ecc4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x33ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_33ecc8:
    // 0x33ecc8: 0x40f809  jalr        $v0
label_33eccc:
    if (ctx->pc == 0x33ECCCu) {
        ctx->pc = 0x33ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECC8u;
        // 0x33eccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECD0u;
        goto label_33ecd0;
    }
    ctx->pc = 0x33ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33ECD0u);
        ctx->pc = 0x33ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECC8u;
        // 0x33eccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ECC8u, 0x33ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ECD0u;
label_33ecd0:
    // 0x33ecd0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_33ecd4:
    if (ctx->pc == 0x33ECD4u) {
        ctx->pc = 0x33ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECD0u;
        // 0x33ecd4: 0x8fa52e88  lw          $a1, 0x2E88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECD8u;
        goto label_33ecd8;
    }
    ctx->pc = 0x33ECD0u;
    {
        const bool branch_taken_0x33ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECD0u;
        // 0x33ecd4: 0x8fa52e88  lw          $a1, 0x2E88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecd0) {
            ctx->pc = 0x33EDBCu;
            goto label_33edbc;
        }
    }
    ctx->pc = 0x33ECD8u;
label_33ecd8:
    // 0x33ecd8: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x33ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33ecdc:
    // 0x33ecdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33ece0:
    // 0x33ece0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x33ece0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ece4:
    // 0x33ece4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33ece8:
    // 0x33ece8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33ecec:
    // 0x33ecec: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x33ececu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33ecf0:
    // 0x33ecf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33ecf4:
    // 0x33ecf4: 0x8d070034  lw          $a3, 0x34($t0)
    ctx->pc = 0x33ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_33ecf8:
    // 0x33ecf8: 0x40f809  jalr        $v0
label_33ecfc:
    if (ctx->pc == 0x33ECFCu) {
        ctx->pc = 0x33ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECF8u;
        // 0x33ecfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED00u;
        goto label_33ed00;
    }
    ctx->pc = 0x33ECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33ED00u);
        ctx->pc = 0x33ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECF8u;
        // 0x33ecfc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ECF8u, 0x33ED00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ED00u;
label_33ed00:
    // 0x33ed00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33ed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ed04:
    // 0x33ed04: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_33ed08:
    if (ctx->pc == 0x33ED08u) {
        ctx->pc = 0x33ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED04u;
        // 0x33ed08: 0x8fa52e88  lw          $a1, 0x2E88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED0Cu;
        goto label_33ed0c;
    }
    ctx->pc = 0x33ED04u;
    {
        const bool branch_taken_0x33ed04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED04u;
        // 0x33ed08: 0x8fa52e88  lw          $a1, 0x2E88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed04) {
            ctx->pc = 0x33EDBCu;
            goto label_33edbc;
        }
    }
    ctx->pc = 0x33ED0Cu;
label_33ed0c:
    // 0x33ed0c: 0x26f60018  addiu       $s6, $s7, 0x18
    ctx->pc = 0x33ed0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_33ed10:
    // 0x33ed10: 0x27b50830  addiu       $s5, $sp, 0x830
    ctx->pc = 0x33ed10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_33ed14:
    // 0x33ed14: 0x241e00c0  addiu       $fp, $zero, 0xC0
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33ed18:
    // 0x33ed18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33ed1c:
    // 0x33ed1c: 0x0  nop
    ctx->pc = 0x33ed1cu;
    // NOP
label_33ed20:
    // 0x33ed20: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x33ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_33ed24:
    // 0x33ed24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_33ed28:
    if (ctx->pc == 0x33ED28u) {
        ctx->pc = 0x33ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED24u;
        // 0x33ed28: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED2Cu;
        goto label_33ed2c;
    }
    ctx->pc = 0x33ED24u;
    {
        const bool branch_taken_0x33ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed24) {
            ctx->pc = 0x33ED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ED24u;
            // 0x33ed28: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ED40u;
            goto label_33ed40;
        }
    }
    ctx->pc = 0x33ED2Cu;
label_33ed2c:
    // 0x33ed2c: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33ed2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33ed30:
    // 0x33ed30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33ed34:
    // 0x33ed34: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_33ed38:
    if (ctx->pc == 0x33ED38u) {
        ctx->pc = 0x33ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED34u;
        // 0x33ed38: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED3Cu;
        goto label_33ed3c;
    }
    ctx->pc = 0x33ED34u;
    {
        const bool branch_taken_0x33ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed34) {
            ctx->pc = 0x33ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ED34u;
            // 0x33ed38: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EDB0u;
            goto label_33edb0;
        }
    }
    ctx->pc = 0x33ED3Cu;
label_33ed3c:
    // 0x33ed3c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x33ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33ed40:
    // 0x33ed40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x33ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33ed44:
    // 0x33ed44: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x33ed44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33ed48:
    // 0x33ed48: 0x90a30030  lbu         $v1, 0x30($a1)
    ctx->pc = 0x33ed48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
label_33ed4c:
    // 0x33ed4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33ed50:
    // 0x33ed50: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x33ed50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33ed54:
    // 0x33ed54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ed58:
    // 0x33ed58: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x33ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_33ed5c:
    // 0x33ed5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33ed60:
    // 0x33ed60: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_33ed64:
    if (ctx->pc == 0x33ED64u) {
        ctx->pc = 0x33ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED60u;
        // 0x33ed64: 0x8fa22e80  lw          $v0, 0x2E80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED68u;
        goto label_33ed68;
    }
    ctx->pc = 0x33ED60u;
    {
        const bool branch_taken_0x33ed60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED60u;
        // 0x33ed64: 0x8fa22e80  lw          $v0, 0x2E80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed60) {
            ctx->pc = 0x33EDACu;
            goto label_33edac;
        }
    }
    ctx->pc = 0x33ED68u;
label_33ed68:
    // 0x33ed68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33ed68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ed6c:
    // 0x33ed6c: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x33ed6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33ed70:
    // 0x33ed70: 0x958021  addu        $s0, $a0, $s5
    ctx->pc = 0x33ed70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_33ed74:
    // 0x33ed74: 0x60f809  jalr        $v1
label_33ed78:
    if (ctx->pc == 0x33ED78u) {
        ctx->pc = 0x33ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED74u;
        // 0x33ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED7Cu;
        goto label_33ed7c;
    }
    ctx->pc = 0x33ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33ED7Cu);
        ctx->pc = 0x33ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED74u;
        // 0x33ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ED74u, 0x33ED7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ED7Cu;
label_33ed7c:
    // 0x33ed7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_33ed80:
    if (ctx->pc == 0x33ED80u) {
        ctx->pc = 0x33ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED7Cu;
        // 0x33ed80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED84u;
        goto label_33ed84;
    }
    ctx->pc = 0x33ED7Cu;
    {
        const bool branch_taken_0x33ed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED7Cu;
        // 0x33ed80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed7c) {
            ctx->pc = 0x33EDACu;
            goto label_33edac;
        }
    }
    ctx->pc = 0x33ED84u;
label_33ed84:
    // 0x33ed84: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_33ed88:
    // 0x33ed88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33ed8c:
    // 0x33ed8c: 0x27a62db0  addiu       $a2, $sp, 0x2DB0
    ctx->pc = 0x33ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 11696));
label_33ed90:
    // 0x33ed90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ed94:
    // 0x33ed94: 0x27a72e80  addiu       $a3, $sp, 0x2E80
    ctx->pc = 0x33ed94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 11904));
label_33ed98:
    // 0x33ed98: 0x8e690034  lw          $t1, 0x34($s3)
    ctx->pc = 0x33ed98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33ed9c:
    // 0x33ed9c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x33ed9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33eda0:
    // 0x33eda0: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x33eda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_33eda4:
    // 0x33eda4: 0xc0cf5c6  jal         func_33D718
label_33eda8:
    if (ctx->pc == 0x33EDA8u) {
        ctx->pc = 0x33EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDA4u;
        // 0x33eda8: 0x8e4a0004  lw          $t2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDACu;
        goto label_33edac;
    }
    ctx->pc = 0x33EDA4u;
    SET_GPR_U32(ctx, 31, 0x33EDACu);
    ctx->pc = 0x33EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EDA4u;
    // 0x33eda8: 0x8e4a0004  lw          $t2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33EDA4u, 0x33EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EDACu;
label_33edac:
    // 0x33edac: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33edacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33edb0:
    // 0x33edb0: 0x5620ffdb  bnel        $s1, $zero, . + 4 + (-0x25 << 2)
label_33edb4:
    if (ctx->pc == 0x33EDB4u) {
        ctx->pc = 0x33EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDB0u;
        // 0x33edb4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDB8u;
        goto label_33edb8;
    }
    ctx->pc = 0x33EDB0u;
    {
        const bool branch_taken_0x33edb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33edb0) {
            ctx->pc = 0x33EDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EDB0u;
            // 0x33edb4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ed20;
        }
    }
    ctx->pc = 0x33EDB8u;
label_33edb8:
    // 0x33edb8: 0x8fa52e88  lw          $a1, 0x2E88($sp)
    ctx->pc = 0x33edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11912)));
label_33edbc:
    // 0x33edbc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x33edbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33edc0:
    // 0x33edc0: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x33edc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_33edc4:
    // 0x33edc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_33edc8:
    if (ctx->pc == 0x33EDC8u) {
        ctx->pc = 0x33EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDC4u;
        // 0x33edc8: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDCCu;
        goto label_33edcc;
    }
    ctx->pc = 0x33EDC4u;
    {
        const bool branch_taken_0x33edc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33edc4) {
            ctx->pc = 0x33EDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EDC4u;
            // 0x33edc8: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EDDCu;
            goto label_33eddc;
        }
    }
    ctx->pc = 0x33EDCCu;
label_33edcc:
    // 0x33edcc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x33edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_33edd0:
    // 0x33edd0: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
label_33edd4:
    if (ctx->pc == 0x33EDD4u) {
        ctx->pc = 0x33EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDD0u;
        // 0x33edd4: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDD8u;
        goto label_33edd8;
    }
    ctx->pc = 0x33EDD0u;
    {
        const bool branch_taken_0x33edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33edd0) {
            ctx->pc = 0x33EDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EDD0u;
            // 0x33edd4: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ec68;
        }
    }
    ctx->pc = 0x33EDD8u;
label_33edd8:
    // 0x33edd8: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x33edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_33eddc:
    // 0x33eddc: 0x8fa32e80  lw          $v1, 0x2E80($sp)
    ctx->pc = 0x33eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11904)));
label_33ede0:
    // 0x33ede0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x33ede0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_33ede4:
    // 0x33ede4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x33ede4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_33ede8:
    // 0x33ede8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_33edec:
    if (ctx->pc == 0x33EDECu) {
        ctx->pc = 0x33EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDE8u;
        // 0x33edec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDF0u;
        goto label_33edf0;
    }
    ctx->pc = 0x33EDE8u;
    {
        const bool branch_taken_0x33ede8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDE8u;
        // 0x33edec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ede8) {
            ctx->pc = 0x33EE48u;
            goto label_33ee48;
        }
    }
    ctx->pc = 0x33EDF0u;
label_33edf0:
    // 0x33edf0: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x33edf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33edf4:
    // 0x33edf4: 0x27a62db0  addiu       $a2, $sp, 0x2DB0
    ctx->pc = 0x33edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 11696));
label_33edf8:
    // 0x33edf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33edfc:
    // 0x33edfc: 0x0  nop
    ctx->pc = 0x33edfcu;
    // NOP
label_33ee00:
    // 0x33ee00: 0x8fa52e84  lw          $a1, 0x2E84($sp)
    ctx->pc = 0x33ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11908)));
label_33ee04:
    // 0x33ee04: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_33ee08:
    // 0x33ee08: 0xa00013  mtlo        $a1
    ctx->pc = 0x33ee08u;
    ctx->lo = GPR_U64(ctx, 5);
label_33ee0c:
    // 0x33ee0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33ee10:
    // 0x33ee10: 0x70871800  madd        $v1, $a0, $a3
    ctx->pc = 0x33ee10u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33ee14:
    // 0x33ee14: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x33ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33ee18:
    // 0x33ee18: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x33ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_33ee1c:
    // 0x33ee1c: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x33ee1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33ee20:
    // 0x33ee20: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x33ee20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_33ee24:
    // 0x33ee24: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x33ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_33ee28:
    // 0x33ee28: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x33ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
label_33ee2c:
    // 0x33ee2c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_33ee30:
    // 0x33ee30: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_33ee34:
    if (ctx->pc == 0x33EE34u) {
        ctx->pc = 0x33EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE30u;
        // 0x33ee34: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE38u;
        goto label_33ee38;
    }
    ctx->pc = 0x33EE30u;
    {
        const bool branch_taken_0x33ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE30u;
        // 0x33ee34: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee30) {
            ctx->pc = 0x33EE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ee1c;
        }
    }
    ctx->pc = 0x33EE38u;
label_33ee38:
    // 0x33ee38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ee3c:
    // 0x33ee3c: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x33ee3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_33ee40:
    // 0x33ee40: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_33ee44:
    if (ctx->pc == 0x33EE44u) {
        ctx->pc = 0x33EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE40u;
        // 0x33ee44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE48u;
        goto label_33ee48;
    }
    ctx->pc = 0x33EE40u;
    {
        const bool branch_taken_0x33ee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE40u;
        // 0x33ee44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee40) {
            ctx->pc = 0x33EE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ee00;
        }
    }
    ctx->pc = 0x33EE48u;
label_33ee48:
    // 0x33ee48: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x33ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_33ee4c:
    // 0x33ee4c: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x33ee4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_33ee50:
    // 0x33ee50: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_33ee54:
    if (ctx->pc == 0x33EE54u) {
        ctx->pc = 0x33EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE50u;
        // 0x33ee54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE58u;
        goto label_33ee58;
    }
    ctx->pc = 0x33EE50u;
    {
        const bool branch_taken_0x33ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE50u;
        // 0x33ee54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee50) {
            ctx->pc = 0x33EEB0u;
            goto label_33eeb0;
        }
    }
    ctx->pc = 0x33EE58u;
label_33ee58:
    // 0x33ee58: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x33ee58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33ee5c:
    // 0x33ee5c: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x33ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_33ee60:
    // 0x33ee60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_33ee64:
    if (ctx->pc == 0x33EE64u) {
        ctx->pc = 0x33EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE60u;
        // 0x33ee64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE68u;
        goto label_33ee68;
    }
    ctx->pc = 0x33EE60u;
    {
        const bool branch_taken_0x33ee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE60u;
        // 0x33ee64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee60) {
            ctx->pc = 0x33EEB0u;
            goto label_33eeb0;
        }
    }
    ctx->pc = 0x33EE68u;
label_33ee68:
    // 0x33ee68: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x33ee68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33ee6c:
    // 0x33ee6c: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x33ee6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
label_33ee70:
    // 0x33ee70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33ee74:
    // 0x33ee74: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x33ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_33ee78:
    // 0x33ee78: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x33ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_33ee7c:
    // 0x33ee7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_33ee80:
    if (ctx->pc == 0x33EE80u) {
        ctx->pc = 0x33EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE7Cu;
        // 0x33ee80: 0x8fa32e84  lw          $v1, 0x2E84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE84u;
        goto label_33ee84;
    }
    ctx->pc = 0x33EE7Cu;
    {
        const bool branch_taken_0x33ee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE7Cu;
        // 0x33ee80: 0x8fa32e84  lw          $v1, 0x2E84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee7c) {
            ctx->pc = 0x33EEACu;
            goto label_33eeac;
        }
    }
    ctx->pc = 0x33EE84u;
label_33ee84:
    // 0x33ee84: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x33ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33ee88:
    // 0x33ee88: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x33ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_33ee8c:
    // 0x33ee8c: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x33ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_33ee90:
    // 0x33ee90: 0x600013  mtlo        $v1
    ctx->pc = 0x33ee90u;
    ctx->lo = GPR_U64(ctx, 3);
label_33ee94:
    // 0x33ee94: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x33ee94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ee98:
    // 0x33ee98: 0x72042000  madd        $a0, $s0, $a0
    ctx->pc = 0x33ee98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33ee9c:
    // 0x33ee9c: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x33ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33eea0:
    // 0x33eea0: 0x40f809  jalr        $v0
label_33eea4:
    if (ctx->pc == 0x33EEA4u) {
        ctx->pc = 0x33EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEA0u;
        // 0x33eea4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EEA8u;
        goto label_33eea8;
    }
    ctx->pc = 0x33EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33EEA8u);
        ctx->pc = 0x33EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEA0u;
        // 0x33eea4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EEA0u, 0x33EEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EEA8u;
label_33eea8:
    // 0x33eea8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33eeac:
    // 0x33eeac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33eeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33eeb0:
    // 0x33eeb0: 0x7bb12f10  lq          $s1, 0x2F10($sp)
    ctx->pc = 0x33eeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 12048)));
label_33eeb4:
    // 0x33eeb4: 0x7bb02f20  lq          $s0, 0x2F20($sp)
    ctx->pc = 0x33eeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 12064)));
label_33eeb8:
    // 0x33eeb8: 0x7bb22f00  lq          $s2, 0x2F00($sp)
    ctx->pc = 0x33eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 12032)));
label_33eebc:
    // 0x33eebc: 0x7bb32ef0  lq          $s3, 0x2EF0($sp)
    ctx->pc = 0x33eebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 12016)));
label_33eec0:
    // 0x33eec0: 0x7bb42ee0  lq          $s4, 0x2EE0($sp)
    ctx->pc = 0x33eec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 12000)));
label_33eec4:
    // 0x33eec4: 0x7bb52ed0  lq          $s5, 0x2ED0($sp)
    ctx->pc = 0x33eec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 11984)));
label_33eec8:
    // 0x33eec8: 0x7bb62ec0  lq          $s6, 0x2EC0($sp)
    ctx->pc = 0x33eec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 11968)));
label_33eecc:
    // 0x33eecc: 0x7bb72eb0  lq          $s7, 0x2EB0($sp)
    ctx->pc = 0x33eeccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 11952)));
label_33eed0:
    // 0x33eed0: 0x7bbe2ea0  lq          $fp, 0x2EA0($sp)
    ctx->pc = 0x33eed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 11936)));
label_33eed4:
    // 0x33eed4: 0xdfbf2e90  ld          $ra, 0x2E90($sp)
    ctx->pc = 0x33eed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 11920)));
label_33eed8:
    // 0x33eed8: 0x3e00008  jr          $ra
label_33eedc:
    if (ctx->pc == 0x33EEDCu) {
        ctx->pc = 0x33EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EED8u;
        // 0x33eedc: 0x27bd2f30  addiu       $sp, $sp, 0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EEE0u;
        goto label_fallthrough_0x33eed8;
    }
    ctx->pc = 0x33EED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EED8u;
        // 0x33eedc: 0x27bd2f30  addiu       $sp, $sp, 0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33eed8:
    ctx->pc = 0x33EEE0u;
}
