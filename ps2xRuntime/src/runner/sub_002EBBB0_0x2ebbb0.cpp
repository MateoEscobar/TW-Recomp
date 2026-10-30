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

// Function: sub_002EBBB0
// Address: 0x2ebbb0 - 0x2ebc90
void sub_002EBBB0_0x2ebbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBB0_0x2ebbb0");
#endif

    switch (ctx->pc) {
        case 0x2ebbb0u: goto label_2ebbb0;
        case 0x2ebbb4u: goto label_2ebbb4;
        case 0x2ebbb8u: goto label_2ebbb8;
        case 0x2ebbbcu: goto label_2ebbbc;
        case 0x2ebbc0u: goto label_2ebbc0;
        case 0x2ebbc4u: goto label_2ebbc4;
        case 0x2ebbc8u: goto label_2ebbc8;
        case 0x2ebbccu: goto label_2ebbcc;
        case 0x2ebbd0u: goto label_2ebbd0;
        case 0x2ebbd4u: goto label_2ebbd4;
        case 0x2ebbd8u: goto label_2ebbd8;
        case 0x2ebbdcu: goto label_2ebbdc;
        case 0x2ebbe0u: goto label_2ebbe0;
        case 0x2ebbe4u: goto label_2ebbe4;
        case 0x2ebbe8u: goto label_2ebbe8;
        case 0x2ebbecu: goto label_2ebbec;
        case 0x2ebbf0u: goto label_2ebbf0;
        case 0x2ebbf4u: goto label_2ebbf4;
        case 0x2ebbf8u: goto label_2ebbf8;
        case 0x2ebbfcu: goto label_2ebbfc;
        case 0x2ebc00u: goto label_2ebc00;
        case 0x2ebc04u: goto label_2ebc04;
        case 0x2ebc08u: goto label_2ebc08;
        case 0x2ebc0cu: goto label_2ebc0c;
        case 0x2ebc10u: goto label_2ebc10;
        case 0x2ebc14u: goto label_2ebc14;
        case 0x2ebc18u: goto label_2ebc18;
        case 0x2ebc1cu: goto label_2ebc1c;
        case 0x2ebc20u: goto label_2ebc20;
        case 0x2ebc24u: goto label_2ebc24;
        case 0x2ebc28u: goto label_2ebc28;
        case 0x2ebc2cu: goto label_2ebc2c;
        case 0x2ebc30u: goto label_2ebc30;
        case 0x2ebc34u: goto label_2ebc34;
        case 0x2ebc38u: goto label_2ebc38;
        case 0x2ebc3cu: goto label_2ebc3c;
        case 0x2ebc40u: goto label_2ebc40;
        case 0x2ebc44u: goto label_2ebc44;
        case 0x2ebc48u: goto label_2ebc48;
        case 0x2ebc4cu: goto label_2ebc4c;
        case 0x2ebc50u: goto label_2ebc50;
        case 0x2ebc54u: goto label_2ebc54;
        case 0x2ebc58u: goto label_2ebc58;
        case 0x2ebc5cu: goto label_2ebc5c;
        case 0x2ebc60u: goto label_2ebc60;
        case 0x2ebc64u: goto label_2ebc64;
        case 0x2ebc68u: goto label_2ebc68;
        case 0x2ebc6cu: goto label_2ebc6c;
        case 0x2ebc70u: goto label_2ebc70;
        case 0x2ebc74u: goto label_2ebc74;
        case 0x2ebc78u: goto label_2ebc78;
        case 0x2ebc7cu: goto label_2ebc7c;
        case 0x2ebc80u: goto label_2ebc80;
        case 0x2ebc84u: goto label_2ebc84;
        case 0x2ebc88u: goto label_2ebc88;
        case 0x2ebc8cu: goto label_2ebc8c;
        default: break;
    }

    ctx->pc = 0x2ebbb0u;

label_2ebbb0:
    // 0x2ebbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ebbb4:
    // 0x2ebbb4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ebbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2ebbb8:
    // 0x2ebbb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ebbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ebbbc:
    // 0x2ebbbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ebbc0:
    // 0x2ebbc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ebbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ebbc4:
    // 0x2ebbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebbc8:
    // 0x2ebbc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ebbcc:
    // 0x2ebbcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebbd0:
    // 0x2ebbd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ebbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ebbd4:
    // 0x2ebbd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ebbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebbd8:
    // 0x2ebbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ebbdc:
    // 0x2ebbdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebbe0:
    // 0x2ebbe0: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2ebbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2ebbe4:
    // 0x2ebbe4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2ebbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ebbe8:
    // 0x2ebbe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ebbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebbec:
    // 0x2ebbec: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2ebbecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2ebbf0:
    // 0x2ebbf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ebbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebbf4:
    // 0x2ebbf4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ebbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ebbf8:
    // 0x2ebbf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ebbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebbfc:
    // 0x2ebbfc: 0xc0a22c6  jal         func_288B18
label_2ebc00:
    if (ctx->pc == 0x2EBC00u) {
        ctx->pc = 0x2EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBFCu;
        // 0x2ebc00: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC04u;
        goto label_2ebc04;
    }
    ctx->pc = 0x2EBBFCu;
    SET_GPR_U32(ctx, 31, 0x2EBC04u);
    ctx->pc = 0x2EBC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBFCu;
    // 0x2ebc00: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EBBFCu, 0x2EBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC04u;
label_2ebc04:
    // 0x2ebc04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ebc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebc08:
    // 0x2ebc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc0c:
    // 0x2ebc0c: 0xc0bb13a  jal         func_2EC4E8
label_2ebc10:
    if (ctx->pc == 0x2EBC10u) {
        ctx->pc = 0x2EBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC0Cu;
        // 0x2ebc10: 0xa05102d3  sb          $s1, 0x2D3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC14u;
        goto label_2ebc14;
    }
    ctx->pc = 0x2EBC0Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC14u);
    ctx->pc = 0x2EBC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC0Cu;
    // 0x2ebc10: 0xa05102d3  sb          $s1, 0x2D3($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EBC0Cu, 0x2EBC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC14u;
label_2ebc14:
    // 0x2ebc14: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
label_2ebc18:
    if (ctx->pc == 0x2EBC18u) {
        ctx->pc = 0x2EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC14u;
        // 0x2ebc18: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC1Cu;
        goto label_2ebc1c;
    }
    ctx->pc = 0x2EBC14u;
    {
        const bool branch_taken_0x2ebc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC14u;
        // 0x2ebc18: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc14) {
            ctx->pc = 0x2EBC78u;
            goto label_2ebc78;
        }
    }
    ctx->pc = 0x2EBC1Cu;
label_2ebc1c:
    // 0x2ebc1c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ebc1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ebc20:
    // 0x2ebc20: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ebc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2ebc24:
    // 0x2ebc24: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ebc28:
    // 0x2ebc28: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2ebc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2ebc2c:
    // 0x2ebc2c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2ebc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2ebc30:
    // 0x2ebc30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ebc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ebc34:
    // 0x2ebc34: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2ebc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ebc38:
    // 0x2ebc38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ebc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ebc3c:
    // 0x2ebc3c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2ebc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2ebc40:
    // 0x2ebc40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ebc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2ebc44:
    // 0x2ebc44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ebc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ebc48:
    // 0x2ebc48: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ebc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2ebc4c:
    // 0x2ebc4c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ebc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ebc50:
    // 0x2ebc50: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ebc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ebc54:
    // 0x2ebc54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ebc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ebc58:
    // 0x2ebc58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ebc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2ebc5c:
    // 0x2ebc5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ebc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ebc60:
    // 0x2ebc60: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2ebc60u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2ebc64:
    // 0x2ebc64: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ebc64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ebc68:
    // 0x2ebc68: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ebc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ebc6c:
    // 0x2ebc6c: 0x40f809  jalr        $v0
label_2ebc70:
    if (ctx->pc == 0x2EBC70u) {
        ctx->pc = 0x2EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC6Cu;
        // 0x2ebc70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC74u;
        goto label_2ebc74;
    }
    ctx->pc = 0x2EBC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBC74u);
        ctx->pc = 0x2EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC6Cu;
        // 0x2ebc70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC6Cu, 0x2EBC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBC74u;
label_2ebc74:
    // 0x2ebc74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ebc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebc78:
    // 0x2ebc78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ebc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebc7c:
    // 0x2ebc7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ebc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebc80:
    // 0x2ebc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebc84:
    // 0x2ebc84: 0x3e00008  jr          $ra
label_2ebc88:
    if (ctx->pc == 0x2EBC88u) {
        ctx->pc = 0x2EBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC84u;
        // 0x2ebc88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBC8Cu;
        goto label_2ebc8c;
    }
    ctx->pc = 0x2EBC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC84u;
        // 0x2ebc88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC8Cu;
label_2ebc8c:
    // 0x2ebc8c: 0x0  nop
    ctx->pc = 0x2ebc8cu;
    // NOP
    ctx->pc = 0x2ebc90u;
}
