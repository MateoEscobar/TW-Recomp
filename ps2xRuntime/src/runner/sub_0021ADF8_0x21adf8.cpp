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

// Function: sub_0021ADF8
// Address: 0x21adf8 - 0x21b048
void sub_0021ADF8_0x21adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ADF8_0x21adf8");
#endif

    switch (ctx->pc) {
        case 0x21adf8u: goto label_21adf8;
        case 0x21adfcu: goto label_21adfc;
        case 0x21ae00u: goto label_21ae00;
        case 0x21ae04u: goto label_21ae04;
        case 0x21ae08u: goto label_21ae08;
        case 0x21ae0cu: goto label_21ae0c;
        case 0x21ae10u: goto label_21ae10;
        case 0x21ae14u: goto label_21ae14;
        case 0x21ae18u: goto label_21ae18;
        case 0x21ae1cu: goto label_21ae1c;
        case 0x21ae20u: goto label_21ae20;
        case 0x21ae24u: goto label_21ae24;
        case 0x21ae28u: goto label_21ae28;
        case 0x21ae2cu: goto label_21ae2c;
        case 0x21ae30u: goto label_21ae30;
        case 0x21ae34u: goto label_21ae34;
        case 0x21ae38u: goto label_21ae38;
        case 0x21ae3cu: goto label_21ae3c;
        case 0x21ae40u: goto label_21ae40;
        case 0x21ae44u: goto label_21ae44;
        case 0x21ae48u: goto label_21ae48;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae50u: goto label_21ae50;
        case 0x21ae54u: goto label_21ae54;
        case 0x21ae58u: goto label_21ae58;
        case 0x21ae5cu: goto label_21ae5c;
        case 0x21ae60u: goto label_21ae60;
        case 0x21ae64u: goto label_21ae64;
        case 0x21ae68u: goto label_21ae68;
        case 0x21ae6cu: goto label_21ae6c;
        case 0x21ae70u: goto label_21ae70;
        case 0x21ae74u: goto label_21ae74;
        case 0x21ae78u: goto label_21ae78;
        case 0x21ae7cu: goto label_21ae7c;
        case 0x21ae80u: goto label_21ae80;
        case 0x21ae84u: goto label_21ae84;
        case 0x21ae88u: goto label_21ae88;
        case 0x21ae8cu: goto label_21ae8c;
        case 0x21ae90u: goto label_21ae90;
        case 0x21ae94u: goto label_21ae94;
        case 0x21ae98u: goto label_21ae98;
        case 0x21ae9cu: goto label_21ae9c;
        case 0x21aea0u: goto label_21aea0;
        case 0x21aea4u: goto label_21aea4;
        case 0x21aea8u: goto label_21aea8;
        case 0x21aeacu: goto label_21aeac;
        case 0x21aeb0u: goto label_21aeb0;
        case 0x21aeb4u: goto label_21aeb4;
        case 0x21aeb8u: goto label_21aeb8;
        case 0x21aebcu: goto label_21aebc;
        case 0x21aec0u: goto label_21aec0;
        case 0x21aec4u: goto label_21aec4;
        case 0x21aec8u: goto label_21aec8;
        case 0x21aeccu: goto label_21aecc;
        case 0x21aed0u: goto label_21aed0;
        case 0x21aed4u: goto label_21aed4;
        case 0x21aed8u: goto label_21aed8;
        case 0x21aedcu: goto label_21aedc;
        case 0x21aee0u: goto label_21aee0;
        case 0x21aee4u: goto label_21aee4;
        case 0x21aee8u: goto label_21aee8;
        case 0x21aeecu: goto label_21aeec;
        case 0x21aef0u: goto label_21aef0;
        case 0x21aef4u: goto label_21aef4;
        case 0x21aef8u: goto label_21aef8;
        case 0x21aefcu: goto label_21aefc;
        case 0x21af00u: goto label_21af00;
        case 0x21af04u: goto label_21af04;
        case 0x21af08u: goto label_21af08;
        case 0x21af0cu: goto label_21af0c;
        case 0x21af10u: goto label_21af10;
        case 0x21af14u: goto label_21af14;
        case 0x21af18u: goto label_21af18;
        case 0x21af1cu: goto label_21af1c;
        case 0x21af20u: goto label_21af20;
        case 0x21af24u: goto label_21af24;
        case 0x21af28u: goto label_21af28;
        case 0x21af2cu: goto label_21af2c;
        case 0x21af30u: goto label_21af30;
        case 0x21af34u: goto label_21af34;
        case 0x21af38u: goto label_21af38;
        case 0x21af3cu: goto label_21af3c;
        case 0x21af40u: goto label_21af40;
        case 0x21af44u: goto label_21af44;
        case 0x21af48u: goto label_21af48;
        case 0x21af4cu: goto label_21af4c;
        case 0x21af50u: goto label_21af50;
        case 0x21af54u: goto label_21af54;
        case 0x21af58u: goto label_21af58;
        case 0x21af5cu: goto label_21af5c;
        case 0x21af60u: goto label_21af60;
        case 0x21af64u: goto label_21af64;
        case 0x21af68u: goto label_21af68;
        case 0x21af6cu: goto label_21af6c;
        case 0x21af70u: goto label_21af70;
        case 0x21af74u: goto label_21af74;
        case 0x21af78u: goto label_21af78;
        case 0x21af7cu: goto label_21af7c;
        case 0x21af80u: goto label_21af80;
        case 0x21af84u: goto label_21af84;
        case 0x21af88u: goto label_21af88;
        case 0x21af8cu: goto label_21af8c;
        case 0x21af90u: goto label_21af90;
        case 0x21af94u: goto label_21af94;
        case 0x21af98u: goto label_21af98;
        case 0x21af9cu: goto label_21af9c;
        case 0x21afa0u: goto label_21afa0;
        case 0x21afa4u: goto label_21afa4;
        case 0x21afa8u: goto label_21afa8;
        case 0x21afacu: goto label_21afac;
        case 0x21afb0u: goto label_21afb0;
        case 0x21afb4u: goto label_21afb4;
        case 0x21afb8u: goto label_21afb8;
        case 0x21afbcu: goto label_21afbc;
        case 0x21afc0u: goto label_21afc0;
        case 0x21afc4u: goto label_21afc4;
        case 0x21afc8u: goto label_21afc8;
        case 0x21afccu: goto label_21afcc;
        case 0x21afd0u: goto label_21afd0;
        case 0x21afd4u: goto label_21afd4;
        case 0x21afd8u: goto label_21afd8;
        case 0x21afdcu: goto label_21afdc;
        case 0x21afe0u: goto label_21afe0;
        case 0x21afe4u: goto label_21afe4;
        case 0x21afe8u: goto label_21afe8;
        case 0x21afecu: goto label_21afec;
        case 0x21aff0u: goto label_21aff0;
        case 0x21aff4u: goto label_21aff4;
        case 0x21aff8u: goto label_21aff8;
        case 0x21affcu: goto label_21affc;
        case 0x21b000u: goto label_21b000;
        case 0x21b004u: goto label_21b004;
        case 0x21b008u: goto label_21b008;
        case 0x21b00cu: goto label_21b00c;
        case 0x21b010u: goto label_21b010;
        case 0x21b014u: goto label_21b014;
        case 0x21b018u: goto label_21b018;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b020u: goto label_21b020;
        case 0x21b024u: goto label_21b024;
        case 0x21b028u: goto label_21b028;
        case 0x21b02cu: goto label_21b02c;
        case 0x21b030u: goto label_21b030;
        case 0x21b034u: goto label_21b034;
        case 0x21b038u: goto label_21b038;
        case 0x21b03cu: goto label_21b03c;
        case 0x21b040u: goto label_21b040;
        case 0x21b044u: goto label_21b044;
        default: break;
    }

    ctx->pc = 0x21adf8u;

label_21adf8:
    // 0x21adf8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x21adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_21adfc:
    // 0x21adfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21ae00:
    // 0x21ae00: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21ae04:
    // 0x21ae04: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x21ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_21ae08:
    // 0x21ae08: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_21ae0c:
    // 0x21ae0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ae0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae10:
    // 0x21ae10: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x21ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_21ae14:
    // 0x21ae14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ae18:
    // 0x21ae18: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x21ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21ae1c:
    // 0x21ae1c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x21ae1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_21ae20:
    // 0x21ae20: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_21ae24:
    // 0x21ae24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21ae24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ae28:
    // 0x21ae28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21ae2c:
    // 0x21ae2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21ae2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae30:
    // 0x21ae30: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x21ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_21ae34:
    // 0x21ae34: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x21ae34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_21ae38:
    // 0x21ae38: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21ae3c:
    // 0x21ae3c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x21ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_21ae40:
    // 0x21ae40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21ae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_21ae44:
    // 0x21ae44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21ae44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21ae48:
    // 0x21ae48: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x21ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21ae4c:
    // 0x21ae4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x21ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_21ae50:
    // 0x21ae50: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_21ae54:
    // 0x21ae54: 0x0  nop
    ctx->pc = 0x21ae54u;
    // NOP
label_21ae58:
    // 0x21ae58: 0x2644b8a8  addiu       $a0, $s2, -0x4758
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949032));
label_21ae5c:
    // 0x21ae5c: 0xc0cd526  jal         func_335498
label_21ae60:
    if (ctx->pc == 0x21AE60u) {
        ctx->pc = 0x21AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE5Cu;
        // 0x21ae60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE64u;
        goto label_21ae64;
    }
    ctx->pc = 0x21AE5Cu;
    SET_GPR_U32(ctx, 31, 0x21AE64u);
    ctx->pc = 0x21AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE5Cu;
    // 0x21ae60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x21AE5Cu, 0x21AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE64u;
label_21ae64:
    // 0x21ae64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ae64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ae68:
    // 0x21ae68: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x21ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_21ae6c:
    // 0x21ae6c: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x21ae6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_21ae70:
    // 0x21ae70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_21ae74:
    if (ctx->pc == 0x21AE74u) {
        ctx->pc = 0x21AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE70u;
        // 0x21ae74: 0x2a2a825  or          $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE78u;
        goto label_21ae78;
    }
    ctx->pc = 0x21AE70u;
    {
        const bool branch_taken_0x21ae70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE70u;
        // 0x21ae74: 0x2a2a825  or          $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae70) {
            ctx->pc = 0x21AE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ae58;
        }
    }
    ctx->pc = 0x21AE78u;
label_21ae78:
    // 0x21ae78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21ae7c:
    // 0x21ae7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21ae7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae80:
    // 0x21ae80: 0x24530130  addiu       $s3, $v0, 0x130
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_21ae84:
    // 0x21ae84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21ae84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae88:
    // 0x21ae88: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x21ae88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_21ae8c:
    // 0x21ae8c: 0x241e0017  addiu       $fp, $zero, 0x17
    ctx->pc = 0x21ae8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21ae90:
    // 0x21ae90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ae94:
    // 0x21ae94: 0x2431004  sllv        $v0, $v1, $s2
    ctx->pc = 0x21ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_21ae98:
    // 0x21ae98: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x21ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_21ae9c:
    // 0x21ae9c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_21aea0:
    if (ctx->pc == 0x21AEA0u) {
        ctx->pc = 0x21AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE9Cu;
        // 0x21aea0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEA4u;
        goto label_21aea4;
    }
    ctx->pc = 0x21AE9Cu;
    {
        const bool branch_taken_0x21ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae9c) {
            ctx->pc = 0x21AEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AE9Cu;
            // 0x21aea0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF10u;
            goto label_21af10;
        }
    }
    ctx->pc = 0x21AEA4u;
label_21aea4:
    // 0x21aea4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x21aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21aea8:
    // 0x21aea8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21aeac:
    // 0x21aeac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x21aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21aeb0:
    // 0x21aeb0: 0xc0e8b48  jal         func_3A2D20
label_21aeb4:
    if (ctx->pc == 0x21AEB4u) {
        ctx->pc = 0x21AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB0u;
        // 0x21aeb4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEB8u;
        goto label_21aeb8;
    }
    ctx->pc = 0x21AEB0u;
    SET_GPR_U32(ctx, 31, 0x21AEB8u);
    ctx->pc = 0x21AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEB0u;
    // 0x21aeb4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21AEB0u, 0x21AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEB8u;
label_21aeb8:
    // 0x21aeb8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21aebc:
    // 0x21aebc: 0xc0e8b70  jal         func_3A2DC0
label_21aec0:
    if (ctx->pc == 0x21AEC0u) {
        ctx->pc = 0x21AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEBCu;
        // 0x21aec0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEC4u;
        goto label_21aec4;
    }
    ctx->pc = 0x21AEBCu;
    SET_GPR_U32(ctx, 31, 0x21AEC4u);
    ctx->pc = 0x21AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEBCu;
    // 0x21aec0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21AEBCu, 0x21AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEC4u;
label_21aec4:
    // 0x21aec4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21aec8:
    // 0x21aec8: 0xc0e8b68  jal         func_3A2DA0
label_21aecc:
    if (ctx->pc == 0x21AECCu) {
        ctx->pc = 0x21AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEC8u;
        // 0x21aecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AED0u;
        goto label_21aed0;
    }
    ctx->pc = 0x21AEC8u;
    SET_GPR_U32(ctx, 31, 0x21AED0u);
    ctx->pc = 0x21AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEC8u;
    // 0x21aecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21AEC8u, 0x21AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AED0u;
label_21aed0:
    // 0x21aed0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21aed4:
    // 0x21aed4: 0xc0e8b58  jal         func_3A2D60
label_21aed8:
    if (ctx->pc == 0x21AED8u) {
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEDCu;
        goto label_21aedc;
    }
    ctx->pc = 0x21AED4u;
    SET_GPR_U32(ctx, 31, 0x21AEDCu);
    ctx->pc = 0x21AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AED4u;
    // 0x21aed8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21AED4u, 0x21AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEDCu;
label_21aedc:
    // 0x21aedc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x21aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_21aee0:
    // 0x21aee0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_21aee4:
    // 0x21aee4: 0xc0e8b90  jal         func_3A2E40
label_21aee8:
    if (ctx->pc == 0x21AEE8u) {
        ctx->pc = 0x21AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEE4u;
        // 0x21aee8: 0x2445a918  addiu       $a1, $v0, -0x56E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEECu;
        goto label_21aeec;
    }
    ctx->pc = 0x21AEE4u;
    SET_GPR_U32(ctx, 31, 0x21AEECu);
    ctx->pc = 0x21AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEE4u;
    // 0x21aee8: 0x2445a918  addiu       $a1, $v0, -0x56E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21AEE4u, 0x21AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEECu;
label_21aeec:
    // 0x21aeec: 0xc0e8b50  jal         func_3A2D40
label_21aef0:
    if (ctx->pc == 0x21AEF0u) {
        ctx->pc = 0x21AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEECu;
        // 0x21aef0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEF4u;
        goto label_21aef4;
    }
    ctx->pc = 0x21AEECu;
    SET_GPR_U32(ctx, 31, 0x21AEF4u);
    ctx->pc = 0x21AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEECu;
    // 0x21aef0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21AEECu, 0x21AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEF4u;
label_21aef4:
    // 0x21aef4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x21aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_21aef8:
    // 0x21aef8: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
label_21aefc:
    if (ctx->pc == 0x21AEFCu) {
        ctx->pc = 0x21AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEF8u;
        // 0x21aefc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF00u;
        goto label_21af00;
    }
    ctx->pc = 0x21AEF8u;
    {
        const bool branch_taken_0x21aef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21aef8) {
            ctx->pc = 0x21AEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AEF8u;
            // 0x21aefc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF0Cu;
            goto label_21af0c;
        }
    }
    ctx->pc = 0x21AF00u;
label_21af00:
    // 0x21af00: 0x561e0003  bnel        $s0, $fp, . + 4 + (0x3 << 2)
label_21af04:
    if (ctx->pc == 0x21AF04u) {
        ctx->pc = 0x21AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF00u;
        // 0x21af04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF08u;
        goto label_21af08;
    }
    ctx->pc = 0x21AF00u;
    {
        const bool branch_taken_0x21af00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        if (branch_taken_0x21af00) {
            ctx->pc = 0x21AF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF00u;
            // 0x21af04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF10u;
            goto label_21af10;
        }
    }
    ctx->pc = 0x21AF08u;
label_21af08:
    // 0x21af08: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21af0c:
    // 0x21af0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21af0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21af10:
    // 0x21af10: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x21af10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_21af14:
    // 0x21af14: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_21af18:
    if (ctx->pc == 0x21AF18u) {
        ctx->pc = 0x21AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF14u;
        // 0x21af18: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF1Cu;
        goto label_21af1c;
    }
    ctx->pc = 0x21AF14u;
    {
        const bool branch_taken_0x21af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF14u;
        // 0x21af18: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af14) {
            ctx->pc = 0x21AE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ae90;
        }
    }
    ctx->pc = 0x21AF1Cu;
label_21af1c:
    // 0x21af1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21af20:
    // 0x21af20: 0x56c2001f  bnel        $s6, $v0, . + 4 + (0x1F << 2)
label_21af24:
    if (ctx->pc == 0x21AF24u) {
        ctx->pc = 0x21AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF20u;
        // 0x21af24: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF28u;
        goto label_21af28;
    }
    ctx->pc = 0x21AF20u;
    {
        const bool branch_taken_0x21af20 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x21af20) {
            ctx->pc = 0x21AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF20u;
            // 0x21af24: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFA0u;
            goto label_21afa0;
        }
    }
    ctx->pc = 0x21AF28u;
label_21af28:
    // 0x21af28: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21af2c:
    // 0x21af2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21af2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21af30:
    // 0x21af30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21af34:
    // 0x21af34: 0xc10c1fa  jal         func_4307E8
label_21af38:
    if (ctx->pc == 0x21AF38u) {
        ctx->pc = 0x21AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF34u;
        // 0x21af38: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF3Cu;
        goto label_21af3c;
    }
    ctx->pc = 0x21AF34u;
    SET_GPR_U32(ctx, 31, 0x21AF3Cu);
    ctx->pc = 0x21AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF34u;
    // 0x21af38: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x21AF34u, 0x21AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF3Cu;
label_21af3c:
    // 0x21af3c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_21af40:
    // 0x21af40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21af40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21af44:
    // 0x21af44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_21af48:
    // 0x21af48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21af48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21af4c:
    // 0x21af4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21af4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21af50:
    // 0x21af50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21af54:
    // 0x21af54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_21af58:
    // 0x21af58: 0xc0e8b48  jal         func_3A2D20
label_21af5c:
    if (ctx->pc == 0x21AF5Cu) {
        ctx->pc = 0x21AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF58u;
        // 0x21af5c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF60u;
        goto label_21af60;
    }
    ctx->pc = 0x21AF58u;
    SET_GPR_U32(ctx, 31, 0x21AF60u);
    ctx->pc = 0x21AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF58u;
    // 0x21af5c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21AF58u, 0x21AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF60u;
label_21af60:
    // 0x21af60: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21af64:
    // 0x21af64: 0xc0e8b70  jal         func_3A2DC0
label_21af68:
    if (ctx->pc == 0x21AF68u) {
        ctx->pc = 0x21AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF64u;
        // 0x21af68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF6Cu;
        goto label_21af6c;
    }
    ctx->pc = 0x21AF64u;
    SET_GPR_U32(ctx, 31, 0x21AF6Cu);
    ctx->pc = 0x21AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF64u;
    // 0x21af68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21AF64u, 0x21AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF6Cu;
label_21af6c:
    // 0x21af6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21af70:
    // 0x21af70: 0xc0e8b68  jal         func_3A2DA0
label_21af74:
    if (ctx->pc == 0x21AF74u) {
        ctx->pc = 0x21AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF70u;
        // 0x21af74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF78u;
        goto label_21af78;
    }
    ctx->pc = 0x21AF70u;
    SET_GPR_U32(ctx, 31, 0x21AF78u);
    ctx->pc = 0x21AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF70u;
    // 0x21af74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21AF70u, 0x21AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF78u;
label_21af78:
    // 0x21af78: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21af7c:
    // 0x21af7c: 0xc0e8b58  jal         func_3A2D60
label_21af80:
    if (ctx->pc == 0x21AF80u) {
        ctx->pc = 0x21AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF7Cu;
        // 0x21af80: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF84u;
        goto label_21af84;
    }
    ctx->pc = 0x21AF7Cu;
    SET_GPR_U32(ctx, 31, 0x21AF84u);
    ctx->pc = 0x21AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF7Cu;
    // 0x21af80: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21AF7Cu, 0x21AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF84u;
label_21af84:
    // 0x21af84: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21af88:
    // 0x21af88: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21af88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21af8c:
    // 0x21af8c: 0xc0e8b90  jal         func_3A2E40
label_21af90:
    if (ctx->pc == 0x21AF90u) {
        ctx->pc = 0x21AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF8Cu;
        // 0x21af90: 0x24a5a918  addiu       $a1, $a1, -0x56E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF94u;
        goto label_21af94;
    }
    ctx->pc = 0x21AF8Cu;
    SET_GPR_U32(ctx, 31, 0x21AF94u);
    ctx->pc = 0x21AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF8Cu;
    // 0x21af90: 0x24a5a918  addiu       $a1, $a1, -0x56E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21AF8Cu, 0x21AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF94u;
label_21af94:
    // 0x21af94: 0xc0e8b50  jal         func_3A2D40
label_21af98:
    if (ctx->pc == 0x21AF98u) {
        ctx->pc = 0x21AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF94u;
        // 0x21af98: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF9Cu;
        goto label_21af9c;
    }
    ctx->pc = 0x21AF94u;
    SET_GPR_U32(ctx, 31, 0x21AF9Cu);
    ctx->pc = 0x21AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF94u;
    // 0x21af98: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21AF94u, 0x21AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF9Cu;
label_21af9c:
    // 0x21af9c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21afa0:
    // 0x21afa0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21afa4:
    // 0x21afa4: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_21afa8:
    // 0x21afa8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_21afac:
    // 0x21afac: 0x60f809  jalr        $v1
label_21afb0:
    if (ctx->pc == 0x21AFB0u) {
        ctx->pc = 0x21AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFACu;
        // 0x21afb0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AFB4u;
        goto label_21afb4;
    }
    ctx->pc = 0x21AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AFB4u);
        ctx->pc = 0x21AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFACu;
        // 0x21afb0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFACu, 0x21AFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AFB4u;
label_21afb4:
    // 0x21afb4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21afb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21afb8:
    // 0x21afb8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21afbc:
    // 0x21afbc: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_21afc0:
    // 0x21afc0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21afc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_21afc4:
    // 0x21afc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21afc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21afc8:
    // 0x21afc8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21afcc:
    // 0x21afcc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21afd0:
    // 0x21afd0: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21afd4:
    // 0x21afd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21afd8:
    // 0x21afd8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_21afdc:
    // 0x21afdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x21afdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_21afe0:
    // 0x21afe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21afe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21afe4:
    // 0x21afe4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x21afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21afe8:
    // 0x21afe8: 0x8c44cf14  lw          $a0, -0x30EC($v0)
    ctx->pc = 0x21afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
label_21afec:
    // 0x21afec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21afecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21aff0:
    // 0x21aff0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x21aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_21aff4:
    // 0x21aff4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21aff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21aff8:
    // 0x21aff8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21aff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_21affc:
    // 0x21affc: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x21affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_21b000:
    // 0x21b000: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21b000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21b004:
    // 0x21b004: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x21b004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_21b008:
    // 0x21b008: 0xc06701c  jal         func_19C070
label_21b00c:
    if (ctx->pc == 0x21B00Cu) {
        ctx->pc = 0x21B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B008u;
        // 0x21b00c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B010u;
        goto label_21b010;
    }
    ctx->pc = 0x21B008u;
    SET_GPR_U32(ctx, 31, 0x21B010u);
    ctx->pc = 0x21B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B008u;
    // 0x21b00c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C070u, 0x21B008u, 0x21B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B010u;
label_21b010:
    // 0x21b010: 0xae8206c4  sw          $v0, 0x6C4($s4)
    ctx->pc = 0x21b010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1732), GPR_U32(ctx, 2));
label_21b014:
    // 0x21b014: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x21b014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21b018:
    // 0x21b018: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x21b018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21b01c:
    // 0x21b01c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x21b01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21b020:
    // 0x21b020: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x21b020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21b024:
    // 0x21b024: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x21b024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21b028:
    // 0x21b028: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x21b028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21b02c:
    // 0x21b02c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21b02cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21b030:
    // 0x21b030: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21b030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21b034:
    // 0x21b034: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x21b034u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21b038:
    // 0x21b038: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21b038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21b03c:
    // 0x21b03c: 0x3e00008  jr          $ra
label_21b040:
    if (ctx->pc == 0x21B040u) {
        ctx->pc = 0x21B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B03Cu;
        // 0x21b040: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B044u;
        goto label_21b044;
    }
    ctx->pc = 0x21B03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B03Cu;
        // 0x21b040: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B044u;
label_21b044:
    // 0x21b044: 0x0  nop
    ctx->pc = 0x21b044u;
    // NOP
    ctx->pc = 0x21b048u;
}
