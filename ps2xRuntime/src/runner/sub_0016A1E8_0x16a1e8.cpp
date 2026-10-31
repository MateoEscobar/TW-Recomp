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

// Function: sub_0016A1E8
// Address: 0x16a1e8 - 0x16a220
void sub_0016A1E8_0x16a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A1E8_0x16a1e8");
#endif

    switch (ctx->pc) {
        case 0x16a20cu: goto label_16a20c;
        default: break;
    }

    ctx->pc = 0x16a1e8u;

    // 0x16a1e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a1ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a1f0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a1f4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x16a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16a1f8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x16a1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16a1fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A1FCu;
    {
        const bool branch_taken_0x16a1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1FCu;
        // 0x16a200: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1fc) {
            ctx->pc = 0x16A20Cu;
            goto label_16a20c;
        }
    }
    ctx->pc = 0x16A204u;
    // 0x16a204: 0xc05b41a  jal         func_16D068
    ctx->pc = 0x16A204u;
    SET_GPR_U32(ctx, 31, 0x16A20Cu);
    ctx->pc = 0x16D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D068u, 0x16A204u, 0x16A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A20Cu;
label_16a20c:
    // 0x16a20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a210: 0x3e00008  jr          $ra
    ctx->pc = 0x16A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A210u;
        // 0x16a214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A218u;
    // 0x16a218: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16a21c: 0x0  nop
    ctx->pc = 0x16a21cu;
    // NOP
    ctx->pc = 0x16a220u;
}
