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

// Function: sub_0026AE20
// Address: 0x26ae20 - 0x26b0a0
void sub_0026AE20_0x26ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AE20_0x26ae20");
#endif

    switch (ctx->pc) {
        case 0x26ae20u: goto label_26ae20;
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae28u: goto label_26ae28;
        case 0x26ae2cu: goto label_26ae2c;
        case 0x26ae30u: goto label_26ae30;
        case 0x26ae34u: goto label_26ae34;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae3cu: goto label_26ae3c;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae44u: goto label_26ae44;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae4cu: goto label_26ae4c;
        case 0x26ae50u: goto label_26ae50;
        case 0x26ae54u: goto label_26ae54;
        case 0x26ae58u: goto label_26ae58;
        case 0x26ae5cu: goto label_26ae5c;
        case 0x26ae60u: goto label_26ae60;
        case 0x26ae64u: goto label_26ae64;
        case 0x26ae68u: goto label_26ae68;
        case 0x26ae6cu: goto label_26ae6c;
        case 0x26ae70u: goto label_26ae70;
        case 0x26ae74u: goto label_26ae74;
        case 0x26ae78u: goto label_26ae78;
        case 0x26ae7cu: goto label_26ae7c;
        case 0x26ae80u: goto label_26ae80;
        case 0x26ae84u: goto label_26ae84;
        case 0x26ae88u: goto label_26ae88;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae90u: goto label_26ae90;
        case 0x26ae94u: goto label_26ae94;
        case 0x26ae98u: goto label_26ae98;
        case 0x26ae9cu: goto label_26ae9c;
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea4u: goto label_26aea4;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeacu: goto label_26aeac;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aeb8u: goto label_26aeb8;
        case 0x26aebcu: goto label_26aebc;
        case 0x26aec0u: goto label_26aec0;
        case 0x26aec4u: goto label_26aec4;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aeccu: goto label_26aecc;
        case 0x26aed0u: goto label_26aed0;
        case 0x26aed4u: goto label_26aed4;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aedcu: goto label_26aedc;
        case 0x26aee0u: goto label_26aee0;
        case 0x26aee4u: goto label_26aee4;
        case 0x26aee8u: goto label_26aee8;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aef0u: goto label_26aef0;
        case 0x26aef4u: goto label_26aef4;
        case 0x26aef8u: goto label_26aef8;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af00u: goto label_26af00;
        case 0x26af04u: goto label_26af04;
        case 0x26af08u: goto label_26af08;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        case 0x26af38u: goto label_26af38;
        case 0x26af3cu: goto label_26af3c;
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        case 0x26afb0u: goto label_26afb0;
        case 0x26afb4u: goto label_26afb4;
        case 0x26afb8u: goto label_26afb8;
        case 0x26afbcu: goto label_26afbc;
        case 0x26afc0u: goto label_26afc0;
        case 0x26afc4u: goto label_26afc4;
        case 0x26afc8u: goto label_26afc8;
        case 0x26afccu: goto label_26afcc;
        case 0x26afd0u: goto label_26afd0;
        case 0x26afd4u: goto label_26afd4;
        case 0x26afd8u: goto label_26afd8;
        case 0x26afdcu: goto label_26afdc;
        case 0x26afe0u: goto label_26afe0;
        case 0x26afe4u: goto label_26afe4;
        case 0x26afe8u: goto label_26afe8;
        case 0x26afecu: goto label_26afec;
        case 0x26aff0u: goto label_26aff0;
        case 0x26aff4u: goto label_26aff4;
        case 0x26aff8u: goto label_26aff8;
        case 0x26affcu: goto label_26affc;
        case 0x26b000u: goto label_26b000;
        case 0x26b004u: goto label_26b004;
        case 0x26b008u: goto label_26b008;
        case 0x26b00cu: goto label_26b00c;
        case 0x26b010u: goto label_26b010;
        case 0x26b014u: goto label_26b014;
        case 0x26b018u: goto label_26b018;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b020u: goto label_26b020;
        case 0x26b024u: goto label_26b024;
        case 0x26b028u: goto label_26b028;
        case 0x26b02cu: goto label_26b02c;
        case 0x26b030u: goto label_26b030;
        case 0x26b034u: goto label_26b034;
        case 0x26b038u: goto label_26b038;
        case 0x26b03cu: goto label_26b03c;
        case 0x26b040u: goto label_26b040;
        case 0x26b044u: goto label_26b044;
        case 0x26b048u: goto label_26b048;
        case 0x26b04cu: goto label_26b04c;
        case 0x26b050u: goto label_26b050;
        case 0x26b054u: goto label_26b054;
        case 0x26b058u: goto label_26b058;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b060u: goto label_26b060;
        case 0x26b064u: goto label_26b064;
        case 0x26b068u: goto label_26b068;
        case 0x26b06cu: goto label_26b06c;
        case 0x26b070u: goto label_26b070;
        case 0x26b074u: goto label_26b074;
        case 0x26b078u: goto label_26b078;
        case 0x26b07cu: goto label_26b07c;
        case 0x26b080u: goto label_26b080;
        case 0x26b084u: goto label_26b084;
        case 0x26b088u: goto label_26b088;
        case 0x26b08cu: goto label_26b08c;
        case 0x26b090u: goto label_26b090;
        case 0x26b094u: goto label_26b094;
        case 0x26b098u: goto label_26b098;
        case 0x26b09cu: goto label_26b09c;
        default: break;
    }

    ctx->pc = 0x26ae20u;

label_26ae20:
    // 0x26ae20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26ae24:
    // 0x26ae24: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_26ae28:
    // 0x26ae28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26ae28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26ae2c:
    // 0x26ae2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_26ae30:
    // 0x26ae30: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_26ae34:
    // 0x26ae34: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_26ae38:
    // 0x26ae38: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x26ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_26ae3c:
    // 0x26ae3c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x26ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_26ae40:
    // 0x26ae40: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x26ae40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_26ae44:
    // 0x26ae44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_26ae48:
    // 0x26ae48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x26ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_26ae4c:
    // 0x26ae4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26ae50:
    // 0x26ae50: 0xc0899e8  jal         func_2267A0
label_26ae54:
    if (ctx->pc == 0x26AE54u) {
        ctx->pc = 0x26AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE50u;
        // 0x26ae54: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE58u;
        goto label_26ae58;
    }
    ctx->pc = 0x26AE50u;
    SET_GPR_U32(ctx, 31, 0x26AE58u);
    ctx->pc = 0x26AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE50u;
    // 0x26ae54: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x26AE50u, 0x26AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE58u;
label_26ae58:
    // 0x26ae58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ae58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ae5c:
    // 0x26ae5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ae60:
    // 0x26ae60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ae64:
    // 0x26ae64: 0xc099cb4  jal         func_2672D0
label_26ae68:
    if (ctx->pc == 0x26AE68u) {
        ctx->pc = 0x26AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE64u;
        // 0x26ae68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE6Cu;
        goto label_26ae6c;
    }
    ctx->pc = 0x26AE64u;
    SET_GPR_U32(ctx, 31, 0x26AE6Cu);
    ctx->pc = 0x26AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE64u;
    // 0x26ae68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26AE64u, 0x26AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE6Cu;
label_26ae6c:
    // 0x26ae6c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x26ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_26ae70:
    // 0x26ae70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ae70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ae74:
    // 0x26ae74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26ae74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_26ae78:
    // 0x26ae78: 0xc095358  jal         func_254D60
label_26ae7c:
    if (ctx->pc == 0x26AE7Cu) {
        ctx->pc = 0x26AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE78u;
        // 0x26ae7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE80u;
        goto label_26ae80;
    }
    ctx->pc = 0x26AE78u;
    SET_GPR_U32(ctx, 31, 0x26AE80u);
    ctx->pc = 0x26AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE78u;
    // 0x26ae7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x26AE78u, 0x26AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE80u;
label_26ae80:
    // 0x26ae80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ae80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ae84:
    // 0x26ae84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ae88:
    // 0x26ae88: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x26ae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_26ae8c:
    // 0x26ae8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_26ae90:
    // 0x26ae90: 0xc0899ae  jal         func_2266B8
label_26ae94:
    if (ctx->pc == 0x26AE94u) {
        ctx->pc = 0x26AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE90u;
        // 0x26ae94: 0x30570003  andi        $s7, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE98u;
        goto label_26ae98;
    }
    ctx->pc = 0x26AE90u;
    SET_GPR_U32(ctx, 31, 0x26AE98u);
    ctx->pc = 0x26AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE90u;
    // 0x26ae94: 0x30570003  andi        $s7, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26AE90u, 0x26AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE98u;
label_26ae98:
    // 0x26ae98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ae98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ae9c:
    // 0x26ae9c: 0xc040654  jal         func_101950
label_26aea0:
    if (ctx->pc == 0x26AEA0u) {
        ctx->pc = 0x26AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE9Cu;
        // 0x26aea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEA4u;
        goto label_26aea4;
    }
    ctx->pc = 0x26AE9Cu;
    SET_GPR_U32(ctx, 31, 0x26AEA4u);
    ctx->pc = 0x26AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE9Cu;
    // 0x26aea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x26AE9Cu, 0x26AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEA4u;
label_26aea4:
    // 0x26aea4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26aea4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_26aea8:
    // 0x26aea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aeac:
    // 0x26aeac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aeb0:
    // 0x26aeb0: 0xc099c6a  jal         func_2671A8
label_26aeb4:
    if (ctx->pc == 0x26AEB4u) {
        ctx->pc = 0x26AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEB0u;
        // 0x26aeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEB8u;
        goto label_26aeb8;
    }
    ctx->pc = 0x26AEB0u;
    SET_GPR_U32(ctx, 31, 0x26AEB8u);
    ctx->pc = 0x26AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEB0u;
    // 0x26aeb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671A8u, 0x26AEB0u, 0x26AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEB8u;
label_26aeb8:
    // 0x26aeb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26aeb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26aebc:
    // 0x26aebc: 0x161027  nor         $v0, $zero, $s6
    ctx->pc = 0x26aebcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
label_26aec0:
    // 0x26aec0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_26aec4:
    if (ctx->pc == 0x26AEC4u) {
        ctx->pc = 0x26AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEC0u;
        // 0x26aec4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEC8u;
        goto label_26aec8;
    }
    ctx->pc = 0x26AEC0u;
    {
        const bool branch_taken_0x26aec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEC0u;
        // 0x26aec4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aec0) {
            ctx->pc = 0x26B068u;
            goto label_26b068;
        }
    }
    ctx->pc = 0x26AEC8u;
label_26aec8:
    // 0x26aec8: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x26aec8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26aecc:
    // 0x26aecc: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26aeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26aed0:
    // 0x26aed0: 0xc041532  jal         func_1054C8
label_26aed4:
    if (ctx->pc == 0x26AED4u) {
        ctx->pc = 0x26AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AED0u;
        // 0x26aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AED8u;
        goto label_26aed8;
    }
    ctx->pc = 0x26AED0u;
    SET_GPR_U32(ctx, 31, 0x26AED8u);
    ctx->pc = 0x26AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AED0u;
    // 0x26aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26AED0u, 0x26AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AED8u;
label_26aed8:
    // 0x26aed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aedc:
    // 0x26aedc: 0xc041532  jal         func_1054C8
label_26aee0:
    if (ctx->pc == 0x26AEE0u) {
        ctx->pc = 0x26AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEDCu;
        // 0x26aee0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEE4u;
        goto label_26aee4;
    }
    ctx->pc = 0x26AEDCu;
    SET_GPR_U32(ctx, 31, 0x26AEE4u);
    ctx->pc = 0x26AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEDCu;
    // 0x26aee0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26AEDCu, 0x26AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEE4u;
label_26aee4:
    // 0x26aee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aee8:
    // 0x26aee8: 0xc041532  jal         func_1054C8
label_26aeec:
    if (ctx->pc == 0x26AEECu) {
        ctx->pc = 0x26AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEE8u;
        // 0x26aeec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEF0u;
        goto label_26aef0;
    }
    ctx->pc = 0x26AEE8u;
    SET_GPR_U32(ctx, 31, 0x26AEF0u);
    ctx->pc = 0x26AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEE8u;
    // 0x26aeec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26AEE8u, 0x26AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEF0u;
label_26aef0:
    // 0x26aef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26aef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26aef4:
    // 0x26aef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26aef8:
    // 0x26aef8: 0xc089998  jal         func_226660
label_26aefc:
    if (ctx->pc == 0x26AEFCu) {
        ctx->pc = 0x26AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEF8u;
        // 0x26aefc: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF00u;
        goto label_26af00;
    }
    ctx->pc = 0x26AEF8u;
    SET_GPR_U32(ctx, 31, 0x26AF00u);
    ctx->pc = 0x26AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEF8u;
    // 0x26aefc: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26AEF8u, 0x26AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF00u;
label_26af00:
    // 0x26af00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_26af04:
    if (ctx->pc == 0x26AF04u) {
        ctx->pc = 0x26AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF00u;
        // 0x26af04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF08u;
        goto label_26af08;
    }
    ctx->pc = 0x26AF00u;
    {
        const bool branch_taken_0x26af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF00u;
        // 0x26af04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af00) {
            ctx->pc = 0x26AF3Cu;
            goto label_26af3c;
        }
    }
    ctx->pc = 0x26AF08u;
label_26af08:
    // 0x26af08: 0xc05d462  jal         func_175188
label_26af0c:
    if (ctx->pc == 0x26AF0Cu) {
        ctx->pc = 0x26AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF08u;
        // 0x26af0c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF10u;
        goto label_26af10;
    }
    ctx->pc = 0x26AF08u;
    SET_GPR_U32(ctx, 31, 0x26AF10u);
    ctx->pc = 0x26AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF08u;
    // 0x26af0c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x26AF08u, 0x26AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF10u;
label_26af10:
    // 0x26af10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26af10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26af14:
    // 0x26af14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26af18:
    // 0x26af18: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x26af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_26af1c:
    // 0x26af1c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26af20:
    if (ctx->pc == 0x26AF20u) {
        ctx->pc = 0x26AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF1Cu;
        // 0x26af20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF24u;
        goto label_26af24;
    }
    ctx->pc = 0x26AF1Cu;
    {
        const bool branch_taken_0x26af1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26af1c) {
            ctx->pc = 0x26AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AF1Cu;
            // 0x26af20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AF3Cu;
            goto label_26af3c;
        }
    }
    ctx->pc = 0x26AF24u;
label_26af24:
    // 0x26af24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26af28:
    // 0x26af28: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x26af28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_26af2c:
    // 0x26af2c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_26af30:
    // 0x26af30: 0x60f809  jalr        $v1
label_26af34:
    if (ctx->pc == 0x26AF34u) {
        ctx->pc = 0x26AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF30u;
        // 0x26af34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF38u;
        goto label_26af38;
    }
    ctx->pc = 0x26AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26AF38u);
        ctx->pc = 0x26AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF30u;
        // 0x26af34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF30u, 0x26AF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AF38u;
label_26af38:
    // 0x26af38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26af3c:
    // 0x26af3c: 0xc0899d8  jal         func_226760
label_26af40:
    if (ctx->pc == 0x26AF40u) {
        ctx->pc = 0x26AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF3Cu;
        // 0x26af40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF44u;
        goto label_26af44;
    }
    ctx->pc = 0x26AF3Cu;
    SET_GPR_U32(ctx, 31, 0x26AF44u);
    ctx->pc = 0x26AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF3Cu;
    // 0x26af40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x26AF3Cu, 0x26AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF44u;
label_26af44:
    // 0x26af44: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_26af48:
    if (ctx->pc == 0x26AF48u) {
        ctx->pc = 0x26AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF44u;
        // 0x26af48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF4Cu;
        goto label_26af4c;
    }
    ctx->pc = 0x26AF44u;
    {
        const bool branch_taken_0x26af44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF44u;
        // 0x26af48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af44) {
            ctx->pc = 0x26AF64u;
            goto label_26af64;
        }
    }
    ctx->pc = 0x26AF4Cu;
label_26af4c:
    // 0x26af4c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26af50:
    // 0x26af50: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26af54:
    // 0x26af54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26af58:
    // 0x26af58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26af58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26af5c:
    // 0x26af5c: 0xc041b20  jal         func_106C80
label_26af60:
    if (ctx->pc == 0x26AF60u) {
        ctx->pc = 0x26AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF5Cu;
        // 0x26af60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF64u;
        goto label_26af64;
    }
    ctx->pc = 0x26AF5Cu;
    SET_GPR_U32(ctx, 31, 0x26AF64u);
    ctx->pc = 0x26AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF5Cu;
    // 0x26af60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26AF5Cu, 0x26AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF64u;
label_26af64:
    // 0x26af64: 0xc05d484  jal         func_175210
label_26af68:
    if (ctx->pc == 0x26AF68u) {
        ctx->pc = 0x26AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF64u;
        // 0x26af68: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF6Cu;
        goto label_26af6c;
    }
    ctx->pc = 0x26AF64u;
    SET_GPR_U32(ctx, 31, 0x26AF6Cu);
    ctx->pc = 0x26AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF64u;
    // 0x26af68: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26AF64u, 0x26AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF6Cu;
label_26af6c:
    // 0x26af6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26af70:
    // 0x26af70: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26af70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26af74:
    // 0x26af74: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26af78:
    // 0x26af78: 0xa0f809  jalr        $a1
label_26af7c:
    if (ctx->pc == 0x26AF7Cu) {
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF78u;
        // 0x26af7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF80u;
        goto label_26af80;
    }
    ctx->pc = 0x26AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26AF80u);
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF78u;
        // 0x26af7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF78u, 0x26AF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AF80u;
label_26af80:
    // 0x26af80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26af84:
    // 0x26af84: 0xc087016  jal         func_21C058
label_26af88:
    if (ctx->pc == 0x26AF88u) {
        ctx->pc = 0x26AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF84u;
        // 0x26af88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF8Cu;
        goto label_26af8c;
    }
    ctx->pc = 0x26AF84u;
    SET_GPR_U32(ctx, 31, 0x26AF8Cu);
    ctx->pc = 0x26AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF84u;
    // 0x26af88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26AF84u, 0x26AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF8Cu;
label_26af8c:
    // 0x26af8c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_26af90:
    if (ctx->pc == 0x26AF90u) {
        ctx->pc = 0x26AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF8Cu;
        // 0x26af90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF94u;
        goto label_26af94;
    }
    ctx->pc = 0x26AF8Cu;
    {
        const bool branch_taken_0x26af8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF8Cu;
        // 0x26af90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af8c) {
            ctx->pc = 0x26AFB0u;
            goto label_26afb0;
        }
    }
    ctx->pc = 0x26AF94u;
label_26af94:
    // 0x26af94: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26af98:
    // 0x26af98: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26af98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26af9c:
    // 0x26af9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26afa0:
    // 0x26afa0: 0x8c660084  lw          $a2, 0x84($v1)
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26afa4:
    // 0x26afa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26afa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26afa8:
    // 0x26afa8: 0xc04159e  jal         func_105678
label_26afac:
    if (ctx->pc == 0x26AFACu) {
        ctx->pc = 0x26AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFA8u;
        // 0x26afac: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFB0u;
        goto label_26afb0;
    }
    ctx->pc = 0x26AFA8u;
    SET_GPR_U32(ctx, 31, 0x26AFB0u);
    ctx->pc = 0x26AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFA8u;
    // 0x26afac: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26AFA8u, 0x26AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFB0u;
label_26afb0:
    // 0x26afb0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26afb4:
    // 0x26afb4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_26afb8:
    // 0x26afb8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26afbc:
    if (ctx->pc == 0x26AFBCu) {
        ctx->pc = 0x26AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFB8u;
        // 0x26afbc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFC0u;
        goto label_26afc0;
    }
    ctx->pc = 0x26AFB8u;
    {
        const bool branch_taken_0x26afb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFB8u;
        // 0x26afbc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb8) {
            ctx->pc = 0x26AFFCu;
            goto label_26affc;
        }
    }
    ctx->pc = 0x26AFC0u;
label_26afc0:
    // 0x26afc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26afc4:
    // 0x26afc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26afc8:
    // 0x26afc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26afcc:
    // 0x26afcc: 0x40f809  jalr        $v0
label_26afd0:
    if (ctx->pc == 0x26AFD0u) {
        ctx->pc = 0x26AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFCCu;
        // 0x26afd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFD4u;
        goto label_26afd4;
    }
    ctx->pc = 0x26AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AFD4u);
        ctx->pc = 0x26AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFCCu;
        // 0x26afd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFCCu, 0x26AFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AFD4u;
label_26afd4:
    // 0x26afd4: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26afd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26afd8:
    // 0x26afd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26afd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26afdc:
    // 0x26afdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26afdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26afe0:
    // 0x26afe0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26afe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26afe4:
    // 0x26afe4: 0x254aadf0  addiu       $t2, $t2, -0x5210
    ctx->pc = 0x26afe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946288));
label_26afe8:
    // 0x26afe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26afec:
    // 0x26afec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26afecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26aff0:
    // 0x26aff0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26aff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26aff4:
    // 0x26aff4: 0xc041664  jal         func_105990
label_26aff8:
    if (ctx->pc == 0x26AFF8u) {
        ctx->pc = 0x26AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFF4u;
        // 0x26aff8: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFFCu;
        goto label_26affc;
    }
    ctx->pc = 0x26AFF4u;
    SET_GPR_U32(ctx, 31, 0x26AFFCu);
    ctx->pc = 0x26AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFF4u;
    // 0x26aff8: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26AFF4u, 0x26AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFFCu;
label_26affc:
    // 0x26affc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b000:
    // 0x26b000: 0xc05d53a  jal         func_1754E8
label_26b004:
    if (ctx->pc == 0x26B004u) {
        ctx->pc = 0x26B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B000u;
        // 0x26b004: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B008u;
        goto label_26b008;
    }
    ctx->pc = 0x26B000u;
    SET_GPR_U32(ctx, 31, 0x26B008u);
    ctx->pc = 0x26B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B000u;
    // 0x26b004: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26B000u, 0x26B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B008u;
label_26b008:
    // 0x26b008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b00c:
    // 0x26b00c: 0xc05d4f6  jal         func_1753D8
label_26b010:
    if (ctx->pc == 0x26B010u) {
        ctx->pc = 0x26B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B00Cu;
        // 0x26b010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B014u;
        goto label_26b014;
    }
    ctx->pc = 0x26B00Cu;
    SET_GPR_U32(ctx, 31, 0x26B014u);
    ctx->pc = 0x26B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B00Cu;
    // 0x26b010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26B00Cu, 0x26B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B014u;
label_26b014:
    // 0x26b014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b018:
    // 0x26b018: 0xc089990  jal         func_226640
label_26b01c:
    if (ctx->pc == 0x26B01Cu) {
        ctx->pc = 0x26B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B018u;
        // 0x26b01c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B020u;
        goto label_26b020;
    }
    ctx->pc = 0x26B018u;
    SET_GPR_U32(ctx, 31, 0x26B020u);
    ctx->pc = 0x26B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B018u;
    // 0x26b01c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26B018u, 0x26B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B020u;
label_26b020:
    // 0x26b020: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x26b020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_26b024:
    // 0x26b024: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26b028:
    // 0x26b028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b02c:
    // 0x26b02c: 0x0  nop
    ctx->pc = 0x26b02cu;
    // NOP
label_26b030:
    // 0x26b030: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26b030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b034:
    // 0x26b034: 0x0  nop
    ctx->pc = 0x26b034u;
    // NOP
label_26b038:
    // 0x26b038: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_26b03c:
    if (ctx->pc == 0x26B03Cu) {
        ctx->pc = 0x26B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B038u;
        // 0x26b03c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B040u;
        goto label_26b040;
    }
    ctx->pc = 0x26B038u;
    {
        const bool branch_taken_0x26b038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B038u;
        // 0x26b03c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b038) {
            ctx->pc = 0x26B068u;
            goto label_26b068;
        }
    }
    ctx->pc = 0x26B040u;
label_26b040:
    // 0x26b040: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_26b044:
    // 0x26b044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b048:
    // 0x26b048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b04c:
    // 0x26b04c: 0xc040680  jal         func_101A00
label_26b050:
    if (ctx->pc == 0x26B050u) {
        ctx->pc = 0x26B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B04Cu;
        // 0x26b050: 0x4614ad02  mul.s       $f20, $f21, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B054u;
        goto label_26b054;
    }
    ctx->pc = 0x26B04Cu;
    SET_GPR_U32(ctx, 31, 0x26B054u);
    ctx->pc = 0x26B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B04Cu;
    // 0x26b050: 0x4614ad02  mul.s       $f20, $f21, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x26B04Cu, 0x26B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B054u;
label_26b054:
    // 0x26b054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b058:
    // 0x26b058: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26b05c:
    // 0x26b05c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26b05cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26b060:
    // 0x26b060: 0xc09a772  jal         func_269DC8
label_26b064:
    if (ctx->pc == 0x26B064u) {
        ctx->pc = 0x26B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B060u;
        // 0x26b064: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B068u;
        goto label_26b068;
    }
    ctx->pc = 0x26B060u;
    SET_GPR_U32(ctx, 31, 0x26B068u);
    ctx->pc = 0x26B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B060u;
    // 0x26b064: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x269DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269DC8u, 0x26B060u, 0x26B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B068u;
label_26b068:
    // 0x26b068: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26b068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26b06c:
    // 0x26b06c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26b06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26b070:
    // 0x26b070: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26b070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26b074:
    // 0x26b074: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x26b074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26b078:
    // 0x26b078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26b078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26b07c:
    // 0x26b07c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x26b07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b080:
    // 0x26b080: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x26b080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b084:
    // 0x26b084: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x26b084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b088:
    // 0x26b088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26b08c:
    // 0x26b08c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x26b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26b090:
    // 0x26b090: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x26b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26b094:
    // 0x26b094: 0x3e00008  jr          $ra
label_26b098:
    if (ctx->pc == 0x26B098u) {
        ctx->pc = 0x26B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B094u;
        // 0x26b098: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B09Cu;
        goto label_26b09c;
    }
    ctx->pc = 0x26B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B094u;
        // 0x26b098: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B09Cu;
label_26b09c:
    // 0x26b09c: 0x0  nop
    ctx->pc = 0x26b09cu;
    // NOP
    ctx->pc = 0x26b0a0u;
}
