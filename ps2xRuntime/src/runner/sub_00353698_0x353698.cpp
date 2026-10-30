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

// Function: sub_00353698
// Address: 0x353698 - 0x353730
void sub_00353698_0x353698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353698_0x353698");
#endif

    switch (ctx->pc) {
        case 0x3536d8u: goto label_3536d8;
        case 0x3536ecu: goto label_3536ec;
        default: break;
    }

    ctx->pc = 0x353698u;

    // 0x353698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x353698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35369c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x35369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3536a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3536a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3536a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3536a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3536a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3536a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3536acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3536b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3536b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536b4: 0x8c432aec  lw          $v1, 0x2AEC($v0)
    ctx->pc = 0x3536b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512AECu));
    // 0x3536b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3536b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3536bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3536c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3536c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3536c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3536C4u;
    {
        const bool branch_taken_0x3536c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536C4u;
        // 0x3536c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536c4) {
            ctx->pc = 0x353708u;
            goto label_353708;
        }
    }
    ctx->pc = 0x3536CCu;
    // 0x3536cc: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3536ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    // 0x3536d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3536d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536d4: 0x0  nop
    ctx->pc = 0x3536d4u;
    // NOP
label_3536d8:
    // 0x3536d8: 0x8e64ba10  lw          $a0, -0x45F0($s3)
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949392)));
    // 0x3536dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3536dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536e0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3536e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3536e4: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x3536E4u;
    SET_GPR_U32(ctx, 31, 0x3536ECu);
    ctx->pc = 0x3536E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536E4u;
    // 0x3536e8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x3536E4u, 0x3536ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536ECu;
label_3536ec:
    // 0x3536ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3536ECu;
    {
        const bool branch_taken_0x3536ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3536F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536ECu;
        // 0x3536f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536ec) {
            ctx->pc = 0x35370Cu;
            goto label_35370c;
        }
    }
    ctx->pc = 0x3536F4u;
    // 0x3536f4: 0x8e822aec  lw          $v0, 0x2AEC($s4)
    ctx->pc = 0x3536f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10988)));
    // 0x3536f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3536fc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3536fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x353700: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x353700u;
    {
        const bool branch_taken_0x353700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353700u;
        // 0x353704: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353700) {
            ctx->pc = 0x3536D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3536d8;
        }
    }
    ctx->pc = 0x353708u;
label_353708:
    // 0x353708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35370c:
    // 0x35370c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x35370cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x353710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x353714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353718: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x353718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35371c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x35371cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353724: 0x3e00008  jr          $ra
    ctx->pc = 0x353724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353724u;
        // 0x353728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35372Cu;
    // 0x35372c: 0x0  nop
    ctx->pc = 0x35372cu;
    // NOP
    ctx->pc = 0x353730u;
}
