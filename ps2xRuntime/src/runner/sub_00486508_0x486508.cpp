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

// Function: sub_00486508
// Address: 0x486508 - 0x486558
void sub_00486508_0x486508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486508_0x486508");
#endif

    switch (ctx->pc) {
        case 0x486540u: goto label_486540;
        default: break;
    }

    ctx->pc = 0x486508u;

    // 0x486508: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x486508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48650c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48650cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x486510: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x486510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486514: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x486514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486518: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x486518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48651c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x48651cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486520: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x486520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x486524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x486528: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x486528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    // 0x48652c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48652cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486530: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x486530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486534: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x486534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486538: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x486538u;
    SET_GPR_U32(ctx, 31, 0x486540u);
    ctx->pc = 0x48653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486538u;
    // 0x48653c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x486538u, 0x486540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486540u;
label_486540:
    // 0x486540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x486544: 0x3e00008  jr          $ra
    ctx->pc = 0x486544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486544u;
        // 0x486548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48654Cu;
    // 0x48654c: 0x0  nop
    ctx->pc = 0x48654cu;
    // NOP
    // 0x486550: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x486550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x486554: 0x0  nop
    ctx->pc = 0x486554u;
    // NOP
    ctx->pc = 0x486558u;
}
