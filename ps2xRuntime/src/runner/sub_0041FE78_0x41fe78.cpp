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

// Function: sub_0041FE78
// Address: 0x41fe78 - 0x41fed0
void sub_0041FE78_0x41fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FE78_0x41fe78");
#endif

    switch (ctx->pc) {
        case 0x41fe78u: goto label_41fe78;
        case 0x41fe7cu: goto label_41fe7c;
        case 0x41fe80u: goto label_41fe80;
        case 0x41fe84u: goto label_41fe84;
        case 0x41fe88u: goto label_41fe88;
        case 0x41fe8cu: goto label_41fe8c;
        case 0x41fe90u: goto label_41fe90;
        case 0x41fe94u: goto label_41fe94;
        case 0x41fe98u: goto label_41fe98;
        case 0x41fe9cu: goto label_41fe9c;
        case 0x41fea0u: goto label_41fea0;
        case 0x41fea4u: goto label_41fea4;
        case 0x41fea8u: goto label_41fea8;
        case 0x41feacu: goto label_41feac;
        case 0x41feb0u: goto label_41feb0;
        case 0x41feb4u: goto label_41feb4;
        case 0x41feb8u: goto label_41feb8;
        case 0x41febcu: goto label_41febc;
        case 0x41fec0u: goto label_41fec0;
        case 0x41fec4u: goto label_41fec4;
        case 0x41fec8u: goto label_41fec8;
        case 0x41feccu: goto label_41fecc;
        default: break;
    }

    ctx->pc = 0x41fe78u;

label_41fe78:
    // 0x41fe78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41fe7c:
    // 0x41fe7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41fe80:
    // 0x41fe80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41fe84:
    // 0x41fe84: 0x10000006  b           . + 4 + (0x6 << 2)
label_41fe88:
    if (ctx->pc == 0x41FE88u) {
        ctx->pc = 0x41FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE84u;
        // 0x41fe88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FE8Cu;
        goto label_41fe8c;
    }
    ctx->pc = 0x41FE84u;
    {
        const bool branch_taken_0x41fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE84u;
        // 0x41fe88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe84) {
            ctx->pc = 0x41FEA0u;
            goto label_41fea0;
        }
    }
    ctx->pc = 0x41FE8Cu;
label_41fe8c:
    // 0x41fe8c: 0x0  nop
    ctx->pc = 0x41fe8cu;
    // NOP
label_41fe90:
    // 0x41fe90: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x41fe90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_41fe94:
    // 0x41fe94: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x41fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_41fe98:
    // 0x41fe98: 0x60f809  jalr        $v1
label_41fe9c:
    if (ctx->pc == 0x41FE9Cu) {
        ctx->pc = 0x41FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE98u;
        // 0x41fe9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEA0u;
        goto label_41fea0;
    }
    ctx->pc = 0x41FE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41FEA0u);
        ctx->pc = 0x41FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE98u;
        // 0x41fe9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FE98u, 0x41FEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FEA0u;
label_41fea0:
    // 0x41fea0: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x41fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_41fea4:
    // 0x41fea4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x41fea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_41fea8:
    // 0x41fea8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_41feac:
    // 0x41feac: 0x40f809  jalr        $v0
label_41feb0:
    if (ctx->pc == 0x41FEB0u) {
        ctx->pc = 0x41FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEACu;
        // 0x41feb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEB4u;
        goto label_41feb4;
    }
    ctx->pc = 0x41FEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41FEB4u);
        ctx->pc = 0x41FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEACu;
        // 0x41feb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FEACu, 0x41FEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FEB4u;
label_41feb4:
    // 0x41feb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41feb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41feb8:
    // 0x41feb8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_41febc:
    if (ctx->pc == 0x41FEBCu) {
        ctx->pc = 0x41FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEB8u;
        // 0x41febc: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEC0u;
        goto label_41fec0;
    }
    ctx->pc = 0x41FEB8u;
    {
        const bool branch_taken_0x41feb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41feb8) {
            ctx->pc = 0x41FEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FEB8u;
            // 0x41febc: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41fe90;
        }
    }
    ctx->pc = 0x41FEC0u;
label_41fec0:
    // 0x41fec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41fec4:
    // 0x41fec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41fec8:
    // 0x41fec8: 0x3e00008  jr          $ra
label_41fecc:
    if (ctx->pc == 0x41FECCu) {
        ctx->pc = 0x41FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEC8u;
        // 0x41fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FED0u;
        goto label_fallthrough_0x41fec8;
    }
    ctx->pc = 0x41FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEC8u;
        // 0x41fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41fec8:
    ctx->pc = 0x41FED0u;
}
