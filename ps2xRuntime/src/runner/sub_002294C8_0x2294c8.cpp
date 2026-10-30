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

// Function: sub_002294C8
// Address: 0x2294c8 - 0x229550
void sub_002294C8_0x2294c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002294C8_0x2294c8");
#endif

    switch (ctx->pc) {
        case 0x2294f8u: goto label_2294f8;
        case 0x229520u: goto label_229520;
        case 0x22952cu: goto label_22952c;
        default: break;
    }

    ctx->pc = 0x2294c8u;

    // 0x2294c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2294cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2294ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2294d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2294d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2294d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2294d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2294d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2294d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2294dc: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2294DCu;
    {
        const bool branch_taken_0x2294dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2294E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294DCu;
        // 0x2294e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294dc) {
            ctx->pc = 0x229538u;
            goto label_229538;
        }
    }
    ctx->pc = 0x2294E4u;
    // 0x2294e4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2294E4u;
    {
        const bool branch_taken_0x2294e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294E4u;
        // 0x2294e8: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294e4) {
            ctx->pc = 0x229538u;
            goto label_229538;
        }
    }
    ctx->pc = 0x2294ECu;
    // 0x2294ec: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x2294ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2294f0: 0x244219a0  addiu       $v0, $v0, 0x19A0
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2294f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2294f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2294f8:
    // 0x2294f8: 0xa0400043  sb          $zero, 0x43($v0)
    ctx->pc = 0x2294f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x2294fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2294fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x229500: 0x0  nop
    ctx->pc = 0x229500u;
    // NOP
    // 0x229504: 0x0  nop
    ctx->pc = 0x229504u;
    // NOP
    // 0x229508: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x229508u;
    {
        const bool branch_taken_0x229508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229508u;
        // 0x22950c: 0x24420044  addiu       $v0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229508) {
            ctx->pc = 0x2294F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294f8;
        }
    }
    ctx->pc = 0x229510u;
    // 0x229510: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x229510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x229514: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x229514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229518: 0x24512b70  addiu       $s1, $v0, 0x2B70
    ctx->pc = 0x229518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11120));
    // 0x22951c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x22951cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229520:
    // 0x229520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229524: 0xc08a330  jal         func_228CC0
    ctx->pc = 0x229524u;
    SET_GPR_U32(ctx, 31, 0x22952Cu);
    ctx->pc = 0x229528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229524u;
    // 0x229528: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228CC0u, 0x229524u, 0x22952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22952Cu;
label_22952c:
    // 0x22952c: 0x0  nop
    ctx->pc = 0x22952cu;
    // NOP
    // 0x229530: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x229530u;
    {
        const bool branch_taken_0x229530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x229534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229530u;
        // 0x229534: 0x26310a90  addiu       $s1, $s1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229530) {
            ctx->pc = 0x229520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229520;
        }
    }
    ctx->pc = 0x229538u;
label_229538:
    // 0x229538: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x229538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22953c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229540: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x229540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229548: 0x3e00008  jr          $ra
    ctx->pc = 0x229548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229548u;
        // 0x22954c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229550u;
}
