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

// Function: sub_003CAED8
// Address: 0x3caed8 - 0x3caff0
void sub_003CAED8_0x3caed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAED8_0x3caed8");
#endif

    switch (ctx->pc) {
        case 0x3caed8u: goto label_3caed8;
        case 0x3caedcu: goto label_3caedc;
        case 0x3caee0u: goto label_3caee0;
        case 0x3caee4u: goto label_3caee4;
        case 0x3caee8u: goto label_3caee8;
        case 0x3caeecu: goto label_3caeec;
        case 0x3caef0u: goto label_3caef0;
        case 0x3caef4u: goto label_3caef4;
        case 0x3caef8u: goto label_3caef8;
        case 0x3caefcu: goto label_3caefc;
        case 0x3caf00u: goto label_3caf00;
        case 0x3caf04u: goto label_3caf04;
        case 0x3caf08u: goto label_3caf08;
        case 0x3caf0cu: goto label_3caf0c;
        case 0x3caf10u: goto label_3caf10;
        case 0x3caf14u: goto label_3caf14;
        case 0x3caf18u: goto label_3caf18;
        case 0x3caf1cu: goto label_3caf1c;
        case 0x3caf20u: goto label_3caf20;
        case 0x3caf24u: goto label_3caf24;
        case 0x3caf28u: goto label_3caf28;
        case 0x3caf2cu: goto label_3caf2c;
        case 0x3caf30u: goto label_3caf30;
        case 0x3caf34u: goto label_3caf34;
        case 0x3caf38u: goto label_3caf38;
        case 0x3caf3cu: goto label_3caf3c;
        case 0x3caf40u: goto label_3caf40;
        case 0x3caf44u: goto label_3caf44;
        case 0x3caf48u: goto label_3caf48;
        case 0x3caf4cu: goto label_3caf4c;
        case 0x3caf50u: goto label_3caf50;
        case 0x3caf54u: goto label_3caf54;
        case 0x3caf58u: goto label_3caf58;
        case 0x3caf5cu: goto label_3caf5c;
        case 0x3caf60u: goto label_3caf60;
        case 0x3caf64u: goto label_3caf64;
        case 0x3caf68u: goto label_3caf68;
        case 0x3caf6cu: goto label_3caf6c;
        case 0x3caf70u: goto label_3caf70;
        case 0x3caf74u: goto label_3caf74;
        case 0x3caf78u: goto label_3caf78;
        case 0x3caf7cu: goto label_3caf7c;
        case 0x3caf80u: goto label_3caf80;
        case 0x3caf84u: goto label_3caf84;
        case 0x3caf88u: goto label_3caf88;
        case 0x3caf8cu: goto label_3caf8c;
        case 0x3caf90u: goto label_3caf90;
        case 0x3caf94u: goto label_3caf94;
        case 0x3caf98u: goto label_3caf98;
        case 0x3caf9cu: goto label_3caf9c;
        case 0x3cafa0u: goto label_3cafa0;
        case 0x3cafa4u: goto label_3cafa4;
        case 0x3cafa8u: goto label_3cafa8;
        case 0x3cafacu: goto label_3cafac;
        case 0x3cafb0u: goto label_3cafb0;
        case 0x3cafb4u: goto label_3cafb4;
        case 0x3cafb8u: goto label_3cafb8;
        case 0x3cafbcu: goto label_3cafbc;
        case 0x3cafc0u: goto label_3cafc0;
        case 0x3cafc4u: goto label_3cafc4;
        case 0x3cafc8u: goto label_3cafc8;
        case 0x3cafccu: goto label_3cafcc;
        case 0x3cafd0u: goto label_3cafd0;
        case 0x3cafd4u: goto label_3cafd4;
        case 0x3cafd8u: goto label_3cafd8;
        case 0x3cafdcu: goto label_3cafdc;
        case 0x3cafe0u: goto label_3cafe0;
        case 0x3cafe4u: goto label_3cafe4;
        case 0x3cafe8u: goto label_3cafe8;
        case 0x3cafecu: goto label_3cafec;
        default: break;
    }

    ctx->pc = 0x3caed8u;

label_3caed8:
    // 0x3caed8: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3caed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3caedc:
    // 0x3caedc: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x3caedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_3caee0:
    // 0x3caee0: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x3caee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_3caee4:
    // 0x3caee4: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x3caee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_3caee8:
    // 0x3caee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3caee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3caeec:
    // 0x3caeec: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x3caeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_3caef0:
    // 0x3caef0: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3caef0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3caef4:
    // 0x3caef4: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3caef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3caef8:
    // 0x3caef8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3caef8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3caefc:
    // 0x3caefc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3caefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3caf00:
    // 0x3caf00: 0x84a30188  lh          $v1, 0x188($a1)
    ctx->pc = 0x3caf00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 392)));
label_3caf04:
    // 0x3caf04: 0x8ca2018c  lw          $v0, 0x18C($a1)
    ctx->pc = 0x3caf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
label_3caf08:
    // 0x3caf08: 0x40f809  jalr        $v0
label_3caf0c:
    if (ctx->pc == 0x3CAF0Cu) {
        ctx->pc = 0x3CAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF08u;
        // 0x3caf0c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF10u;
        goto label_3caf10;
    }
    ctx->pc = 0x3CAF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAF10u);
        ctx->pc = 0x3CAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF08u;
        // 0x3caf0c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAF08u, 0x3CAF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAF10u;
label_3caf10:
    // 0x3caf10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3caf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caf14:
    // 0x3caf14: 0x0  nop
    ctx->pc = 0x3caf14u;
    // NOP
label_3caf18:
    // 0x3caf18: 0xc047ab8  jal         func_11EAE0
label_3caf1c:
    if (ctx->pc == 0x3CAF1Cu) {
        ctx->pc = 0x3CAF20u;
        goto label_3caf20;
    }
    ctx->pc = 0x3CAF18u;
    SET_GPR_U32(ctx, 31, 0x3CAF20u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3CAF18u, 0x3CAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAF20u;
label_3caf20:
    // 0x3caf20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3caf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caf24:
    // 0x3caf24: 0x8e6344cc  lw          $v1, 0x44CC($s3)
    ctx->pc = 0x3caf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17612)));
label_3caf28:
    // 0x3caf28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3caf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3caf2c:
    // 0x3caf2c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3caf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3caf30:
    // 0x3caf30: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3caf30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3caf34:
    // 0x3caf34: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_3caf38:
    if (ctx->pc == 0x3CAF38u) {
        ctx->pc = 0x3CAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF34u;
        // 0x3caf38: 0x7bb004d0  lq          $s0, 0x4D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF3Cu;
        goto label_3caf3c;
    }
    ctx->pc = 0x3CAF34u;
    {
        const bool branch_taken_0x3caf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caf34) {
            ctx->pc = 0x3CAF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAF34u;
            // 0x3caf38: 0x7bb004d0  lq          $s0, 0x4D0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAFD0u;
            goto label_3cafd0;
        }
    }
    ctx->pc = 0x3CAF3Cu;
label_3caf3c:
    // 0x3caf3c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3caf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3caf40:
    // 0x3caf40: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3caf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3caf44:
    // 0x3caf44: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3caf48:
    if (ctx->pc == 0x3CAF48u) {
        ctx->pc = 0x3CAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF44u;
        // 0x3caf48: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF4Cu;
        goto label_3caf4c;
    }
    ctx->pc = 0x3CAF44u;
    {
        const bool branch_taken_0x3caf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF44u;
        // 0x3caf48: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caf44) {
            ctx->pc = 0x3CAFCCu;
            goto label_3cafcc;
        }
    }
    ctx->pc = 0x3CAF4Cu;
label_3caf4c:
    // 0x3caf4c: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x3caf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3caf50:
    // 0x3caf50: 0xc0f2b1a  jal         func_3CAC68
label_3caf54:
    if (ctx->pc == 0x3CAF54u) {
        ctx->pc = 0x3CAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF50u;
        // 0x3caf54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF58u;
        goto label_3caf58;
    }
    ctx->pc = 0x3CAF50u;
    SET_GPR_U32(ctx, 31, 0x3CAF58u);
    ctx->pc = 0x3CAF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAF50u;
    // 0x3caf54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CAC68u, 0x3CAF50u, 0x3CAF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAF58u;
label_3caf58:
    // 0x3caf58: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3caf58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3caf5c:
    // 0x3caf5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3caf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3caf60:
    // 0x3caf60: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3caf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3caf64:
    // 0x3caf64: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3caf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3caf68:
    // 0x3caf68: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3caf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3caf6c:
    // 0x3caf6c: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x3caf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3caf70:
    // 0x3caf70: 0x27a80450  addiu       $t0, $sp, 0x450
    ctx->pc = 0x3caf70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3caf74:
    // 0x3caf74: 0x27a90460  addiu       $t1, $sp, 0x460
    ctx->pc = 0x3caf74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3caf78:
    // 0x3caf78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3caf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caf7c:
    // 0x3caf7c: 0x27aa0470  addiu       $t2, $sp, 0x470
    ctx->pc = 0x3caf7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3caf80:
    // 0x3caf80: 0x27ab0480  addiu       $t3, $sp, 0x480
    ctx->pc = 0x3caf80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3caf84:
    // 0x3caf84: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x3caf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
label_3caf88:
    // 0x3caf88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3caf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3caf8c:
    // 0x3caf8c: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x3caf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
label_3caf90:
    // 0x3caf90: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3caf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caf94:
    // 0x3caf94: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3caf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3caf98:
    // 0x3caf98: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3caf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf9c:
    // 0x3caf9c: 0xe7a10460  swc1        $f1, 0x460($sp)
    ctx->pc = 0x3caf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3cafa0:
    // 0x3cafa0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3cafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cafa4:
    // 0x3cafa4: 0xe7a00470  swc1        $f0, 0x470($sp)
    ctx->pc = 0x3cafa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3cafa8:
    // 0x3cafa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3cafac:
    // 0x3cafac: 0xc0ea084  jal         func_3A8210
label_3cafb0:
    if (ctx->pc == 0x3CAFB0u) {
        ctx->pc = 0x3CAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFACu;
        // 0x3cafb0: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFB4u;
        goto label_3cafb4;
    }
    ctx->pc = 0x3CAFACu;
    SET_GPR_U32(ctx, 31, 0x3CAFB4u);
    ctx->pc = 0x3CAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAFACu;
    // 0x3cafb0: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3CAFACu, 0x3CAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAFB4u;
label_3cafb4:
    // 0x3cafb4: 0x264446d8  addiu       $a0, $s2, 0x46D8
    ctx->pc = 0x3cafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18136));
label_3cafb8:
    // 0x3cafb8: 0xc0f15bc  jal         func_3C56F0
label_3cafbc:
    if (ctx->pc == 0x3CAFBCu) {
        ctx->pc = 0x3CAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB8u;
        // 0x3cafbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFC0u;
        goto label_3cafc0;
    }
    ctx->pc = 0x3CAFB8u;
    SET_GPR_U32(ctx, 31, 0x3CAFC0u);
    ctx->pc = 0x3CAFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAFB8u;
    // 0x3cafbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CAFB8u, 0x3CAFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAFC0u;
label_3cafc0:
    // 0x3cafc0: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x3cafc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3cafc4:
    // 0x3cafc4: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_3cafc8:
    if (ctx->pc == 0x3CAFC8u) {
        ctx->pc = 0x3CAFCCu;
        goto label_3cafcc;
    }
    ctx->pc = 0x3CAFC4u;
    {
        const bool branch_taken_0x3cafc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cafc4) {
            ctx->pc = 0x3CAF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3caf18;
        }
    }
    ctx->pc = 0x3CAFCCu;
label_3cafcc:
    // 0x3cafcc: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x3cafccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3cafd0:
    // 0x3cafd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cafd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cafd4:
    // 0x3cafd4: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x3cafd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3cafd8:
    // 0x3cafd8: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x3cafd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3cafdc:
    // 0x3cafdc: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x3cafdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3cafe0:
    // 0x3cafe0: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3cafe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3cafe4:
    // 0x3cafe4: 0x3e00008  jr          $ra
label_3cafe8:
    if (ctx->pc == 0x3CAFE8u) {
        ctx->pc = 0x3CAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFE4u;
        // 0x3cafe8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFECu;
        goto label_3cafec;
    }
    ctx->pc = 0x3CAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFE4u;
        // 0x3cafe8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAFECu;
label_3cafec:
    // 0x3cafec: 0x0  nop
    ctx->pc = 0x3cafecu;
    // NOP
    ctx->pc = 0x3caff0u;
}
