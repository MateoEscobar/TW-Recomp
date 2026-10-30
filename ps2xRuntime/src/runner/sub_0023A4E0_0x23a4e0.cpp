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

// Function: sub_0023A4E0
// Address: 0x23a4e0 - 0x23a540
void sub_0023A4E0_0x23a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A4E0_0x23a4e0");
#endif

    ctx->pc = 0x23a4e0u;

    // 0x23a4e0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x23a4e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x23a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23a4e8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x23a4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x23a4ec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x23a4ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x23a4f0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x23a4f4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x23a4f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x23a4f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a4fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x23a500: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x23a504: 0xac46078c  sw          $a2, 0x78C($v0)
    ctx->pc = 0x23a504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x51078Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51078Cu, _value); } while (0);
    // 0x23a508: 0xac650790  sw          $a1, 0x790($v1)
    ctx->pc = 0x23a508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510790u, _value); } while (0);
    // 0x23a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A50Cu;
        // 0x23a510: 0xace40794  sw          $a0, 0x794($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A514u;
    // 0x23a514: 0x0  nop
    ctx->pc = 0x23a514u;
    // NOP
    // 0x23a518: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a51c: 0x0  nop
    ctx->pc = 0x23a51cu;
    // NOP
    // 0x23a520: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a524: 0x0  nop
    ctx->pc = 0x23a524u;
    // NOP
    // 0x23a528: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a52c: 0x0  nop
    ctx->pc = 0x23a52cu;
    // NOP
    // 0x23a530: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a534: 0x0  nop
    ctx->pc = 0x23a534u;
    // NOP
    // 0x23a538: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a53c: 0x0  nop
    ctx->pc = 0x23a53cu;
    // NOP
    ctx->pc = 0x23a540u;
}
