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

// Function: sub_00109168
// Address: 0x109168 - 0x1091d8
void sub_00109168_0x109168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109168_0x109168");
#endif

    switch (ctx->pc) {
        case 0x109194u: goto label_109194;
        case 0x1091a8u: goto label_1091a8;
        default: break;
    }

    ctx->pc = 0x109168u;

    // 0x109168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10916c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x109170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x109174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10917c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10917cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109180: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x109180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x109184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109184u;
    {
        const bool branch_taken_0x109184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109184u;
        // 0x109188: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109184) {
            ctx->pc = 0x109194u;
            goto label_109194;
        }
    }
    ctx->pc = 0x10918Cu;
    // 0x10918c: 0xc041120  jal         func_104480
    ctx->pc = 0x10918Cu;
    SET_GPR_U32(ctx, 31, 0x109194u);
    ctx->pc = 0x109190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10918Cu;
    // 0x109190: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10918Cu, 0x109194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109194u;
label_109194:
    // 0x109194: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x109194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x109198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109198u;
    {
        const bool branch_taken_0x109198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109198u;
        // 0x10919c: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109198) {
            ctx->pc = 0x1091ACu;
            goto label_1091ac;
        }
    }
    ctx->pc = 0x1091A0u;
    // 0x1091a0: 0xc041124  jal         func_104490
    ctx->pc = 0x1091A0u;
    SET_GPR_U32(ctx, 31, 0x1091A8u);
    ctx->pc = 0x1091A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091A0u;
    // 0x1091a4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x1091A0u, 0x1091A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091A8u;
label_1091a8:
    // 0x1091a8: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1091a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_1091ac:
    // 0x1091ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1091ACu;
    {
        const bool branch_taken_0x1091ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091ACu;
        // 0x1091b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091ac) {
            ctx->pc = 0x1091C4u;
            goto label_1091c4;
        }
    }
    ctx->pc = 0x1091B4u;
    // 0x1091b4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1091b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1091b8: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1091b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1091bc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1091bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1091c0: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1091c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1091c4:
    // 0x1091c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1091c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1091c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1091c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1091cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1091CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091CCu;
        // 0x1091d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1091CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1091D4u;
    // 0x1091d4: 0x0  nop
    ctx->pc = 0x1091d4u;
    // NOP
    ctx->pc = 0x1091d8u;
}
