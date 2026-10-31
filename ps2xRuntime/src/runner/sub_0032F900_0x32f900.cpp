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

// Function: sub_0032F900
// Address: 0x32f900 - 0x32f958
void sub_0032F900_0x32f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F900_0x32f900");
#endif

    switch (ctx->pc) {
        case 0x32f91cu: goto label_32f91c;
        case 0x32f92cu: goto label_32f92c;
        default: break;
    }

    ctx->pc = 0x32f900u;

    // 0x32f900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32f90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f914: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F914u;
    SET_GPR_U32(ctx, 31, 0x32F91Cu);
    ctx->pc = 0x32F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F914u;
    // 0x32f918: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F914u, 0x32F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F91Cu;
label_32f91c:
    // 0x32f91c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x32f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x32f920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f924: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F924u;
    SET_GPR_U32(ctx, 31, 0x32F92Cu);
    ctx->pc = 0x32F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F924u;
    // 0x32f928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F924u, 0x32F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F92Cu;
label_32f92c:
    // 0x32f92c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x32f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32f930: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x32f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x32f934: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32f93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32f940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32f944: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f948: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x32f948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x32f94c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32f94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f950: 0x3e00008  jr          $ra
    ctx->pc = 0x32F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F950u;
        // 0x32f954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F958u;
}
