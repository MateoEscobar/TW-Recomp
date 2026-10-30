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

// Function: sub_0041E250
// Address: 0x41e250 - 0x41e320
void sub_0041E250_0x41e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E250_0x41e250");
#endif

    switch (ctx->pc) {
        case 0x41e2a8u: goto label_41e2a8;
        case 0x41e2bcu: goto label_41e2bc;
        case 0x41e2d4u: goto label_41e2d4;
        default: break;
    }

    ctx->pc = 0x41e250u;

    // 0x41e250: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x41e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x41e254: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x41e254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x41e258: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x41e258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41e25c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x41e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x41e260: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x41e264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41e264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e268: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x41e26c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x41e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x41e270: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x41e270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e274: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x41e278: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x41e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x41e27c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x41e27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x41e280: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x41e280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e284: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x41e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x41e288: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41e288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e28c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x41e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x41e290: 0x263607e8  addiu       $s6, $s1, 0x7E8
    ctx->pc = 0x41e290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2024));
    // 0x41e294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41e298: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x41e298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e29c: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x41e29cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
    // 0x41e2a0: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x41e2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x41e2a4: 0x0  nop
    ctx->pc = 0x41e2a4u;
    // NOP
label_41e2a8:
    // 0x41e2a8: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x41e2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41e2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e2b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41e2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e2b4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41E2B4u;
    SET_GPR_U32(ctx, 31, 0x41E2BCu);
    ctx->pc = 0x41E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E2B4u;
    // 0x41e2b8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41E2B4u, 0x41E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E2BCu;
label_41e2bc:
    // 0x41e2bc: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x41E2BCu;
    {
        const bool branch_taken_0x41e2bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x41E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2BCu;
        // 0x41e2c0: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e2bc) {
            ctx->pc = 0x41E2C8u;
            goto label_41e2c8;
        }
    }
    ctx->pc = 0x41E2C4u;
    // 0x41e2c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x41e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_41e2c8:
    // 0x41e2c8: 0x26e491e0  addiu       $a0, $s7, -0x6E20
    ctx->pc = 0x41e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939104));
    // 0x41e2cc: 0xc050fda  jal         func_143F68
    ctx->pc = 0x41E2CCu;
    SET_GPR_U32(ctx, 31, 0x41E2D4u);
    ctx->pc = 0x41E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E2CCu;
    // 0x41e2d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x41E2CCu, 0x41E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E2D4u;
label_41e2d4:
    // 0x41e2d4: 0x263103f4  addiu       $s1, $s1, 0x3F4
    ctx->pc = 0x41e2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1012));
    // 0x41e2d8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x41e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x41e2dc: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x41e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x41e2e0: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x41e2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x41e2e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x41E2E4u;
    {
        const bool branch_taken_0x41e2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2E4u;
        // 0x41e2e8: 0x261003f4  addiu       $s0, $s0, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e2e4) {
            ctx->pc = 0x41E2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e2a8;
        }
    }
    ctx->pc = 0x41E2ECu;
    // 0x41e2ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41e2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41e2f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41e2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41e2f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41e2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41e2f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x41e2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41e2fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41e2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41e300: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x41e300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e304: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41e304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e308: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x41e308u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e310: 0x3e00008  jr          $ra
    ctx->pc = 0x41E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E310u;
        // 0x41e314: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E318u;
    // 0x41e318: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x41e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x41e31c: 0x0  nop
    ctx->pc = 0x41e31cu;
    // NOP
    ctx->pc = 0x41e320u;
}
