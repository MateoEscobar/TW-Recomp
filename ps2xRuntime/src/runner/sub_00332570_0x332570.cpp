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

// Function: sub_00332570
// Address: 0x332570 - 0x3325f8
void sub_00332570_0x332570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332570_0x332570");
#endif

    switch (ctx->pc) {
        case 0x3325a8u: goto label_3325a8;
        case 0x3325c8u: goto label_3325c8;
        case 0x3325d0u: goto label_3325d0;
        default: break;
    }

    ctx->pc = 0x332570u;

    // 0x332570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332574: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x332574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x332578: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33257c: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x33257cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x332580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x332584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33258c: 0x25296518  addiu       $t1, $t1, 0x6518
    ctx->pc = 0x33258cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25880));
    // 0x332590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332594: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x332594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x332598: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x332598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33259c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x33259cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3325a0: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x3325A0u;
    SET_GPR_U32(ctx, 31, 0x3325A8u);
    ctx->pc = 0x3325A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325A0u;
    // 0x3325a4: 0x354afffd  ori         $t2, $t2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x3325A0u, 0x3325A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325A8u;
label_3325a8:
    // 0x3325a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3325a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325ac: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3325acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3325b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3325b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3325b4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3325b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x3325b8: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x3325b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3325bc: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x3325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x3325c0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3325c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3325c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3325c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3325c8:
    // 0x3325c8: 0xc0cc94c  jal         func_332530
    ctx->pc = 0x3325C8u;
    SET_GPR_U32(ctx, 31, 0x3325D0u);
    ctx->pc = 0x3325CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325C8u;
    // 0x3325cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332530u, 0x3325C8u, 0x3325D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325D0u;
label_3325d0:
    // 0x3325d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3325d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3325d4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3325d8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3325d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3325dc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3325DCu;
    {
        const bool branch_taken_0x3325dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3325E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325DCu;
        // 0x3325e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3325dc) {
            ctx->pc = 0x3325C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3325c8;
        }
    }
    ctx->pc = 0x3325E4u;
    // 0x3325e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3325e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3325e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3325e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3325ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3325ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3325f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3325F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3325F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325F0u;
        // 0x3325f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3325F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3325F8u;
}
