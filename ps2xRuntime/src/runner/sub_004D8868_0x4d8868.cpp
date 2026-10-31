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

// Function: sub_004D8868
// Address: 0x4d8868 - 0x4d88d8
void sub_004D8868_0x4d8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8868_0x4d8868");
#endif

    switch (ctx->pc) {
        case 0x4d889cu: goto label_4d889c;
        case 0x4d88b4u: goto label_4d88b4;
        case 0x4d88bcu: goto label_4d88bc;
        default: break;
    }

    ctx->pc = 0x4d8868u;

    // 0x4d8868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d8868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d886c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4d886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4d8870: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4d8870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4d8874: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d8878: 0x82223ec8  lb          $v0, 0x3EC8($s1)
    ctx->pc = 0x4d8878u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x533EC8u));
    // 0x4d887c: 0x26323ec8  addiu       $s2, $s1, 0x3EC8
    ctx->pc = 0x4d887cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16072));
    // 0x4d8880: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d8880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d8884: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D8884u;
    {
        const bool branch_taken_0x4d8884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8884u;
        // 0x4d8888: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8884) {
            ctx->pc = 0x4D88BCu;
            goto label_4d88bc;
        }
    }
    ctx->pc = 0x4D888Cu;
    // 0x4d888c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4d888cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4d8890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d8890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8894: 0xc110644  jal         func_441910
    ctx->pc = 0x4D8894u;
    SET_GPR_U32(ctx, 31, 0x4D889Cu);
    ctx->pc = 0x4D8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8894u;
    // 0x4d8898: 0x24846200  addiu       $a0, $a0, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x4D8894u, 0x4D889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D889Cu;
label_4d889c:
    // 0x4d889c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d889cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d88a0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D88A0u;
    {
        const bool branch_taken_0x4d88a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4D88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88A0u;
        // 0x4d88a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d88a0) {
            ctx->pc = 0x4D88BCu;
            goto label_4d88bc;
        }
    }
    ctx->pc = 0x4D88A8u;
    // 0x4d88a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d88a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d88ac: 0xc1107d6  jal         func_441F58
    ctx->pc = 0x4D88ACu;
    SET_GPR_U32(ctx, 31, 0x4D88B4u);
    ctx->pc = 0x4D88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D88ACu;
    // 0x4d88b0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441F58u, 0x4D88ACu, 0x4D88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D88B4u;
label_4d88b4:
    // 0x4d88b4: 0xc1106e8  jal         func_441BA0
    ctx->pc = 0x4D88B4u;
    SET_GPR_U32(ctx, 31, 0x4D88BCu);
    ctx->pc = 0x4D88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D88B4u;
    // 0x4d88b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441BA0u, 0x4D88B4u, 0x4D88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D88BCu;
label_4d88bc:
    // 0x4d88bc: 0x26223ec8  addiu       $v0, $s1, 0x3EC8
    ctx->pc = 0x4d88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16072));
    // 0x4d88c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d88c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d88c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d88c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d88c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4d88c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d88cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d88ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d88d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D88D0u;
        // 0x4d88d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D88D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D88D8u;
}
