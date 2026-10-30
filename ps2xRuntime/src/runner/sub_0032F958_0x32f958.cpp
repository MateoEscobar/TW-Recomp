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

// Function: sub_0032F958
// Address: 0x32f958 - 0x32f9a0
void sub_0032F958_0x32f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F958_0x32f958");
#endif

    switch (ctx->pc) {
        case 0x32f970u: goto label_32f970;
        default: break;
    }

    ctx->pc = 0x32f958u;

    // 0x32f958: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x32f958u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x32f95c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32f95cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f960: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x32f960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x32f964: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x32f964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x32f968: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32F968u;
    {
        const bool branch_taken_0x32f968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F968u;
        // 0x32f96c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f968) {
            ctx->pc = 0x32F998u;
            goto label_32f998;
        }
    }
    ctx->pc = 0x32F970u;
label_32f970:
    // 0x32f970: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x32f974: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x32f974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x32f978: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x32f978u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32f97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f980: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x32f980u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32f984: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32f984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32f988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32f98c: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x32f98cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x32f990: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32F990u;
    {
        const bool branch_taken_0x32f990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F990u;
        // 0x32f994: 0xa22826  xor         $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f990) {
            ctx->pc = 0x32F970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f970;
        }
    }
    ctx->pc = 0x32F998u;
label_32f998:
    // 0x32f998: 0x3e00008  jr          $ra
    ctx->pc = 0x32F998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F998u;
        // 0x32f99c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F9A0u;
}
