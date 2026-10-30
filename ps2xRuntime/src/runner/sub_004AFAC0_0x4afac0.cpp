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

// Function: sub_004AFAC0
// Address: 0x4afac0 - 0x4afb18
void sub_004AFAC0_0x4afac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFAC0_0x4afac0");
#endif

    switch (ctx->pc) {
        case 0x4afaecu: goto label_4afaec;
        case 0x4afb00u: goto label_4afb00;
        default: break;
    }

    ctx->pc = 0x4afac0u;

    // 0x4afac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afac4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4afac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4afac8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4afac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4afacc: 0x244205d8  addiu       $v0, $v0, 0x5D8
    ctx->pc = 0x4afaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1496));
    // 0x4afad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4afad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4afadc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4afadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afae0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x4afae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x4afae4: 0xc12c4da  jal         func_4B1368
    ctx->pc = 0x4AFAE4u;
    SET_GPR_U32(ctx, 31, 0x4AFAECu);
    ctx->pc = 0x4AFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFAE4u;
    // 0x4afae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1368u, 0x4AFAE4u, 0x4AFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFAECu;
label_4afaec:
    // 0x4afaec: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4afaecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4afaf0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFAF0u;
    {
        const bool branch_taken_0x4afaf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFAF0u;
        // 0x4afaf4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afaf0) {
            ctx->pc = 0x4AFB04u;
            goto label_4afb04;
        }
    }
    ctx->pc = 0x4AFAF8u;
    // 0x4afaf8: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AFAF8u;
    SET_GPR_U32(ctx, 31, 0x4AFB00u);
    ctx->pc = 0x4AFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFAF8u;
    // 0x4afafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AFAF8u, 0x4AFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB00u;
label_4afb00:
    // 0x4afb00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afb04:
    // 0x4afb04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4afb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4afb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFB0Cu;
        // 0x4afb10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB14u;
    // 0x4afb14: 0x0  nop
    ctx->pc = 0x4afb14u;
    // NOP
    ctx->pc = 0x4afb18u;
}
