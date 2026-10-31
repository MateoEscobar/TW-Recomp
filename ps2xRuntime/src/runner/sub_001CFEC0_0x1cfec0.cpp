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

// Function: sub_001CFEC0
// Address: 0x1cfec0 - 0x1cff48
void sub_001CFEC0_0x1cfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFEC0_0x1cfec0");
#endif

    switch (ctx->pc) {
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        case 0x1cfed8u: goto label_1cfed8;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cfee0u: goto label_1cfee0;
        case 0x1cfee4u: goto label_1cfee4;
        case 0x1cfee8u: goto label_1cfee8;
        case 0x1cfeecu: goto label_1cfeec;
        case 0x1cfef0u: goto label_1cfef0;
        case 0x1cfef4u: goto label_1cfef4;
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cfefcu: goto label_1cfefc;
        case 0x1cff00u: goto label_1cff00;
        case 0x1cff04u: goto label_1cff04;
        case 0x1cff08u: goto label_1cff08;
        case 0x1cff0cu: goto label_1cff0c;
        case 0x1cff10u: goto label_1cff10;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff18u: goto label_1cff18;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff20u: goto label_1cff20;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff30u: goto label_1cff30;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff3cu: goto label_1cff3c;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff44u: goto label_1cff44;
        default: break;
    }

    ctx->pc = 0x1cfec0u;

label_1cfec0:
    // 0x1cfec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cfec4:
    // 0x1cfec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfec8:
    // 0x1cfec8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
label_1cfecc:
    if (ctx->pc == 0x1CFECCu) {
        ctx->pc = 0x1CFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEC8u;
        // 0x1cfecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFED0u;
        goto label_1cfed0;
    }
    ctx->pc = 0x1CFEC8u;
    {
        const bool branch_taken_0x1cfec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEC8u;
        // 0x1cfecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfec8) {
            ctx->pc = 0x1CFEE8u;
            goto label_1cfee8;
        }
    }
    ctx->pc = 0x1CFED0u;
label_1cfed0:
    // 0x1cfed0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfed4:
    // 0x1cfed4: 0x8c45ec34  lw          $a1, -0x13CC($v0)
    ctx->pc = 0x1cfed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1cfed8:
    // 0x1cfed8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cfedc:
    // 0x1cfedc: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1cfee0:
    // 0x1cfee0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cfee4:
    if (ctx->pc == 0x1CFEE4u) {
        ctx->pc = 0x1CFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE0u;
        // 0x1cfee4: 0x8c6200bc  lw          $v0, 0xBC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFEE8u;
        goto label_1cfee8;
    }
    ctx->pc = 0x1CFEE0u;
    {
        const bool branch_taken_0x1cfee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE0u;
        // 0x1cfee4: 0x8c6200bc  lw          $v0, 0xBC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfee0) {
            ctx->pc = 0x1CFF08u;
            goto label_1cff08;
        }
    }
    ctx->pc = 0x1CFEE8u;
label_1cfee8:
    // 0x1cfee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cfeec:
    // 0x1cfeec: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_1cfef0:
    if (ctx->pc == 0x1CFEF0u) {
        ctx->pc = 0x1CFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEECu;
        // 0x1cfef0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFEF4u;
        goto label_1cfef4;
    }
    ctx->pc = 0x1CFEECu;
    {
        const bool branch_taken_0x1cfeec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEECu;
        // 0x1cfef0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeec) {
            ctx->pc = 0x1CFF18u;
            goto label_1cff18;
        }
    }
    ctx->pc = 0x1CFEF4u;
label_1cfef4:
    // 0x1cfef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cfef8:
    // 0x1cfef8: 0x8c45ec34  lw          $a1, -0x13CC($v0)
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1cfefc:
    // 0x1cfefc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cff00:
    // 0x1cff00: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1cff00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1cff04:
    // 0x1cff04: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1cff08:
    // 0x1cff08: 0x40f809  jalr        $v0
label_1cff0c:
    if (ctx->pc == 0x1CFF0Cu) {
        ctx->pc = 0x1CFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF08u;
        // 0x1cff0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF10u;
        goto label_1cff10;
    }
    ctx->pc = 0x1CFF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFF10u);
        ctx->pc = 0x1CFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF08u;
        // 0x1cff0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF08u, 0x1CFF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFF10u;
label_1cff10:
    // 0x1cff10: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cff14:
    if (ctx->pc == 0x1CFF14u) {
        ctx->pc = 0x1CFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF10u;
        // 0x1cff14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF18u;
        goto label_1cff18;
    }
    ctx->pc = 0x1CFF10u;
    {
        const bool branch_taken_0x1cff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF10u;
        // 0x1cff14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff10) {
            ctx->pc = 0x1CFF40u;
            goto label_1cff40;
        }
    }
    ctx->pc = 0x1CFF18u;
label_1cff18:
    // 0x1cff18: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_1cff1c:
    if (ctx->pc == 0x1CFF1Cu) {
        ctx->pc = 0x1CFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF18u;
        // 0x1cff1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF20u;
        goto label_1cff20;
    }
    ctx->pc = 0x1CFF18u;
    {
        const bool branch_taken_0x1cff18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF18u;
        // 0x1cff1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff18) {
            ctx->pc = 0x1CFF40u;
            goto label_1cff40;
        }
    }
    ctx->pc = 0x1CFF20u;
label_1cff20:
    // 0x1cff20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cff20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cff24:
    // 0x1cff24: 0x8c45ec34  lw          $a1, -0x13CC($v0)
    ctx->pc = 0x1cff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1cff28:
    // 0x1cff28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cff2c:
    // 0x1cff2c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1cff30:
    // 0x1cff30: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1cff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1cff34:
    // 0x1cff34: 0x40f809  jalr        $v0
label_1cff38:
    if (ctx->pc == 0x1CFF38u) {
        ctx->pc = 0x1CFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF34u;
        // 0x1cff38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF3Cu;
        goto label_1cff3c;
    }
    ctx->pc = 0x1CFF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFF3Cu);
        ctx->pc = 0x1CFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF34u;
        // 0x1cff38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF34u, 0x1CFF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFF3Cu;
label_1cff3c:
    // 0x1cff3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cff40:
    // 0x1cff40: 0x3e00008  jr          $ra
label_1cff44:
    if (ctx->pc == 0x1CFF44u) {
        ctx->pc = 0x1CFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF40u;
        // 0x1cff44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF48u;
        goto label_fallthrough_0x1cff40;
    }
    ctx->pc = 0x1CFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF40u;
        // 0x1cff44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cff40:
    ctx->pc = 0x1CFF48u;
}
