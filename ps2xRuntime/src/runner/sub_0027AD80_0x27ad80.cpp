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

// Function: sub_0027AD80
// Address: 0x27ad80 - 0x27b058
void sub_0027AD80_0x27ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AD80_0x27ad80");
#endif

    switch (ctx->pc) {
        case 0x27ad80u: goto label_27ad80;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad88u: goto label_27ad88;
        case 0x27ad8cu: goto label_27ad8c;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad94u: goto label_27ad94;
        case 0x27ad98u: goto label_27ad98;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada0u: goto label_27ada0;
        case 0x27ada4u: goto label_27ada4;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adacu: goto label_27adac;
        case 0x27adb0u: goto label_27adb0;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adb8u: goto label_27adb8;
        case 0x27adbcu: goto label_27adbc;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adc4u: goto label_27adc4;
        case 0x27adc8u: goto label_27adc8;
        case 0x27adccu: goto label_27adcc;
        case 0x27add0u: goto label_27add0;
        case 0x27add4u: goto label_27add4;
        case 0x27add8u: goto label_27add8;
        case 0x27addcu: goto label_27addc;
        case 0x27ade0u: goto label_27ade0;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ade8u: goto label_27ade8;
        case 0x27adecu: goto label_27adec;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adf4u: goto label_27adf4;
        case 0x27adf8u: goto label_27adf8;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae04u: goto label_27ae04;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae0cu: goto label_27ae0c;
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        default: break;
    }

    ctx->pc = 0x27ad80u;

label_27ad80:
    // 0x27ad80: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_27ad84:
    // 0x27ad84: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x27ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_27ad88:
    // 0x27ad88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ad88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ad8c:
    // 0x27ad8c: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x27ad8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_27ad90:
    // 0x27ad90: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x27ad90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_27ad94:
    // 0x27ad94: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27ad94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_27ad98:
    // 0x27ad98: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x27ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_27ad9c:
    // 0x27ad9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27ad9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_27ada0:
    // 0x27ada0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x27ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_27ada4:
    // 0x27ada4: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x27ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_27ada8:
    // 0x27ada8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x27ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_27adac:
    // 0x27adac: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x27adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_27adb0:
    // 0x27adb0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x27adb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_27adb4:
    // 0x27adb4: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x27adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_27adb8:
    // 0x27adb8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x27adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_27adbc:
    // 0x27adbc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x27adbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27adc0:
    // 0x27adc0: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x27adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_27adc4:
    // 0x27adc4: 0x26560090  addiu       $s6, $s2, 0x90
    ctx->pc = 0x27adc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_27adc8:
    // 0x27adc8: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x27adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_27adcc:
    // 0x27adcc: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x27adccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_27add0:
    // 0x27add0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x27add0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_27add4:
    // 0x27add4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x27add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_27add8:
    // 0x27add8: 0xc089baa  jal         func_226EA8
label_27addc:
    if (ctx->pc == 0x27ADDCu) {
        ctx->pc = 0x27ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADD8u;
        // 0x27addc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADE0u;
        goto label_27ade0;
    }
    ctx->pc = 0x27ADD8u;
    SET_GPR_U32(ctx, 31, 0x27ADE0u);
    ctx->pc = 0x27ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADD8u;
    // 0x27addc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x27ADD8u, 0x27ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADE0u;
label_27ade0:
    // 0x27ade0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x27ade0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_27ade4:
    // 0x27ade4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27ade4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_27ade8:
    // 0x27ade8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27ade8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27adec:
    // 0x27adec: 0xc087468  jal         func_21D1A0
label_27adf0:
    if (ctx->pc == 0x27ADF0u) {
        ctx->pc = 0x27ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADECu;
        // 0x27adf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADF4u;
        goto label_27adf4;
    }
    ctx->pc = 0x27ADECu;
    SET_GPR_U32(ctx, 31, 0x27ADF4u);
    ctx->pc = 0x27ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADECu;
    // 0x27adf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27ADECu, 0x27ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADF4u;
label_27adf4:
    // 0x27adf4: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x27adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27adf8:
    // 0x27adf8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_27adfc:
    // 0x27adfc: 0x24579568  addiu       $s7, $v0, -0x6A98
    ctx->pc = 0x27adfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940008));
label_27ae00:
    // 0x27ae00: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x27ae00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
label_27ae04:
    // 0x27ae04: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27ae04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27ae08:
    // 0x27ae08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ae08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ae0c:
    // 0x27ae0c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27ae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_27ae10:
    // 0x27ae10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27ae14:
    // 0x27ae14: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27ae18:
    // 0x27ae18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ae18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ae1c:
    // 0x27ae1c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27ae20:
    // 0x27ae20: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27ae20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_27ae24:
    // 0x27ae24: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x27ae24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27ae28:
    // 0x27ae28: 0xe45400d8  swc1        $f20, 0xD8($v0)
    ctx->pc = 0x27ae28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_27ae2c:
    // 0x27ae2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_27ae30:
    // 0x27ae30: 0xe601096c  swc1        $f1, 0x96C($s0)
    ctx->pc = 0x27ae30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2412), bits); }
label_27ae34:
    // 0x27ae34: 0x86c70002  lh          $a3, 0x2($s6)
    ctx->pc = 0x27ae34u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_27ae38:
    // 0x27ae38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x27ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_27ae3c:
    // 0x27ae3c: 0xe6760970  swc1        $f22, 0x970($s3)
    ctx->pc = 0x27ae3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2416), bits); }
label_27ae40:
    // 0x27ae40: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27ae40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27ae44:
    // 0x27ae44: 0xc089d66  jal         func_227598
label_27ae48:
    if (ctx->pc == 0x27AE48u) {
        ctx->pc = 0x27AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE44u;
        // 0x27ae48: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE4Cu;
        goto label_27ae4c;
    }
    ctx->pc = 0x27AE44u;
    SET_GPR_U32(ctx, 31, 0x27AE4Cu);
    ctx->pc = 0x27AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE44u;
    // 0x27ae48: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27AE44u, 0x27AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE4Cu;
label_27ae4c:
    // 0x27ae4c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27ae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
label_27ae50:
    // 0x27ae50: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27ae50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27ae54:
    // 0x27ae54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ae58:
    // 0x27ae58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ae58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ae5c:
    // 0x27ae5c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_27ae60:
    // 0x27ae60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ae60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ae64:
    // 0x27ae64: 0xe601096c  swc1        $f1, 0x96C($s0)
    ctx->pc = 0x27ae64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2412), bits); }
label_27ae68:
    // 0x27ae68: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
label_27ae6c:
    if (ctx->pc == 0x27AE6Cu) {
        ctx->pc = 0x27AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE68u;
        // 0x27ae6c: 0xe6600970  swc1        $f0, 0x970($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE70u;
        goto label_27ae70;
    }
    ctx->pc = 0x27AE68u;
    {
        const bool branch_taken_0x27ae68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE68u;
        // 0x27ae6c: 0xe6600970  swc1        $f0, 0x970($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae68) {
            ctx->pc = 0x27AEA8u;
            goto label_27aea8;
        }
    }
    ctx->pc = 0x27AE70u;
label_27ae70:
    // 0x27ae70: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x27ae70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_27ae74:
    // 0x27ae74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ae74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27ae78:
    // 0x27ae78: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_27ae7c:
    // 0x27ae7c: 0x86c70002  lh          $a3, 0x2($s6)
    ctx->pc = 0x27ae7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_27ae80:
    // 0x27ae80: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_27ae84:
    // 0x27ae84: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x27ae84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_27ae88:
    // 0x27ae88: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x27ae88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27ae8c:
    // 0x27ae8c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27ae90:
    // 0x27ae90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27ae94:
    // 0x27ae94: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27ae98:
    // 0x27ae98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ae98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ae9c:
    // 0x27ae9c: 0xc089d66  jal         func_227598
label_27aea0:
    if (ctx->pc == 0x27AEA0u) {
        ctx->pc = 0x27AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE9Cu;
        // 0x27aea0: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEA4u;
        goto label_27aea4;
    }
    ctx->pc = 0x27AE9Cu;
    SET_GPR_U32(ctx, 31, 0x27AEA4u);
    ctx->pc = 0x27AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE9Cu;
    // 0x27aea0: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27AE9Cu, 0x27AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEA4u;
label_27aea4:
    // 0x27aea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27aea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27aea8:
    // 0x27aea8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27aeac:
    // 0x27aeac: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_27aeb0:
    if (ctx->pc == 0x27AEB0u) {
        ctx->pc = 0x27AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEACu;
        // 0x27aeb0: 0xe6760970  swc1        $f22, 0x970($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEB4u;
        goto label_27aeb4;
    }
    ctx->pc = 0x27AEACu;
    {
        const bool branch_taken_0x27aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEACu;
        // 0x27aeb0: 0xe6760970  swc1        $f22, 0x970($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aeac) {
            ctx->pc = 0x27AFB0u;
            goto label_27afb0;
        }
    }
    ctx->pc = 0x27AEB4u;
label_27aeb4:
    // 0x27aeb4: 0xc088e94  jal         func_223A50
label_27aeb8:
    if (ctx->pc == 0x27AEB8u) {
        ctx->pc = 0x27AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEB4u;
        // 0x27aeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEBCu;
        goto label_27aebc;
    }
    ctx->pc = 0x27AEB4u;
    SET_GPR_U32(ctx, 31, 0x27AEBCu);
    ctx->pc = 0x27AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEB4u;
    // 0x27aeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x27AEB4u, 0x27AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27aec0:
    if (ctx->pc == 0x27AEC0u) {
        ctx->pc = 0x27AEC4u;
        goto label_27aec4;
    }
    ctx->pc = 0x27AEBCu;
    {
        const bool branch_taken_0x27aebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aebc) {
            ctx->pc = 0x27AEE4u;
            goto label_27aee4;
        }
    }
    ctx->pc = 0x27AEC4u;
label_27aec4:
    // 0x27aec4: 0xc088e98  jal         func_223A60
label_27aec8:
    if (ctx->pc == 0x27AEC8u) {
        ctx->pc = 0x27AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEC4u;
        // 0x27aec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AECCu;
        goto label_27aecc;
    }
    ctx->pc = 0x27AEC4u;
    SET_GPR_U32(ctx, 31, 0x27AECCu);
    ctx->pc = 0x27AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEC4u;
    // 0x27aec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x27AEC4u, 0x27AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AECCu;
label_27aecc:
    // 0x27aecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27aed0:
    if (ctx->pc == 0x27AED0u) {
        ctx->pc = 0x27AED4u;
        goto label_27aed4;
    }
    ctx->pc = 0x27AECCu;
    {
        const bool branch_taken_0x27aecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aecc) {
            ctx->pc = 0x27AEE4u;
            goto label_27aee4;
        }
    }
    ctx->pc = 0x27AED4u;
label_27aed4:
    // 0x27aed4: 0xc088ea6  jal         func_223A98
label_27aed8:
    if (ctx->pc == 0x27AED8u) {
        ctx->pc = 0x27AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED4u;
        // 0x27aed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEDCu;
        goto label_27aedc;
    }
    ctx->pc = 0x27AED4u;
    SET_GPR_U32(ctx, 31, 0x27AEDCu);
    ctx->pc = 0x27AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AED4u;
    // 0x27aed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27AED4u, 0x27AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27aee0:
    if (ctx->pc == 0x27AEE0u) {
        ctx->pc = 0x27AEE4u;
        goto label_27aee4;
    }
    ctx->pc = 0x27AEDCu;
    {
        const bool branch_taken_0x27aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aedc) {
            ctx->pc = 0x27AEF8u;
            goto label_27aef8;
        }
    }
    ctx->pc = 0x27AEE4u;
label_27aee4:
    // 0x27aee4: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x27aee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
label_27aee8:
    // 0x27aee8: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27aee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27aeec:
    // 0x27aeec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27aeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27aef0:
    // 0x27aef0: 0x0  nop
    ctx->pc = 0x27aef0u;
    // NOP
label_27aef4:
    // 0x27aef4: 0xe6a0096c  swc1        $f0, 0x96C($s5)
    ctx->pc = 0x27aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2412), bits); }
label_27aef8:
    // 0x27aef8: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
label_27aefc:
    if (ctx->pc == 0x27AEFCu) {
        ctx->pc = 0x27AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEF8u;
        // 0x27aefc: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF00u;
        goto label_27af00;
    }
    ctx->pc = 0x27AEF8u;
    {
        const bool branch_taken_0x27aef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEF8u;
        // 0x27aefc: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aef8) {
            ctx->pc = 0x27AF9Cu;
            goto label_27af9c;
        }
    }
    ctx->pc = 0x27AF00u;
label_27af00:
    // 0x27af00: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x27af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_27af04:
    // 0x27af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27af08:
    // 0x27af08: 0x26530090  addiu       $s3, $s2, 0x90
    ctx->pc = 0x27af08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_27af0c:
    // 0x27af0c: 0x8ec22c7c  lw          $v0, 0x2C7C($s6)
    ctx->pc = 0x27af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11388)));
label_27af10:
    // 0x27af10: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x27af10u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27af14:
    // 0x27af14: 0x86680002  lh          $t0, 0x2($s3)
    ctx->pc = 0x27af14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_27af18:
    // 0x27af18: 0x3c013ea0  lui         $at, 0x3EA0
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16032 << 16));
label_27af1c:
    // 0x27af1c: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x27af1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_27af20:
    // 0x27af20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27af20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27af24:
    // 0x27af24: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27af24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_27af28:
    // 0x27af28: 0xc6b4096c  lwc1        $f20, 0x96C($s5)
    ctx->pc = 0x27af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27af2c:
    // 0x27af2c: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x27af2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_27af30:
    // 0x27af30: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27af34:
    // 0x27af34: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_27af38:
    // 0x27af38: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27af38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27af3c:
    // 0x27af3c: 0xe6a0096c  swc1        $f0, 0x96C($s5)
    ctx->pc = 0x27af3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2412), bits); }
label_27af40:
    // 0x27af40: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_27af44:
    // 0x27af44: 0x2529a1e8  addiu       $t1, $t1, -0x5E18
    ctx->pc = 0x27af44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943208));
label_27af48:
    // 0x27af48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27af4c:
    // 0x27af4c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27af50:
    // 0x27af50: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27af50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27af54:
    // 0x27af54: 0xc0e6ac8  jal         func_39AB20
label_27af58:
    if (ctx->pc == 0x27AF58u) {
        ctx->pc = 0x27AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF54u;
        // 0x27af58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF5Cu;
        goto label_27af5c;
    }
    ctx->pc = 0x27AF54u;
    SET_GPR_U32(ctx, 31, 0x27AF5Cu);
    ctx->pc = 0x27AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF54u;
    // 0x27af58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x27AF54u, 0x27AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF5Cu;
label_27af5c:
    // 0x27af5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27af5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27af60:
    // 0x27af60: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_27af64:
    if (ctx->pc == 0x27AF64u) {
        ctx->pc = 0x27AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF60u;
        // 0x27af64: 0xe6b4096c  swc1        $f20, 0x96C($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2412), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF68u;
        goto label_27af68;
    }
    ctx->pc = 0x27AF60u;
    {
        const bool branch_taken_0x27af60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF60u;
        // 0x27af64: 0xe6b4096c  swc1        $f20, 0x96C($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af60) {
            ctx->pc = 0x27AF9Cu;
            goto label_27af9c;
        }
    }
    ctx->pc = 0x27AF68u;
label_27af68:
    // 0x27af68: 0x8ec22c7c  lw          $v0, 0x2C7C($s6)
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11388)));
label_27af6c:
    // 0x27af6c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27af6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27af70:
    // 0x27af70: 0x86680002  lh          $t0, 0x2($s3)
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_27af74:
    // 0x27af74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27af74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27af78:
    // 0x27af78: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x27af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_27af7c:
    // 0x27af7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27af7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_27af80:
    // 0x27af80: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27af84:
    // 0x27af84: 0x2529a070  addiu       $t1, $t1, -0x5F90
    ctx->pc = 0x27af84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942832));
label_27af88:
    // 0x27af88: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x27af88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_27af8c:
    // 0x27af8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27af8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27af90:
    // 0x27af90: 0xc0e3f1c  jal         func_38FC70
label_27af94:
    if (ctx->pc == 0x27AF94u) {
        ctx->pc = 0x27AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF90u;
        // 0x27af94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF98u;
        goto label_27af98;
    }
    ctx->pc = 0x27AF90u;
    SET_GPR_U32(ctx, 31, 0x27AF98u);
    ctx->pc = 0x27AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF90u;
    // 0x27af94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x27AF90u, 0x27AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF98u;
label_27af98:
    // 0x27af98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27af98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27af9c:
    // 0x27af9c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
label_27afa0:
    // 0x27afa0: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27afa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27afa4:
    // 0x27afa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27afa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27afa8:
    // 0x27afa8: 0x0  nop
    ctx->pc = 0x27afa8u;
    // NOP
label_27afac:
    // 0x27afac: 0xe6a0096c  swc1        $f0, 0x96C($s5)
    ctx->pc = 0x27afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2412), bits); }
label_27afb0:
    // 0x27afb0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_27afb4:
    if (ctx->pc == 0x27AFB4u) {
        ctx->pc = 0x27AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB0u;
        // 0x27afb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFB8u;
        goto label_27afb8;
    }
    ctx->pc = 0x27AFB0u;
    {
        const bool branch_taken_0x27afb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB0u;
        // 0x27afb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afb0) {
            ctx->pc = 0x27AFC4u;
            goto label_27afc4;
        }
    }
    ctx->pc = 0x27AFB8u;
label_27afb8:
    // 0x27afb8: 0xc0e1a34  jal         func_3868D0
label_27afbc:
    if (ctx->pc == 0x27AFBCu) {
        ctx->pc = 0x27AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB8u;
        // 0x27afbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFC0u;
        goto label_27afc0;
    }
    ctx->pc = 0x27AFB8u;
    SET_GPR_U32(ctx, 31, 0x27AFC0u);
    ctx->pc = 0x27AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFB8u;
    // 0x27afbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27AFB8u, 0x27AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFC0u;
label_27afc0:
    // 0x27afc0: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27afc4:
    // 0x27afc4: 0x17c00015  bnez        $fp, . + 4 + (0x15 << 2)
label_27afc8:
    if (ctx->pc == 0x27AFC8u) {
        ctx->pc = 0x27AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC4u;
        // 0x27afc8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFCCu;
        goto label_27afcc;
    }
    ctx->pc = 0x27AFC4u;
    {
        const bool branch_taken_0x27afc4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC4u;
        // 0x27afc8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afc4) {
            ctx->pc = 0x27B01Cu;
            goto label_27b01c;
        }
    }
    ctx->pc = 0x27AFCCu;
label_27afcc:
    // 0x27afcc: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_27afd0:
    if (ctx->pc == 0x27AFD0u) {
        ctx->pc = 0x27AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFCCu;
        // 0x27afd0: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFD4u;
        goto label_27afd4;
    }
    ctx->pc = 0x27AFCCu;
    {
        const bool branch_taken_0x27afcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFCCu;
        // 0x27afd0: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afcc) {
            ctx->pc = 0x27B020u;
            goto label_27b020;
        }
    }
    ctx->pc = 0x27AFD4u;
label_27afd4:
    // 0x27afd4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27afd8:
    // 0x27afd8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27afdc:
    // 0x27afdc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27afe0:
    // 0x27afe0: 0x40f809  jalr        $v0
label_27afe4:
    if (ctx->pc == 0x27AFE4u) {
        ctx->pc = 0x27AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFE0u;
        // 0x27afe4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFE8u;
        goto label_27afe8;
    }
    ctx->pc = 0x27AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27AFE8u);
        ctx->pc = 0x27AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFE0u;
        // 0x27afe4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AFE0u, 0x27AFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27afec:
    if (ctx->pc == 0x27AFECu) {
        ctx->pc = 0x27AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFE8u;
        // 0x27afec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFF0u;
        goto label_27aff0;
    }
    ctx->pc = 0x27AFE8u;
    {
        const bool branch_taken_0x27afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFE8u;
        // 0x27afec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afe8) {
            ctx->pc = 0x27B018u;
            goto label_27b018;
        }
    }
    ctx->pc = 0x27AFF0u;
label_27aff0:
    // 0x27aff0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27aff4:
    if (ctx->pc == 0x27AFF4u) {
        ctx->pc = 0x27AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFF0u;
        // 0x27aff4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFF8u;
        goto label_27aff8;
    }
    ctx->pc = 0x27AFF0u;
    {
        const bool branch_taken_0x27aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFF0u;
        // 0x27aff4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aff0) {
            ctx->pc = 0x27B01Cu;
            goto label_27b01c;
        }
    }
    ctx->pc = 0x27AFF8u;
label_27aff8:
    // 0x27aff8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27affc:
    // 0x27affc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x27affcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_27b000:
    // 0x27b000: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x27b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_27b004:
    // 0x27b004: 0x40f809  jalr        $v0
label_27b008:
    if (ctx->pc == 0x27B008u) {
        ctx->pc = 0x27B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B004u;
        // 0x27b008: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B00Cu;
        goto label_27b00c;
    }
    ctx->pc = 0x27B004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27B00Cu);
        ctx->pc = 0x27B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B004u;
        // 0x27b008: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B004u, 0x27B00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B00Cu;
label_27b00c:
    // 0x27b00c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27b00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_27b010:
    // 0x27b010: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_27b014:
    if (ctx->pc == 0x27B014u) {
        ctx->pc = 0x27B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B010u;
        // 0x27b014: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B018u;
        goto label_27b018;
    }
    ctx->pc = 0x27B010u;
    {
        const bool branch_taken_0x27b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B010u;
        // 0x27b014: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b010) {
            ctx->pc = 0x27B01Cu;
            goto label_27b01c;
        }
    }
    ctx->pc = 0x27B018u;
label_27b018:
    // 0x27b018: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x27b018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27b01c:
    // 0x27b01c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x27b01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_27b020:
    // 0x27b020: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x27b020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_27b024:
    // 0x27b024: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x27b024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_27b028:
    // 0x27b028: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x27b028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_27b02c:
    // 0x27b02c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x27b02cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_27b030:
    // 0x27b030: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x27b030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_27b034:
    // 0x27b034: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x27b034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_27b038:
    // 0x27b038: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x27b038u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27b03c:
    // 0x27b03c: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x27b03cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_27b040:
    // 0x27b040: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x27b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_27b044:
    // 0x27b044: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x27b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27b048:
    // 0x27b048: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x27b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27b04c:
    // 0x27b04c: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x27b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27b050:
    // 0x27b050: 0x3e00008  jr          $ra
label_27b054:
    if (ctx->pc == 0x27B054u) {
        ctx->pc = 0x27B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B050u;
        // 0x27b054: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B058u;
        goto label_fallthrough_0x27b050;
    }
    ctx->pc = 0x27B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B050u;
        // 0x27b054: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27b050:
    ctx->pc = 0x27B058u;
}
