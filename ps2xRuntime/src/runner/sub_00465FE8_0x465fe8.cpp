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

// Function: sub_00465FE8
// Address: 0x465fe8 - 0x465ffc
void sub_00465FE8_0x465fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465FE8_0x465fe8");
#endif

    ctx->pc = 0x465fe8u;

    // 0x465fe8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x465fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x465fec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x465fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x465ff0: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x465ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x465ff4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x465FF4u;
    {
        const bool branch_taken_0x465ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465FF4u;
        // 0x465ff8: 0xfca00038  sd          $zero, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ff4) {
            ctx->pc = 0x465FDCu;
            return;
        }
    }
    ctx->pc = 0x465FFCu;
}
