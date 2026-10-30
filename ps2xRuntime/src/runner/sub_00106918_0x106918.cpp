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

// Function: sub_00106918
// Address: 0x106918 - 0x106988
void sub_00106918_0x106918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106918_0x106918");
#endif

    switch (ctx->pc) {
        case 0x106944u: goto label_106944;
        case 0x106958u: goto label_106958;
        default: break;
    }

    ctx->pc = 0x106918u;

    // 0x106918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10691c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x106920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106924: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10692c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10692cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106930: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x106930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x106934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106934u;
    {
        const bool branch_taken_0x106934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106934u;
        // 0x106938: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106934) {
            ctx->pc = 0x106944u;
            goto label_106944;
        }
    }
    ctx->pc = 0x10693Cu;
    // 0x10693c: 0xc041120  jal         func_104480
    ctx->pc = 0x10693Cu;
    SET_GPR_U32(ctx, 31, 0x106944u);
    ctx->pc = 0x106940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10693Cu;
    // 0x106940: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10693Cu, 0x106944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106944u;
label_106944:
    // 0x106944: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x106944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x106948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106948u;
    {
        const bool branch_taken_0x106948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106948u;
        // 0x10694c: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106948) {
            ctx->pc = 0x10695Cu;
            goto label_10695c;
        }
    }
    ctx->pc = 0x106950u;
    // 0x106950: 0xc041124  jal         func_104490
    ctx->pc = 0x106950u;
    SET_GPR_U32(ctx, 31, 0x106958u);
    ctx->pc = 0x106954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106950u;
    // 0x106954: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x106950u, 0x106958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106958u;
label_106958:
    // 0x106958: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x106958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_10695c:
    // 0x10695c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10695Cu;
    {
        const bool branch_taken_0x10695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10695Cu;
        // 0x106960: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10695c) {
            ctx->pc = 0x106974u;
            goto label_106974;
        }
    }
    ctx->pc = 0x106964u;
    // 0x106964: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x106964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x106968: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x106968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10696c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x106970: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x106970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_106974:
    // 0x106974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10697c: 0x3e00008  jr          $ra
    ctx->pc = 0x10697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10697Cu;
        // 0x106980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106984u;
    // 0x106984: 0x0  nop
    ctx->pc = 0x106984u;
    // NOP
    ctx->pc = 0x106988u;
}
