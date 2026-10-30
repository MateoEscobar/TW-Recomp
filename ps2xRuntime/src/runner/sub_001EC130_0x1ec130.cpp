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

// Function: sub_001EC130
// Address: 0x1ec130 - 0x1ec238
void sub_001EC130_0x1ec130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC130_0x1ec130");
#endif

    switch (ctx->pc) {
        case 0x1ec170u: goto label_1ec170;
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec1a8u: goto label_1ec1a8;
        case 0x1ec1bcu: goto label_1ec1bc;
        case 0x1ec1f0u: goto label_1ec1f0;
        default: break;
    }

    ctx->pc = 0x1ec130u;

    // 0x1ec130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ec130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ec134: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ec134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1ec138: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1ec138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1ec13c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec140: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ec140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec144: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1ec144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1ec148: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ec148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ec14c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1ec14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1ec150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ec150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec154: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1ec154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1ec158: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1ec158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1ec15c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ec15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ec160: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ec160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ec164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec168: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC168u;
    SET_GPR_U32(ctx, 31, 0x1EC170u);
    ctx->pc = 0x1EC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC168u;
    // 0x1ec16c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC168u, 0x1EC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC170u;
label_1ec170:
    // 0x1ec170: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ec170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ec174: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x1ec174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1ec178: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x1ec178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ec17c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec180: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1ec180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec184: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1ec184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec188: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec18c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec18cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec194: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec198:
    // 0x1ec198: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x1ec198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ec19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1a0: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC1A0u;
    SET_GPR_U32(ctx, 31, 0x1EC1A8u);
    ctx->pc = 0x1EC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1A0u;
    // 0x1ec1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC1A0u, 0x1EC1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1A8u;
label_1ec1a8:
    // 0x1ec1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1b4: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC1B4u;
    SET_GPR_U32(ctx, 31, 0x1EC1BCu);
    ctx->pc = 0x1EC1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1B4u;
    // 0x1ec1b8: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC1B4u, 0x1EC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1BCu;
label_1ec1bc:
    // 0x1ec1bc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1ec1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ec1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec1c4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1ec1c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ec1cc: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ec1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ec1d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ec1d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec1d8: 0x2e640008  sltiu       $a0, $s3, 0x8
    ctx->pc = 0x1ec1d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ec1dc: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1EC1DCu;
    {
        const bool branch_taken_0x1ec1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1DCu;
        // 0x1ec1e0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1dc) {
            ctx->pc = 0x1EC198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec198;
        }
    }
    ctx->pc = 0x1EC1E4u;
    // 0x1ec1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1e8: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC1E8u;
    SET_GPR_U32(ctx, 31, 0x1EC1F0u);
    ctx->pc = 0x1EC1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1E8u;
    // 0x1ec1ec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC1E8u, 0x1EC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1F0u;
label_1ec1f0:
    // 0x1ec1f0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1ec1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ec1f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec1f8: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x1ec1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ec1fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ec1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec200: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ec200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec204: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ec204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec208: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ec208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec210: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ec210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec214: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1ec214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1ec218: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1ec218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec21c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x1ec21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x1ec220: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1ec220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec224: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1ec224u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec228: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1ec228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec230: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC230u;
        // 0x1ec234: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC238u;
}
