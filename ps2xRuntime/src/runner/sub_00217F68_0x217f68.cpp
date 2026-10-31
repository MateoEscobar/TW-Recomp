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

// Function: sub_00217F68
// Address: 0x217f68 - 0x218008
void sub_00217F68_0x217f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F68_0x217f68");
#endif

    switch (ctx->pc) {
        case 0x217f98u: goto label_217f98;
        case 0x217fb0u: goto label_217fb0;
        case 0x217fd0u: goto label_217fd0;
        case 0x217fe0u: goto label_217fe0;
        case 0x217fe8u: goto label_217fe8;
        default: break;
    }

    ctx->pc = 0x217f68u;

    // 0x217f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217f6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x217f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x217f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217f74: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x217f78: 0xac6204f4  sw          $v0, 0x4F4($v1)
    ctx->pc = 0x217f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5104F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5104F4u, _value); } while (0);
    // 0x217f7c: 0x24845390  addiu       $a0, $a0, 0x5390
    ctx->pc = 0x217f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
    // 0x217f80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217f90: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x217F90u;
    SET_GPR_U32(ctx, 31, 0x217F98u);
    ctx->pc = 0x217F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F90u;
    // 0x217f94: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x217F90u, 0x217F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F98u;
label_217f98:
    // 0x217f98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x217f9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x217f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x217fa0: 0x2442ff50  addiu       $v0, $v0, -0xB0
    ctx->pc = 0x217fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x217fa4: 0xac600170  sw          $zero, 0x170($v1)
    ctx->pc = 0x217fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510170u, _value); } while (0);
    // 0x217fa8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x217fac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x217facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217fb0:
    // 0x217fb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x217fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x217fb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x217fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x217fb8: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x217fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x217fbc: 0x0  nop
    ctx->pc = 0x217fbcu;
    // NOP
    // 0x217fc0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x217FC0u;
    {
        const bool branch_taken_0x217fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FC0u;
        // 0x217fc4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fc0) {
            ctx->pc = 0x217FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217fb0;
        }
    }
    ctx->pc = 0x217FC8u;
    // 0x217fc8: 0xc094c1a  jal         func_253068
    ctx->pc = 0x217FC8u;
    SET_GPR_U32(ctx, 31, 0x217FD0u);
    ctx->pc = 0x253068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253068u, 0x217FC8u, 0x217FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FD0u;
label_217fd0:
    // 0x217fd0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x217fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x217fd4: 0x24500f50  addiu       $s0, $v0, 0xF50
    ctx->pc = 0x217fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x217fd8: 0x26110a50  addiu       $s1, $s0, 0xA50
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x217fdc: 0x0  nop
    ctx->pc = 0x217fdcu;
    // NOP
label_217fe0:
    // 0x217fe0: 0xc0517e8  jal         func_145FA0
    ctx->pc = 0x217FE0u;
    SET_GPR_U32(ctx, 31, 0x217FE8u);
    ctx->pc = 0x217FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FE0u;
    // 0x217fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145FA0u, 0x217FE0u, 0x217FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FE8u;
label_217fe8:
    // 0x217fe8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x217fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x217fec: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x217fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x217ff0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x217FF0u;
    {
        const bool branch_taken_0x217ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF0u;
        // 0x217ff4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ff0) {
            ctx->pc = 0x217FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217fe0;
        }
    }
    ctx->pc = 0x217FF8u;
    // 0x217ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218000: 0x3e00008  jr          $ra
    ctx->pc = 0x218000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218000u;
        // 0x218004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218008u;
}
