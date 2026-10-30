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

// Function: sub_004ED948
// Address: 0x4ed948 - 0x4ed988
void sub_004ED948_0x4ed948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED948_0x4ed948");
#endif

    switch (ctx->pc) {
        case 0x4ed964u: goto label_4ed964;
        case 0x4ed974u: goto label_4ed974;
        default: break;
    }

    ctx->pc = 0x4ed948u;

    // 0x4ed948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed94c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed954: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed95c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED95Cu;
    SET_GPR_U32(ctx, 31, 0x4ED964u);
    ctx->pc = 0x4ED960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED95Cu;
    // 0x4ed960: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED95Cu, 0x4ED964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED964u;
label_4ed964:
    // 0x4ed964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed96c: 0xc10842a  jal         func_4210A8
    ctx->pc = 0x4ED96Cu;
    SET_GPR_U32(ctx, 31, 0x4ED974u);
    ctx->pc = 0x4ED970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED96Cu;
    // 0x4ed970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4210A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4210A8u, 0x4ED96Cu, 0x4ED974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED974u;
label_4ed974:
    // 0x4ed974: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed980: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED980u;
        // 0x4ed984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED988u;
}
