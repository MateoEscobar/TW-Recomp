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

// Function: sub_002534D0
// Address: 0x2534d0 - 0x253528
void sub_002534D0_0x2534d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002534D0_0x2534d0");
#endif

    ctx->pc = 0x2534d0u;

    // 0x2534d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2534d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534d4: 0x94c21770  lhu         $v0, 0x1770($a2)
    ctx->pc = 0x2534d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6000)));
    // 0x2534d8: 0x2c420bb8  sltiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2534d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3000) ? 1 : 0);
    // 0x2534dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2534DCu;
    {
        const bool branch_taken_0x2534dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534DCu;
        // 0x2534e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534dc) {
            ctx->pc = 0x253514u;
            goto label_253514;
        }
    }
    ctx->pc = 0x2534E4u;
    // 0x2534e4: 0x94c31772  lhu         $v1, 0x1772($a2)
    ctx->pc = 0x2534e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6002)));
    // 0x2534e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2534e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2534ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2534ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2534f0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2534f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2534f4: 0xa4c31772  sh          $v1, 0x1772($a2)
    ctx->pc = 0x2534f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6002), (uint16_t)GPR_U32(ctx, 3));
    // 0x2534f8: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x2534fc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x253500: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x253500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x253504: 0x94c31770  lhu         $v1, 0x1770($a2)
    ctx->pc = 0x253504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6000)));
    // 0x253508: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x253508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25350c: 0x3e00008  jr          $ra
    ctx->pc = 0x25350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25350Cu;
        // 0x253510: 0xa4c31770  sh          $v1, 0x1770($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6000), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253514u;
label_253514:
    // 0x253514: 0x3e00008  jr          $ra
    ctx->pc = 0x253514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253514u;
        // 0x253518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25351Cu;
    // 0x25351c: 0x0  nop
    ctx->pc = 0x25351cu;
    // NOP
    // 0x253520: 0x0  nop
    ctx->pc = 0x253520u;
    // NOP
    // 0x253524: 0x0  nop
    ctx->pc = 0x253524u;
    // NOP
    ctx->pc = 0x253528u;
}
