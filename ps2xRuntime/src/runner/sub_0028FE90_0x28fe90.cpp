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

// Function: sub_0028FE90
// Address: 0x28fe90 - 0x28ff08
void sub_0028FE90_0x28fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FE90_0x28fe90");
#endif

    switch (ctx->pc) {
        case 0x28fe90u: goto label_28fe90;
        case 0x28fe94u: goto label_28fe94;
        case 0x28fe98u: goto label_28fe98;
        case 0x28fe9cu: goto label_28fe9c;
        case 0x28fea0u: goto label_28fea0;
        case 0x28fea4u: goto label_28fea4;
        case 0x28fea8u: goto label_28fea8;
        case 0x28feacu: goto label_28feac;
        case 0x28feb0u: goto label_28feb0;
        case 0x28feb4u: goto label_28feb4;
        case 0x28feb8u: goto label_28feb8;
        case 0x28febcu: goto label_28febc;
        case 0x28fec0u: goto label_28fec0;
        case 0x28fec4u: goto label_28fec4;
        case 0x28fec8u: goto label_28fec8;
        case 0x28feccu: goto label_28fecc;
        case 0x28fed0u: goto label_28fed0;
        case 0x28fed4u: goto label_28fed4;
        case 0x28fed8u: goto label_28fed8;
        case 0x28fedcu: goto label_28fedc;
        case 0x28fee0u: goto label_28fee0;
        case 0x28fee4u: goto label_28fee4;
        case 0x28fee8u: goto label_28fee8;
        case 0x28feecu: goto label_28feec;
        case 0x28fef0u: goto label_28fef0;
        case 0x28fef4u: goto label_28fef4;
        case 0x28fef8u: goto label_28fef8;
        case 0x28fefcu: goto label_28fefc;
        case 0x28ff00u: goto label_28ff00;
        case 0x28ff04u: goto label_28ff04;
        default: break;
    }

    ctx->pc = 0x28fe90u;

label_28fe90:
    // 0x28fe90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28fe94:
    // 0x28fe94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28fe98:
    // 0x28fe98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28fe9c:
    // 0x28fe9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28fea0:
    // 0x28fea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28fea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28fea4:
    // 0x28fea4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x28fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28fea8:
    // 0x28fea8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28feac:
    // 0x28feac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28feacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28feb0:
    // 0x28feb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28feb4:
    // 0x28feb4: 0x40f809  jalr        $v0
label_28feb8:
    if (ctx->pc == 0x28FEB8u) {
        ctx->pc = 0x28FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEB4u;
        // 0x28feb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FEBCu;
        goto label_28febc;
    }
    ctx->pc = 0x28FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FEBCu);
        ctx->pc = 0x28FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEB4u;
        // 0x28feb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FEB4u, 0x28FEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FEBCu;
label_28febc:
    // 0x28febc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28fec0:
    // 0x28fec0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x28fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_28fec4:
    // 0x28fec4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28fec8:
    // 0x28fec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28fec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28fecc:
    // 0x28fecc: 0x97b00002  lhu         $s0, 0x2($sp)
    ctx->pc = 0x28feccu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_28fed0:
    // 0x28fed0: 0x24428318  addiu       $v0, $v0, -0x7CE8
    ctx->pc = 0x28fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935320));
label_28fed4:
    // 0x28fed4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x28fed4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_28fed8:
    // 0x28fed8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x28fed8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_28fedc:
    // 0x28fedc: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x28fedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_28fee0:
    // 0x28fee0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28fee4:
    // 0x28fee4: 0xc0a7976  jal         func_29E5D8
label_28fee8:
    if (ctx->pc == 0x28FEE8u) {
        ctx->pc = 0x28FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEE4u;
        // 0x28fee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FEECu;
        goto label_28feec;
    }
    ctx->pc = 0x28FEE4u;
    SET_GPR_U32(ctx, 31, 0x28FEECu);
    ctx->pc = 0x28FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEE4u;
    // 0x28fee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E5D8u, 0x28FEE4u, 0x28FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEECu;
label_28feec:
    // 0x28feec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28feecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28fef0:
    // 0x28fef0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28fef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28fef4:
    // 0x28fef4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28fef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28fef8:
    // 0x28fef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28fefc:
    // 0x28fefc: 0x3e00008  jr          $ra
label_28ff00:
    if (ctx->pc == 0x28FF00u) {
        ctx->pc = 0x28FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEFCu;
        // 0x28ff00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FF04u;
        goto label_28ff04;
    }
    ctx->pc = 0x28FEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEFCu;
        // 0x28ff00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF04u;
label_28ff04:
    // 0x28ff04: 0x0  nop
    ctx->pc = 0x28ff04u;
    // NOP
    ctx->pc = 0x28ff08u;
}
