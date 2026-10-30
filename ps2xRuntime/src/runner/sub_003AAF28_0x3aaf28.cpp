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

// Function: sub_003AAF28
// Address: 0x3aaf28 - 0x3ab110
void sub_003AAF28_0x3aaf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAF28_0x3aaf28");
#endif

    switch (ctx->pc) {
        case 0x3aaf28u: goto label_3aaf28;
        case 0x3aaf2cu: goto label_3aaf2c;
        case 0x3aaf30u: goto label_3aaf30;
        case 0x3aaf34u: goto label_3aaf34;
        case 0x3aaf38u: goto label_3aaf38;
        case 0x3aaf3cu: goto label_3aaf3c;
        case 0x3aaf40u: goto label_3aaf40;
        case 0x3aaf44u: goto label_3aaf44;
        case 0x3aaf48u: goto label_3aaf48;
        case 0x3aaf4cu: goto label_3aaf4c;
        case 0x3aaf50u: goto label_3aaf50;
        case 0x3aaf54u: goto label_3aaf54;
        case 0x3aaf58u: goto label_3aaf58;
        case 0x3aaf5cu: goto label_3aaf5c;
        case 0x3aaf60u: goto label_3aaf60;
        case 0x3aaf64u: goto label_3aaf64;
        case 0x3aaf68u: goto label_3aaf68;
        case 0x3aaf6cu: goto label_3aaf6c;
        case 0x3aaf70u: goto label_3aaf70;
        case 0x3aaf74u: goto label_3aaf74;
        case 0x3aaf78u: goto label_3aaf78;
        case 0x3aaf7cu: goto label_3aaf7c;
        case 0x3aaf80u: goto label_3aaf80;
        case 0x3aaf84u: goto label_3aaf84;
        case 0x3aaf88u: goto label_3aaf88;
        case 0x3aaf8cu: goto label_3aaf8c;
        case 0x3aaf90u: goto label_3aaf90;
        case 0x3aaf94u: goto label_3aaf94;
        case 0x3aaf98u: goto label_3aaf98;
        case 0x3aaf9cu: goto label_3aaf9c;
        case 0x3aafa0u: goto label_3aafa0;
        case 0x3aafa4u: goto label_3aafa4;
        case 0x3aafa8u: goto label_3aafa8;
        case 0x3aafacu: goto label_3aafac;
        case 0x3aafb0u: goto label_3aafb0;
        case 0x3aafb4u: goto label_3aafb4;
        case 0x3aafb8u: goto label_3aafb8;
        case 0x3aafbcu: goto label_3aafbc;
        case 0x3aafc0u: goto label_3aafc0;
        case 0x3aafc4u: goto label_3aafc4;
        case 0x3aafc8u: goto label_3aafc8;
        case 0x3aafccu: goto label_3aafcc;
        case 0x3aafd0u: goto label_3aafd0;
        case 0x3aafd4u: goto label_3aafd4;
        case 0x3aafd8u: goto label_3aafd8;
        case 0x3aafdcu: goto label_3aafdc;
        case 0x3aafe0u: goto label_3aafe0;
        case 0x3aafe4u: goto label_3aafe4;
        case 0x3aafe8u: goto label_3aafe8;
        case 0x3aafecu: goto label_3aafec;
        case 0x3aaff0u: goto label_3aaff0;
        case 0x3aaff4u: goto label_3aaff4;
        case 0x3aaff8u: goto label_3aaff8;
        case 0x3aaffcu: goto label_3aaffc;
        case 0x3ab000u: goto label_3ab000;
        case 0x3ab004u: goto label_3ab004;
        case 0x3ab008u: goto label_3ab008;
        case 0x3ab00cu: goto label_3ab00c;
        case 0x3ab010u: goto label_3ab010;
        case 0x3ab014u: goto label_3ab014;
        case 0x3ab018u: goto label_3ab018;
        case 0x3ab01cu: goto label_3ab01c;
        case 0x3ab020u: goto label_3ab020;
        case 0x3ab024u: goto label_3ab024;
        case 0x3ab028u: goto label_3ab028;
        case 0x3ab02cu: goto label_3ab02c;
        case 0x3ab030u: goto label_3ab030;
        case 0x3ab034u: goto label_3ab034;
        case 0x3ab038u: goto label_3ab038;
        case 0x3ab03cu: goto label_3ab03c;
        case 0x3ab040u: goto label_3ab040;
        case 0x3ab044u: goto label_3ab044;
        case 0x3ab048u: goto label_3ab048;
        case 0x3ab04cu: goto label_3ab04c;
        case 0x3ab050u: goto label_3ab050;
        case 0x3ab054u: goto label_3ab054;
        case 0x3ab058u: goto label_3ab058;
        case 0x3ab05cu: goto label_3ab05c;
        case 0x3ab060u: goto label_3ab060;
        case 0x3ab064u: goto label_3ab064;
        case 0x3ab068u: goto label_3ab068;
        case 0x3ab06cu: goto label_3ab06c;
        case 0x3ab070u: goto label_3ab070;
        case 0x3ab074u: goto label_3ab074;
        case 0x3ab078u: goto label_3ab078;
        case 0x3ab07cu: goto label_3ab07c;
        case 0x3ab080u: goto label_3ab080;
        case 0x3ab084u: goto label_3ab084;
        case 0x3ab088u: goto label_3ab088;
        case 0x3ab08cu: goto label_3ab08c;
        case 0x3ab090u: goto label_3ab090;
        case 0x3ab094u: goto label_3ab094;
        case 0x3ab098u: goto label_3ab098;
        case 0x3ab09cu: goto label_3ab09c;
        case 0x3ab0a0u: goto label_3ab0a0;
        case 0x3ab0a4u: goto label_3ab0a4;
        case 0x3ab0a8u: goto label_3ab0a8;
        case 0x3ab0acu: goto label_3ab0ac;
        case 0x3ab0b0u: goto label_3ab0b0;
        case 0x3ab0b4u: goto label_3ab0b4;
        case 0x3ab0b8u: goto label_3ab0b8;
        case 0x3ab0bcu: goto label_3ab0bc;
        case 0x3ab0c0u: goto label_3ab0c0;
        case 0x3ab0c4u: goto label_3ab0c4;
        case 0x3ab0c8u: goto label_3ab0c8;
        case 0x3ab0ccu: goto label_3ab0cc;
        case 0x3ab0d0u: goto label_3ab0d0;
        case 0x3ab0d4u: goto label_3ab0d4;
        case 0x3ab0d8u: goto label_3ab0d8;
        case 0x3ab0dcu: goto label_3ab0dc;
        case 0x3ab0e0u: goto label_3ab0e0;
        case 0x3ab0e4u: goto label_3ab0e4;
        case 0x3ab0e8u: goto label_3ab0e8;
        case 0x3ab0ecu: goto label_3ab0ec;
        case 0x3ab0f0u: goto label_3ab0f0;
        case 0x3ab0f4u: goto label_3ab0f4;
        case 0x3ab0f8u: goto label_3ab0f8;
        case 0x3ab0fcu: goto label_3ab0fc;
        case 0x3ab100u: goto label_3ab100;
        case 0x3ab104u: goto label_3ab104;
        case 0x3ab108u: goto label_3ab108;
        case 0x3ab10cu: goto label_3ab10c;
        default: break;
    }

    ctx->pc = 0x3aaf28u;

label_3aaf28:
    // 0x3aaf28: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3aaf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3aaf2c:
    // 0x3aaf2c: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3aaf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3aaf30:
    // 0x3aaf30: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3aaf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3aaf34:
    // 0x3aaf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aaf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf38:
    // 0x3aaf38: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3aaf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3aaf3c:
    // 0x3aaf3c: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3aaf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3aaf40:
    // 0x3aaf40: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3aaf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3aaf44:
    // 0x3aaf44: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3aaf44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3aaf48:
    // 0x3aaf48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aaf4c:
    // 0x3aaf4c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aaf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aaf50:
    // 0x3aaf50: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aaf54:
    // 0x3aaf54: 0x40f809  jalr        $v0
label_3aaf58:
    if (ctx->pc == 0x3AAF58u) {
        ctx->pc = 0x3AAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF54u;
        // 0x3aaf58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF5Cu;
        goto label_3aaf5c;
    }
    ctx->pc = 0x3AAF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAF5Cu);
        ctx->pc = 0x3AAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF54u;
        // 0x3aaf58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAF54u, 0x3AAF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAF5Cu;
label_3aaf5c:
    // 0x3aaf5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aaf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf60:
    // 0x3aaf60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3aaf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf64:
    // 0x3aaf64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aaf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aaf68:
    // 0x3aaf68: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3aaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3aaf6c:
    // 0x3aaf6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aaf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aaf70:
    // 0x3aaf70: 0x0  nop
    ctx->pc = 0x3aaf70u;
    // NOP
label_3aaf74:
    // 0x3aaf74: 0x0  nop
    ctx->pc = 0x3aaf74u;
    // NOP
label_3aaf78:
    // 0x3aaf78: 0x0  nop
    ctx->pc = 0x3aaf78u;
    // NOP
label_3aaf7c:
    // 0x3aaf7c: 0x0  nop
    ctx->pc = 0x3aaf7cu;
    // NOP
label_3aaf80:
    // 0x3aaf80: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3aaf84:
    if (ctx->pc == 0x3AAF84u) {
        ctx->pc = 0x3AAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF80u;
        // 0x3aaf84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF88u;
        goto label_3aaf88;
    }
    ctx->pc = 0x3AAF80u;
    {
        const bool branch_taken_0x3aaf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF80u;
        // 0x3aaf84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf80) {
            ctx->pc = 0x3AAF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAF88u;
label_3aaf88:
    // 0x3aaf88: 0xc138ddc  jal         func_4E3770
label_3aaf8c:
    if (ctx->pc == 0x3AAF8Cu) {
        ctx->pc = 0x3AAF90u;
        goto label_3aaf90;
    }
    ctx->pc = 0x3AAF88u;
    SET_GPR_U32(ctx, 31, 0x3AAF90u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AAF88u, 0x3AAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAF90u;
label_3aaf90:
    // 0x3aaf90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3aaf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3aaf94:
    // 0x3aaf94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3aaf98:
    // 0x3aaf98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3aaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3aaf9c:
    // 0x3aaf9c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3aaf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3aafa0:
    // 0x3aafa0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3aafa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3aafa4:
    // 0x3aafa4: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3aafa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3aafa8:
    // 0x3aafa8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aafac:
    // 0x3aafac: 0x10640050  beq         $v1, $a0, . + 4 + (0x50 << 2)
label_3aafb0:
    if (ctx->pc == 0x3AAFB0u) {
        ctx->pc = 0x3AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFACu;
        // 0x3aafb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFB4u;
        goto label_3aafb4;
    }
    ctx->pc = 0x3AAFACu;
    {
        const bool branch_taken_0x3aafac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFACu;
        // 0x3aafb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafac) {
            ctx->pc = 0x3AB0F0u;
            goto label_3ab0f0;
        }
    }
    ctx->pc = 0x3AAFB4u;
label_3aafb4:
    // 0x3aafb4: 0xc0e87c0  jal         func_3A1F00
label_3aafb8:
    if (ctx->pc == 0x3AAFB8u) {
        ctx->pc = 0x3AAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFB4u;
        // 0x3aafb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFBCu;
        goto label_3aafbc;
    }
    ctx->pc = 0x3AAFB4u;
    SET_GPR_U32(ctx, 31, 0x3AAFBCu);
    ctx->pc = 0x3AAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAFB4u;
    // 0x3aafb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3AAFB4u, 0x3AAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAFBCu;
label_3aafbc:
    // 0x3aafbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3aafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3aafc0:
    // 0x3aafc0: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x3aafc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
label_3aafc4:
    // 0x3aafc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aafc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aafc8:
    // 0x3aafc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aafc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aafcc:
    // 0x3aafcc: 0x2473b8b8  addiu       $s3, $v1, -0x4748
    ctx->pc = 0x3aafccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3aafd0:
    // 0x3aafd0: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x3aafd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_3aafd4:
    // 0x3aafd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3aafd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3aafd8:
    // 0x3aafd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aafd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aafdc:
    // 0x3aafdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aafdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aafe0:
    // 0x3aafe0: 0xc0cd518  jal         func_335460
label_3aafe4:
    if (ctx->pc == 0x3AAFE4u) {
        ctx->pc = 0x3AAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE0u;
        // 0x3aafe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFE8u;
        goto label_3aafe8;
    }
    ctx->pc = 0x3AAFE0u;
    SET_GPR_U32(ctx, 31, 0x3AAFE8u);
    ctx->pc = 0x3AAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAFE0u;
    // 0x3aafe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AAFE0u, 0x3AAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAFE8u;
label_3aafe8:
    // 0x3aafe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aafe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aafec:
    // 0x3aafec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aafecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aaff0:
    // 0x3aaff0: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3aaff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3aaff4:
    // 0x3aaff4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3aaff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aaff8:
    // 0x3aaff8: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3aaff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3aaffc:
    // 0x3aaffc: 0xe7a1044c  swc1        $f1, 0x44C($sp)
    ctx->pc = 0x3aaffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
label_3ab000:
    // 0x3ab000: 0xe7b40440  swc1        $f20, 0x440($sp)
    ctx->pc = 0x3ab000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3ab004:
    // 0x3ab004: 0xe7b40444  swc1        $f20, 0x444($sp)
    ctx->pc = 0x3ab004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3ab008:
    // 0x3ab008: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3ab008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ab00c:
    // 0x3ab00c: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3ab00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3ab010:
    // 0x3ab010: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3ab010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab014:
    // 0x3ab014: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ab014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ab018:
    // 0x3ab018: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ab018u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ab01c:
    // 0x3ab01c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ab01cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ab020:
    // 0x3ab020: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ab020u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ab024:
    // 0x3ab024: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3ab024u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ab028:
    // 0x3ab028: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3ab028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3ab02c:
    // 0x3ab02c: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ab02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ab030:
    // 0x3ab030: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3ab030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3ab034:
    // 0x3ab034: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ab034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ab038:
    // 0x3ab038: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3ab038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3ab03c:
    // 0x3ab03c: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3ab03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3ab040:
    // 0x3ab040: 0x60f809  jalr        $v1
label_3ab044:
    if (ctx->pc == 0x3AB044u) {
        ctx->pc = 0x3AB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB040u;
        // 0x3ab044: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB048u;
        goto label_3ab048;
    }
    ctx->pc = 0x3AB040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AB048u);
        ctx->pc = 0x3AB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB040u;
        // 0x3ab044: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB040u, 0x3AB048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB048u;
label_3ab048:
    // 0x3ab048: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3ab048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3ab04c:
    // 0x3ab04c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3ab050:
    if (ctx->pc == 0x3AB050u) {
        ctx->pc = 0x3AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB04Cu;
        // 0x3ab050: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB054u;
        goto label_3ab054;
    }
    ctx->pc = 0x3AB04Cu;
    {
        const bool branch_taken_0x3ab04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab04c) {
            ctx->pc = 0x3AB050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB04Cu;
            // 0x3ab050: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB080u;
            goto label_3ab080;
        }
    }
    ctx->pc = 0x3AB054u;
label_3ab054:
    // 0x3ab054: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x3ab054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_3ab058:
    // 0x3ab058: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ab058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ab05c:
    // 0x3ab05c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab060:
    // 0x3ab060: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3ab060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3ab064:
    // 0x3ab064: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ab064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ab068:
    // 0x3ab068: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab06c:
    // 0x3ab06c: 0xc0cd518  jal         func_335460
label_3ab070:
    if (ctx->pc == 0x3AB070u) {
        ctx->pc = 0x3AB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB06Cu;
        // 0x3ab070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB074u;
        goto label_3ab074;
    }
    ctx->pc = 0x3AB06Cu;
    SET_GPR_U32(ctx, 31, 0x3AB074u);
    ctx->pc = 0x3AB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB06Cu;
    // 0x3ab070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB06Cu, 0x3AB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB074u;
label_3ab074:
    // 0x3ab074: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x3ab074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ab078:
    // 0x3ab078: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x3ab078u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ab07c:
    // 0x3ab07c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ab080:
    // 0x3ab080: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ab080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ab084:
    // 0x3ab084: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_3ab088:
    if (ctx->pc == 0x3AB088u) {
        ctx->pc = 0x3AB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB084u;
        // 0x3ab088: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB08Cu;
        goto label_3ab08c;
    }
    ctx->pc = 0x3AB084u;
    {
        const bool branch_taken_0x3ab084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab084) {
            ctx->pc = 0x3AB088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB084u;
            // 0x3ab088: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB0C4u;
            goto label_3ab0c4;
        }
    }
    ctx->pc = 0x3AB08Cu;
label_3ab08c:
    // 0x3ab08c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab090:
    // 0x3ab090: 0xc0e858c  jal         func_3A1630
label_3ab094:
    if (ctx->pc == 0x3AB094u) {
        ctx->pc = 0x3AB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB090u;
        // 0x3ab094: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB098u;
        goto label_3ab098;
    }
    ctx->pc = 0x3AB090u;
    SET_GPR_U32(ctx, 31, 0x3AB098u);
    ctx->pc = 0x3AB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB090u;
    // 0x3ab094: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AB090u, 0x3AB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB098u;
label_3ab098:
    // 0x3ab098: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3ab098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ab09c:
    // 0x3ab09c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ab09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ab0a0:
    // 0x3ab0a0: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x3ab0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ab0a4:
    // 0x3ab0a4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ab0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ab0a8:
    // 0x3ab0a8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3ab0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3ab0ac:
    // 0x3ab0ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ab0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ab0b0:
    // 0x3ab0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ab0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ab0b4:
    // 0x3ab0b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ab0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ab0b8:
    // 0x3ab0b8: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3ab0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3ab0bc:
    // 0x3ab0bc: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x3ab0bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ab0c0:
    // 0x3ab0c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3ab0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ab0c4:
    // 0x3ab0c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ab0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ab0c8:
    // 0x3ab0c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ab0cc:
    // 0x3ab0cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ab0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3ab0d0:
    // 0x3ab0d0: 0xe63400c0  swc1        $f20, 0xC0($s1)
    ctx->pc = 0x3ab0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ab0d4:
    // 0x3ab0d4: 0x9630006e  lhu         $s0, 0x6E($s1)
    ctx->pc = 0x3ab0d4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3ab0d8:
    // 0x3ab0d8: 0xc0cd4ee  jal         func_3353B8
label_3ab0dc:
    if (ctx->pc == 0x3AB0DCu) {
        ctx->pc = 0x3AB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0D8u;
        // 0x3ab0dc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0E0u;
        goto label_3ab0e0;
    }
    ctx->pc = 0x3AB0D8u;
    SET_GPR_U32(ctx, 31, 0x3AB0E0u);
    ctx->pc = 0x3AB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB0D8u;
    // 0x3ab0dc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AB0D8u, 0x3AB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB0E0u;
label_3ab0e0:
    // 0x3ab0e0: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x3ab0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ab0e4:
    // 0x3ab0e4: 0xc0e858c  jal         func_3A1630
label_3ab0e8:
    if (ctx->pc == 0x3AB0E8u) {
        ctx->pc = 0x3AB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0E4u;
        // 0x3ab0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0ECu;
        goto label_3ab0ec;
    }
    ctx->pc = 0x3AB0E4u;
    SET_GPR_U32(ctx, 31, 0x3AB0ECu);
    ctx->pc = 0x3AB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB0E4u;
    // 0x3ab0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AB0E4u, 0x3AB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB0ECu;
label_3ab0ec:
    // 0x3ab0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab0f0:
    // 0x3ab0f0: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3ab0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3ab0f4:
    // 0x3ab0f4: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3ab0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3ab0f8:
    // 0x3ab0f8: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3ab0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ab0fc:
    // 0x3ab0fc: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3ab0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3ab100:
    // 0x3ab100: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3ab100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ab104:
    // 0x3ab104: 0xc7b404c0  lwc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3ab104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ab108:
    // 0x3ab108: 0x3e00008  jr          $ra
label_3ab10c:
    if (ctx->pc == 0x3AB10Cu) {
        ctx->pc = 0x3AB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB108u;
        // 0x3ab10c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB110u;
        goto label_fallthrough_0x3ab108;
    }
    ctx->pc = 0x3AB108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB108u;
        // 0x3ab10c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab108:
    ctx->pc = 0x3AB110u;
}
