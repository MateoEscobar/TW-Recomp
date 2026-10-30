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

// Function: sub_003247C8
// Address: 0x3247c8 - 0x324828
void sub_003247C8_0x3247c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003247C8_0x3247c8");
#endif

    switch (ctx->pc) {
        case 0x3247ecu: goto label_3247ec;
        case 0x324800u: goto label_324800;
        default: break;
    }

    ctx->pc = 0x3247c8u;

    // 0x3247c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3247c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3247cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3247ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3247d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3247d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3247d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3247d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3247d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3247dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3247dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3247e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3247e4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3247E4u;
    SET_GPR_U32(ctx, 31, 0x3247ECu);
    ctx->pc = 0x3247E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247E4u;
    // 0x3247e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3247E4u, 0x3247ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247ECu;
label_3247ec:
    // 0x3247ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3247ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3247f0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3247F0u;
    {
        const bool branch_taken_0x3247f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3247F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247F0u;
        // 0x3247f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247f0) {
            ctx->pc = 0x324808u;
            goto label_324808;
        }
    }
    ctx->pc = 0x3247F8u;
    // 0x3247f8: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3247F8u;
    SET_GPR_U32(ctx, 31, 0x324800u);
    ctx->pc = 0x3247FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247F8u;
    // 0x3247fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3247F8u, 0x324800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324800u;
label_324800:
    // 0x324800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324800u;
    {
        const bool branch_taken_0x324800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324800u;
        // 0x324804: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324800) {
            ctx->pc = 0x324810u;
            goto label_324810;
        }
    }
    ctx->pc = 0x324808u;
label_324808:
    // 0x324808: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x324808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32480c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32480cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_324810:
    // 0x324810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x324810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324814: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x324814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32481c: 0x3e00008  jr          $ra
    ctx->pc = 0x32481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32481Cu;
        // 0x324820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324824u;
    // 0x324824: 0x0  nop
    ctx->pc = 0x324824u;
    // NOP
    ctx->pc = 0x324828u;
}
