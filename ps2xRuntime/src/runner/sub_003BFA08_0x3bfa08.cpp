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

// Function: sub_003BFA08
// Address: 0x3bfa08 - 0x3bfb58
void sub_003BFA08_0x3bfa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFA08_0x3bfa08");
#endif

    switch (ctx->pc) {
        case 0x3bfa08u: goto label_3bfa08;
        case 0x3bfa0cu: goto label_3bfa0c;
        case 0x3bfa10u: goto label_3bfa10;
        case 0x3bfa14u: goto label_3bfa14;
        case 0x3bfa18u: goto label_3bfa18;
        case 0x3bfa1cu: goto label_3bfa1c;
        case 0x3bfa20u: goto label_3bfa20;
        case 0x3bfa24u: goto label_3bfa24;
        case 0x3bfa28u: goto label_3bfa28;
        case 0x3bfa2cu: goto label_3bfa2c;
        case 0x3bfa30u: goto label_3bfa30;
        case 0x3bfa34u: goto label_3bfa34;
        case 0x3bfa38u: goto label_3bfa38;
        case 0x3bfa3cu: goto label_3bfa3c;
        case 0x3bfa40u: goto label_3bfa40;
        case 0x3bfa44u: goto label_3bfa44;
        case 0x3bfa48u: goto label_3bfa48;
        case 0x3bfa4cu: goto label_3bfa4c;
        case 0x3bfa50u: goto label_3bfa50;
        case 0x3bfa54u: goto label_3bfa54;
        case 0x3bfa58u: goto label_3bfa58;
        case 0x3bfa5cu: goto label_3bfa5c;
        case 0x3bfa60u: goto label_3bfa60;
        case 0x3bfa64u: goto label_3bfa64;
        case 0x3bfa68u: goto label_3bfa68;
        case 0x3bfa6cu: goto label_3bfa6c;
        case 0x3bfa70u: goto label_3bfa70;
        case 0x3bfa74u: goto label_3bfa74;
        case 0x3bfa78u: goto label_3bfa78;
        case 0x3bfa7cu: goto label_3bfa7c;
        case 0x3bfa80u: goto label_3bfa80;
        case 0x3bfa84u: goto label_3bfa84;
        case 0x3bfa88u: goto label_3bfa88;
        case 0x3bfa8cu: goto label_3bfa8c;
        case 0x3bfa90u: goto label_3bfa90;
        case 0x3bfa94u: goto label_3bfa94;
        case 0x3bfa98u: goto label_3bfa98;
        case 0x3bfa9cu: goto label_3bfa9c;
        case 0x3bfaa0u: goto label_3bfaa0;
        case 0x3bfaa4u: goto label_3bfaa4;
        case 0x3bfaa8u: goto label_3bfaa8;
        case 0x3bfaacu: goto label_3bfaac;
        case 0x3bfab0u: goto label_3bfab0;
        case 0x3bfab4u: goto label_3bfab4;
        case 0x3bfab8u: goto label_3bfab8;
        case 0x3bfabcu: goto label_3bfabc;
        case 0x3bfac0u: goto label_3bfac0;
        case 0x3bfac4u: goto label_3bfac4;
        case 0x3bfac8u: goto label_3bfac8;
        case 0x3bfaccu: goto label_3bfacc;
        case 0x3bfad0u: goto label_3bfad0;
        case 0x3bfad4u: goto label_3bfad4;
        case 0x3bfad8u: goto label_3bfad8;
        case 0x3bfadcu: goto label_3bfadc;
        case 0x3bfae0u: goto label_3bfae0;
        case 0x3bfae4u: goto label_3bfae4;
        case 0x3bfae8u: goto label_3bfae8;
        case 0x3bfaecu: goto label_3bfaec;
        case 0x3bfaf0u: goto label_3bfaf0;
        case 0x3bfaf4u: goto label_3bfaf4;
        case 0x3bfaf8u: goto label_3bfaf8;
        case 0x3bfafcu: goto label_3bfafc;
        case 0x3bfb00u: goto label_3bfb00;
        case 0x3bfb04u: goto label_3bfb04;
        case 0x3bfb08u: goto label_3bfb08;
        case 0x3bfb0cu: goto label_3bfb0c;
        case 0x3bfb10u: goto label_3bfb10;
        case 0x3bfb14u: goto label_3bfb14;
        case 0x3bfb18u: goto label_3bfb18;
        case 0x3bfb1cu: goto label_3bfb1c;
        case 0x3bfb20u: goto label_3bfb20;
        case 0x3bfb24u: goto label_3bfb24;
        case 0x3bfb28u: goto label_3bfb28;
        case 0x3bfb2cu: goto label_3bfb2c;
        case 0x3bfb30u: goto label_3bfb30;
        case 0x3bfb34u: goto label_3bfb34;
        case 0x3bfb38u: goto label_3bfb38;
        case 0x3bfb3cu: goto label_3bfb3c;
        case 0x3bfb40u: goto label_3bfb40;
        case 0x3bfb44u: goto label_3bfb44;
        case 0x3bfb48u: goto label_3bfb48;
        case 0x3bfb4cu: goto label_3bfb4c;
        case 0x3bfb50u: goto label_3bfb50;
        case 0x3bfb54u: goto label_3bfb54;
        default: break;
    }

    ctx->pc = 0x3bfa08u;

label_3bfa08:
    // 0x3bfa08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bfa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3bfa0c:
    // 0x3bfa0c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3bfa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3bfa10:
    // 0x3bfa10: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3bfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3bfa14:
    // 0x3bfa14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bfa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfa18:
    // 0x3bfa18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3bfa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3bfa1c:
    // 0x3bfa1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bfa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bfa20:
    // 0x3bfa20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3bfa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3bfa24:
    // 0x3bfa24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bfa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bfa28:
    // 0x3bfa28: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3bfa28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3bfa2c:
    // 0x3bfa2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bfa30:
    // 0x3bfa30: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bfa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfa34:
    // 0x3bfa34: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfa38:
    // 0x3bfa38: 0x40f809  jalr        $v0
label_3bfa3c:
    if (ctx->pc == 0x3BFA3Cu) {
        ctx->pc = 0x3BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA38u;
        // 0x3bfa3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA40u;
        goto label_3bfa40;
    }
    ctx->pc = 0x3BFA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFA40u);
        ctx->pc = 0x3BFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA38u;
        // 0x3bfa3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFA38u, 0x3BFA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFA40u;
label_3bfa40:
    // 0x3bfa40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bfa40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfa44:
    // 0x3bfa44: 0xc0ea14c  jal         func_3A8530
label_3bfa48:
    if (ctx->pc == 0x3BFA48u) {
        ctx->pc = 0x3BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA44u;
        // 0x3bfa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA4Cu;
        goto label_3bfa4c;
    }
    ctx->pc = 0x3BFA44u;
    SET_GPR_U32(ctx, 31, 0x3BFA4Cu);
    ctx->pc = 0x3BFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA44u;
    // 0x3bfa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3BFA44u, 0x3BFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA4Cu;
label_3bfa4c:
    // 0x3bfa4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfa50:
    // 0x3bfa50: 0xc0ea12a  jal         func_3A84A8
label_3bfa54:
    if (ctx->pc == 0x3BFA54u) {
        ctx->pc = 0x3BFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA50u;
        // 0x3bfa54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA58u;
        goto label_3bfa58;
    }
    ctx->pc = 0x3BFA50u;
    SET_GPR_U32(ctx, 31, 0x3BFA58u);
    ctx->pc = 0x3BFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA50u;
    // 0x3bfa54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFA50u, 0x3BFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA58u;
label_3bfa58:
    // 0x3bfa58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfa58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfa5c:
    // 0x3bfa5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bfa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bfa60:
    // 0x3bfa60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bfa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bfa64:
    // 0x3bfa64: 0xc0ea12a  jal         func_3A84A8
label_3bfa68:
    if (ctx->pc == 0x3BFA68u) {
        ctx->pc = 0x3BFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA64u;
        // 0x3bfa68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA6Cu;
        goto label_3bfa6c;
    }
    ctx->pc = 0x3BFA64u;
    SET_GPR_U32(ctx, 31, 0x3BFA6Cu);
    ctx->pc = 0x3BFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA64u;
    // 0x3bfa68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BFA64u, 0x3BFA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA6Cu;
label_3bfa6c:
    // 0x3bfa6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bfa6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfa70:
    // 0x3bfa70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfa74:
    // 0x3bfa74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bfa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bfa78:
    // 0x3bfa78: 0xc0e858c  jal         func_3A1630
label_3bfa7c:
    if (ctx->pc == 0x3BFA7Cu) {
        ctx->pc = 0x3BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA78u;
        // 0x3bfa7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA80u;
        goto label_3bfa80;
    }
    ctx->pc = 0x3BFA78u;
    SET_GPR_U32(ctx, 31, 0x3BFA80u);
    ctx->pc = 0x3BFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA78u;
    // 0x3bfa7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3BFA78u, 0x3BFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA80u;
label_3bfa80:
    // 0x3bfa80: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3bfa80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfa84:
    // 0x3bfa84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3bfa88:
    // 0x3bfa88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3bfa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3bfa8c:
    // 0x3bfa8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3bfa8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3bfa90:
    // 0x3bfa90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3bfa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bfa94:
    // 0x3bfa94: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3bfa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3bfa98:
    // 0x3bfa98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bfa9c:
    // 0x3bfa9c: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x3bfa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_3bfaa0:
    // 0x3bfaa0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3bfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3bfaa4:
    // 0x3bfaa4: 0xc136b24  jal         func_4DAC90
label_3bfaa8:
    if (ctx->pc == 0x3BFAA8u) {
        ctx->pc = 0x3BFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAA4u;
        // 0x3bfaa8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAACu;
        goto label_3bfaac;
    }
    ctx->pc = 0x3BFAA4u;
    SET_GPR_U32(ctx, 31, 0x3BFAACu);
    ctx->pc = 0x3BFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAA4u;
    // 0x3bfaa8: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3BFAA4u, 0x3BFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAACu;
label_3bfaac:
    // 0x3bfaac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3bfaacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bfab0:
    // 0x3bfab0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3bfab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3bfab4:
    // 0x3bfab4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3bfab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3bfab8:
    // 0x3bfab8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3bfab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3bfabc:
    // 0x3bfabc: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3bfabcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3bfac0:
    // 0x3bfac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bfac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bfac4:
    // 0x3bfac4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3bfac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3bfac8:
    // 0x3bfac8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3bfacc:
    // 0x3bfacc: 0x40f809  jalr        $v0
label_3bfad0:
    if (ctx->pc == 0x3BFAD0u) {
        ctx->pc = 0x3BFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFACCu;
        // 0x3bfad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAD4u;
        goto label_3bfad4;
    }
    ctx->pc = 0x3BFACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFAD4u);
        ctx->pc = 0x3BFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFACCu;
        // 0x3bfad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFACCu, 0x3BFAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFAD4u;
label_3bfad4:
    // 0x3bfad4: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3bfad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3bfad8:
    // 0x3bfad8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3bfad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3bfadc:
    // 0x3bfadc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3bfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3bfae0:
    // 0x3bfae0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3bfae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3bfae4:
    // 0x3bfae4: 0xc0cd4ee  jal         func_3353B8
label_3bfae8:
    if (ctx->pc == 0x3BFAE8u) {
        ctx->pc = 0x3BFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAE4u;
        // 0x3bfae8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFAECu;
        goto label_3bfaec;
    }
    ctx->pc = 0x3BFAE4u;
    SET_GPR_U32(ctx, 31, 0x3BFAECu);
    ctx->pc = 0x3BFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAE4u;
    // 0x3bfae8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3BFAE4u, 0x3BFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAECu;
label_3bfaec:
    // 0x3bfaec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3bfaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3bfaf0:
    // 0x3bfaf0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3bfaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3bfaf4:
    // 0x3bfaf4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3bfaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_3bfaf8:
    // 0x3bfaf8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3bfaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3bfafc:
    // 0x3bfafc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3bfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3bfb00:
    // 0x3bfb00: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x3bfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_3bfb04:
    // 0x3bfb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfb08:
    // 0x3bfb08: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3bfb08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfb0c:
    // 0x3bfb0c: 0xc0e6ec6  jal         func_39BB18
label_3bfb10:
    if (ctx->pc == 0x3BFB10u) {
        ctx->pc = 0x3BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB0Cu;
        // 0x3bfb10: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB14u;
        goto label_3bfb14;
    }
    ctx->pc = 0x3BFB0Cu;
    SET_GPR_U32(ctx, 31, 0x3BFB14u);
    ctx->pc = 0x3BFB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFB0Cu;
    // 0x3bfb10: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3BFB0Cu, 0x3BFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFB14u;
label_3bfb14:
    // 0x3bfb14: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3bfb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3bfb18:
    // 0x3bfb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bfb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bfb1c:
    // 0x3bfb1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3bfb20:
    // 0x3bfb20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3bfb24:
    // 0x3bfb24: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3bfb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3bfb28:
    // 0x3bfb28: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3bfb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3bfb2c:
    // 0x3bfb2c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3bfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3bfb30:
    // 0x3bfb30: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3bfb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3bfb34:
    // 0x3bfb34: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3bfb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3bfb38:
    // 0x3bfb38: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3bfb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3bfb3c:
    // 0x3bfb3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3bfb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bfb40:
    // 0x3bfb40: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3bfb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bfb44:
    // 0x3bfb44: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3bfb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bfb48:
    // 0x3bfb48: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3bfb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bfb4c:
    // 0x3bfb4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bfb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bfb50:
    // 0x3bfb50: 0x3e00008  jr          $ra
label_3bfb54:
    if (ctx->pc == 0x3BFB54u) {
        ctx->pc = 0x3BFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB50u;
        // 0x3bfb54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB58u;
        goto label_fallthrough_0x3bfb50;
    }
    ctx->pc = 0x3BFB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB50u;
        // 0x3bfb54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bfb50:
    ctx->pc = 0x3BFB58u;
}
