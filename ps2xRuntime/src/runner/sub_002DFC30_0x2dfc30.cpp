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

// Function: sub_002DFC30
// Address: 0x2dfc30 - 0x2dfcd0
void sub_002DFC30_0x2dfc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC30_0x2dfc30");
#endif

    switch (ctx->pc) {
        case 0x2dfc30u: goto label_2dfc30;
        case 0x2dfc34u: goto label_2dfc34;
        case 0x2dfc38u: goto label_2dfc38;
        case 0x2dfc3cu: goto label_2dfc3c;
        case 0x2dfc40u: goto label_2dfc40;
        case 0x2dfc44u: goto label_2dfc44;
        case 0x2dfc48u: goto label_2dfc48;
        case 0x2dfc4cu: goto label_2dfc4c;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc54u: goto label_2dfc54;
        case 0x2dfc58u: goto label_2dfc58;
        case 0x2dfc5cu: goto label_2dfc5c;
        case 0x2dfc60u: goto label_2dfc60;
        case 0x2dfc64u: goto label_2dfc64;
        case 0x2dfc68u: goto label_2dfc68;
        case 0x2dfc6cu: goto label_2dfc6c;
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfc78u: goto label_2dfc78;
        case 0x2dfc7cu: goto label_2dfc7c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfc84u: goto label_2dfc84;
        case 0x2dfc88u: goto label_2dfc88;
        case 0x2dfc8cu: goto label_2dfc8c;
        case 0x2dfc90u: goto label_2dfc90;
        case 0x2dfc94u: goto label_2dfc94;
        case 0x2dfc98u: goto label_2dfc98;
        case 0x2dfc9cu: goto label_2dfc9c;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfca4u: goto label_2dfca4;
        case 0x2dfca8u: goto label_2dfca8;
        case 0x2dfcacu: goto label_2dfcac;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcb4u: goto label_2dfcb4;
        case 0x2dfcb8u: goto label_2dfcb8;
        case 0x2dfcbcu: goto label_2dfcbc;
        case 0x2dfcc0u: goto label_2dfcc0;
        case 0x2dfcc4u: goto label_2dfcc4;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcccu: goto label_2dfccc;
        default: break;
    }

    ctx->pc = 0x2dfc30u;

label_2dfc30:
    // 0x2dfc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dfc34:
    // 0x2dfc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dfc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dfc38:
    // 0x2dfc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dfc3c:
    // 0x2dfc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dfc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc40:
    // 0x2dfc40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dfc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfc44:
    // 0x2dfc44: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2dfc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2dfc48:
    // 0x2dfc48: 0x946200f4  lhu         $v0, 0xF4($v1)
    ctx->pc = 0x2dfc48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 244)));
label_2dfc4c:
    // 0x2dfc4c: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x2dfc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
label_2dfc50:
    // 0x2dfc50: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2dfc54:
    // 0x2dfc54: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2dfc58:
    // 0x2dfc58: 0x40f809  jalr        $v0
label_2dfc5c:
    if (ctx->pc == 0x2DFC5Cu) {
        ctx->pc = 0x2DFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC58u;
        // 0x2dfc5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC60u;
        goto label_2dfc60;
    }
    ctx->pc = 0x2DFC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFC60u);
        ctx->pc = 0x2DFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC58u;
        // 0x2dfc5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC58u, 0x2DFC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFC60u;
label_2dfc60:
    // 0x2dfc60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfc64:
    // 0x2dfc64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dfc68:
    // 0x2dfc68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2dfc6c:
    // 0x2dfc6c: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_2dfc70:
    if (ctx->pc == 0x2DFC70u) {
        ctx->pc = 0x2DFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC6Cu;
        // 0x2dfc70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC74u;
        goto label_2dfc74;
    }
    ctx->pc = 0x2DFC6Cu;
    {
        const bool branch_taken_0x2dfc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfc6c) {
            ctx->pc = 0x2DFC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFC6Cu;
            // 0x2dfc70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCB4u;
            goto label_2dfcb4;
        }
    }
    ctx->pc = 0x2DFC74u;
label_2dfc74:
    // 0x2dfc74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dfc78:
    // 0x2dfc78: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2dfc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dfc7c:
    // 0x2dfc7c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2dfc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2dfc80:
    // 0x2dfc80: 0x908200e1  lbu         $v0, 0xE1($a0)
    ctx->pc = 0x2dfc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 225)));
label_2dfc84:
    // 0x2dfc84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dfc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dfc88:
    // 0x2dfc88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2dfc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2dfc8c:
    // 0x2dfc8c: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x2dfc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_2dfc90:
    // 0x2dfc90: 0xdc8300e0  ld          $v1, 0xE0($a0)
    ctx->pc = 0x2dfc90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2dfc94:
    // 0x2dfc94: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2dfc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2dfc98:
    // 0x2dfc98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2dfc98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2dfc9c:
    // 0x2dfc9c: 0xa2030035  sb          $v1, 0x35($s0)
    ctx->pc = 0x2dfc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 3));
label_2dfca0:
    // 0x2dfca0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2dfca0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2dfca4:
    // 0x2dfca4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2dfca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2dfca8:
    // 0x2dfca8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2dfca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2dfcac:
    // 0x2dfcac: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2dfcacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2dfcb0:
    // 0x2dfcb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfcb4:
    // 0x2dfcb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dfcb8:
    // 0x2dfcb8: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x2dfcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_2dfcbc:
    // 0x2dfcbc: 0xa2030038  sb          $v1, 0x38($s0)
    ctx->pc = 0x2dfcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 3));
label_2dfcc0:
    // 0x2dfcc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dfcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dfcc4:
    // 0x2dfcc4: 0x3e00008  jr          $ra
label_2dfcc8:
    if (ctx->pc == 0x2DFCC8u) {
        ctx->pc = 0x2DFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCC4u;
        // 0x2dfcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCCCu;
        goto label_2dfccc;
    }
    ctx->pc = 0x2DFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCC4u;
        // 0x2dfcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFCCCu;
label_2dfccc:
    // 0x2dfccc: 0x0  nop
    ctx->pc = 0x2dfcccu;
    // NOP
    ctx->pc = 0x2dfcd0u;
}
