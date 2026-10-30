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

// Function: sub_002925D0
// Address: 0x2925d0 - 0x292618
void sub_002925D0_0x2925d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002925D0_0x2925d0");
#endif

    switch (ctx->pc) {
        case 0x2925e4u: goto label_2925e4;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925fcu: goto label_2925fc;
        default: break;
    }

    ctx->pc = 0x2925d0u;

    // 0x2925d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2925d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2925d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2925d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2925d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2925d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2925dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2925DCu;
    SET_GPR_U32(ctx, 31, 0x2925E4u);
    ctx->pc = 0x2925E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925DCu;
    // 0x2925e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2925DCu, 0x2925E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925E4u;
label_2925e4:
    // 0x2925e4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2925E4u;
    SET_GPR_U32(ctx, 31, 0x2925ECu);
    ctx->pc = 0x2925E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925E4u;
    // 0x2925e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2925E4u, 0x2925ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925ECu;
label_2925ec:
    // 0x2925ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2925ECu;
    {
        const bool branch_taken_0x2925ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925ec) {
            ctx->pc = 0x2925F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925ECu;
            // 0x2925f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292608u;
            goto label_292608;
        }
    }
    ctx->pc = 0x2925F4u;
    // 0x2925f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2925F4u;
    SET_GPR_U32(ctx, 31, 0x2925FCu);
    ctx->pc = 0x2925F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925F4u;
    // 0x2925f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2925F4u, 0x2925FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925FCu;
label_2925fc:
    // 0x2925fc: 0x8042002c  lb          $v0, 0x2C($v0)
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x292600: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x292600u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x292604: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x292604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_292608:
    // 0x292608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29260c: 0x3e00008  jr          $ra
    ctx->pc = 0x29260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29260Cu;
        // 0x292610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292614u;
    // 0x292614: 0x0  nop
    ctx->pc = 0x292614u;
    // NOP
    ctx->pc = 0x292618u;
}
