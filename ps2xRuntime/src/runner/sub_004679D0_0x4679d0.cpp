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

// Function: sub_004679D0
// Address: 0x4679d0 - 0x467a30
void sub_004679D0_0x4679d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004679D0_0x4679d0");
#endif

    switch (ctx->pc) {
        case 0x4679d0u: goto label_4679d0;
        case 0x4679d4u: goto label_4679d4;
        case 0x4679d8u: goto label_4679d8;
        case 0x4679dcu: goto label_4679dc;
        case 0x4679e0u: goto label_4679e0;
        case 0x4679e4u: goto label_4679e4;
        case 0x4679e8u: goto label_4679e8;
        case 0x4679ecu: goto label_4679ec;
        case 0x4679f0u: goto label_4679f0;
        case 0x4679f4u: goto label_4679f4;
        case 0x4679f8u: goto label_4679f8;
        case 0x4679fcu: goto label_4679fc;
        case 0x467a00u: goto label_467a00;
        case 0x467a04u: goto label_467a04;
        case 0x467a08u: goto label_467a08;
        case 0x467a0cu: goto label_467a0c;
        case 0x467a10u: goto label_467a10;
        case 0x467a14u: goto label_467a14;
        case 0x467a18u: goto label_467a18;
        case 0x467a1cu: goto label_467a1c;
        case 0x467a20u: goto label_467a20;
        case 0x467a24u: goto label_467a24;
        case 0x467a28u: goto label_467a28;
        case 0x467a2cu: goto label_467a2c;
        default: break;
    }

    ctx->pc = 0x4679d0u;

label_4679d0:
    // 0x4679d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4679d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4679d4:
    // 0x4679d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4679d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4679d8:
    // 0x4679d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4679d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4679dc:
    // 0x4679dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4679dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4679e0:
    // 0x4679e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4679e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4679e4:
    // 0x4679e4: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x4679e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_4679e8:
    // 0x4679e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4679e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4679ec:
    // 0x4679ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4679f0:
    if (ctx->pc == 0x4679F0u) {
        ctx->pc = 0x4679F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4679ECu;
        // 0x4679f0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4679F4u;
        goto label_4679f4;
    }
    ctx->pc = 0x4679ECu;
    {
        const bool branch_taken_0x4679ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4679F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4679ECu;
        // 0x4679f0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4679ec) {
            ctx->pc = 0x467A00u;
            goto label_467a00;
        }
    }
    ctx->pc = 0x4679F4u;
label_4679f4:
    // 0x4679f4: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4679f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4679f8:
    // 0x4679f8: 0x40f809  jalr        $v0
label_4679fc:
    if (ctx->pc == 0x4679FCu) {
        ctx->pc = 0x467A00u;
        goto label_467a00;
    }
    ctx->pc = 0x4679F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x467A00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4679F8u, 0x467A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x467A00u;
label_467a00:
    // 0x467a00: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x467a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_467a04:
    // 0x467a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467a08:
    // 0x467a08: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x467a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_467a0c:
    // 0x467a0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x467a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_467a10:
    // 0x467a10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x467a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_467a14:
    // 0x467a14: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x467a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_467a18:
    // 0x467a18: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x467a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_467a1c:
    // 0x467a1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x467a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467a20:
    // 0x467a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467a24:
    // 0x467a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_467a28:
    // 0x467a28: 0x3e00008  jr          $ra
label_467a2c:
    if (ctx->pc == 0x467A2Cu) {
        ctx->pc = 0x467A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A28u;
        // 0x467a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467A30u;
        goto label_fallthrough_0x467a28;
    }
    ctx->pc = 0x467A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A28u;
        // 0x467a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x467a28:
    ctx->pc = 0x467A30u;
}
