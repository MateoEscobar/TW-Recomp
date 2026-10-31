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

// Function: sub_0019C328
// Address: 0x19c328 - 0x19c398
void sub_0019C328_0x19c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C328_0x19c328");
#endif

    switch (ctx->pc) {
        case 0x19c378u: goto label_19c378;
        default: break;
    }

    ctx->pc = 0x19c328u;

    // 0x19c328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c32c: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x19c32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c33c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C33Cu;
    {
        const bool branch_taken_0x19c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C33Cu;
        // 0x19c340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c33c) {
            ctx->pc = 0x19C35Cu;
            goto label_19c35c;
        }
    }
    ctx->pc = 0x19C344u;
    // 0x19c344: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19c348: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19c34c: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19c354: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C354u;
    {
        const bool branch_taken_0x19c354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C354u;
        // 0x19c358: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c354) {
            ctx->pc = 0x19C364u;
            goto label_19c364;
        }
    }
    ctx->pc = 0x19C35Cu;
label_19c35c:
    // 0x19c35c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19C35Cu;
    {
        const bool branch_taken_0x19c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C35Cu;
        // 0x19c360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c35c) {
            ctx->pc = 0x19C384u;
            goto label_19c384;
        }
    }
    ctx->pc = 0x19C364u;
label_19c364:
    // 0x19c364: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x19c368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c36c: 0x24a539d0  addiu       $a1, $a1, 0x39D0
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    // 0x19c370: 0xc138f24  jal         func_4E3C90
    ctx->pc = 0x19C370u;
    SET_GPR_U32(ctx, 31, 0x19C378u);
    ctx->pc = 0x19C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C370u;
    // 0x19c374: 0x24060086  addiu       $a2, $zero, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3C90u, 0x19C370u, 0x19C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C378u;
label_19c378:
    // 0x19c378: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19c37c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c380: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19c380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19c384:
    // 0x19c384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c390: 0x3e00008  jr          $ra
    ctx->pc = 0x19C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C390u;
        // 0x19c394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C398u;
}
