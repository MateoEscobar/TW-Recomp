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

// Function: sub_001C2940
// Address: 0x1c2940 - 0x1c2988
void sub_001C2940_0x1c2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2940_0x1c2940");
#endif

    switch (ctx->pc) {
        case 0x1c2960u: goto label_1c2960;
        case 0x1c2974u: goto label_1c2974;
        default: break;
    }

    ctx->pc = 0x1c2940u;

    // 0x1c2940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2944: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c294c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c294cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2958: 0xc07074c  jal         func_1C1D30
    ctx->pc = 0x1C2958u;
    SET_GPR_U32(ctx, 31, 0x1C2960u);
    ctx->pc = 0x1C295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2958u;
    // 0x1c295c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1D30u, 0x1C2958u, 0x1C2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2960u;
label_1c2960:
    // 0x1c2960: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1c2960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c2964: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2964u;
    {
        const bool branch_taken_0x1c2964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2964u;
        // 0x1c2968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2964) {
            ctx->pc = 0x1C2978u;
            goto label_1c2978;
        }
    }
    ctx->pc = 0x1C296Cu;
    // 0x1c296c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1C296Cu;
    SET_GPR_U32(ctx, 31, 0x1C2974u);
    ctx->pc = 0x1C2970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C296Cu;
    // 0x1c2970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1C296Cu, 0x1C2974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2974u;
label_1c2974:
    // 0x1c2974: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2978:
    // 0x1c2978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c297c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2980: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2980u;
        // 0x1c2984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2988u;
}
