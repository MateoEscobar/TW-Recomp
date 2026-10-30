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

// Function: sub_0026EC10
// Address: 0x26ec10 - 0x26ef68
void sub_0026EC10_0x26ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EC10_0x26ec10");
#endif

    switch (ctx->pc) {
        case 0x26ec10u: goto label_26ec10;
        case 0x26ec14u: goto label_26ec14;
        case 0x26ec18u: goto label_26ec18;
        case 0x26ec1cu: goto label_26ec1c;
        case 0x26ec20u: goto label_26ec20;
        case 0x26ec24u: goto label_26ec24;
        case 0x26ec28u: goto label_26ec28;
        case 0x26ec2cu: goto label_26ec2c;
        case 0x26ec30u: goto label_26ec30;
        case 0x26ec34u: goto label_26ec34;
        case 0x26ec38u: goto label_26ec38;
        case 0x26ec3cu: goto label_26ec3c;
        case 0x26ec40u: goto label_26ec40;
        case 0x26ec44u: goto label_26ec44;
        case 0x26ec48u: goto label_26ec48;
        case 0x26ec4cu: goto label_26ec4c;
        case 0x26ec50u: goto label_26ec50;
        case 0x26ec54u: goto label_26ec54;
        case 0x26ec58u: goto label_26ec58;
        case 0x26ec5cu: goto label_26ec5c;
        case 0x26ec60u: goto label_26ec60;
        case 0x26ec64u: goto label_26ec64;
        case 0x26ec68u: goto label_26ec68;
        case 0x26ec6cu: goto label_26ec6c;
        case 0x26ec70u: goto label_26ec70;
        case 0x26ec74u: goto label_26ec74;
        case 0x26ec78u: goto label_26ec78;
        case 0x26ec7cu: goto label_26ec7c;
        case 0x26ec80u: goto label_26ec80;
        case 0x26ec84u: goto label_26ec84;
        case 0x26ec88u: goto label_26ec88;
        case 0x26ec8cu: goto label_26ec8c;
        case 0x26ec90u: goto label_26ec90;
        case 0x26ec94u: goto label_26ec94;
        case 0x26ec98u: goto label_26ec98;
        case 0x26ec9cu: goto label_26ec9c;
        case 0x26eca0u: goto label_26eca0;
        case 0x26eca4u: goto label_26eca4;
        case 0x26eca8u: goto label_26eca8;
        case 0x26ecacu: goto label_26ecac;
        case 0x26ecb0u: goto label_26ecb0;
        case 0x26ecb4u: goto label_26ecb4;
        case 0x26ecb8u: goto label_26ecb8;
        case 0x26ecbcu: goto label_26ecbc;
        case 0x26ecc0u: goto label_26ecc0;
        case 0x26ecc4u: goto label_26ecc4;
        case 0x26ecc8u: goto label_26ecc8;
        case 0x26ecccu: goto label_26eccc;
        case 0x26ecd0u: goto label_26ecd0;
        case 0x26ecd4u: goto label_26ecd4;
        case 0x26ecd8u: goto label_26ecd8;
        case 0x26ecdcu: goto label_26ecdc;
        case 0x26ece0u: goto label_26ece0;
        case 0x26ece4u: goto label_26ece4;
        case 0x26ece8u: goto label_26ece8;
        case 0x26ececu: goto label_26ecec;
        case 0x26ecf0u: goto label_26ecf0;
        case 0x26ecf4u: goto label_26ecf4;
        case 0x26ecf8u: goto label_26ecf8;
        case 0x26ecfcu: goto label_26ecfc;
        case 0x26ed00u: goto label_26ed00;
        case 0x26ed04u: goto label_26ed04;
        case 0x26ed08u: goto label_26ed08;
        case 0x26ed0cu: goto label_26ed0c;
        case 0x26ed10u: goto label_26ed10;
        case 0x26ed14u: goto label_26ed14;
        case 0x26ed18u: goto label_26ed18;
        case 0x26ed1cu: goto label_26ed1c;
        case 0x26ed20u: goto label_26ed20;
        case 0x26ed24u: goto label_26ed24;
        case 0x26ed28u: goto label_26ed28;
        case 0x26ed2cu: goto label_26ed2c;
        case 0x26ed30u: goto label_26ed30;
        case 0x26ed34u: goto label_26ed34;
        case 0x26ed38u: goto label_26ed38;
        case 0x26ed3cu: goto label_26ed3c;
        case 0x26ed40u: goto label_26ed40;
        case 0x26ed44u: goto label_26ed44;
        case 0x26ed48u: goto label_26ed48;
        case 0x26ed4cu: goto label_26ed4c;
        case 0x26ed50u: goto label_26ed50;
        case 0x26ed54u: goto label_26ed54;
        case 0x26ed58u: goto label_26ed58;
        case 0x26ed5cu: goto label_26ed5c;
        case 0x26ed60u: goto label_26ed60;
        case 0x26ed64u: goto label_26ed64;
        case 0x26ed68u: goto label_26ed68;
        case 0x26ed6cu: goto label_26ed6c;
        case 0x26ed70u: goto label_26ed70;
        case 0x26ed74u: goto label_26ed74;
        case 0x26ed78u: goto label_26ed78;
        case 0x26ed7cu: goto label_26ed7c;
        case 0x26ed80u: goto label_26ed80;
        case 0x26ed84u: goto label_26ed84;
        case 0x26ed88u: goto label_26ed88;
        case 0x26ed8cu: goto label_26ed8c;
        case 0x26ed90u: goto label_26ed90;
        case 0x26ed94u: goto label_26ed94;
        case 0x26ed98u: goto label_26ed98;
        case 0x26ed9cu: goto label_26ed9c;
        case 0x26eda0u: goto label_26eda0;
        case 0x26eda4u: goto label_26eda4;
        case 0x26eda8u: goto label_26eda8;
        case 0x26edacu: goto label_26edac;
        case 0x26edb0u: goto label_26edb0;
        case 0x26edb4u: goto label_26edb4;
        case 0x26edb8u: goto label_26edb8;
        case 0x26edbcu: goto label_26edbc;
        case 0x26edc0u: goto label_26edc0;
        case 0x26edc4u: goto label_26edc4;
        case 0x26edc8u: goto label_26edc8;
        case 0x26edccu: goto label_26edcc;
        case 0x26edd0u: goto label_26edd0;
        case 0x26edd4u: goto label_26edd4;
        case 0x26edd8u: goto label_26edd8;
        case 0x26eddcu: goto label_26eddc;
        case 0x26ede0u: goto label_26ede0;
        case 0x26ede4u: goto label_26ede4;
        case 0x26ede8u: goto label_26ede8;
        case 0x26edecu: goto label_26edec;
        case 0x26edf0u: goto label_26edf0;
        case 0x26edf4u: goto label_26edf4;
        case 0x26edf8u: goto label_26edf8;
        case 0x26edfcu: goto label_26edfc;
        case 0x26ee00u: goto label_26ee00;
        case 0x26ee04u: goto label_26ee04;
        case 0x26ee08u: goto label_26ee08;
        case 0x26ee0cu: goto label_26ee0c;
        case 0x26ee10u: goto label_26ee10;
        case 0x26ee14u: goto label_26ee14;
        case 0x26ee18u: goto label_26ee18;
        case 0x26ee1cu: goto label_26ee1c;
        case 0x26ee20u: goto label_26ee20;
        case 0x26ee24u: goto label_26ee24;
        case 0x26ee28u: goto label_26ee28;
        case 0x26ee2cu: goto label_26ee2c;
        case 0x26ee30u: goto label_26ee30;
        case 0x26ee34u: goto label_26ee34;
        case 0x26ee38u: goto label_26ee38;
        case 0x26ee3cu: goto label_26ee3c;
        case 0x26ee40u: goto label_26ee40;
        case 0x26ee44u: goto label_26ee44;
        case 0x26ee48u: goto label_26ee48;
        case 0x26ee4cu: goto label_26ee4c;
        case 0x26ee50u: goto label_26ee50;
        case 0x26ee54u: goto label_26ee54;
        case 0x26ee58u: goto label_26ee58;
        case 0x26ee5cu: goto label_26ee5c;
        case 0x26ee60u: goto label_26ee60;
        case 0x26ee64u: goto label_26ee64;
        case 0x26ee68u: goto label_26ee68;
        case 0x26ee6cu: goto label_26ee6c;
        case 0x26ee70u: goto label_26ee70;
        case 0x26ee74u: goto label_26ee74;
        case 0x26ee78u: goto label_26ee78;
        case 0x26ee7cu: goto label_26ee7c;
        case 0x26ee80u: goto label_26ee80;
        case 0x26ee84u: goto label_26ee84;
        case 0x26ee88u: goto label_26ee88;
        case 0x26ee8cu: goto label_26ee8c;
        case 0x26ee90u: goto label_26ee90;
        case 0x26ee94u: goto label_26ee94;
        case 0x26ee98u: goto label_26ee98;
        case 0x26ee9cu: goto label_26ee9c;
        case 0x26eea0u: goto label_26eea0;
        case 0x26eea4u: goto label_26eea4;
        case 0x26eea8u: goto label_26eea8;
        case 0x26eeacu: goto label_26eeac;
        case 0x26eeb0u: goto label_26eeb0;
        case 0x26eeb4u: goto label_26eeb4;
        case 0x26eeb8u: goto label_26eeb8;
        case 0x26eebcu: goto label_26eebc;
        case 0x26eec0u: goto label_26eec0;
        case 0x26eec4u: goto label_26eec4;
        case 0x26eec8u: goto label_26eec8;
        case 0x26eeccu: goto label_26eecc;
        case 0x26eed0u: goto label_26eed0;
        case 0x26eed4u: goto label_26eed4;
        case 0x26eed8u: goto label_26eed8;
        case 0x26eedcu: goto label_26eedc;
        case 0x26eee0u: goto label_26eee0;
        case 0x26eee4u: goto label_26eee4;
        case 0x26eee8u: goto label_26eee8;
        case 0x26eeecu: goto label_26eeec;
        case 0x26eef0u: goto label_26eef0;
        case 0x26eef4u: goto label_26eef4;
        case 0x26eef8u: goto label_26eef8;
        case 0x26eefcu: goto label_26eefc;
        case 0x26ef00u: goto label_26ef00;
        case 0x26ef04u: goto label_26ef04;
        case 0x26ef08u: goto label_26ef08;
        case 0x26ef0cu: goto label_26ef0c;
        case 0x26ef10u: goto label_26ef10;
        case 0x26ef14u: goto label_26ef14;
        case 0x26ef18u: goto label_26ef18;
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef20u: goto label_26ef20;
        case 0x26ef24u: goto label_26ef24;
        case 0x26ef28u: goto label_26ef28;
        case 0x26ef2cu: goto label_26ef2c;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef34u: goto label_26ef34;
        case 0x26ef38u: goto label_26ef38;
        case 0x26ef3cu: goto label_26ef3c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef44u: goto label_26ef44;
        case 0x26ef48u: goto label_26ef48;
        case 0x26ef4cu: goto label_26ef4c;
        case 0x26ef50u: goto label_26ef50;
        case 0x26ef54u: goto label_26ef54;
        case 0x26ef58u: goto label_26ef58;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef60u: goto label_26ef60;
        case 0x26ef64u: goto label_26ef64;
        default: break;
    }

    ctx->pc = 0x26ec10u;

label_26ec10:
    // 0x26ec10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26ec14:
    // 0x26ec14: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26ec18:
    // 0x26ec18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ec18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26ec1c:
    // 0x26ec1c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26ec20:
    // 0x26ec20: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26ec24:
    // 0x26ec24: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26ec28:
    // 0x26ec28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26ec2c:
    // 0x26ec2c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26ec30:
    // 0x26ec30: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26ec34:
    // 0x26ec34: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26ec38:
    // 0x26ec38: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26ec3c:
    // 0x26ec3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26ec40:
    // 0x26ec40: 0xc0e409a  jal         func_390268
label_26ec44:
    if (ctx->pc == 0x26EC44u) {
        ctx->pc = 0x26EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC40u;
        // 0x26ec44: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC48u;
        goto label_26ec48;
    }
    ctx->pc = 0x26EC40u;
    SET_GPR_U32(ctx, 31, 0x26EC48u);
    ctx->pc = 0x26EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC40u;
    // 0x26ec44: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26EC40u, 0x26EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC48u;
label_26ec48:
    // 0x26ec48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ec48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ec4c:
    // 0x26ec4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ec50:
    // 0x26ec50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26ec54:
    // 0x26ec54: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x26ec54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26ec58:
    // 0x26ec58: 0xc094f9a  jal         func_253E68
label_26ec5c:
    if (ctx->pc == 0x26EC5Cu) {
        ctx->pc = 0x26EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC58u;
        // 0x26ec5c: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC60u;
        goto label_26ec60;
    }
    ctx->pc = 0x26EC58u;
    SET_GPR_U32(ctx, 31, 0x26EC60u);
    ctx->pc = 0x26EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC58u;
    // 0x26ec5c: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26EC58u, 0x26EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC60u;
label_26ec60:
    // 0x26ec60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ec64:
    // 0x26ec64: 0xc089988  jal         func_226620
label_26ec68:
    if (ctx->pc == 0x26EC68u) {
        ctx->pc = 0x26EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC64u;
        // 0x26ec68: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC6Cu;
        goto label_26ec6c;
    }
    ctx->pc = 0x26EC64u;
    SET_GPR_U32(ctx, 31, 0x26EC6Cu);
    ctx->pc = 0x26EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC64u;
    // 0x26ec68: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26EC64u, 0x26EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC6Cu;
label_26ec6c:
    // 0x26ec6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ec70:
    // 0x26ec70: 0xc089974  jal         func_2265D0
label_26ec74:
    if (ctx->pc == 0x26EC74u) {
        ctx->pc = 0x26EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC70u;
        // 0x26ec74: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC78u;
        goto label_26ec78;
    }
    ctx->pc = 0x26EC70u;
    SET_GPR_U32(ctx, 31, 0x26EC78u);
    ctx->pc = 0x26EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC70u;
    // 0x26ec74: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26EC70u, 0x26EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC78u;
label_26ec78:
    // 0x26ec78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ec7c:
    // 0x26ec7c: 0xc094f9a  jal         func_253E68
label_26ec80:
    if (ctx->pc == 0x26EC80u) {
        ctx->pc = 0x26EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC7Cu;
        // 0x26ec80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC84u;
        goto label_26ec84;
    }
    ctx->pc = 0x26EC7Cu;
    SET_GPR_U32(ctx, 31, 0x26EC84u);
    ctx->pc = 0x26EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC7Cu;
    // 0x26ec80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26EC7Cu, 0x26EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC84u;
label_26ec84:
    // 0x26ec84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ec88:
    // 0x26ec88: 0xc089988  jal         func_226620
label_26ec8c:
    if (ctx->pc == 0x26EC8Cu) {
        ctx->pc = 0x26EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC88u;
        // 0x26ec8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC90u;
        goto label_26ec90;
    }
    ctx->pc = 0x26EC88u;
    SET_GPR_U32(ctx, 31, 0x26EC90u);
    ctx->pc = 0x26EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC88u;
    // 0x26ec8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26EC88u, 0x26EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC90u;
label_26ec90:
    // 0x26ec90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26ec94:
    // 0x26ec94: 0xc089974  jal         func_2265D0
label_26ec98:
    if (ctx->pc == 0x26EC98u) {
        ctx->pc = 0x26EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC94u;
        // 0x26ec98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EC9Cu;
        goto label_26ec9c;
    }
    ctx->pc = 0x26EC94u;
    SET_GPR_U32(ctx, 31, 0x26EC9Cu);
    ctx->pc = 0x26EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC94u;
    // 0x26ec98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26EC94u, 0x26EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC9Cu;
label_26ec9c:
    // 0x26ec9c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26eca0:
    // 0x26eca0: 0x2456e160  addiu       $s6, $v0, -0x1EA0
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26eca4:
    // 0x26eca4: 0xc041532  jal         func_1054C8
label_26eca8:
    if (ctx->pc == 0x26ECA8u) {
        ctx->pc = 0x26ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECA4u;
        // 0x26eca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ECACu;
        goto label_26ecac;
    }
    ctx->pc = 0x26ECA4u;
    SET_GPR_U32(ctx, 31, 0x26ECACu);
    ctx->pc = 0x26ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECA4u;
    // 0x26eca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26ECA4u, 0x26ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECACu;
label_26ecac:
    // 0x26ecac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ecb0:
    // 0x26ecb0: 0xc041532  jal         func_1054C8
label_26ecb4:
    if (ctx->pc == 0x26ECB4u) {
        ctx->pc = 0x26ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECB0u;
        // 0x26ecb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ECB8u;
        goto label_26ecb8;
    }
    ctx->pc = 0x26ECB0u;
    SET_GPR_U32(ctx, 31, 0x26ECB8u);
    ctx->pc = 0x26ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECB0u;
    // 0x26ecb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26ECB0u, 0x26ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECB8u;
label_26ecb8:
    // 0x26ecb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ecb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ecbc:
    // 0x26ecbc: 0xc041532  jal         func_1054C8
label_26ecc0:
    if (ctx->pc == 0x26ECC0u) {
        ctx->pc = 0x26ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECBCu;
        // 0x26ecc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ECC4u;
        goto label_26ecc4;
    }
    ctx->pc = 0x26ECBCu;
    SET_GPR_U32(ctx, 31, 0x26ECC4u);
    ctx->pc = 0x26ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECBCu;
    // 0x26ecc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26ECBCu, 0x26ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECC4u;
label_26ecc4:
    // 0x26ecc4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26ecc8:
    if (ctx->pc == 0x26ECC8u) {
        ctx->pc = 0x26ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECC4u;
        // 0x26ecc8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ECCCu;
        goto label_26eccc;
    }
    ctx->pc = 0x26ECC4u;
    {
        const bool branch_taken_0x26ecc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECC4u;
        // 0x26ecc8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecc4) {
            ctx->pc = 0x26ED04u;
            goto label_26ed04;
        }
    }
    ctx->pc = 0x26ECCCu;
label_26eccc:
    // 0x26eccc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ecd0:
    // 0x26ecd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26ecd4:
    // 0x26ecd4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26ecd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ecd8:
    // 0x26ecd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ecdc:
    // 0x26ecdc: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26ece0:
    // 0x26ece0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26ece0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ece4:
    // 0x26ece4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26ece8:
    // 0x26ece8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26ecec:
    // 0x26ecec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26ececu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26ecf0:
    // 0x26ecf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ecf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ecf4:
    // 0x26ecf4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26ecf8:
    // 0x26ecf8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26ecf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26ecfc:
    // 0x26ecfc: 0xc041bd4  jal         func_106F50
label_26ed00:
    if (ctx->pc == 0x26ED00u) {
        ctx->pc = 0x26ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECFCu;
        // 0x26ed00: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED04u;
        goto label_26ed04;
    }
    ctx->pc = 0x26ECFCu;
    SET_GPR_U32(ctx, 31, 0x26ED04u);
    ctx->pc = 0x26ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECFCu;
    // 0x26ed00: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26ECFCu, 0x26ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED04u;
label_26ed04:
    // 0x26ed04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26ed08:
    // 0x26ed08: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26ed0c:
    // 0x26ed0c: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x26ed0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26ed10:
    // 0x26ed10: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26ed14:
    // 0x26ed14: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26ed18:
    // 0x26ed18: 0x60f809  jalr        $v1
label_26ed1c:
    if (ctx->pc == 0x26ED1Cu) {
        ctx->pc = 0x26ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED18u;
        // 0x26ed1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED20u;
        goto label_26ed20;
    }
    ctx->pc = 0x26ED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26ED20u);
        ctx->pc = 0x26ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED18u;
        // 0x26ed1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED18u, 0x26ED20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ED20u;
label_26ed20:
    // 0x26ed20: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ed24:
    // 0x26ed24: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26ed28:
    if (ctx->pc == 0x26ED28u) {
        ctx->pc = 0x26ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED24u;
        // 0x26ed28: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED2Cu;
        goto label_26ed2c;
    }
    ctx->pc = 0x26ED24u;
    {
        const bool branch_taken_0x26ed24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED24u;
        // 0x26ed28: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed24) {
            ctx->pc = 0x26ED68u;
            goto label_26ed68;
        }
    }
    ctx->pc = 0x26ED2Cu;
label_26ed2c:
    // 0x26ed2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26ed30:
    // 0x26ed30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ed30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ed34:
    // 0x26ed34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ed38:
    // 0x26ed38: 0x40f809  jalr        $v0
label_26ed3c:
    if (ctx->pc == 0x26ED3Cu) {
        ctx->pc = 0x26ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED38u;
        // 0x26ed3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED40u;
        goto label_26ed40;
    }
    ctx->pc = 0x26ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ED40u);
        ctx->pc = 0x26ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED38u;
        // 0x26ed3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED38u, 0x26ED40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ED40u;
label_26ed40:
    // 0x26ed40: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26ed44:
    // 0x26ed44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ed44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ed48:
    // 0x26ed48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26ed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ed4c:
    // 0x26ed4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ed4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ed50:
    // 0x26ed50: 0x254aeba0  addiu       $t2, $t2, -0x1460
    ctx->pc = 0x26ed50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962080));
label_26ed54:
    // 0x26ed54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ed58:
    // 0x26ed58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ed5c:
    // 0x26ed5c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x26ed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26ed60:
    // 0x26ed60: 0xc041664  jal         func_105990
label_26ed64:
    if (ctx->pc == 0x26ED64u) {
        ctx->pc = 0x26ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED60u;
        // 0x26ed64: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED68u;
        goto label_26ed68;
    }
    ctx->pc = 0x26ED60u;
    SET_GPR_U32(ctx, 31, 0x26ED68u);
    ctx->pc = 0x26ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED60u;
    // 0x26ed64: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26ED60u, 0x26ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED68u;
label_26ed68:
    // 0x26ed68: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26ed6c:
    if (ctx->pc == 0x26ED6Cu) {
        ctx->pc = 0x26ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED68u;
        // 0x26ed6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED70u;
        goto label_26ed70;
    }
    ctx->pc = 0x26ED68u;
    {
        const bool branch_taken_0x26ed68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED68u;
        // 0x26ed6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed68) {
            ctx->pc = 0x26ED90u;
            goto label_26ed90;
        }
    }
    ctx->pc = 0x26ED70u;
label_26ed70:
    // 0x26ed70: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26ed74:
    // 0x26ed74: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ed74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ed78:
    // 0x26ed78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ed7c:
    // 0x26ed7c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26ed7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26ed80:
    // 0x26ed80: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ed80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26ed84:
    // 0x26ed84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ed84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ed88:
    // 0x26ed88: 0xc041b20  jal         func_106C80
label_26ed8c:
    if (ctx->pc == 0x26ED8Cu) {
        ctx->pc = 0x26ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED88u;
        // 0x26ed8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED90u;
        goto label_26ed90;
    }
    ctx->pc = 0x26ED88u;
    SET_GPR_U32(ctx, 31, 0x26ED90u);
    ctx->pc = 0x26ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED88u;
    // 0x26ed8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26ED88u, 0x26ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED90u;
label_26ed90:
    // 0x26ed90: 0xc05d484  jal         func_175210
label_26ed94:
    if (ctx->pc == 0x26ED94u) {
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ED98u;
        goto label_26ed98;
    }
    ctx->pc = 0x26ED90u;
    SET_GPR_U32(ctx, 31, 0x26ED98u);
    ctx->pc = 0x26ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED90u;
    // 0x26ed94: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26ED90u, 0x26ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED98u;
label_26ed98:
    // 0x26ed98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ed9c:
    // 0x26ed9c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26ed9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26eda0:
    // 0x26eda0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26eda4:
    // 0x26eda4: 0xa0f809  jalr        $a1
label_26eda8:
    if (ctx->pc == 0x26EDA8u) {
        ctx->pc = 0x26EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDA4u;
        // 0x26eda8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDACu;
        goto label_26edac;
    }
    ctx->pc = 0x26EDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26EDACu);
        ctx->pc = 0x26EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDA4u;
        // 0x26eda8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EDA4u, 0x26EDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EDACu;
label_26edac:
    // 0x26edac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26edb0:
    // 0x26edb0: 0xc087016  jal         func_21C058
label_26edb4:
    if (ctx->pc == 0x26EDB4u) {
        ctx->pc = 0x26EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDB0u;
        // 0x26edb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDB8u;
        goto label_26edb8;
    }
    ctx->pc = 0x26EDB0u;
    SET_GPR_U32(ctx, 31, 0x26EDB8u);
    ctx->pc = 0x26EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDB0u;
    // 0x26edb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26EDB0u, 0x26EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDB8u;
label_26edb8:
    // 0x26edb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26edb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26edbc:
    // 0x26edbc: 0xc05d53a  jal         func_1754E8
label_26edc0:
    if (ctx->pc == 0x26EDC0u) {
        ctx->pc = 0x26EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDBCu;
        // 0x26edc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDC4u;
        goto label_26edc4;
    }
    ctx->pc = 0x26EDBCu;
    SET_GPR_U32(ctx, 31, 0x26EDC4u);
    ctx->pc = 0x26EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDBCu;
    // 0x26edc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26EDBCu, 0x26EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDC4u;
label_26edc4:
    // 0x26edc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26edc8:
    // 0x26edc8: 0xc05d4f6  jal         func_1753D8
label_26edcc:
    if (ctx->pc == 0x26EDCCu) {
        ctx->pc = 0x26EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDC8u;
        // 0x26edcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDD0u;
        goto label_26edd0;
    }
    ctx->pc = 0x26EDC8u;
    SET_GPR_U32(ctx, 31, 0x26EDD0u);
    ctx->pc = 0x26EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDC8u;
    // 0x26edcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26EDC8u, 0x26EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDD0u;
label_26edd0:
    // 0x26edd0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x26edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_26edd4:
    // 0x26edd4: 0xc089990  jal         func_226640
label_26edd8:
    if (ctx->pc == 0x26EDD8u) {
        ctx->pc = 0x26EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDD4u;
        // 0x26edd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDDCu;
        goto label_26eddc;
    }
    ctx->pc = 0x26EDD4u;
    SET_GPR_U32(ctx, 31, 0x26EDDCu);
    ctx->pc = 0x26EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDD4u;
    // 0x26edd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26EDD4u, 0x26EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDDCu;
label_26eddc:
    // 0x26eddc: 0xc041532  jal         func_1054C8
label_26ede0:
    if (ctx->pc == 0x26EDE0u) {
        ctx->pc = 0x26EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDDCu;
        // 0x26ede0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDE4u;
        goto label_26ede4;
    }
    ctx->pc = 0x26EDDCu;
    SET_GPR_U32(ctx, 31, 0x26EDE4u);
    ctx->pc = 0x26EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDDCu;
    // 0x26ede0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26EDDCu, 0x26EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDE4u;
label_26ede4:
    // 0x26ede4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ede8:
    // 0x26ede8: 0xc041532  jal         func_1054C8
label_26edec:
    if (ctx->pc == 0x26EDECu) {
        ctx->pc = 0x26EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDE8u;
        // 0x26edec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDF0u;
        goto label_26edf0;
    }
    ctx->pc = 0x26EDE8u;
    SET_GPR_U32(ctx, 31, 0x26EDF0u);
    ctx->pc = 0x26EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDE8u;
    // 0x26edec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26EDE8u, 0x26EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDF0u;
label_26edf0:
    // 0x26edf0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26edf4:
    // 0x26edf4: 0xc041532  jal         func_1054C8
label_26edf8:
    if (ctx->pc == 0x26EDF8u) {
        ctx->pc = 0x26EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDF4u;
        // 0x26edf8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EDFCu;
        goto label_26edfc;
    }
    ctx->pc = 0x26EDF4u;
    SET_GPR_U32(ctx, 31, 0x26EDFCu);
    ctx->pc = 0x26EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDF4u;
    // 0x26edf8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26EDF4u, 0x26EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDFCu;
label_26edfc:
    // 0x26edfc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_26ee00:
    if (ctx->pc == 0x26EE00u) {
        ctx->pc = 0x26EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDFCu;
        // 0x26ee00: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE04u;
        goto label_26ee04;
    }
    ctx->pc = 0x26EDFCu;
    {
        const bool branch_taken_0x26edfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDFCu;
        // 0x26ee00: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edfc) {
            ctx->pc = 0x26EE3Cu;
            goto label_26ee3c;
        }
    }
    ctx->pc = 0x26EE04u;
label_26ee04:
    // 0x26ee04: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26ee08:
    // 0x26ee08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26ee0c:
    // 0x26ee0c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ee10:
    // 0x26ee10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ee14:
    // 0x26ee14: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26ee18:
    // 0x26ee18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26ee18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ee1c:
    // 0x26ee1c: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26ee20:
    // 0x26ee20: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26ee24:
    // 0x26ee24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26ee24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26ee28:
    // 0x26ee28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ee28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ee2c:
    // 0x26ee2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26ee30:
    // 0x26ee30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26ee30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26ee34:
    // 0x26ee34: 0xc041bd4  jal         func_106F50
label_26ee38:
    if (ctx->pc == 0x26EE38u) {
        ctx->pc = 0x26EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE34u;
        // 0x26ee38: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE3Cu;
        goto label_26ee3c;
    }
    ctx->pc = 0x26EE34u;
    SET_GPR_U32(ctx, 31, 0x26EE3Cu);
    ctx->pc = 0x26EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE34u;
    // 0x26ee38: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26EE34u, 0x26EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE3Cu;
label_26ee3c:
    // 0x26ee3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26ee40:
    // 0x26ee40: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26ee44:
    // 0x26ee44: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26ee44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26ee48:
    // 0x26ee48: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26ee4c:
    // 0x26ee4c: 0x60f809  jalr        $v1
label_26ee50:
    if (ctx->pc == 0x26EE50u) {
        ctx->pc = 0x26EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE4Cu;
        // 0x26ee50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE54u;
        goto label_26ee54;
    }
    ctx->pc = 0x26EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26EE54u);
        ctx->pc = 0x26EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE4Cu;
        // 0x26ee50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE4Cu, 0x26EE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EE54u;
label_26ee54:
    // 0x26ee54: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26ee58:
    // 0x26ee58: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_26ee5c:
    if (ctx->pc == 0x26EE5Cu) {
        ctx->pc = 0x26EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE58u;
        // 0x26ee5c: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE60u;
        goto label_26ee60;
    }
    ctx->pc = 0x26EE58u;
    {
        const bool branch_taken_0x26ee58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE58u;
        // 0x26ee5c: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee58) {
            ctx->pc = 0x26EEB4u;
            goto label_26eeb4;
        }
    }
    ctx->pc = 0x26EE60u;
label_26ee60:
    // 0x26ee60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26ee64:
    // 0x26ee64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ee64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ee68:
    // 0x26ee68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ee6c:
    // 0x26ee6c: 0x40f809  jalr        $v0
label_26ee70:
    if (ctx->pc == 0x26EE70u) {
        ctx->pc = 0x26EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE6Cu;
        // 0x26ee70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE74u;
        goto label_26ee74;
    }
    ctx->pc = 0x26EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26EE74u);
        ctx->pc = 0x26EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE6Cu;
        // 0x26ee70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE6Cu, 0x26EE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EE74u;
label_26ee74:
    // 0x26ee74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26ee78:
    // 0x26ee78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ee78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ee7c:
    // 0x26ee7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ee80:
    // 0x26ee80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ee84:
    // 0x26ee84: 0x40f809  jalr        $v0
label_26ee88:
    if (ctx->pc == 0x26EE88u) {
        ctx->pc = 0x26EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE84u;
        // 0x26ee88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EE8Cu;
        goto label_26ee8c;
    }
    ctx->pc = 0x26EE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26EE8Cu);
        ctx->pc = 0x26EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE84u;
        // 0x26ee88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE84u, 0x26EE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EE8Cu;
label_26ee8c:
    // 0x26ee8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ee8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ee90:
    // 0x26ee90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26ee90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ee94:
    // 0x26ee94: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ee98:
    // 0x26ee98: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26ee98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ee9c:
    // 0x26ee9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26eea0:
    // 0x26eea0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26eea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26eea4:
    // 0x26eea4: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x26eea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_26eea8:
    // 0x26eea8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x26eea8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_26eeac:
    // 0x26eeac: 0xc04229e  jal         func_108A78
label_26eeb0:
    if (ctx->pc == 0x26EEB0u) {
        ctx->pc = 0x26EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEACu;
        // 0x26eeb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EEB4u;
        goto label_26eeb4;
    }
    ctx->pc = 0x26EEACu;
    SET_GPR_U32(ctx, 31, 0x26EEB4u);
    ctx->pc = 0x26EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEACu;
    // 0x26eeb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26EEACu, 0x26EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEB4u;
label_26eeb4:
    // 0x26eeb4: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26eeb8:
    if (ctx->pc == 0x26EEB8u) {
        ctx->pc = 0x26EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEB4u;
        // 0x26eeb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EEBCu;
        goto label_26eebc;
    }
    ctx->pc = 0x26EEB4u;
    {
        const bool branch_taken_0x26eeb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEB4u;
        // 0x26eeb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eeb4) {
            ctx->pc = 0x26EEDCu;
            goto label_26eedc;
        }
    }
    ctx->pc = 0x26EEBCu;
label_26eebc:
    // 0x26eebc: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26eec0:
    // 0x26eec0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26eec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26eec4:
    // 0x26eec4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26eec8:
    // 0x26eec8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26eec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26eecc:
    // 0x26eecc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26eeccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26eed0:
    // 0x26eed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26eed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26eed4:
    // 0x26eed4: 0xc041b20  jal         func_106C80
label_26eed8:
    if (ctx->pc == 0x26EED8u) {
        ctx->pc = 0x26EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EED4u;
        // 0x26eed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EEDCu;
        goto label_26eedc;
    }
    ctx->pc = 0x26EED4u;
    SET_GPR_U32(ctx, 31, 0x26EEDCu);
    ctx->pc = 0x26EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EED4u;
    // 0x26eed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26EED4u, 0x26EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEDCu;
label_26eedc:
    // 0x26eedc: 0xc05d484  jal         func_175210
label_26eee0:
    if (ctx->pc == 0x26EEE0u) {
        ctx->pc = 0x26EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEDCu;
        // 0x26eee0: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EEE4u;
        goto label_26eee4;
    }
    ctx->pc = 0x26EEDCu;
    SET_GPR_U32(ctx, 31, 0x26EEE4u);
    ctx->pc = 0x26EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEDCu;
    // 0x26eee0: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26EEDCu, 0x26EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEE4u;
label_26eee4:
    // 0x26eee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26eee8:
    // 0x26eee8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26eeec:
    // 0x26eeec: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26eef0:
    // 0x26eef0: 0xa0f809  jalr        $a1
label_26eef4:
    if (ctx->pc == 0x26EEF4u) {
        ctx->pc = 0x26EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEF0u;
        // 0x26eef4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EEF8u;
        goto label_26eef8;
    }
    ctx->pc = 0x26EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26EEF8u);
        ctx->pc = 0x26EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEF0u;
        // 0x26eef4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EEF0u, 0x26EEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EEF8u;
label_26eef8:
    // 0x26eef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26eefc:
    // 0x26eefc: 0xc087016  jal         func_21C058
label_26ef00:
    if (ctx->pc == 0x26EF00u) {
        ctx->pc = 0x26EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEFCu;
        // 0x26ef00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF04u;
        goto label_26ef04;
    }
    ctx->pc = 0x26EEFCu;
    SET_GPR_U32(ctx, 31, 0x26EF04u);
    ctx->pc = 0x26EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEFCu;
    // 0x26ef00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26EEFCu, 0x26EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF04u;
label_26ef04:
    // 0x26ef04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26ef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ef08:
    // 0x26ef08: 0xc05d53a  jal         func_1754E8
label_26ef0c:
    if (ctx->pc == 0x26EF0Cu) {
        ctx->pc = 0x26EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF08u;
        // 0x26ef0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF10u;
        goto label_26ef10;
    }
    ctx->pc = 0x26EF08u;
    SET_GPR_U32(ctx, 31, 0x26EF10u);
    ctx->pc = 0x26EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF08u;
    // 0x26ef0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26EF08u, 0x26EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF10u;
label_26ef10:
    // 0x26ef10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ef14:
    // 0x26ef14: 0xc05d4f6  jal         func_1753D8
label_26ef18:
    if (ctx->pc == 0x26EF18u) {
        ctx->pc = 0x26EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF14u;
        // 0x26ef18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF1Cu;
        goto label_26ef1c;
    }
    ctx->pc = 0x26EF14u;
    SET_GPR_U32(ctx, 31, 0x26EF1Cu);
    ctx->pc = 0x26EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF14u;
    // 0x26ef18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26EF14u, 0x26EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF1Cu;
label_26ef1c:
    // 0x26ef1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ef20:
    // 0x26ef20: 0xc089990  jal         func_226640
label_26ef24:
    if (ctx->pc == 0x26EF24u) {
        ctx->pc = 0x26EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF20u;
        // 0x26ef24: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF28u;
        goto label_26ef28;
    }
    ctx->pc = 0x26EF20u;
    SET_GPR_U32(ctx, 31, 0x26EF28u);
    ctx->pc = 0x26EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF20u;
    // 0x26ef24: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26EF20u, 0x26EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF28u;
label_26ef28:
    // 0x26ef28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ef2c:
    // 0x26ef2c: 0xc0a0152  jal         func_280548
label_26ef30:
    if (ctx->pc == 0x26EF30u) {
        ctx->pc = 0x26EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF2Cu;
        // 0x26ef30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF34u;
        goto label_26ef34;
    }
    ctx->pc = 0x26EF2Cu;
    SET_GPR_U32(ctx, 31, 0x26EF34u);
    ctx->pc = 0x26EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF2Cu;
    // 0x26ef30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26EF2Cu, 0x26EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF34u;
label_26ef34:
    // 0x26ef34: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26ef34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26ef38:
    // 0x26ef38: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26ef38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26ef3c:
    // 0x26ef3c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26ef3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26ef40:
    // 0x26ef40: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26ef40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26ef44:
    // 0x26ef44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26ef44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26ef48:
    // 0x26ef48: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26ef48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26ef4c:
    // 0x26ef4c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26ef4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26ef50:
    // 0x26ef50: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26ef50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26ef54:
    // 0x26ef54: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26ef54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26ef58:
    // 0x26ef58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ef58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26ef5c:
    // 0x26ef5c: 0x3e00008  jr          $ra
label_26ef60:
    if (ctx->pc == 0x26EF60u) {
        ctx->pc = 0x26EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF5Cu;
        // 0x26ef60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EF64u;
        goto label_26ef64;
    }
    ctx->pc = 0x26EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF5Cu;
        // 0x26ef60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF64u;
label_26ef64:
    // 0x26ef64: 0x0  nop
    ctx->pc = 0x26ef64u;
    // NOP
    ctx->pc = 0x26ef68u;
}
