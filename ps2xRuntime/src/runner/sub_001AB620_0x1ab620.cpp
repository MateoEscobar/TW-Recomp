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

// Function: sub_001AB620
// Address: 0x1ab620 - 0x1ab6a0
void sub_001AB620_0x1ab620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB620_0x1ab620");
#endif

    switch (ctx->pc) {
        case 0x1ab648u: goto label_1ab648;
        case 0x1ab67cu: goto label_1ab67c;
        default: break;
    }

    ctx->pc = 0x1ab620u;

    // 0x1ab620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab624: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ab624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ab628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab62c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab630: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ab630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ab634: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ab634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab638: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ab638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ab63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab640: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AB640u;
    SET_GPR_U32(ctx, 31, 0x1AB648u);
    ctx->pc = 0x1AB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB640u;
    // 0x1ab644: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AB640u, 0x1AB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB648u;
label_1ab648:
    // 0x1ab648: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab64c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab654: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ab654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ab658: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x1ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x1ab65c: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1ab65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1ab660: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ab660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ab664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab668: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1ab668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1ab66c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ab66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab670: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ab670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ab674: 0xc06adb2  jal         func_1AB6C8
    ctx->pc = 0x1AB674u;
    SET_GPR_U32(ctx, 31, 0x1AB67Cu);
    ctx->pc = 0x1AB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB674u;
    // 0x1ab678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6C8u, 0x1AB674u, 0x1AB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB67Cu;
label_1ab67c:
    // 0x1ab67c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1ab67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1ab680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab684: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ab684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab688: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ab688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab68c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab690: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ab690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab698: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB698u;
        // 0x1ab69c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6A0u;
}
