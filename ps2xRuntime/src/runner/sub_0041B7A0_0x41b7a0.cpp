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

// Function: sub_0041B7A0
// Address: 0x41b7a0 - 0x41b888
void sub_0041B7A0_0x41b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B7A0_0x41b7a0");
#endif

    switch (ctx->pc) {
        case 0x41b7e8u: goto label_41b7e8;
        case 0x41b7f0u: goto label_41b7f0;
        case 0x41b828u: goto label_41b828;
        case 0x41b848u: goto label_41b848;
        case 0x41b874u: goto label_41b874;
        default: break;
    }

    ctx->pc = 0x41b7a0u;

    // 0x41b7a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41b7a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41b7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41b7a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x41b7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x41b7ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x41b7b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x41b7b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x41b7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b7b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x41b7bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x41b7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b7c0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x41b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41b7c4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x41b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41b7c8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x41b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b7cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x41b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x41b7d0: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x41b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x41b7d4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x41b7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41b7d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x41b7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41b7dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x41b7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41b7e0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x41B7E0u;
    SET_GPR_U32(ctx, 31, 0x41B7E8u);
    ctx->pc = 0x41B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B7E0u;
    // 0x41b7e4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41B7E0u, 0x41B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B7E8u;
label_41b7e8:
    // 0x41b7e8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x41B7E8u;
    SET_GPR_U32(ctx, 31, 0x41B7F0u);
    ctx->pc = 0x41B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B7E8u;
    // 0x41b7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x41B7E8u, 0x41B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B7F0u;
label_41b7f0:
    // 0x41b7f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41b7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b7f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x41B7F4u;
    {
        const bool branch_taken_0x41b7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7F4u;
        // 0x41b7f8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b7f4) {
            ctx->pc = 0x41B82Cu;
            goto label_41b82c;
        }
    }
    ctx->pc = 0x41B7FCu;
    // 0x41b7fc: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x41b7fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x41b800: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41b800u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41b804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41B804u;
    {
        const bool branch_taken_0x41b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B804u;
        // 0x41b808: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b804) {
            ctx->pc = 0x41B828u;
            goto label_41b828;
        }
    }
    ctx->pc = 0x41B80Cu;
    // 0x41b80c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x41b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x41b810: 0x24030ab0  addiu       $v1, $zero, 0xAB0
    ctx->pc = 0x41b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2736));
    // 0x41b814: 0x24848010  addiu       $a0, $a0, -0x7FF0
    ctx->pc = 0x41b814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934544));
    // 0x41b818: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41b818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41b81c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b820: 0xc06a99e  jal         func_1AA678
    ctx->pc = 0x41B820u;
    SET_GPR_U32(ctx, 31, 0x41B828u);
    ctx->pc = 0x41B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B820u;
    // 0x41b824: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA678u, 0x41B820u, 0x41B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B828u;
label_41b828:
    // 0x41b828: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x41b828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b82c:
    // 0x41b82c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x41b82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41b830: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41b830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41b834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b838: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41b838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b83c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x41b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x41b840: 0xc094ab8  jal         func_252AE0
    ctx->pc = 0x41B840u;
    SET_GPR_U32(ctx, 31, 0x41B848u);
    ctx->pc = 0x41B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B840u;
    // 0x41b844: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x41B840u, 0x41B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B848u;
label_41b848:
    // 0x41b848: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41b848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41b84c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41b850: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41b850u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41b854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b858: 0x8c48bd30  lw          $t0, -0x42D0($v0)
    ctx->pc = 0x41b858u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41b85c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x41b85cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b860: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x41b860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41b864: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41b864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41b868: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x41b868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b86c: 0xc106e2c  jal         func_41B8B0
    ctx->pc = 0x41B86Cu;
    SET_GPR_U32(ctx, 31, 0x41B874u);
    ctx->pc = 0x41B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B86Cu;
    // 0x41b870: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x41B86Cu, 0x41B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B874u;
label_41b874:
    // 0x41b874: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41b874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41b878: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41b878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41b87c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41b880: 0x3e00008  jr          $ra
    ctx->pc = 0x41B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B880u;
        // 0x41b884: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B888u;
}
