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

// Function: sub_00325660
// Address: 0x325660 - 0x3256f0
void sub_00325660_0x325660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325660_0x325660");
#endif

    switch (ctx->pc) {
        case 0x32568cu: goto label_32568c;
        case 0x3256a8u: goto label_3256a8;
        case 0x3256b8u: goto label_3256b8;
        case 0x3256d4u: goto label_3256d4;
        default: break;
    }

    ctx->pc = 0x325660u;

    // 0x325660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325664: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x325664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x325668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x325668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32566c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32566cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325670: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x325670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x325674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x325674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32567c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x32567Cu;
    {
        const bool branch_taken_0x32567c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x325680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32567Cu;
        // 0x325680: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32567c) {
            ctx->pc = 0x3256B0u;
            goto label_3256b0;
        }
    }
    ctx->pc = 0x325684u;
    // 0x325684: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x325684u;
    SET_GPR_U32(ctx, 31, 0x32568Cu);
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x325684u, 0x32568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32568Cu;
label_32568c:
    // 0x32568c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x32568cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x325690: 0x5c400012  bgtzl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x325690u;
    {
        const bool branch_taken_0x325690 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x325690) {
            ctx->pc = 0x325694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325690u;
            // 0x325694: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3256DCu;
            goto label_3256dc;
        }
    }
    ctx->pc = 0x325698u;
    // 0x325698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32569c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32569cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256a0: 0xc0c8e86  jal         func_323A18
    ctx->pc = 0x3256A0u;
    SET_GPR_U32(ctx, 31, 0x3256A8u);
    ctx->pc = 0x3256A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3256A0u;
    // 0x3256a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x3256A0u, 0x3256A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256A8u;
label_3256a8:
    // 0x3256a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3256A8u;
    {
        const bool branch_taken_0x3256a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256A8u;
        // 0x3256ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256a8) {
            ctx->pc = 0x3256D8u;
            goto label_3256d8;
        }
    }
    ctx->pc = 0x3256B0u;
label_3256b0:
    // 0x3256b0: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x3256B0u;
    SET_GPR_U32(ctx, 31, 0x3256B8u);
    ctx->pc = 0x3256B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3256B0u;
    // 0x3256b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3256B0u, 0x3256B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256B8u;
label_3256b8:
    // 0x3256b8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3256b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3256bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3256c0: 0x24424a50  addiu       $v0, $v0, 0x4A50
    ctx->pc = 0x3256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
    // 0x3256c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3256c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3256cc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x3256CCu;
    SET_GPR_U32(ctx, 31, 0x3256D4u);
    ctx->pc = 0x3256D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3256CCu;
    // 0x3256d0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x3256CCu, 0x3256D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256D4u;
label_3256d4:
    // 0x3256d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3256d8:
    // 0x3256d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3256d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3256dc:
    // 0x3256dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3256dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3256e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3256e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3256e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3256e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3256e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3256E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3256ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256E8u;
        // 0x3256ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3256E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3256F0u;
}
