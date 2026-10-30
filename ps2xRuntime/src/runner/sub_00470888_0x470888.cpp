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

// Function: sub_00470888
// Address: 0x470888 - 0x4708d0
void sub_00470888_0x470888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470888_0x470888");
#endif

    switch (ctx->pc) {
        case 0x4708c0u: goto label_4708c0;
        default: break;
    }

    ctx->pc = 0x470888u;

    // 0x470888: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x470888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47088c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47088cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x470890: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x470890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470894: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x470894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470898: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x470898u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47089c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x47089cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4708a0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4708a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4708a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4708a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4708a8: 0x2484e750  addiu       $a0, $a0, -0x18B0
    ctx->pc = 0x4708a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
    // 0x4708ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4708acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4708b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4708b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4708b4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4708b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4708b8: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x4708B8u;
    SET_GPR_U32(ctx, 31, 0x4708C0u);
    ctx->pc = 0x4708BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4708B8u;
    // 0x4708bc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x4708B8u, 0x4708C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4708C0u;
label_4708c0:
    // 0x4708c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4708c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4708c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4708C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4708C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4708C4u;
        // 0x4708c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4708C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4708CCu;
    // 0x4708cc: 0x0  nop
    ctx->pc = 0x4708ccu;
    // NOP
    ctx->pc = 0x4708d0u;
}
