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

// Function: sub_00106098
// Address: 0x106098 - 0x106108
void sub_00106098_0x106098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106098_0x106098");
#endif

    switch (ctx->pc) {
        case 0x1060c4u: goto label_1060c4;
        case 0x1060d8u: goto label_1060d8;
        default: break;
    }

    ctx->pc = 0x106098u;

    // 0x106098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10609c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1060a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1060a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1060a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1060a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1060a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1060ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1060acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1060b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1060b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1060B4u;
    {
        const bool branch_taken_0x1060b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060B4u;
        // 0x1060b8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060b4) {
            ctx->pc = 0x1060C4u;
            goto label_1060c4;
        }
    }
    ctx->pc = 0x1060BCu;
    // 0x1060bc: 0xc041120  jal         func_104480
    ctx->pc = 0x1060BCu;
    SET_GPR_U32(ctx, 31, 0x1060C4u);
    ctx->pc = 0x1060C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060BCu;
    // 0x1060c0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1060BCu, 0x1060C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060C4u;
label_1060c4:
    // 0x1060c4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1060c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1060c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1060C8u;
    {
        const bool branch_taken_0x1060c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060C8u;
        // 0x1060cc: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060c8) {
            ctx->pc = 0x1060DCu;
            goto label_1060dc;
        }
    }
    ctx->pc = 0x1060D0u;
    // 0x1060d0: 0xc041124  jal         func_104490
    ctx->pc = 0x1060D0u;
    SET_GPR_U32(ctx, 31, 0x1060D8u);
    ctx->pc = 0x1060D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060D0u;
    // 0x1060d4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x1060D0u, 0x1060D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060D8u;
label_1060d8:
    // 0x1060d8: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1060d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_1060dc:
    // 0x1060dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1060DCu;
    {
        const bool branch_taken_0x1060dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060DCu;
        // 0x1060e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060dc) {
            ctx->pc = 0x1060F4u;
            goto label_1060f4;
        }
    }
    ctx->pc = 0x1060E4u;
    // 0x1060e4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1060e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1060e8: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1060e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1060ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1060ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1060f0: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1060f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1060f4:
    // 0x1060f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1060f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1060f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1060f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1060fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1060FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060FCu;
        // 0x106100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106104u;
    // 0x106104: 0x0  nop
    ctx->pc = 0x106104u;
    // NOP
    ctx->pc = 0x106108u;
}
