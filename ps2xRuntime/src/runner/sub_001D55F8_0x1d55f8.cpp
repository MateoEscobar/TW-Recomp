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

// Function: sub_001D55F8
// Address: 0x1d55f8 - 0x1d56a0
void sub_001D55F8_0x1d55f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D55F8_0x1d55f8");
#endif

    switch (ctx->pc) {
        case 0x1d5628u: goto label_1d5628;
        case 0x1d5640u: goto label_1d5640;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5688u: goto label_1d5688;
        default: break;
    }

    ctx->pc = 0x1d55f8u;

    // 0x1d55f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d55fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d5600: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d5600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d5604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5608: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d560c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d560cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5614: 0x26120120  addiu       $s2, $s0, 0x120
    ctx->pc = 0x1d5614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1d5618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d561c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d561cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5620: 0xc073460  jal         func_1CD180
    ctx->pc = 0x1D5620u;
    SET_GPR_U32(ctx, 31, 0x1D5628u);
    ctx->pc = 0x1D5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5620u;
    // 0x1d5624: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD180u, 0x1D5620u, 0x1D5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5628u;
label_1d5628:
    // 0x1d5628: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5628u;
    {
        const bool branch_taken_0x1d5628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5628) {
            ctx->pc = 0x1D562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5628u;
            // 0x1d562c: 0x7a020020  lq          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5648u;
            goto label_1d5648;
        }
    }
    ctx->pc = 0x1D5630u;
    // 0x1d5630: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d5634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5638: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D5638u;
    SET_GPR_U32(ctx, 31, 0x1D5640u);
    ctx->pc = 0x1D563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5638u;
    // 0x1d563c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D5638u, 0x1D5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5640u;
label_1d5640:
    // 0x1d5640: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5640u;
    {
        const bool branch_taken_0x1d5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5640u;
        // 0x1d5644: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5640) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D5648u;
label_1d5648:
    // 0x1d5648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d5648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d564c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1d564cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d5650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5658: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D5658u;
    SET_GPR_U32(ctx, 31, 0x1D5660u);
    ctx->pc = 0x1D565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5658u;
    // 0x1d565c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D5658u, 0x1D5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5660u;
label_1d5660:
    // 0x1d5660: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1d5660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1d5664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5668: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d566c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d566cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5670: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d5670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d5674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d5674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5678: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d5678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d567c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d567cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d5680: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1D5680u;
    SET_GPR_U32(ctx, 31, 0x1D5688u);
    ctx->pc = 0x1D5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5680u;
    // 0x1d5684: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D5680u, 0x1D5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5688u;
label_1d5688:
    // 0x1d5688: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d5688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d568c:
    // 0x1d568c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d568cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5690: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5698: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5698u;
        // 0x1d569c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56A0u;
}
