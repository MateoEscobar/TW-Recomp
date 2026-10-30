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

// Function: sub_0029FC18
// Address: 0x29fc18 - 0x29fe10
void sub_0029FC18_0x29fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FC18_0x29fc18");
#endif

    switch (ctx->pc) {
        case 0x29fc18u: goto label_29fc18;
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc20u: goto label_29fc20;
        case 0x29fc24u: goto label_29fc24;
        case 0x29fc28u: goto label_29fc28;
        case 0x29fc2cu: goto label_29fc2c;
        case 0x29fc30u: goto label_29fc30;
        case 0x29fc34u: goto label_29fc34;
        case 0x29fc38u: goto label_29fc38;
        case 0x29fc3cu: goto label_29fc3c;
        case 0x29fc40u: goto label_29fc40;
        case 0x29fc44u: goto label_29fc44;
        case 0x29fc48u: goto label_29fc48;
        case 0x29fc4cu: goto label_29fc4c;
        case 0x29fc50u: goto label_29fc50;
        case 0x29fc54u: goto label_29fc54;
        case 0x29fc58u: goto label_29fc58;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fc60u: goto label_29fc60;
        case 0x29fc64u: goto label_29fc64;
        case 0x29fc68u: goto label_29fc68;
        case 0x29fc6cu: goto label_29fc6c;
        case 0x29fc70u: goto label_29fc70;
        case 0x29fc74u: goto label_29fc74;
        case 0x29fc78u: goto label_29fc78;
        case 0x29fc7cu: goto label_29fc7c;
        case 0x29fc80u: goto label_29fc80;
        case 0x29fc84u: goto label_29fc84;
        case 0x29fc88u: goto label_29fc88;
        case 0x29fc8cu: goto label_29fc8c;
        case 0x29fc90u: goto label_29fc90;
        case 0x29fc94u: goto label_29fc94;
        case 0x29fc98u: goto label_29fc98;
        case 0x29fc9cu: goto label_29fc9c;
        case 0x29fca0u: goto label_29fca0;
        case 0x29fca4u: goto label_29fca4;
        case 0x29fca8u: goto label_29fca8;
        case 0x29fcacu: goto label_29fcac;
        case 0x29fcb0u: goto label_29fcb0;
        case 0x29fcb4u: goto label_29fcb4;
        case 0x29fcb8u: goto label_29fcb8;
        case 0x29fcbcu: goto label_29fcbc;
        case 0x29fcc0u: goto label_29fcc0;
        case 0x29fcc4u: goto label_29fcc4;
        case 0x29fcc8u: goto label_29fcc8;
        case 0x29fcccu: goto label_29fccc;
        case 0x29fcd0u: goto label_29fcd0;
        case 0x29fcd4u: goto label_29fcd4;
        case 0x29fcd8u: goto label_29fcd8;
        case 0x29fcdcu: goto label_29fcdc;
        case 0x29fce0u: goto label_29fce0;
        case 0x29fce4u: goto label_29fce4;
        case 0x29fce8u: goto label_29fce8;
        case 0x29fcecu: goto label_29fcec;
        case 0x29fcf0u: goto label_29fcf0;
        case 0x29fcf4u: goto label_29fcf4;
        case 0x29fcf8u: goto label_29fcf8;
        case 0x29fcfcu: goto label_29fcfc;
        case 0x29fd00u: goto label_29fd00;
        case 0x29fd04u: goto label_29fd04;
        case 0x29fd08u: goto label_29fd08;
        case 0x29fd0cu: goto label_29fd0c;
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd14u: goto label_29fd14;
        case 0x29fd18u: goto label_29fd18;
        case 0x29fd1cu: goto label_29fd1c;
        case 0x29fd20u: goto label_29fd20;
        case 0x29fd24u: goto label_29fd24;
        case 0x29fd28u: goto label_29fd28;
        case 0x29fd2cu: goto label_29fd2c;
        case 0x29fd30u: goto label_29fd30;
        case 0x29fd34u: goto label_29fd34;
        case 0x29fd38u: goto label_29fd38;
        case 0x29fd3cu: goto label_29fd3c;
        case 0x29fd40u: goto label_29fd40;
        case 0x29fd44u: goto label_29fd44;
        case 0x29fd48u: goto label_29fd48;
        case 0x29fd4cu: goto label_29fd4c;
        case 0x29fd50u: goto label_29fd50;
        case 0x29fd54u: goto label_29fd54;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd5cu: goto label_29fd5c;
        case 0x29fd60u: goto label_29fd60;
        case 0x29fd64u: goto label_29fd64;
        case 0x29fd68u: goto label_29fd68;
        case 0x29fd6cu: goto label_29fd6c;
        case 0x29fd70u: goto label_29fd70;
        case 0x29fd74u: goto label_29fd74;
        case 0x29fd78u: goto label_29fd78;
        case 0x29fd7cu: goto label_29fd7c;
        case 0x29fd80u: goto label_29fd80;
        case 0x29fd84u: goto label_29fd84;
        case 0x29fd88u: goto label_29fd88;
        case 0x29fd8cu: goto label_29fd8c;
        case 0x29fd90u: goto label_29fd90;
        case 0x29fd94u: goto label_29fd94;
        case 0x29fd98u: goto label_29fd98;
        case 0x29fd9cu: goto label_29fd9c;
        case 0x29fda0u: goto label_29fda0;
        case 0x29fda4u: goto label_29fda4;
        case 0x29fda8u: goto label_29fda8;
        case 0x29fdacu: goto label_29fdac;
        case 0x29fdb0u: goto label_29fdb0;
        case 0x29fdb4u: goto label_29fdb4;
        case 0x29fdb8u: goto label_29fdb8;
        case 0x29fdbcu: goto label_29fdbc;
        case 0x29fdc0u: goto label_29fdc0;
        case 0x29fdc4u: goto label_29fdc4;
        case 0x29fdc8u: goto label_29fdc8;
        case 0x29fdccu: goto label_29fdcc;
        case 0x29fdd0u: goto label_29fdd0;
        case 0x29fdd4u: goto label_29fdd4;
        case 0x29fdd8u: goto label_29fdd8;
        case 0x29fddcu: goto label_29fddc;
        case 0x29fde0u: goto label_29fde0;
        case 0x29fde4u: goto label_29fde4;
        case 0x29fde8u: goto label_29fde8;
        case 0x29fdecu: goto label_29fdec;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fdf4u: goto label_29fdf4;
        case 0x29fdf8u: goto label_29fdf8;
        case 0x29fdfcu: goto label_29fdfc;
        case 0x29fe00u: goto label_29fe00;
        case 0x29fe04u: goto label_29fe04;
        case 0x29fe08u: goto label_29fe08;
        case 0x29fe0cu: goto label_29fe0c;
        default: break;
    }

    ctx->pc = 0x29fc18u;

label_29fc18:
    // 0x29fc18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29fc1c:
    // 0x29fc1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_29fc20:
    // 0x29fc20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_29fc24:
    // 0x29fc24: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x29fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_29fc28:
    // 0x29fc28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29fc2c:
    // 0x29fc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fc30:
    // 0x29fc30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_29fc34:
    // 0x29fc34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29fc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29fc38:
    // 0x29fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29fc3c:
    // 0x29fc3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_29fc40:
    // 0x29fc40: 0x2442f550  addiu       $v0, $v0, -0xAB0
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964560));
label_29fc44:
    // 0x29fc44: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x29fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_29fc48:
    // 0x29fc48: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_29fc4c:
    // 0x29fc4c: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x29fc4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_29fc50:
    // 0x29fc50: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x29fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_29fc54:
    // 0x29fc54: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x29fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_29fc58:
    // 0x29fc58: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x29fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_29fc5c:
    // 0x29fc5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_29fc60:
    // 0x29fc60: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x29fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_29fc64:
    // 0x29fc64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29fc68:
    // 0x29fc68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29fc6c:
    // 0x29fc6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29fc70:
    // 0x29fc70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29fc74:
    // 0x29fc74: 0x40f809  jalr        $v0
label_29fc78:
    if (ctx->pc == 0x29FC78u) {
        ctx->pc = 0x29FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC74u;
        // 0x29fc78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FC7Cu;
        goto label_29fc7c;
    }
    ctx->pc = 0x29FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FC7Cu);
        ctx->pc = 0x29FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC74u;
        // 0x29fc78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FC74u, 0x29FC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FC7Cu;
label_29fc7c:
    // 0x29fc7c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_29fc80:
    // 0x29fc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fc84:
    // 0x29fc84: 0x24c62938  addiu       $a2, $a2, 0x2938
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10552));
label_29fc88:
    // 0x29fc88: 0xc08e1a4  jal         func_238690
label_29fc8c:
    if (ctx->pc == 0x29FC8Cu) {
        ctx->pc = 0x29FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC88u;
        // 0x29fc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FC90u;
        goto label_29fc90;
    }
    ctx->pc = 0x29FC88u;
    SET_GPR_U32(ctx, 31, 0x29FC90u);
    ctx->pc = 0x29FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC88u;
    // 0x29fc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x29FC88u, 0x29FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC90u;
label_29fc90:
    // 0x29fc90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fc94:
    // 0x29fc94: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29fc98:
    // 0x29fc98: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_29fc9c:
    // 0x29fc9c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_29fca0:
    // 0x29fca0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x29fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_29fca4:
    // 0x29fca4: 0x40f809  jalr        $v0
label_29fca8:
    if (ctx->pc == 0x29FCA8u) {
        ctx->pc = 0x29FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCA4u;
        // 0x29fca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FCACu;
        goto label_29fcac;
    }
    ctx->pc = 0x29FCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FCACu);
        ctx->pc = 0x29FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCA4u;
        // 0x29fca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FCA4u, 0x29FCACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FCACu;
label_29fcac:
    // 0x29fcac: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29fcacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_29fcb0:
    // 0x29fcb0: 0x24050186  addiu       $a1, $zero, 0x186
    ctx->pc = 0x29fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
label_29fcb4:
    // 0x29fcb4: 0x24c62948  addiu       $a2, $a2, 0x2948
    ctx->pc = 0x29fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10568));
label_29fcb8:
    // 0x29fcb8: 0xc08e1d2  jal         func_238748
label_29fcbc:
    if (ctx->pc == 0x29FCBCu) {
        ctx->pc = 0x29FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCB8u;
        // 0x29fcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FCC0u;
        goto label_29fcc0;
    }
    ctx->pc = 0x29FCB8u;
    SET_GPR_U32(ctx, 31, 0x29FCC0u);
    ctx->pc = 0x29FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCB8u;
    // 0x29fcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x29FCB8u, 0x29FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCC0u;
label_29fcc0:
    // 0x29fcc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fcc4:
    // 0x29fcc4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29fcc8:
    // 0x29fcc8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_29fccc:
    // 0x29fccc: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_29fcd0:
    // 0x29fcd0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_29fcd4:
    // 0x29fcd4: 0x40f809  jalr        $v0
label_29fcd8:
    if (ctx->pc == 0x29FCD8u) {
        ctx->pc = 0x29FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCD4u;
        // 0x29fcd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FCDCu;
        goto label_29fcdc;
    }
    ctx->pc = 0x29FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FCDCu);
        ctx->pc = 0x29FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCD4u;
        // 0x29fcd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FCD4u, 0x29FCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FCDCu;
label_29fcdc:
    // 0x29fcdc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_29fce0:
    // 0x29fce0: 0x24050187  addiu       $a1, $zero, 0x187
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
label_29fce4:
    // 0x29fce4: 0x24c62958  addiu       $a2, $a2, 0x2958
    ctx->pc = 0x29fce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10584));
label_29fce8:
    // 0x29fce8: 0xc08e1d2  jal         func_238748
label_29fcec:
    if (ctx->pc == 0x29FCECu) {
        ctx->pc = 0x29FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCE8u;
        // 0x29fcec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FCF0u;
        goto label_29fcf0;
    }
    ctx->pc = 0x29FCE8u;
    SET_GPR_U32(ctx, 31, 0x29FCF0u);
    ctx->pc = 0x29FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCE8u;
    // 0x29fcec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x29FCE8u, 0x29FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCF0u;
label_29fcf0:
    // 0x29fcf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fcf4:
    // 0x29fcf4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29fcf8:
    // 0x29fcf8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_29fcfc:
    // 0x29fcfc: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x29fcfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_29fd00:
    // 0x29fd00: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x29fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_29fd04:
    // 0x29fd04: 0x40f809  jalr        $v0
label_29fd08:
    if (ctx->pc == 0x29FD08u) {
        ctx->pc = 0x29FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD04u;
        // 0x29fd08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD0Cu;
        goto label_29fd0c;
    }
    ctx->pc = 0x29FD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FD0Cu);
        ctx->pc = 0x29FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD04u;
        // 0x29fd08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD04u, 0x29FD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FD0Cu;
label_29fd0c:
    // 0x29fd0c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_29fd10:
    // 0x29fd10: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x29fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_29fd14:
    // 0x29fd14: 0x24c62968  addiu       $a2, $a2, 0x2968
    ctx->pc = 0x29fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10600));
label_29fd18:
    // 0x29fd18: 0xc08e1d2  jal         func_238748
label_29fd1c:
    if (ctx->pc == 0x29FD1Cu) {
        ctx->pc = 0x29FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD18u;
        // 0x29fd1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD20u;
        goto label_29fd20;
    }
    ctx->pc = 0x29FD18u;
    SET_GPR_U32(ctx, 31, 0x29FD20u);
    ctx->pc = 0x29FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD18u;
    // 0x29fd1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x29FD18u, 0x29FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD20u;
label_29fd20:
    // 0x29fd20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fd24:
    // 0x29fd24: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29fd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29fd28:
    // 0x29fd28: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_29fd2c:
    // 0x29fd2c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x29fd2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_29fd30:
    // 0x29fd30: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x29fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_29fd34:
    // 0x29fd34: 0x40f809  jalr        $v0
label_29fd38:
    if (ctx->pc == 0x29FD38u) {
        ctx->pc = 0x29FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD34u;
        // 0x29fd38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD3Cu;
        goto label_29fd3c;
    }
    ctx->pc = 0x29FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FD3Cu);
        ctx->pc = 0x29FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD34u;
        // 0x29fd38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD34u, 0x29FD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FD3Cu;
label_29fd3c:
    // 0x29fd3c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_29fd40:
    // 0x29fd40: 0x24050189  addiu       $a1, $zero, 0x189
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
label_29fd44:
    // 0x29fd44: 0x24c62980  addiu       $a2, $a2, 0x2980
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10624));
label_29fd48:
    // 0x29fd48: 0xc08e1d2  jal         func_238748
label_29fd4c:
    if (ctx->pc == 0x29FD4Cu) {
        ctx->pc = 0x29FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD48u;
        // 0x29fd4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD50u;
        goto label_29fd50;
    }
    ctx->pc = 0x29FD48u;
    SET_GPR_U32(ctx, 31, 0x29FD50u);
    ctx->pc = 0x29FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD48u;
    // 0x29fd4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x29FD48u, 0x29FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD50u;
label_29fd50:
    // 0x29fd50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29fd54:
    // 0x29fd54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29fd58:
    // 0x29fd58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29fd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29fd5c:
    // 0x29fd5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29fd60:
    // 0x29fd60: 0x40f809  jalr        $v0
label_29fd64:
    if (ctx->pc == 0x29FD64u) {
        ctx->pc = 0x29FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD60u;
        // 0x29fd64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD68u;
        goto label_29fd68;
    }
    ctx->pc = 0x29FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FD68u);
        ctx->pc = 0x29FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD60u;
        // 0x29fd64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD60u, 0x29FD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FD68u;
label_29fd68:
    // 0x29fd68: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x29fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_29fd6c:
    // 0x29fd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fd70:
    // 0x29fd70: 0xc08e150  jal         func_238540
label_29fd74:
    if (ctx->pc == 0x29FD74u) {
        ctx->pc = 0x29FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD70u;
        // 0x29fd74: 0x24a52998  addiu       $a1, $a1, 0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD78u;
        goto label_29fd78;
    }
    ctx->pc = 0x29FD70u;
    SET_GPR_U32(ctx, 31, 0x29FD78u);
    ctx->pc = 0x29FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD70u;
    // 0x29fd74: 0x24a52998  addiu       $a1, $a1, 0x2998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x29FD70u, 0x29FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD78u;
label_29fd78:
    // 0x29fd78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29fd7c:
    // 0x29fd7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29fd80:
    // 0x29fd80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29fd84:
    // 0x29fd84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29fd88:
    // 0x29fd88: 0x40f809  jalr        $v0
label_29fd8c:
    if (ctx->pc == 0x29FD8Cu) {
        ctx->pc = 0x29FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD88u;
        // 0x29fd8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD90u;
        goto label_29fd90;
    }
    ctx->pc = 0x29FD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29FD90u);
        ctx->pc = 0x29FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD88u;
        // 0x29fd8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD88u, 0x29FD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29FD90u;
label_29fd90:
    // 0x29fd90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fd94:
    // 0x29fd94: 0xc08dcca  jal         func_237328
label_29fd98:
    if (ctx->pc == 0x29FD98u) {
        ctx->pc = 0x29FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD94u;
        // 0x29fd98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FD9Cu;
        goto label_29fd9c;
    }
    ctx->pc = 0x29FD94u;
    SET_GPR_U32(ctx, 31, 0x29FD9Cu);
    ctx->pc = 0x29FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD94u;
    // 0x29fd98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237328u, 0x29FD94u, 0x29FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD9Cu;
label_29fd9c:
    // 0x29fd9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29fda0:
    // 0x29fda0: 0xc0a7f84  jal         func_29FE10
label_29fda4:
    if (ctx->pc == 0x29FDA4u) {
        ctx->pc = 0x29FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDA0u;
        // 0x29fda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FDA8u;
        goto label_29fda8;
    }
    ctx->pc = 0x29FDA0u;
    SET_GPR_U32(ctx, 31, 0x29FDA8u);
    ctx->pc = 0x29FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FDA0u;
    // 0x29fda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE10u, 0x29FDA0u, 0x29FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDA8u;
label_29fda8:
    // 0x29fda8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29fdac:
    // 0x29fdac: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x29fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_29fdb0:
    // 0x29fdb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29fdb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29fdb4:
    // 0x29fdb4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x29fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_29fdb8:
    // 0x29fdb8: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x29fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_29fdbc:
    // 0x29fdbc: 0x248429a8  addiu       $a0, $a0, 0x29A8
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10664));
label_29fdc0:
    // 0x29fdc0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_29fdc4:
    // 0x29fdc4: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x29fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
label_29fdc8:
    // 0x29fdc8: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_29fdcc:
    // 0x29fdcc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x29fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_29fdd0:
    // 0x29fdd0: 0xc105446  jal         func_415118
label_29fdd4:
    if (ctx->pc == 0x29FDD4u) {
        ctx->pc = 0x29FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDD0u;
        // 0x29fdd4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FDD8u;
        goto label_29fdd8;
    }
    ctx->pc = 0x29FDD0u;
    SET_GPR_U32(ctx, 31, 0x29FDD8u);
    ctx->pc = 0x29FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FDD0u;
    // 0x29fdd4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415118u, 0x29FDD0u, 0x29FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDD8u;
label_29fdd8:
    // 0x29fdd8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x29fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_29fddc:
    // 0x29fddc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x29fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_29fde0:
    // 0x29fde0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fde4:
    // 0x29fde4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_29fde8:
    // 0x29fde8: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x29fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_29fdec:
    // 0x29fdec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29fdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fdf0:
    // 0x29fdf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29fdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29fdf4:
    // 0x29fdf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29fdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29fdf8:
    // 0x29fdf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29fdf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29fdfc:
    // 0x29fdfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29fdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29fe00:
    // 0x29fe00: 0xac600bbc  sw          $zero, 0xBBC($v1)
    ctx->pc = 0x29fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3004), GPR_U32(ctx, 0));
label_29fe04:
    // 0x29fe04: 0xaca493f8  sw          $a0, -0x6C08($a1)
    ctx->pc = 0x29fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939640), GPR_U32(ctx, 4));
label_29fe08:
    // 0x29fe08: 0x3e00008  jr          $ra
label_29fe0c:
    if (ctx->pc == 0x29FE0Cu) {
        ctx->pc = 0x29FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE08u;
        // 0x29fe0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29FE10u;
        goto label_fallthrough_0x29fe08;
    }
    ctx->pc = 0x29FE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE08u;
        // 0x29fe0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29fe08:
    ctx->pc = 0x29FE10u;
}
