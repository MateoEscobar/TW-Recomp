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

// Function: sub_0044C9C8
// Address: 0x44c9c8 - 0x44ca18
void sub_0044C9C8_0x44c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C9C8_0x44c9c8");
#endif

    switch (ctx->pc) {
        case 0x44c9dcu: goto label_44c9dc;
        default: break;
    }

    ctx->pc = 0x44c9c8u;

    // 0x44c9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44c9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c9d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44c9d4: 0xc11320a  jal         func_44C828
    ctx->pc = 0x44C9D4u;
    SET_GPR_U32(ctx, 31, 0x44C9DCu);
    ctx->pc = 0x44C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C9D4u;
    // 0x44c9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C828u, 0x44C9D4u, 0x44C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C9DCu;
label_44c9dc:
    // 0x44c9dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44c9e0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x44c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x44c9e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x44c9e8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x44c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x44c9ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x44c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x44c9f0: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x44c9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x44c9f4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44C9F4u;
    {
        const bool branch_taken_0x44c9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C9F4u;
        // 0x44c9f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c9f4) {
            ctx->pc = 0x44CA0Cu;
            goto label_44ca0c;
        }
    }
    ctx->pc = 0x44C9FCu;
    // 0x44c9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ca00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ca04: 0x8113218  j           func_44C860
    ctx->pc = 0x44CA04u;
    ctx->pc = 0x44CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA04u;
    // 0x44ca08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    sub_0044C860_0x44c860(rdram, ctx, runtime); return;
    ctx->pc = 0x44CA0Cu;
label_44ca0c:
    // 0x44ca0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ca0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ca10: 0x3e00008  jr          $ra
    ctx->pc = 0x44CA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CA10u;
        // 0x44ca14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CA18u;
}
