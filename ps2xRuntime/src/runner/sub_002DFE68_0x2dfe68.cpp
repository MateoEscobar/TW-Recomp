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

// Function: sub_002DFE68
// Address: 0x2dfe68 - 0x2dfef8
void sub_002DFE68_0x2dfe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFE68_0x2dfe68");
#endif

    switch (ctx->pc) {
        case 0x2dfe68u: goto label_2dfe68;
        case 0x2dfe6cu: goto label_2dfe6c;
        case 0x2dfe70u: goto label_2dfe70;
        case 0x2dfe74u: goto label_2dfe74;
        case 0x2dfe78u: goto label_2dfe78;
        case 0x2dfe7cu: goto label_2dfe7c;
        case 0x2dfe80u: goto label_2dfe80;
        case 0x2dfe84u: goto label_2dfe84;
        case 0x2dfe88u: goto label_2dfe88;
        case 0x2dfe8cu: goto label_2dfe8c;
        case 0x2dfe90u: goto label_2dfe90;
        case 0x2dfe94u: goto label_2dfe94;
        case 0x2dfe98u: goto label_2dfe98;
        case 0x2dfe9cu: goto label_2dfe9c;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfea4u: goto label_2dfea4;
        case 0x2dfea8u: goto label_2dfea8;
        case 0x2dfeacu: goto label_2dfeac;
        case 0x2dfeb0u: goto label_2dfeb0;
        case 0x2dfeb4u: goto label_2dfeb4;
        case 0x2dfeb8u: goto label_2dfeb8;
        case 0x2dfebcu: goto label_2dfebc;
        case 0x2dfec0u: goto label_2dfec0;
        case 0x2dfec4u: goto label_2dfec4;
        case 0x2dfec8u: goto label_2dfec8;
        case 0x2dfeccu: goto label_2dfecc;
        case 0x2dfed0u: goto label_2dfed0;
        case 0x2dfed4u: goto label_2dfed4;
        case 0x2dfed8u: goto label_2dfed8;
        case 0x2dfedcu: goto label_2dfedc;
        case 0x2dfee0u: goto label_2dfee0;
        case 0x2dfee4u: goto label_2dfee4;
        case 0x2dfee8u: goto label_2dfee8;
        case 0x2dfeecu: goto label_2dfeec;
        case 0x2dfef0u: goto label_2dfef0;
        case 0x2dfef4u: goto label_2dfef4;
        default: break;
    }

    ctx->pc = 0x2dfe68u;

label_2dfe68:
    // 0x2dfe68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dfe6c:
    // 0x2dfe6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dfe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dfe70:
    // 0x2dfe70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dfe74:
    // 0x2dfe74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dfe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfe78:
    // 0x2dfe78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2dfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2dfe7c:
    // 0x2dfe7c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2dfe80:
    // 0x2dfe80: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2dfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2dfe84:
    // 0x2dfe84: 0x60f809  jalr        $v1
label_2dfe88:
    if (ctx->pc == 0x2DFE88u) {
        ctx->pc = 0x2DFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE84u;
        // 0x2dfe88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFE8Cu;
        goto label_2dfe8c;
    }
    ctx->pc = 0x2DFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DFE8Cu);
        ctx->pc = 0x2DFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE84u;
        // 0x2dfe88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFE84u, 0x2DFE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFE8Cu;
label_2dfe8c:
    // 0x2dfe8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfe90:
    // 0x2dfe90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dfe94:
    // 0x2dfe94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2dfe98:
    // 0x2dfe98: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_2dfe9c:
    if (ctx->pc == 0x2DFE9Cu) {
        ctx->pc = 0x2DFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE98u;
        // 0x2dfe9c: 0x82050038  lb          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEA0u;
        goto label_2dfea0;
    }
    ctx->pc = 0x2DFE98u;
    {
        const bool branch_taken_0x2dfe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfe98) {
            ctx->pc = 0x2DFE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFE98u;
            // 0x2dfe9c: 0x82050038  lb          $a1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFEE0u;
            goto label_2dfee0;
        }
    }
    ctx->pc = 0x2DFEA0u;
label_2dfea0:
    // 0x2dfea0: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x2dfea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2dfea4:
    // 0x2dfea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfea8:
    // 0x2dfea8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2dfeac:
    if (ctx->pc == 0x2DFEACu) {
        ctx->pc = 0x2DFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEA8u;
        // 0x2dfeac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEB0u;
        goto label_2dfeb0;
    }
    ctx->pc = 0x2DFEA8u;
    {
        const bool branch_taken_0x2dfea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEA8u;
        // 0x2dfeac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfea8) {
            ctx->pc = 0x2DFEC0u;
            goto label_2dfec0;
        }
    }
    ctx->pc = 0x2DFEB0u;
label_2dfeb0:
    // 0x2dfeb0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2dfeb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2dfeb4:
    // 0x2dfeb4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2dfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2dfeb8:
    // 0x2dfeb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dfeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dfebc:
    // 0x2dfebc: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2dfebcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2dfec0:
    // 0x2dfec0: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2dfec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2dfec4:
    // 0x2dfec4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2dfec8:
    if (ctx->pc == 0x2DFEC8u) {
        ctx->pc = 0x2DFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEC4u;
        // 0x2dfec8: 0x82050038  lb          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFECCu;
        goto label_2dfecc;
    }
    ctx->pc = 0x2DFEC4u;
    {
        const bool branch_taken_0x2dfec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfec4) {
            ctx->pc = 0x2DFEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFEC4u;
            // 0x2dfec8: 0x82050038  lb          $a1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFEE0u;
            goto label_2dfee0;
        }
    }
    ctx->pc = 0x2DFECCu;
label_2dfecc:
    // 0x2dfecc: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2dfeccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2dfed0:
    // 0x2dfed0: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2dfed4:
    // 0x2dfed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dfed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dfed8:
    // 0x2dfed8: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2dfed8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2dfedc:
    // 0x2dfedc: 0x82050038  lb          $a1, 0x38($s0)
    ctx->pc = 0x2dfedcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_2dfee0:
    // 0x2dfee0: 0xc0a3398  jal         func_28CE60
label_2dfee4:
    if (ctx->pc == 0x2DFEE4u) {
        ctx->pc = 0x2DFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEE0u;
        // 0x2dfee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEE8u;
        goto label_2dfee8;
    }
    ctx->pc = 0x2DFEE0u;
    SET_GPR_U32(ctx, 31, 0x2DFEE8u);
    ctx->pc = 0x2DFEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFEE0u;
    // 0x2dfee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2DFEE0u, 0x2DFEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEE8u;
label_2dfee8:
    // 0x2dfee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dfee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dfeec:
    // 0x2dfeec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dfef0:
    // 0x2dfef0: 0x3e00008  jr          $ra
label_2dfef4:
    if (ctx->pc == 0x2DFEF4u) {
        ctx->pc = 0x2DFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEF0u;
        // 0x2dfef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEF8u;
        goto label_fallthrough_0x2dfef0;
    }
    ctx->pc = 0x2DFEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEF0u;
        // 0x2dfef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dfef0:
    ctx->pc = 0x2DFEF8u;
}
