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

// Function: sub_0011D098
// Address: 0x11d098 - 0x11d180
void sub_0011D098_0x11d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D098_0x11d098");
#endif

    switch (ctx->pc) {
        case 0x11d0ccu: goto label_11d0cc;
        case 0x11d100u: goto label_11d100;
        case 0x11d120u: goto label_11d120;
        case 0x11d128u: goto label_11d128;
        case 0x11d138u: goto label_11d138;
        case 0x11d144u: goto label_11d144;
        default: break;
    }

    ctx->pc = 0x11d098u;

    // 0x11d098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d09c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11d0a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11d0a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11d0ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11d0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0b0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11d0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d0b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0b8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x11d0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11d0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d0c4: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D0C4u;
    SET_GPR_U32(ctx, 31, 0x11D0CCu);
    ctx->pc = 0x11D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0C4u;
    // 0x11d0c8: 0x222200b  movn        $a0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D0C4u, 0x11D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0CCu;
label_11d0cc:
    // 0x11d0cc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x11D0CCu;
    {
        const bool branch_taken_0x11d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0CCu;
        // 0x11d0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0cc) {
            ctx->pc = 0x11D164u;
            goto label_11d164;
        }
    }
    ctx->pc = 0x11D0D4u;
    // 0x11d0d4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x11d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d0d8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x11d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d0dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0e0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d0e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d0e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d0ec: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11d0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d0f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11d0f4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11d0f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11d0f8: 0xc04ede0  jal         func_13B780
    ctx->pc = 0x11D0F8u;
    SET_GPR_U32(ctx, 31, 0x11D100u);
    ctx->pc = 0x11D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0F8u;
    // 0x11d0fc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B780u, 0x11D0F8u, 0x11D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D100u;
label_11d100:
    // 0x11d100: 0x16320019  bne         $s1, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x11D100u;
    {
        const bool branch_taken_0x11d100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x11D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D100u;
        // 0x11d104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d100) {
            ctx->pc = 0x11D168u;
            goto label_11d168;
        }
    }
    ctx->pc = 0x11D108u;
    // 0x11d108: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11d108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x11d10c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d110: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11d110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d114: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11D114u;
    {
        const bool branch_taken_0x11d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D114u;
        // 0x11d118: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d114) {
            ctx->pc = 0x11D14Cu;
            goto label_11d14c;
        }
    }
    ctx->pc = 0x11D11Cu;
    // 0x11d11c: 0x0  nop
    ctx->pc = 0x11d11cu;
    // NOP
label_11d120:
    // 0x11d120: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D120u;
    SET_GPR_U32(ctx, 31, 0x11D128u);
    ctx->pc = 0x11D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D120u;
    // 0x11d124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D120u, 0x11D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D128u;
label_11d128:
    // 0x11d128: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D128u;
    {
        const bool branch_taken_0x11d128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D128u;
        // 0x11d12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d128) {
            ctx->pc = 0x11D144u;
            goto label_11d144;
        }
    }
    ctx->pc = 0x11D130u;
    // 0x11d130: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D130u;
    SET_GPR_U32(ctx, 31, 0x11D138u);
    ctx->pc = 0x11D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D130u;
    // 0x11d134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D130u, 0x11D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D138u;
label_11d138:
    // 0x11d138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d13c: 0xc04ede0  jal         func_13B780
    ctx->pc = 0x11D13Cu;
    SET_GPR_U32(ctx, 31, 0x11D144u);
    ctx->pc = 0x11D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D13Cu;
    // 0x11d140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B780u, 0x11D13Cu, 0x11D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x11d148: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11d14c:
    // 0x11d14c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d150: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d154: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11D154u;
    {
        const bool branch_taken_0x11d154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D154u;
        // 0x11d158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d154) {
            ctx->pc = 0x11D120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d120;
        }
    }
    ctx->pc = 0x11D15Cu;
    // 0x11d15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D15Cu;
    {
        const bool branch_taken_0x11d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D15Cu;
        // 0x11d160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d15c) {
            ctx->pc = 0x11D168u;
            goto label_11d168;
        }
    }
    ctx->pc = 0x11D164u;
label_11d164:
    // 0x11d164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11d164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d168:
    // 0x11d168: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11d168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d16c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11d16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d178: 0x3e00008  jr          $ra
    ctx->pc = 0x11D178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D178u;
        // 0x11d17c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D180u;
}
