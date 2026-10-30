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

// Function: sub_002CFAD0
// Address: 0x2cfad0 - 0x2cfb18
void sub_002CFAD0_0x2cfad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFAD0_0x2cfad0");
#endif

    switch (ctx->pc) {
        case 0x2cfad0u: goto label_2cfad0;
        case 0x2cfad4u: goto label_2cfad4;
        case 0x2cfad8u: goto label_2cfad8;
        case 0x2cfadcu: goto label_2cfadc;
        case 0x2cfae0u: goto label_2cfae0;
        case 0x2cfae4u: goto label_2cfae4;
        case 0x2cfae8u: goto label_2cfae8;
        case 0x2cfaecu: goto label_2cfaec;
        case 0x2cfaf0u: goto label_2cfaf0;
        case 0x2cfaf4u: goto label_2cfaf4;
        case 0x2cfaf8u: goto label_2cfaf8;
        case 0x2cfafcu: goto label_2cfafc;
        case 0x2cfb00u: goto label_2cfb00;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb08u: goto label_2cfb08;
        case 0x2cfb0cu: goto label_2cfb0c;
        case 0x2cfb10u: goto label_2cfb10;
        case 0x2cfb14u: goto label_2cfb14;
        default: break;
    }

    ctx->pc = 0x2cfad0u;

label_2cfad0:
    // 0x2cfad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cfad4:
    // 0x2cfad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cfad8:
    // 0x2cfad8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfadc:
    // 0x2cfadc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cfae0:
    // 0x2cfae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cfae4:
    // 0x2cfae4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cfae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cfae8:
    // 0x2cfae8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cfaec:
    // 0x2cfaec: 0x40f809  jalr        $v0
label_2cfaf0:
    if (ctx->pc == 0x2CFAF0u) {
        ctx->pc = 0x2CFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAECu;
        // 0x2cfaf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFAF4u;
        goto label_2cfaf4;
    }
    ctx->pc = 0x2CFAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFAF4u);
        ctx->pc = 0x2CFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAECu;
        // 0x2cfaf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFAECu, 0x2CFAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFAF4u;
label_2cfaf4:
    // 0x2cfaf4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2cfaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2cfaf8:
    // 0x2cfaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfafc:
    // 0x2cfafc: 0x24c66350  addiu       $a2, $a2, 0x6350
    ctx->pc = 0x2cfafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25424));
label_2cfb00:
    // 0x2cfb00: 0xc08e1a4  jal         func_238690
label_2cfb04:
    if (ctx->pc == 0x2CFB04u) {
        ctx->pc = 0x2CFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB00u;
        // 0x2cfb04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB08u;
        goto label_2cfb08;
    }
    ctx->pc = 0x2CFB00u;
    SET_GPR_U32(ctx, 31, 0x2CFB08u);
    ctx->pc = 0x2CFB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB00u;
    // 0x2cfb04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2CFB00u, 0x2CFB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB08u;
label_2cfb08:
    // 0x2cfb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfb0c:
    // 0x2cfb0c: 0x3e00008  jr          $ra
label_2cfb10:
    if (ctx->pc == 0x2CFB10u) {
        ctx->pc = 0x2CFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB0Cu;
        // 0x2cfb10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB14u;
        goto label_2cfb14;
    }
    ctx->pc = 0x2CFB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB0Cu;
        // 0x2cfb10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB14u;
label_2cfb14:
    // 0x2cfb14: 0x0  nop
    ctx->pc = 0x2cfb14u;
    // NOP
    ctx->pc = 0x2cfb18u;
}
