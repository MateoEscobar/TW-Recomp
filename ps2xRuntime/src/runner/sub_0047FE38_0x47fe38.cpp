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

// Function: sub_0047FE38
// Address: 0x47fe38 - 0x47fed0
void sub_0047FE38_0x47fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FE38_0x47fe38");
#endif

    switch (ctx->pc) {
        case 0x47fe38u: goto label_47fe38;
        case 0x47fe3cu: goto label_47fe3c;
        case 0x47fe40u: goto label_47fe40;
        case 0x47fe44u: goto label_47fe44;
        case 0x47fe48u: goto label_47fe48;
        case 0x47fe4cu: goto label_47fe4c;
        case 0x47fe50u: goto label_47fe50;
        case 0x47fe54u: goto label_47fe54;
        case 0x47fe58u: goto label_47fe58;
        case 0x47fe5cu: goto label_47fe5c;
        case 0x47fe60u: goto label_47fe60;
        case 0x47fe64u: goto label_47fe64;
        case 0x47fe68u: goto label_47fe68;
        case 0x47fe6cu: goto label_47fe6c;
        case 0x47fe70u: goto label_47fe70;
        case 0x47fe74u: goto label_47fe74;
        case 0x47fe78u: goto label_47fe78;
        case 0x47fe7cu: goto label_47fe7c;
        case 0x47fe80u: goto label_47fe80;
        case 0x47fe84u: goto label_47fe84;
        case 0x47fe88u: goto label_47fe88;
        case 0x47fe8cu: goto label_47fe8c;
        case 0x47fe90u: goto label_47fe90;
        case 0x47fe94u: goto label_47fe94;
        case 0x47fe98u: goto label_47fe98;
        case 0x47fe9cu: goto label_47fe9c;
        case 0x47fea0u: goto label_47fea0;
        case 0x47fea4u: goto label_47fea4;
        case 0x47fea8u: goto label_47fea8;
        case 0x47feacu: goto label_47feac;
        case 0x47feb0u: goto label_47feb0;
        case 0x47feb4u: goto label_47feb4;
        case 0x47feb8u: goto label_47feb8;
        case 0x47febcu: goto label_47febc;
        case 0x47fec0u: goto label_47fec0;
        case 0x47fec4u: goto label_47fec4;
        case 0x47fec8u: goto label_47fec8;
        case 0x47feccu: goto label_47fecc;
        default: break;
    }

    ctx->pc = 0x47fe38u;

label_47fe38:
    // 0x47fe38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47fe3c:
    // 0x47fe3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47fe40:
    // 0x47fe40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47fe44:
    // 0x47fe44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47fe48:
    // 0x47fe48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47fe48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47fe4c:
    // 0x47fe4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47fe50:
    // 0x47fe50: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x47fe50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_47fe54:
    // 0x47fe54: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_47fe58:
    if (ctx->pc == 0x47FE58u) {
        ctx->pc = 0x47FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE54u;
        // 0x47fe58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FE5Cu;
        goto label_47fe5c;
    }
    ctx->pc = 0x47FE54u;
    {
        const bool branch_taken_0x47fe54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE54u;
        // 0x47fe58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fe54) {
            ctx->pc = 0x47FEB4u;
            goto label_47feb4;
        }
    }
    ctx->pc = 0x47FE5Cu;
label_47fe5c:
    // 0x47fe5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x47fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_47fe60:
    // 0x47fe60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47fe64:
    // 0x47fe64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47fe68:
    // 0x47fe68: 0x40f809  jalr        $v0
label_47fe6c:
    if (ctx->pc == 0x47FE6Cu) {
        ctx->pc = 0x47FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE68u;
        // 0x47fe6c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FE70u;
        goto label_47fe70;
    }
    ctx->pc = 0x47FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FE70u);
        ctx->pc = 0x47FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE68u;
        // 0x47fe6c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FE68u, 0x47FE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FE70u;
label_47fe70:
    // 0x47fe70: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_47fe74:
    if (ctx->pc == 0x47FE74u) {
        ctx->pc = 0x47FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE70u;
        // 0x47fe74: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FE78u;
        goto label_47fe78;
    }
    ctx->pc = 0x47FE70u;
    {
        const bool branch_taken_0x47fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fe70) {
            ctx->pc = 0x47FE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FE70u;
            // 0x47fe74: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FEACu;
            goto label_47feac;
        }
    }
    ctx->pc = 0x47FE78u;
label_47fe78:
    // 0x47fe78: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x47fe78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47fe7c:
    // 0x47fe7c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_47fe80:
    if (ctx->pc == 0x47FE80u) {
        ctx->pc = 0x47FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE7Cu;
        // 0x47fe80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FE84u;
        goto label_47fe84;
    }
    ctx->pc = 0x47FE7Cu;
    {
        const bool branch_taken_0x47fe7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE7Cu;
        // 0x47fe80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fe7c) {
            ctx->pc = 0x47FEB8u;
            goto label_47feb8;
        }
    }
    ctx->pc = 0x47FE84u;
label_47fe84:
    // 0x47fe84: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x47fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_47fe88:
    // 0x47fe88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47fe8c:
    // 0x47fe8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47fe90:
    // 0x47fe90: 0x40f809  jalr        $v0
label_47fe94:
    if (ctx->pc == 0x47FE94u) {
        ctx->pc = 0x47FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE90u;
        // 0x47fe94: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FE98u;
        goto label_47fe98;
    }
    ctx->pc = 0x47FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FE98u);
        ctx->pc = 0x47FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE90u;
        // 0x47fe94: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FE90u, 0x47FE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FE98u;
label_47fe98:
    // 0x47fe98: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x47fe98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_47fe9c:
    // 0x47fe9c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_47fea0:
    if (ctx->pc == 0x47FEA0u) {
        ctx->pc = 0x47FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE9Cu;
        // 0x47fea0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FEA4u;
        goto label_47fea4;
    }
    ctx->pc = 0x47FE9Cu;
    {
        const bool branch_taken_0x47fe9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fe9c) {
            ctx->pc = 0x47FEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FE9Cu;
            // 0x47fea0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fe88;
        }
    }
    ctx->pc = 0x47FEA4u;
label_47fea4:
    // 0x47fea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_47fea8:
    if (ctx->pc == 0x47FEA8u) {
        ctx->pc = 0x47FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEA4u;
        // 0x47fea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FEACu;
        goto label_47feac;
    }
    ctx->pc = 0x47FEA4u;
    {
        const bool branch_taken_0x47fea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEA4u;
        // 0x47fea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fea4) {
            ctx->pc = 0x47FEB8u;
            goto label_47feb8;
        }
    }
    ctx->pc = 0x47FEACu;
label_47feac:
    // 0x47feac: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
label_47feb0:
    if (ctx->pc == 0x47FEB0u) {
        ctx->pc = 0x47FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEACu;
        // 0x47feb0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FEB4u;
        goto label_47feb4;
    }
    ctx->pc = 0x47FEACu;
    {
        const bool branch_taken_0x47feac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47feac) {
            ctx->pc = 0x47FEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FEACu;
            // 0x47feb0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fe60;
        }
    }
    ctx->pc = 0x47FEB4u;
label_47feb4:
    // 0x47feb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x47feb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47feb8:
    // 0x47feb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47feb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47febc:
    // 0x47febc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47febcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47fec0:
    // 0x47fec0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47fec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47fec4:
    // 0x47fec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47fec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47fec8:
    // 0x47fec8: 0x3e00008  jr          $ra
label_47fecc:
    if (ctx->pc == 0x47FECCu) {
        ctx->pc = 0x47FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEC8u;
        // 0x47fecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FED0u;
        goto label_fallthrough_0x47fec8;
    }
    ctx->pc = 0x47FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FEC8u;
        // 0x47fecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47fec8:
    ctx->pc = 0x47FED0u;
}
