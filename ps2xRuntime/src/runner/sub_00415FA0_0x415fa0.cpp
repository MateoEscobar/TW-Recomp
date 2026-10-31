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

// Function: sub_00415FA0
// Address: 0x415fa0 - 0x416010
void sub_00415FA0_0x415fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415FA0_0x415fa0");
#endif

    switch (ctx->pc) {
        case 0x415fccu: goto label_415fcc;
        case 0x415fd4u: goto label_415fd4;
        case 0x415ffcu: goto label_415ffc;
        default: break;
    }

    ctx->pc = 0x415fa0u;

    // 0x415fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x415fa4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x415fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x415fa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x415fac: 0x24425e68  addiu       $v0, $v0, 0x5E68
    ctx->pc = 0x415facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24168));
    // 0x415fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x415fb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x415fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415fc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x415fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x415fc4: 0xc0e400e  jal         func_390038
    ctx->pc = 0x415FC4u;
    SET_GPR_U32(ctx, 31, 0x415FCCu);
    ctx->pc = 0x415FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FC4u;
    // 0x415fc8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x415FC4u, 0x415FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FCCu;
label_415fcc:
    // 0x415fcc: 0xc0e1294  jal         func_384A50
    ctx->pc = 0x415FCCu;
    SET_GPR_U32(ctx, 31, 0x415FD4u);
    ctx->pc = 0x415FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FCCu;
    // 0x415fd0: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x415FCCu, 0x415FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FD4u;
label_415fd4:
    // 0x415fd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x415fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x415fd8: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x415fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x415fdc: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x415fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x415fe0: 0x24634298  addiu       $v1, $v1, 0x4298
    ctx->pc = 0x415fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17048));
    // 0x415fe4: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x415fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x415fe8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x415fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x415fec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x415FECu;
    {
        const bool branch_taken_0x415fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415FECu;
        // 0x415ff0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415fec) {
            ctx->pc = 0x415FFCu;
            goto label_415ffc;
        }
    }
    ctx->pc = 0x415FF4u;
    // 0x415ff4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x415FF4u;
    SET_GPR_U32(ctx, 31, 0x415FFCu);
    ctx->pc = 0x415FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FF4u;
    // 0x415ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x415FF4u, 0x415FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FFCu;
label_415ffc:
    // 0x415ffc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416008: 0x3e00008  jr          $ra
    ctx->pc = 0x416008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416008u;
        // 0x41600c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416010u;
}
