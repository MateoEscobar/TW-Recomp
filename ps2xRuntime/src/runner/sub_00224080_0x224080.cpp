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

// Function: sub_00224080
// Address: 0x224080 - 0x2240e8
void sub_00224080_0x224080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224080_0x224080");
#endif

    switch (ctx->pc) {
        case 0x224090u: goto label_224090;
        case 0x224098u: goto label_224098;
        case 0x2240b4u: goto label_2240b4;
        default: break;
    }

    ctx->pc = 0x224080u;

    // 0x224080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224088: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x224088u;
    SET_GPR_U32(ctx, 31, 0x224090u);
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x224088u, 0x224090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224090u;
label_224090:
    // 0x224090: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x224090u;
    SET_GPR_U32(ctx, 31, 0x224098u);
    ctx->pc = 0x224094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224090u;
    // 0x224094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x224090u, 0x224098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224098u;
label_224098:
    // 0x224098: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22409c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22409Cu;
    {
        const bool branch_taken_0x22409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22409Cu;
        // 0x2240a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22409c) {
            ctx->pc = 0x2240D8u;
            goto label_2240d8;
        }
    }
    ctx->pc = 0x2240A4u;
    // 0x2240a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2240a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2240a8: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2240a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x2240ac: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2240ACu;
    SET_GPR_U32(ctx, 31, 0x2240B4u);
    ctx->pc = 0x2240B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240ACu;
    // 0x2240b0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2240ACu, 0x2240B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240B4u;
label_2240b4:
    // 0x2240b4: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2240b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    // 0x2240b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2240b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2240bc: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2240bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2240c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2240C0u;
    {
        const bool branch_taken_0x2240c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240C0u;
        // 0x2240c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240c0) {
            ctx->pc = 0x2240D0u;
            goto label_2240d0;
        }
    }
    ctx->pc = 0x2240C8u;
    // 0x2240c8: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x2240c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x2240cc: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2240ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_2240d0:
    // 0x2240d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2240d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240d4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x2240d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_2240d8:
    // 0x2240d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2240d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2240dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2240DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2240E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240DCu;
        // 0x2240e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2240DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2240E4u;
    // 0x2240e4: 0x0  nop
    ctx->pc = 0x2240e4u;
    // NOP
    ctx->pc = 0x2240e8u;
}
