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

// Function: sub_001E91E8
// Address: 0x1e91e8 - 0x1e9250
void sub_001E91E8_0x1e91e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E91E8_0x1e91e8");
#endif

    switch (ctx->pc) {
        case 0x1e91e8u: goto label_1e91e8;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e91f4u: goto label_1e91f4;
        case 0x1e91f8u: goto label_1e91f8;
        case 0x1e91fcu: goto label_1e91fc;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9204u: goto label_1e9204;
        case 0x1e9208u: goto label_1e9208;
        case 0x1e920cu: goto label_1e920c;
        case 0x1e9210u: goto label_1e9210;
        case 0x1e9214u: goto label_1e9214;
        case 0x1e9218u: goto label_1e9218;
        case 0x1e921cu: goto label_1e921c;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9224u: goto label_1e9224;
        case 0x1e9228u: goto label_1e9228;
        case 0x1e922cu: goto label_1e922c;
        case 0x1e9230u: goto label_1e9230;
        case 0x1e9234u: goto label_1e9234;
        case 0x1e9238u: goto label_1e9238;
        case 0x1e923cu: goto label_1e923c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9248u: goto label_1e9248;
        case 0x1e924cu: goto label_1e924c;
        default: break;
    }

    ctx->pc = 0x1e91e8u;

label_1e91e8:
    // 0x1e91e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e91e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e91ec:
    // 0x1e91ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e91ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e91f0:
    // 0x1e91f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e91f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e91f4:
    // 0x1e91f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e91f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e91f8:
    // 0x1e91f8: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e91fc:
    // 0x1e91fc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1e91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1e9200:
    // 0x1e9200: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e9204:
    // 0x1e9204: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e9208:
    // 0x1e9208: 0x40f809  jalr        $v0
label_1e920c:
    if (ctx->pc == 0x1E920Cu) {
        ctx->pc = 0x1E920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9208u;
        // 0x1e920c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9210u;
        goto label_1e9210;
    }
    ctx->pc = 0x1E9208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9210u);
        ctx->pc = 0x1E920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9208u;
        // 0x1e920c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9208u, 0x1E9210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9210u;
label_1e9210:
    // 0x1e9210: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1e9214:
    if (ctx->pc == 0x1E9214u) {
        ctx->pc = 0x1E9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9210u;
        // 0x1e9214: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9218u;
        goto label_1e9218;
    }
    ctx->pc = 0x1E9210u;
    {
        const bool branch_taken_0x1e9210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9210) {
            ctx->pc = 0x1E9214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9210u;
            // 0x1e9214: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9240u;
            goto label_1e9240;
        }
    }
    ctx->pc = 0x1E9218u;
label_1e9218:
    // 0x1e9218: 0xc0734a0  jal         func_1CD280
label_1e921c:
    if (ctx->pc == 0x1E921Cu) {
        ctx->pc = 0x1E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9218u;
        // 0x1e921c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9220u;
        goto label_1e9220;
    }
    ctx->pc = 0x1E9218u;
    SET_GPR_U32(ctx, 31, 0x1E9220u);
    ctx->pc = 0x1E921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9218u;
    // 0x1e921c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1E9218u, 0x1E9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9220u;
label_1e9220:
    // 0x1e9220: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1e9220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_1e9224:
    // 0x1e9224: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e9224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e9228:
    // 0x1e9228: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e9228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e922c:
    // 0x1e922c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e922cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e9230:
    // 0x1e9230: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e9230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e9234:
    // 0x1e9234: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e9234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9238:
    // 0x1e9238: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x1e9238u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
label_1e923c:
    // 0x1e923c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e923cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9240:
    // 0x1e9240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9244:
    // 0x1e9244: 0x3e00008  jr          $ra
label_1e9248:
    if (ctx->pc == 0x1E9248u) {
        ctx->pc = 0x1E9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9244u;
        // 0x1e9248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E924Cu;
        goto label_1e924c;
    }
    ctx->pc = 0x1E9244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9244u;
        // 0x1e9248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E924Cu;
label_1e924c:
    // 0x1e924c: 0x0  nop
    ctx->pc = 0x1e924cu;
    // NOP
    ctx->pc = 0x1e9250u;
}
