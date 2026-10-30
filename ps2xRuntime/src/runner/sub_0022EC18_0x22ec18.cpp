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

// Function: sub_0022EC18
// Address: 0x22ec18 - 0x22ef58
void sub_0022EC18_0x22ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EC18_0x22ec18");
#endif

    switch (ctx->pc) {
        case 0x22ec18u: goto label_22ec18;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec20u: goto label_22ec20;
        case 0x22ec24u: goto label_22ec24;
        case 0x22ec28u: goto label_22ec28;
        case 0x22ec2cu: goto label_22ec2c;
        case 0x22ec30u: goto label_22ec30;
        case 0x22ec34u: goto label_22ec34;
        case 0x22ec38u: goto label_22ec38;
        case 0x22ec3cu: goto label_22ec3c;
        case 0x22ec40u: goto label_22ec40;
        case 0x22ec44u: goto label_22ec44;
        case 0x22ec48u: goto label_22ec48;
        case 0x22ec4cu: goto label_22ec4c;
        case 0x22ec50u: goto label_22ec50;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ec58u: goto label_22ec58;
        case 0x22ec5cu: goto label_22ec5c;
        case 0x22ec60u: goto label_22ec60;
        case 0x22ec64u: goto label_22ec64;
        case 0x22ec68u: goto label_22ec68;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec70u: goto label_22ec70;
        case 0x22ec74u: goto label_22ec74;
        case 0x22ec78u: goto label_22ec78;
        case 0x22ec7cu: goto label_22ec7c;
        case 0x22ec80u: goto label_22ec80;
        case 0x22ec84u: goto label_22ec84;
        case 0x22ec88u: goto label_22ec88;
        case 0x22ec8cu: goto label_22ec8c;
        case 0x22ec90u: goto label_22ec90;
        case 0x22ec94u: goto label_22ec94;
        case 0x22ec98u: goto label_22ec98;
        case 0x22ec9cu: goto label_22ec9c;
        case 0x22eca0u: goto label_22eca0;
        case 0x22eca4u: goto label_22eca4;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecacu: goto label_22ecac;
        case 0x22ecb0u: goto label_22ecb0;
        case 0x22ecb4u: goto label_22ecb4;
        case 0x22ecb8u: goto label_22ecb8;
        case 0x22ecbcu: goto label_22ecbc;
        case 0x22ecc0u: goto label_22ecc0;
        case 0x22ecc4u: goto label_22ecc4;
        case 0x22ecc8u: goto label_22ecc8;
        case 0x22ecccu: goto label_22eccc;
        case 0x22ecd0u: goto label_22ecd0;
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ecd8u: goto label_22ecd8;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ece0u: goto label_22ece0;
        case 0x22ece4u: goto label_22ece4;
        case 0x22ece8u: goto label_22ece8;
        case 0x22ececu: goto label_22ecec;
        case 0x22ecf0u: goto label_22ecf0;
        case 0x22ecf4u: goto label_22ecf4;
        case 0x22ecf8u: goto label_22ecf8;
        case 0x22ecfcu: goto label_22ecfc;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ed04u: goto label_22ed04;
        case 0x22ed08u: goto label_22ed08;
        case 0x22ed0cu: goto label_22ed0c;
        case 0x22ed10u: goto label_22ed10;
        case 0x22ed14u: goto label_22ed14;
        case 0x22ed18u: goto label_22ed18;
        case 0x22ed1cu: goto label_22ed1c;
        case 0x22ed20u: goto label_22ed20;
        case 0x22ed24u: goto label_22ed24;
        case 0x22ed28u: goto label_22ed28;
        case 0x22ed2cu: goto label_22ed2c;
        case 0x22ed30u: goto label_22ed30;
        case 0x22ed34u: goto label_22ed34;
        case 0x22ed38u: goto label_22ed38;
        case 0x22ed3cu: goto label_22ed3c;
        case 0x22ed40u: goto label_22ed40;
        case 0x22ed44u: goto label_22ed44;
        case 0x22ed48u: goto label_22ed48;
        case 0x22ed4cu: goto label_22ed4c;
        case 0x22ed50u: goto label_22ed50;
        case 0x22ed54u: goto label_22ed54;
        case 0x22ed58u: goto label_22ed58;
        case 0x22ed5cu: goto label_22ed5c;
        case 0x22ed60u: goto label_22ed60;
        case 0x22ed64u: goto label_22ed64;
        case 0x22ed68u: goto label_22ed68;
        case 0x22ed6cu: goto label_22ed6c;
        case 0x22ed70u: goto label_22ed70;
        case 0x22ed74u: goto label_22ed74;
        case 0x22ed78u: goto label_22ed78;
        case 0x22ed7cu: goto label_22ed7c;
        case 0x22ed80u: goto label_22ed80;
        case 0x22ed84u: goto label_22ed84;
        case 0x22ed88u: goto label_22ed88;
        case 0x22ed8cu: goto label_22ed8c;
        case 0x22ed90u: goto label_22ed90;
        case 0x22ed94u: goto label_22ed94;
        case 0x22ed98u: goto label_22ed98;
        case 0x22ed9cu: goto label_22ed9c;
        case 0x22eda0u: goto label_22eda0;
        case 0x22eda4u: goto label_22eda4;
        case 0x22eda8u: goto label_22eda8;
        case 0x22edacu: goto label_22edac;
        case 0x22edb0u: goto label_22edb0;
        case 0x22edb4u: goto label_22edb4;
        case 0x22edb8u: goto label_22edb8;
        case 0x22edbcu: goto label_22edbc;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edc4u: goto label_22edc4;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edccu: goto label_22edcc;
        case 0x22edd0u: goto label_22edd0;
        case 0x22edd4u: goto label_22edd4;
        case 0x22edd8u: goto label_22edd8;
        case 0x22eddcu: goto label_22eddc;
        case 0x22ede0u: goto label_22ede0;
        case 0x22ede4u: goto label_22ede4;
        case 0x22ede8u: goto label_22ede8;
        case 0x22edecu: goto label_22edec;
        case 0x22edf0u: goto label_22edf0;
        case 0x22edf4u: goto label_22edf4;
        case 0x22edf8u: goto label_22edf8;
        case 0x22edfcu: goto label_22edfc;
        case 0x22ee00u: goto label_22ee00;
        case 0x22ee04u: goto label_22ee04;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee0cu: goto label_22ee0c;
        case 0x22ee10u: goto label_22ee10;
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee1cu: goto label_22ee1c;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ee24u: goto label_22ee24;
        case 0x22ee28u: goto label_22ee28;
        case 0x22ee2cu: goto label_22ee2c;
        case 0x22ee30u: goto label_22ee30;
        case 0x22ee34u: goto label_22ee34;
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee3cu: goto label_22ee3c;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee48u: goto label_22ee48;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee54u: goto label_22ee54;
        case 0x22ee58u: goto label_22ee58;
        case 0x22ee5cu: goto label_22ee5c;
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee64u: goto label_22ee64;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee6cu: goto label_22ee6c;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee74u: goto label_22ee74;
        case 0x22ee78u: goto label_22ee78;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee80u: goto label_22ee80;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee88u: goto label_22ee88;
        case 0x22ee8cu: goto label_22ee8c;
        case 0x22ee90u: goto label_22ee90;
        case 0x22ee94u: goto label_22ee94;
        case 0x22ee98u: goto label_22ee98;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eea0u: goto label_22eea0;
        case 0x22eea4u: goto label_22eea4;
        case 0x22eea8u: goto label_22eea8;
        case 0x22eeacu: goto label_22eeac;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eeb4u: goto label_22eeb4;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eebcu: goto label_22eebc;
        case 0x22eec0u: goto label_22eec0;
        case 0x22eec4u: goto label_22eec4;
        case 0x22eec8u: goto label_22eec8;
        case 0x22eeccu: goto label_22eecc;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eed4u: goto label_22eed4;
        case 0x22eed8u: goto label_22eed8;
        case 0x22eedcu: goto label_22eedc;
        case 0x22eee0u: goto label_22eee0;
        case 0x22eee4u: goto label_22eee4;
        case 0x22eee8u: goto label_22eee8;
        case 0x22eeecu: goto label_22eeec;
        case 0x22eef0u: goto label_22eef0;
        case 0x22eef4u: goto label_22eef4;
        case 0x22eef8u: goto label_22eef8;
        case 0x22eefcu: goto label_22eefc;
        case 0x22ef00u: goto label_22ef00;
        case 0x22ef04u: goto label_22ef04;
        case 0x22ef08u: goto label_22ef08;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef10u: goto label_22ef10;
        case 0x22ef14u: goto label_22ef14;
        case 0x22ef18u: goto label_22ef18;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef20u: goto label_22ef20;
        case 0x22ef24u: goto label_22ef24;
        case 0x22ef28u: goto label_22ef28;
        case 0x22ef2cu: goto label_22ef2c;
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef3cu: goto label_22ef3c;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef44u: goto label_22ef44;
        case 0x22ef48u: goto label_22ef48;
        case 0x22ef4cu: goto label_22ef4c;
        case 0x22ef50u: goto label_22ef50;
        case 0x22ef54u: goto label_22ef54;
        default: break;
    }

    ctx->pc = 0x22ec18u;

label_22ec18:
    // 0x22ec18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22ec1c:
    // 0x22ec1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_22ec20:
    // 0x22ec20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_22ec24:
    // 0x22ec24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ec24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ec28:
    // 0x22ec28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_22ec2c:
    // 0x22ec2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22ec30:
    // 0x22ec30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_22ec34:
    // 0x22ec34: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_22ec38:
    // 0x22ec38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ec3c:
    // 0x22ec3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ec40:
    // 0x22ec40: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22ec44:
    // 0x22ec44: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22ec48:
    // 0x22ec48: 0x40f809  jalr        $v0
label_22ec4c:
    if (ctx->pc == 0x22EC4Cu) {
        ctx->pc = 0x22EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC48u;
        // 0x22ec4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC50u;
        goto label_22ec50;
    }
    ctx->pc = 0x22EC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EC50u);
        ctx->pc = 0x22EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC48u;
        // 0x22ec4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC48u, 0x22EC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EC50u;
label_22ec50:
    // 0x22ec50: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_22ec54:
    if (ctx->pc == 0x22EC54u) {
        ctx->pc = 0x22EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC50u;
        // 0x22ec54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC58u;
        goto label_22ec58;
    }
    ctx->pc = 0x22EC50u;
    {
        const bool branch_taken_0x22ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC50u;
        // 0x22ec54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec50) {
            ctx->pc = 0x22ECA0u;
            goto label_22eca0;
        }
    }
    ctx->pc = 0x22EC58u;
label_22ec58:
    // 0x22ec58: 0xc089974  jal         func_2265D0
label_22ec5c:
    if (ctx->pc == 0x22EC5Cu) {
        ctx->pc = 0x22EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC58u;
        // 0x22ec5c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC60u;
        goto label_22ec60;
    }
    ctx->pc = 0x22EC58u;
    SET_GPR_U32(ctx, 31, 0x22EC60u);
    ctx->pc = 0x22EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC58u;
    // 0x22ec5c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22EC58u, 0x22EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC60u;
label_22ec60:
    // 0x22ec60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ec64:
    // 0x22ec64: 0xc094fb4  jal         func_253ED0
label_22ec68:
    if (ctx->pc == 0x22EC68u) {
        ctx->pc = 0x22EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC64u;
        // 0x22ec68: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC6Cu;
        goto label_22ec6c;
    }
    ctx->pc = 0x22EC64u;
    SET_GPR_U32(ctx, 31, 0x22EC6Cu);
    ctx->pc = 0x22EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC64u;
    // 0x22ec68: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22EC64u, 0x22EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ec70:
    // 0x22ec70: 0xc0899aa  jal         func_2266A8
label_22ec74:
    if (ctx->pc == 0x22EC74u) {
        ctx->pc = 0x22EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC70u;
        // 0x22ec74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC78u;
        goto label_22ec78;
    }
    ctx->pc = 0x22EC70u;
    SET_GPR_U32(ctx, 31, 0x22EC78u);
    ctx->pc = 0x22EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC70u;
    // 0x22ec74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x22EC70u, 0x22EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC78u;
label_22ec78:
    // 0x22ec78: 0x100000ae  b           . + 4 + (0xAE << 2)
label_22ec7c:
    if (ctx->pc == 0x22EC7Cu) {
        ctx->pc = 0x22EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC78u;
        // 0x22ec7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC80u;
        goto label_22ec80;
    }
    ctx->pc = 0x22EC78u;
    {
        const bool branch_taken_0x22ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC78u;
        // 0x22ec7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec78) {
            ctx->pc = 0x22EF34u;
            goto label_22ef34;
        }
    }
    ctx->pc = 0x22EC80u;
label_22ec80:
    // 0x22ec80: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x22ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_22ec84:
    // 0x22ec84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ec88:
    // 0x22ec88: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x22ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_22ec8c:
    // 0x22ec8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ec8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ec90:
    // 0x22ec90: 0xc137894  jal         func_4DE250
label_22ec94:
    if (ctx->pc == 0x22EC94u) {
        ctx->pc = 0x22EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC90u;
        // 0x22ec94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC98u;
        goto label_22ec98;
    }
    ctx->pc = 0x22EC90u;
    SET_GPR_U32(ctx, 31, 0x22EC98u);
    ctx->pc = 0x22EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC90u;
    // 0x22ec94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE250u, 0x22EC90u, 0x22EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC98u;
label_22ec98:
    // 0x22ec98: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_22ec9c:
    if (ctx->pc == 0x22EC9Cu) {
        ctx->pc = 0x22EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC98u;
        // 0x22ec9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECA0u;
        goto label_22eca0;
    }
    ctx->pc = 0x22EC98u;
    {
        const bool branch_taken_0x22ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC98u;
        // 0x22ec9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec98) {
            ctx->pc = 0x22EF34u;
            goto label_22ef34;
        }
    }
    ctx->pc = 0x22ECA0u;
label_22eca0:
    // 0x22eca0: 0xc088edc  jal         func_223B70
label_22eca4:
    if (ctx->pc == 0x22ECA4u) {
        ctx->pc = 0x22ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECA0u;
        // 0x22eca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECA8u;
        goto label_22eca8;
    }
    ctx->pc = 0x22ECA0u;
    SET_GPR_U32(ctx, 31, 0x22ECA8u);
    ctx->pc = 0x22ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECA0u;
    // 0x22eca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x22ECA0u, 0x22ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECA8u;
label_22eca8:
    // 0x22eca8: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_22ecac:
    if (ctx->pc == 0x22ECACu) {
        ctx->pc = 0x22ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECA8u;
        // 0x22ecac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECB0u;
        goto label_22ecb0;
    }
    ctx->pc = 0x22ECA8u;
    {
        const bool branch_taken_0x22eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECA8u;
        // 0x22ecac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eca8) {
            ctx->pc = 0x22EF34u;
            goto label_22ef34;
        }
    }
    ctx->pc = 0x22ECB0u;
label_22ecb0:
    // 0x22ecb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ecb4:
    // 0x22ecb4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22ecb8:
    // 0x22ecb8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22ecbc:
    // 0x22ecbc: 0x40f809  jalr        $v0
label_22ecc0:
    if (ctx->pc == 0x22ECC0u) {
        ctx->pc = 0x22ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECBCu;
        // 0x22ecc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECC4u;
        goto label_22ecc4;
    }
    ctx->pc = 0x22ECBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22ECC4u);
        ctx->pc = 0x22ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECBCu;
        // 0x22ecc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ECBCu, 0x22ECC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ECC4u;
label_22ecc4:
    // 0x22ecc4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22ecc8:
    // 0x22ecc8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x22ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_22eccc:
    // 0x22eccc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22ecccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22ecd0:
    // 0x22ecd0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22ecd4:
    // 0x22ecd4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ecd8:
    // 0x22ecd8: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22ecdc:
    // 0x22ecdc: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22ece0:
    // 0x22ece0: 0x40f809  jalr        $v0
label_22ece4:
    if (ctx->pc == 0x22ECE4u) {
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECE0u;
        // 0x22ece4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECE8u;
        goto label_22ece8;
    }
    ctx->pc = 0x22ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22ECE8u);
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECE0u;
        // 0x22ece4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ECE0u, 0x22ECE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ECE8u;
label_22ece8:
    // 0x22ece8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22ecec:
    // 0x22ecec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x22ececu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_22ecf0:
    // 0x22ecf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ecf4:
    // 0x22ecf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_22ecf8:
    // 0x22ecf8: 0xc08cade  jal         func_232B78
label_22ecfc:
    if (ctx->pc == 0x22ECFCu) {
        ctx->pc = 0x22ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECF8u;
        // 0x22ecfc: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED00u;
        goto label_22ed00;
    }
    ctx->pc = 0x22ECF8u;
    SET_GPR_U32(ctx, 31, 0x22ED00u);
    ctx->pc = 0x22ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECF8u;
    // 0x22ecfc: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x22ECF8u, 0x22ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED00u;
label_22ed00:
    // 0x22ed00: 0xc089000  jal         func_224000
label_22ed04:
    if (ctx->pc == 0x22ED04u) {
        ctx->pc = 0x22ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED00u;
        // 0x22ed04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED08u;
        goto label_22ed08;
    }
    ctx->pc = 0x22ED00u;
    SET_GPR_U32(ctx, 31, 0x22ED08u);
    ctx->pc = 0x22ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED00u;
    // 0x22ed04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x22ED00u, 0x22ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED08u;
label_22ed08:
    // 0x22ed08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_22ed0c:
    if (ctx->pc == 0x22ED0Cu) {
        ctx->pc = 0x22ED10u;
        goto label_22ed10;
    }
    ctx->pc = 0x22ED08u;
    {
        const bool branch_taken_0x22ed08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed08) {
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ED10u;
label_22ed10:
    // 0x22ed10: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x22ed10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_22ed14:
    // 0x22ed14: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x22ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_22ed18:
    // 0x22ed18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22ed18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22ed1c:
    // 0x22ed1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22ed1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22ed20:
    // 0x22ed20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22ed20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22ed24:
    // 0x22ed24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22ed28:
    if (ctx->pc == 0x22ED28u) {
        ctx->pc = 0x22ED2Cu;
        goto label_22ed2c;
    }
    ctx->pc = 0x22ED24u;
    {
        const bool branch_taken_0x22ed24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed24) {
            ctx->pc = 0x22ED34u;
            goto label_22ed34;
        }
    }
    ctx->pc = 0x22ED2Cu;
label_22ed2c:
    // 0x22ed2c: 0xc095fce  jal         func_257F38
label_22ed30:
    if (ctx->pc == 0x22ED30u) {
        ctx->pc = 0x22ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED2Cu;
        // 0x22ed30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED34u;
        goto label_22ed34;
    }
    ctx->pc = 0x22ED2Cu;
    SET_GPR_U32(ctx, 31, 0x22ED34u);
    ctx->pc = 0x22ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED2Cu;
    // 0x22ed30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x22ED2Cu, 0x22ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED34u;
label_22ed34:
    // 0x22ed34: 0xc088ef0  jal         func_223BC0
label_22ed38:
    if (ctx->pc == 0x22ED38u) {
        ctx->pc = 0x22ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED34u;
        // 0x22ed38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED3Cu;
        goto label_22ed3c;
    }
    ctx->pc = 0x22ED34u;
    SET_GPR_U32(ctx, 31, 0x22ED3Cu);
    ctx->pc = 0x22ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED34u;
    // 0x22ed38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x22ED34u, 0x22ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED3Cu;
label_22ed3c:
    // 0x22ed3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22ed40:
    if (ctx->pc == 0x22ED40u) {
        ctx->pc = 0x22ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED3Cu;
        // 0x22ed40: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED44u;
        goto label_22ed44;
    }
    ctx->pc = 0x22ED3Cu;
    {
        const bool branch_taken_0x22ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed3c) {
            ctx->pc = 0x22ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED3Cu;
            // 0x22ed40: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED50u;
            goto label_22ed50;
        }
    }
    ctx->pc = 0x22ED44u;
label_22ed44:
    // 0x22ed44: 0xc08be36  jal         func_22F8D8
label_22ed48:
    if (ctx->pc == 0x22ED48u) {
        ctx->pc = 0x22ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED44u;
        // 0x22ed48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED4Cu;
        goto label_22ed4c;
    }
    ctx->pc = 0x22ED44u;
    SET_GPR_U32(ctx, 31, 0x22ED4Cu);
    ctx->pc = 0x22ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED44u;
    // 0x22ed48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x22ED44u, 0x22ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED4Cu;
label_22ed4c:
    // 0x22ed4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ed50:
    // 0x22ed50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22ed54:
    // 0x22ed54: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22ed58:
    // 0x22ed58: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22ed5c:
    // 0x22ed5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ed5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ed60:
    // 0x22ed60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22ed64:
    // 0x22ed64: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22ed68:
    // 0x22ed68: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x22ed68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ed6c:
    // 0x22ed6c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22ed70:
    // 0x22ed70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22ed70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed74:
    // 0x22ed74: 0x40f809  jalr        $v0
label_22ed78:
    if (ctx->pc == 0x22ED78u) {
        ctx->pc = 0x22ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED74u;
        // 0x22ed78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED7Cu;
        goto label_22ed7c;
    }
    ctx->pc = 0x22ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22ED7Cu);
        ctx->pc = 0x22ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED74u;
        // 0x22ed78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED74u, 0x22ED7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ED7Cu;
label_22ed7c:
    // 0x22ed7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ed80:
    // 0x22ed80: 0xc089988  jal         func_226620
label_22ed84:
    if (ctx->pc == 0x22ED84u) {
        ctx->pc = 0x22ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED80u;
        // 0x22ed84: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED88u;
        goto label_22ed88;
    }
    ctx->pc = 0x22ED80u;
    SET_GPR_U32(ctx, 31, 0x22ED88u);
    ctx->pc = 0x22ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED80u;
    // 0x22ed84: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22ED80u, 0x22ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED88u;
label_22ed88:
    // 0x22ed88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ed8c:
    // 0x22ed8c: 0xc089974  jal         func_2265D0
label_22ed90:
    if (ctx->pc == 0x22ED90u) {
        ctx->pc = 0x22ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED8Cu;
        // 0x22ed90: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED94u;
        goto label_22ed94;
    }
    ctx->pc = 0x22ED8Cu;
    SET_GPR_U32(ctx, 31, 0x22ED94u);
    ctx->pc = 0x22ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED8Cu;
    // 0x22ed90: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22ED8Cu, 0x22ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED94u;
label_22ed94:
    // 0x22ed94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ed98:
    // 0x22ed98: 0xc094fb4  jal         func_253ED0
label_22ed9c:
    if (ctx->pc == 0x22ED9Cu) {
        ctx->pc = 0x22ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED98u;
        // 0x22ed9c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDA0u;
        goto label_22eda0;
    }
    ctx->pc = 0x22ED98u;
    SET_GPR_U32(ctx, 31, 0x22EDA0u);
    ctx->pc = 0x22ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED98u;
    // 0x22ed9c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22ED98u, 0x22EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDA0u;
label_22eda0:
    // 0x22eda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eda4:
    // 0x22eda4: 0xc0899aa  jal         func_2266A8
label_22eda8:
    if (ctx->pc == 0x22EDA8u) {
        ctx->pc = 0x22EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDA4u;
        // 0x22eda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDACu;
        goto label_22edac;
    }
    ctx->pc = 0x22EDA4u;
    SET_GPR_U32(ctx, 31, 0x22EDACu);
    ctx->pc = 0x22EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDA4u;
    // 0x22eda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x22EDA4u, 0x22EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDACu;
label_22edac:
    // 0x22edac: 0xc087502  jal         func_21D408
label_22edb0:
    if (ctx->pc == 0x22EDB0u) {
        ctx->pc = 0x22EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDACu;
        // 0x22edb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDB4u;
        goto label_22edb4;
    }
    ctx->pc = 0x22EDACu;
    SET_GPR_U32(ctx, 31, 0x22EDB4u);
    ctx->pc = 0x22EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDACu;
    // 0x22edb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22EDACu, 0x22EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDB4u;
label_22edb4:
    // 0x22edb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22edb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22edb8:
    // 0x22edb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22edbc:
    // 0x22edbc: 0xc0a3176  jal         func_28C5D8
label_22edc0:
    if (ctx->pc == 0x22EDC0u) {
        ctx->pc = 0x22EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDBCu;
        // 0x22edc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDC4u;
        goto label_22edc4;
    }
    ctx->pc = 0x22EDBCu;
    SET_GPR_U32(ctx, 31, 0x22EDC4u);
    ctx->pc = 0x22EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDBCu;
    // 0x22edc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C5D8u, 0x22EDBCu, 0x22EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDC4u;
label_22edc4:
    // 0x22edc4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22edc8:
    // 0x22edc8: 0xae600288  sw          $zero, 0x288($s3)
    ctx->pc = 0x22edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 648), GPR_U32(ctx, 0));
label_22edcc:
    // 0x22edcc: 0xc0e409a  jal         func_390268
label_22edd0:
    if (ctx->pc == 0x22EDD0u) {
        ctx->pc = 0x22EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDCCu;
        // 0x22edd0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDD4u;
        goto label_22edd4;
    }
    ctx->pc = 0x22EDCCu;
    SET_GPR_U32(ctx, 31, 0x22EDD4u);
    ctx->pc = 0x22EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDCCu;
    // 0x22edd0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22EDCCu, 0x22EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDD4u;
label_22edd4:
    // 0x22edd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22edd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22edd8:
    // 0x22edd8: 0xc0874fa  jal         func_21D3E8
label_22eddc:
    if (ctx->pc == 0x22EDDCu) {
        ctx->pc = 0x22EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDD8u;
        // 0x22eddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDE0u;
        goto label_22ede0;
    }
    ctx->pc = 0x22EDD8u;
    SET_GPR_U32(ctx, 31, 0x22EDE0u);
    ctx->pc = 0x22EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDD8u;
    // 0x22eddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22EDD8u, 0x22EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDE0u;
label_22ede0:
    // 0x22ede0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x22ede0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_22ede4:
    // 0x22ede4: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22ede4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22ede8:
    // 0x22ede8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_22edec:
    if (ctx->pc == 0x22EDECu) {
        ctx->pc = 0x22EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE8u;
        // 0x22edec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDF0u;
        goto label_22edf0;
    }
    ctx->pc = 0x22EDE8u;
    {
        const bool branch_taken_0x22ede8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE8u;
        // 0x22edec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ede8) {
            ctx->pc = 0x22EE1Cu;
            goto label_22ee1c;
        }
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x22edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_22edf4:
    // 0x22edf4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x22edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_22edf8:
    // 0x22edf8: 0xc10904c  jal         func_424130
label_22edfc:
    if (ctx->pc == 0x22EDFCu) {
        ctx->pc = 0x22EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDF8u;
        // 0x22edfc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE00u;
        goto label_22ee00;
    }
    ctx->pc = 0x22EDF8u;
    SET_GPR_U32(ctx, 31, 0x22EE00u);
    ctx->pc = 0x22EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDF8u;
    // 0x22edfc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x22EDF8u, 0x22EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE00u;
label_22ee00:
    // 0x22ee00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22ee04:
    if (ctx->pc == 0x22EE04u) {
        ctx->pc = 0x22EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE00u;
        // 0x22ee04: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE08u;
        goto label_22ee08;
    }
    ctx->pc = 0x22EE00u;
    {
        const bool branch_taken_0x22ee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE00u;
        // 0x22ee04: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee00) {
            ctx->pc = 0x22EE1Cu;
            goto label_22ee1c;
        }
    }
    ctx->pc = 0x22EE08u;
label_22ee08:
    // 0x22ee08: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22ee0c:
    // 0x22ee0c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22ee10:
    // 0x22ee10: 0xc107908  jal         func_41E420
label_22ee14:
    if (ctx->pc == 0x22EE14u) {
        ctx->pc = 0x22EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE10u;
        // 0x22ee14: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE18u;
        goto label_22ee18;
    }
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE10u;
    // 0x22ee14: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x22EE10u, 0x22EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0x2a82a  slt         $s5, $zero, $v0
    ctx->pc = 0x22ee18u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22ee1c:
    // 0x22ee1c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22ee20:
    if (ctx->pc == 0x22EE20u) {
        ctx->pc = 0x22EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE1Cu;
        // 0x22ee20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE24u;
        goto label_22ee24;
    }
    ctx->pc = 0x22EE1Cu;
    {
        const bool branch_taken_0x22ee1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE1Cu;
        // 0x22ee20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee1c) {
            ctx->pc = 0x22EE34u;
            goto label_22ee34;
        }
    }
    ctx->pc = 0x22EE24u;
label_22ee24:
    // 0x22ee24: 0xc088aa4  jal         func_222A90
label_22ee28:
    if (ctx->pc == 0x22EE28u) {
        ctx->pc = 0x22EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE24u;
        // 0x22ee28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE2Cu;
        goto label_22ee2c;
    }
    ctx->pc = 0x22EE24u;
    SET_GPR_U32(ctx, 31, 0x22EE2Cu);
    ctx->pc = 0x22EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE24u;
    // 0x22ee28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x22EE24u, 0x22EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE2Cu;
label_22ee2c:
    // 0x22ee2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22ee30:
    if (ctx->pc == 0x22EE30u) {
        ctx->pc = 0x22EE34u;
        goto label_22ee34;
    }
    ctx->pc = 0x22EE2Cu;
    {
        const bool branch_taken_0x22ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee2c) {
            ctx->pc = 0x22EE3Cu;
            goto label_22ee3c;
        }
    }
    ctx->pc = 0x22EE34u;
label_22ee34:
    // 0x22ee34: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_22ee38:
    if (ctx->pc == 0x22EE38u) {
        ctx->pc = 0x22EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE34u;
        // 0x22ee38: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE3Cu;
        goto label_22ee3c;
    }
    ctx->pc = 0x22EE34u;
    {
        const bool branch_taken_0x22ee34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee34) {
            ctx->pc = 0x22EE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE34u;
            // 0x22ee38: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EED0u;
            goto label_22eed0;
        }
    }
    ctx->pc = 0x22EE3Cu;
label_22ee3c:
    // 0x22ee3c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_22ee40:
    if (ctx->pc == 0x22EE40u) {
        ctx->pc = 0x22EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE3Cu;
        // 0x22ee40: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE44u;
        goto label_22ee44;
    }
    ctx->pc = 0x22EE3Cu;
    {
        const bool branch_taken_0x22ee3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE3Cu;
        // 0x22ee40: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee3c) {
            ctx->pc = 0x22EE5Cu;
            goto label_22ee5c;
        }
    }
    ctx->pc = 0x22EE44u;
label_22ee44:
    // 0x22ee44: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22ee44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22ee48:
    // 0x22ee48: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x22ee48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_22ee4c:
    // 0x22ee4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22ee50:
    if (ctx->pc == 0x22EE50u) {
        ctx->pc = 0x22EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE4Cu;
        // 0x22ee50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE54u;
        goto label_22ee54;
    }
    ctx->pc = 0x22EE4Cu;
    {
        const bool branch_taken_0x22ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee4c) {
            ctx->pc = 0x22EE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE4Cu;
            // 0x22ee50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EE60u;
            goto label_22ee60;
        }
    }
    ctx->pc = 0x22EE54u;
label_22ee54:
    // 0x22ee54: 0x52a0001e  beql        $s5, $zero, . + 4 + (0x1E << 2)
label_22ee58:
    if (ctx->pc == 0x22EE58u) {
        ctx->pc = 0x22EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE54u;
        // 0x22ee58: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE5Cu;
        goto label_22ee5c;
    }
    ctx->pc = 0x22EE54u;
    {
        const bool branch_taken_0x22ee54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee54) {
            ctx->pc = 0x22EE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE54u;
            // 0x22ee58: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EED0u;
            goto label_22eed0;
        }
    }
    ctx->pc = 0x22EE5Cu;
label_22ee5c:
    // 0x22ee5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ee60:
    // 0x22ee60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ee60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ee64:
    // 0x22ee64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ee64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ee68:
    // 0x22ee68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ee68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ee6c:
    // 0x22ee6c: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x22ee6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_22ee70:
    // 0x22ee70: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_22ee74:
    // 0x22ee74: 0x40f809  jalr        $v0
label_22ee78:
    if (ctx->pc == 0x22EE78u) {
        ctx->pc = 0x22EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE74u;
        // 0x22ee78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE7Cu;
        goto label_22ee7c;
    }
    ctx->pc = 0x22EE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EE7Cu);
        ctx->pc = 0x22EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE74u;
        // 0x22ee78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE74u, 0x22EE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EE7Cu;
label_22ee7c:
    // 0x22ee7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22ee80:
    // 0x22ee80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ee80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22ee84:
    // 0x22ee84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ee84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ee88:
    // 0x22ee88: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x22ee88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22ee8c:
    // 0x22ee8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ee90:
    // 0x22ee90: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22ee94:
    // 0x22ee94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ee94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ee98:
    // 0x22ee98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ee9c:
    // 0x22ee9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22eea0:
    // 0x22eea0: 0xc088178  jal         func_2205E0
label_22eea4:
    if (ctx->pc == 0x22EEA4u) {
        ctx->pc = 0x22EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA0u;
        // 0x22eea4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEA8u;
        goto label_22eea8;
    }
    ctx->pc = 0x22EEA0u;
    SET_GPR_U32(ctx, 31, 0x22EEA8u);
    ctx->pc = 0x22EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEA0u;
    // 0x22eea4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x22EEA0u, 0x22EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEA8u;
label_22eea8:
    // 0x22eea8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22eeac:
    if (ctx->pc == 0x22EEACu) {
        ctx->pc = 0x22EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA8u;
        // 0x22eeac: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEB0u;
        goto label_22eeb0;
    }
    ctx->pc = 0x22EEA8u;
    {
        const bool branch_taken_0x22eea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA8u;
        // 0x22eeac: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eea8) {
            ctx->pc = 0x22EEBCu;
            goto label_22eebc;
        }
    }
    ctx->pc = 0x22EEB0u;
label_22eeb0:
    // 0x22eeb0: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_22eeb4:
    if (ctx->pc == 0x22EEB4u) {
        ctx->pc = 0x22EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEB0u;
        // 0x22eeb4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEB8u;
        goto label_22eeb8;
    }
    ctx->pc = 0x22EEB0u;
    {
        const bool branch_taken_0x22eeb0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eeb0) {
            ctx->pc = 0x22EEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EEB0u;
            // 0x22eeb4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EED0u;
            goto label_22eed0;
        }
    }
    ctx->pc = 0x22EEB8u;
label_22eeb8:
    // 0x22eeb8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x22eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_22eebc:
    // 0x22eebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22eec0:
    // 0x22eec0: 0x24a5c030  addiu       $a1, $a1, -0x3FD0
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
label_22eec4:
    // 0x22eec4: 0xc089c7c  jal         func_2271F0
label_22eec8:
    if (ctx->pc == 0x22EEC8u) {
        ctx->pc = 0x22EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEC4u;
        // 0x22eec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EECCu;
        goto label_22eecc;
    }
    ctx->pc = 0x22EEC4u;
    SET_GPR_U32(ctx, 31, 0x22EECCu);
    ctx->pc = 0x22EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEC4u;
    // 0x22eec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x22EEC4u, 0x22EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EECCu;
label_22eecc:
    // 0x22eecc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22eed0:
    // 0x22eed0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22eed4:
    // 0x22eed4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_22eed8:
    if (ctx->pc == 0x22EED8u) {
        ctx->pc = 0x22EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EED4u;
        // 0x22eed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEDCu;
        goto label_22eedc;
    }
    ctx->pc = 0x22EED4u;
    {
        const bool branch_taken_0x22eed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EED4u;
        // 0x22eed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eed4) {
            ctx->pc = 0x22EF34u;
            goto label_22ef34;
        }
    }
    ctx->pc = 0x22EEDCu;
label_22eedc:
    // 0x22eedc: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x22eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22eee0:
    // 0x22eee0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22eee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eee4:
    // 0x22eee4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22eee8:
    // 0x22eee8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_22eeec:
    if (ctx->pc == 0x22EEECu) {
        ctx->pc = 0x22EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEE8u;
        // 0x22eeec: 0x8e73020c  lw          $s3, 0x20C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEF0u;
        goto label_22eef0;
    }
    ctx->pc = 0x22EEE8u;
    {
        const bool branch_taken_0x22eee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEE8u;
        // 0x22eeec: 0x8e73020c  lw          $s3, 0x20C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eee8) {
            ctx->pc = 0x22EF34u;
            goto label_22ef34;
        }
    }
    ctx->pc = 0x22EEF0u;
label_22eef0:
    // 0x22eef0: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x22eef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_22eef4:
    // 0x22eef4: 0x0  nop
    ctx->pc = 0x22eef4u;
    // NOP
label_22eef8:
    // 0x22eef8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_22eefc:
    // 0x22eefc: 0xc0e409a  jal         func_390268
label_22ef00:
    if (ctx->pc == 0x22EF00u) {
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF04u;
        goto label_22ef04;
    }
    ctx->pc = 0x22EEFCu;
    SET_GPR_U32(ctx, 31, 0x22EF04u);
    ctx->pc = 0x22EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEFCu;
    // 0x22ef00: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22EEFCu, 0x22EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF04u;
label_22ef04:
    // 0x22ef04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ef04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ef08:
    // 0x22ef08: 0xc087502  jal         func_21D408
label_22ef0c:
    if (ctx->pc == 0x22EF0Cu) {
        ctx->pc = 0x22EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF08u;
        // 0x22ef0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF10u;
        goto label_22ef10;
    }
    ctx->pc = 0x22EF08u;
    SET_GPR_U32(ctx, 31, 0x22EF10u);
    ctx->pc = 0x22EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF08u;
    // 0x22ef0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22EF08u, 0x22EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF10u;
label_22ef10:
    // 0x22ef10: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x22ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_22ef14:
    // 0x22ef14: 0x1073ff5a  beq         $v1, $s3, . + 4 + (-0xA6 << 2)
label_22ef18:
    if (ctx->pc == 0x22EF18u) {
        ctx->pc = 0x22EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF14u;
        // 0x22ef18: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF1Cu;
        goto label_22ef1c;
    }
    ctx->pc = 0x22EF14u;
    {
        const bool branch_taken_0x22ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x22EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF14u;
        // 0x22ef18: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef14) {
            ctx->pc = 0x22EC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec80;
        }
    }
    ctx->pc = 0x22EF1Cu;
label_22ef1c:
    // 0x22ef1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22ef20:
    // 0x22ef20: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22ef20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_22ef24:
    // 0x22ef24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22ef24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22ef28:
    // 0x22ef28: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22ef2c:
    if (ctx->pc == 0x22EF2Cu) {
        ctx->pc = 0x22EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF28u;
        // 0x22ef2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF30u;
        goto label_22ef30;
    }
    ctx->pc = 0x22EF28u;
    {
        const bool branch_taken_0x22ef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF28u;
        // 0x22ef2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef28) {
            ctx->pc = 0x22EEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eef8;
        }
    }
    ctx->pc = 0x22EF30u;
label_22ef30:
    // 0x22ef30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22ef30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22ef34:
    // 0x22ef34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22ef34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22ef38:
    // 0x22ef38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22ef38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22ef3c:
    // 0x22ef3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ef3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22ef40:
    // 0x22ef40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22ef40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ef44:
    // 0x22ef44: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22ef44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ef48:
    // 0x22ef48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ef4c:
    // 0x22ef4c: 0x3e00008  jr          $ra
label_22ef50:
    if (ctx->pc == 0x22EF50u) {
        ctx->pc = 0x22EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF4Cu;
        // 0x22ef50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF54u;
        goto label_22ef54;
    }
    ctx->pc = 0x22EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF4Cu;
        // 0x22ef50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF54u;
label_22ef54:
    // 0x22ef54: 0x0  nop
    ctx->pc = 0x22ef54u;
    // NOP
    ctx->pc = 0x22ef58u;
}
