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

// Function: sub_001DDBC0
// Address: 0x1ddbc0 - 0x1ddcf8
void sub_001DDBC0_0x1ddbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDBC0_0x1ddbc0");
#endif

    switch (ctx->pc) {
        case 0x1ddbc0u: goto label_1ddbc0;
        case 0x1ddbc4u: goto label_1ddbc4;
        case 0x1ddbc8u: goto label_1ddbc8;
        case 0x1ddbccu: goto label_1ddbcc;
        case 0x1ddbd0u: goto label_1ddbd0;
        case 0x1ddbd4u: goto label_1ddbd4;
        case 0x1ddbd8u: goto label_1ddbd8;
        case 0x1ddbdcu: goto label_1ddbdc;
        case 0x1ddbe0u: goto label_1ddbe0;
        case 0x1ddbe4u: goto label_1ddbe4;
        case 0x1ddbe8u: goto label_1ddbe8;
        case 0x1ddbecu: goto label_1ddbec;
        case 0x1ddbf0u: goto label_1ddbf0;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddbf8u: goto label_1ddbf8;
        case 0x1ddbfcu: goto label_1ddbfc;
        case 0x1ddc00u: goto label_1ddc00;
        case 0x1ddc04u: goto label_1ddc04;
        case 0x1ddc08u: goto label_1ddc08;
        case 0x1ddc0cu: goto label_1ddc0c;
        case 0x1ddc10u: goto label_1ddc10;
        case 0x1ddc14u: goto label_1ddc14;
        case 0x1ddc18u: goto label_1ddc18;
        case 0x1ddc1cu: goto label_1ddc1c;
        case 0x1ddc20u: goto label_1ddc20;
        case 0x1ddc24u: goto label_1ddc24;
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc2cu: goto label_1ddc2c;
        case 0x1ddc30u: goto label_1ddc30;
        case 0x1ddc34u: goto label_1ddc34;
        case 0x1ddc38u: goto label_1ddc38;
        case 0x1ddc3cu: goto label_1ddc3c;
        case 0x1ddc40u: goto label_1ddc40;
        case 0x1ddc44u: goto label_1ddc44;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddc4cu: goto label_1ddc4c;
        case 0x1ddc50u: goto label_1ddc50;
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc58u: goto label_1ddc58;
        case 0x1ddc5cu: goto label_1ddc5c;
        case 0x1ddc60u: goto label_1ddc60;
        case 0x1ddc64u: goto label_1ddc64;
        case 0x1ddc68u: goto label_1ddc68;
        case 0x1ddc6cu: goto label_1ddc6c;
        case 0x1ddc70u: goto label_1ddc70;
        case 0x1ddc74u: goto label_1ddc74;
        case 0x1ddc78u: goto label_1ddc78;
        case 0x1ddc7cu: goto label_1ddc7c;
        case 0x1ddc80u: goto label_1ddc80;
        case 0x1ddc84u: goto label_1ddc84;
        case 0x1ddc88u: goto label_1ddc88;
        case 0x1ddc8cu: goto label_1ddc8c;
        case 0x1ddc90u: goto label_1ddc90;
        case 0x1ddc94u: goto label_1ddc94;
        case 0x1ddc98u: goto label_1ddc98;
        case 0x1ddc9cu: goto label_1ddc9c;
        case 0x1ddca0u: goto label_1ddca0;
        case 0x1ddca4u: goto label_1ddca4;
        case 0x1ddca8u: goto label_1ddca8;
        case 0x1ddcacu: goto label_1ddcac;
        case 0x1ddcb0u: goto label_1ddcb0;
        case 0x1ddcb4u: goto label_1ddcb4;
        case 0x1ddcb8u: goto label_1ddcb8;
        case 0x1ddcbcu: goto label_1ddcbc;
        case 0x1ddcc0u: goto label_1ddcc0;
        case 0x1ddcc4u: goto label_1ddcc4;
        case 0x1ddcc8u: goto label_1ddcc8;
        case 0x1ddcccu: goto label_1ddccc;
        case 0x1ddcd0u: goto label_1ddcd0;
        case 0x1ddcd4u: goto label_1ddcd4;
        case 0x1ddcd8u: goto label_1ddcd8;
        case 0x1ddcdcu: goto label_1ddcdc;
        case 0x1ddce0u: goto label_1ddce0;
        case 0x1ddce4u: goto label_1ddce4;
        case 0x1ddce8u: goto label_1ddce8;
        case 0x1ddcecu: goto label_1ddcec;
        case 0x1ddcf0u: goto label_1ddcf0;
        case 0x1ddcf4u: goto label_1ddcf4;
        default: break;
    }

    ctx->pc = 0x1ddbc0u;

label_1ddbc0:
    // 0x1ddbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ddbc4:
    // 0x1ddbc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddbc8:
    // 0x1ddbc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ddbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ddbcc:
    // 0x1ddbcc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ddbd0:
    // 0x1ddbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbd4:
    // 0x1ddbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ddbd8:
    // 0x1ddbd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ddbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ddbdc:
    // 0x1ddbdc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ddbdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ddbe0:
    // 0x1ddbe0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ddbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ddbe4:
    // 0x1ddbe4: 0x40f809  jalr        $v0
label_1ddbe8:
    if (ctx->pc == 0x1DDBE8u) {
        ctx->pc = 0x1DDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBE4u;
        // 0x1ddbe8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBECu;
        goto label_1ddbec;
    }
    ctx->pc = 0x1DDBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDBECu);
        ctx->pc = 0x1DDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBE4u;
        // 0x1ddbe8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBE4u, 0x1DDBECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDBECu;
label_1ddbec:
    // 0x1ddbec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ddbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbf0:
    // 0x1ddbf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ddbf4:
    // 0x1ddbf4: 0x8e043b98  lw          $a0, 0x3B98($s0)
    ctx->pc = 0x1ddbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15256)));
label_1ddbf8:
    // 0x1ddbf8: 0x8c62ee80  lw          $v0, -0x1180($v1)
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962816)));
label_1ddbfc:
    // 0x1ddbfc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1ddbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ddc00:
    // 0x1ddc00: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ddc04:
    // 0x1ddc04: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1ddc08:
    if (ctx->pc == 0x1DDC08u) {
        ctx->pc = 0x1DDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC04u;
        // 0x1ddc08: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC0Cu;
        goto label_1ddc0c;
    }
    ctx->pc = 0x1DDC04u;
    {
        const bool branch_taken_0x1ddc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC04u;
        // 0x1ddc08: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc04) {
            ctx->pc = 0x1DDCB4u;
            goto label_1ddcb4;
        }
    }
    ctx->pc = 0x1DDC0Cu;
label_1ddc0c:
    // 0x1ddc0c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1ddc10:
    if (ctx->pc == 0x1DDC10u) {
        ctx->pc = 0x1DDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC0Cu;
        // 0x1ddc10: 0x8cc2ee80  lw          $v0, -0x1180($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC14u;
        goto label_1ddc14;
    }
    ctx->pc = 0x1DDC0Cu;
    {
        const bool branch_taken_0x1ddc0c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC0Cu;
        // 0x1ddc10: 0x8cc2ee80  lw          $v0, -0x1180($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc0c) {
            ctx->pc = 0x1DDC28u;
            goto label_1ddc28;
        }
    }
    ctx->pc = 0x1DDC14u;
label_1ddc14:
    // 0x1ddc14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ddc14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddc18:
    // 0x1ddc18: 0x0  nop
    ctx->pc = 0x1ddc18u;
    // NOP
label_1ddc1c:
    // 0x1ddc1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ddc1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ddc20:
    // 0x1ddc20: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ddc24:
    if (ctx->pc == 0x1DDC24u) {
        ctx->pc = 0x1DDC28u;
        goto label_1ddc28;
    }
    ctx->pc = 0x1DDC20u;
    {
        const bool branch_taken_0x1ddc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc20) {
            ctx->pc = 0x1DDC48u;
            goto label_1ddc48;
        }
    }
    ctx->pc = 0x1DDC28u;
label_1ddc28:
    // 0x1ddc28: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1ddc2c:
    // 0x1ddc2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ddc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1ddc30:
    // 0x1ddc30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ddc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ddc34:
    // 0x1ddc34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddc38:
    // 0x1ddc38: 0x0  nop
    ctx->pc = 0x1ddc38u;
    // NOP
label_1ddc3c:
    // 0x1ddc3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ddc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ddc40:
    // 0x1ddc40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ddc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ddc44:
    // 0x1ddc44: 0x8cc2ee80  lw          $v0, -0x1180($a2)
    ctx->pc = 0x1ddc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962816)));
label_1ddc48:
    // 0x1ddc48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ddc4c:
    if (ctx->pc == 0x1DDC4Cu) {
        ctx->pc = 0x1DDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC48u;
        // 0x1ddc4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC50u;
        goto label_1ddc50;
    }
    ctx->pc = 0x1DDC48u;
    {
        const bool branch_taken_0x1ddc48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC48u;
        // 0x1ddc4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc48) {
            ctx->pc = 0x1DDC64u;
            goto label_1ddc64;
        }
    }
    ctx->pc = 0x1DDC50u;
label_1ddc50:
    // 0x1ddc50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ddc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ddc54:
    // 0x1ddc54: 0x0  nop
    ctx->pc = 0x1ddc54u;
    // NOP
label_1ddc58:
    // 0x1ddc58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ddc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ddc5c:
    // 0x1ddc5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ddc60:
    if (ctx->pc == 0x1DDC60u) {
        ctx->pc = 0x1DDC64u;
        goto label_1ddc64;
    }
    ctx->pc = 0x1DDC5Cu;
    {
        const bool branch_taken_0x1ddc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc5c) {
            ctx->pc = 0x1DDC7Cu;
            goto label_1ddc7c;
        }
    }
    ctx->pc = 0x1DDC64u;
label_1ddc64:
    // 0x1ddc64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ddc68:
    // 0x1ddc68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ddc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ddc6c:
    // 0x1ddc6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ddc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ddc70:
    // 0x1ddc70: 0x0  nop
    ctx->pc = 0x1ddc70u;
    // NOP
label_1ddc74:
    // 0x1ddc74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ddc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ddc78:
    // 0x1ddc78: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ddc78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ddc7c:
    // 0x1ddc7c: 0x0  nop
    ctx->pc = 0x1ddc7cu;
    // NOP
label_1ddc80:
    // 0x1ddc80: 0x0  nop
    ctx->pc = 0x1ddc80u;
    // NOP
label_1ddc84:
    // 0x1ddc84: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1ddc84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1ddc88:
    // 0x1ddc88: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1ddc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1ddc8c:
    // 0x1ddc8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ddc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ddc90:
    // 0x1ddc90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ddc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ddc94:
    // 0x1ddc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddc98:
    // 0x1ddc98: 0xae053ba0  sw          $a1, 0x3BA0($s0)
    ctx->pc = 0x1ddc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15264), GPR_U32(ctx, 5));
label_1ddc9c:
    // 0x1ddc9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ddc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1ddca0:
    // 0x1ddca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ddca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ddca4:
    // 0x1ddca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ddca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ddca8:
    // 0x1ddca8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ddca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ddcac:
    // 0x1ddcac: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ddcb0:
    if (ctx->pc == 0x1DDCB0u) {
        ctx->pc = 0x1DDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCACu;
        // 0x1ddcb0: 0xa2023b9c  sb          $v0, 0x3B9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15260), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCB4u;
        goto label_1ddcb4;
    }
    ctx->pc = 0x1DDCACu;
    {
        const bool branch_taken_0x1ddcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCACu;
        // 0x1ddcb0: 0xa2023b9c  sb          $v0, 0x3B9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15260), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcac) {
            ctx->pc = 0x1DDCE8u;
            goto label_1ddce8;
        }
    }
    ctx->pc = 0x1DDCB4u;
label_1ddcb4:
    // 0x1ddcb4: 0x92023b9c  lbu         $v0, 0x3B9C($s0)
    ctx->pc = 0x1ddcb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15260)));
label_1ddcb8:
    // 0x1ddcb8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ddcbc:
    if (ctx->pc == 0x1DDCBCu) {
        ctx->pc = 0x1DDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCB8u;
        // 0x1ddcbc: 0x8e023ba0  lw          $v0, 0x3BA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCC0u;
        goto label_1ddcc0;
    }
    ctx->pc = 0x1DDCB8u;
    {
        const bool branch_taken_0x1ddcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcb8) {
            ctx->pc = 0x1DDCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCB8u;
            // 0x1ddcbc: 0x8e023ba0  lw          $v0, 0x3BA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDCC8u;
            goto label_1ddcc8;
        }
    }
    ctx->pc = 0x1DDCC0u;
label_1ddcc0:
    // 0x1ddcc0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ddcc4:
    if (ctx->pc == 0x1DDCC4u) {
        ctx->pc = 0x1DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCC0u;
        // 0x1ddcc4: 0xa2003b9c  sb          $zero, 0x3B9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15260), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCC8u;
        goto label_1ddcc8;
    }
    ctx->pc = 0x1DDCC0u;
    {
        const bool branch_taken_0x1ddcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCC0u;
        // 0x1ddcc4: 0xa2003b9c  sb          $zero, 0x3B9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15260), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcc0) {
            ctx->pc = 0x1DDCE8u;
            goto label_1ddce8;
        }
    }
    ctx->pc = 0x1DDCC8u;
label_1ddcc8:
    // 0x1ddcc8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ddccc:
    // 0x1ddccc: 0x8c83ee84  lw          $v1, -0x117C($a0)
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962820)));
label_1ddcd0:
    // 0x1ddcd0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ddcd4:
    // 0x1ddcd4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1ddcd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ddcd8:
    // 0x1ddcd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ddcdc:
    if (ctx->pc == 0x1DDCDCu) {
        ctx->pc = 0x1DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCD8u;
        // 0x1ddcdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCE0u;
        goto label_1ddce0;
    }
    ctx->pc = 0x1DDCD8u;
    {
        const bool branch_taken_0x1ddcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCD8u;
        // 0x1ddcdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcd8) {
            ctx->pc = 0x1DDCE8u;
            goto label_1ddce8;
        }
    }
    ctx->pc = 0x1DDCE0u;
label_1ddce0:
    // 0x1ddce0: 0xae001b80  sw          $zero, 0x1B80($s0)
    ctx->pc = 0x1ddce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7040), GPR_U32(ctx, 0));
label_1ddce4:
    // 0x1ddce4: 0xae021b7c  sw          $v0, 0x1B7C($s0)
    ctx->pc = 0x1ddce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7036), GPR_U32(ctx, 2));
label_1ddce8:
    // 0x1ddce8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ddce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddcec:
    // 0x1ddcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddcf0:
    // 0x1ddcf0: 0x3e00008  jr          $ra
label_1ddcf4:
    if (ctx->pc == 0x1DDCF4u) {
        ctx->pc = 0x1DDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCF0u;
        // 0x1ddcf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCF8u;
        goto label_fallthrough_0x1ddcf0;
    }
    ctx->pc = 0x1DDCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCF0u;
        // 0x1ddcf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ddcf0:
    ctx->pc = 0x1DDCF8u;
}
