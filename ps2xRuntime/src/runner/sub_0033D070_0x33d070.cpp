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

// Function: sub_0033D070
// Address: 0x33d070 - 0x33d158
void sub_0033D070_0x33d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D070_0x33d070");
#endif

    switch (ctx->pc) {
        case 0x33d0c0u: goto label_33d0c0;
        case 0x33d0d4u: goto label_33d0d4;
        case 0x33d0f8u: goto label_33d0f8;
        case 0x33d114u: goto label_33d114;
        default: break;
    }

    ctx->pc = 0x33d070u;

    // 0x33d070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33d074: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x33d078: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33d07c: 0x3463af30  ori         $v1, $v1, 0xAF30
    ctx->pc = 0x33d07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44848);
    // 0x33d080: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33d080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33d088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33d08c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x33d090: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33d094: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x33d094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x33d098: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x33d098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33d09c: 0x34422eb0  ori         $v0, $v0, 0x2EB0
    ctx->pc = 0x33d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11952);
    // 0x33d0a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x33d0a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33d0a4: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x33d0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x33d0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33d0ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x33d0acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x33d0b0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x33d0b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x33d0b4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x33d0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x33d0b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d0b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0bc: 0x3652007a  ori         $s2, $s2, 0x7A
    ctx->pc = 0x33d0bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)122);
label_33d0c0:
    // 0x33d0c0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x33d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x33d0c4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33D0C4u;
    {
        const bool branch_taken_0x33d0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0C4u;
        // 0x33d0c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0c4) {
            ctx->pc = 0x33D11Cu;
            goto label_33d11c;
        }
    }
    ctx->pc = 0x33D0CCu;
    // 0x33d0cc: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33D0CCu;
    SET_GPR_U32(ctx, 31, 0x33D0D4u);
    ctx->pc = 0x33D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0CCu;
    // 0x33d0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33D0CCu, 0x33D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0D4u;
label_33d0d4:
    // 0x33d0d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33d0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33d0d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x33d0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33d0dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33d0dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x33d0e0: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x33d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x33d0e4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x33d0e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x33d0e8: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x33d0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x33d0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0f0: 0xc0d0b70  jal         func_342DC0
    ctx->pc = 0x33D0F0u;
    SET_GPR_U32(ctx, 31, 0x33D0F8u);
    ctx->pc = 0x33D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0F0u;
    // 0x33d0f4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x33D0F0u, 0x33D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0F8u;
label_33d0f8:
    // 0x33d0f8: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33d0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x33d0fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33d100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d104: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x33d104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x33d108: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x33d108u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d10c: 0xc0d019a  jal         func_340668
    ctx->pc = 0x33D10Cu;
    SET_GPR_U32(ctx, 31, 0x33D114u);
    ctx->pc = 0x33D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D10Cu;
    // 0x33d110: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x33D10Cu, 0x33D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D114u;
label_33d114:
    // 0x33d114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D114u;
    {
        const bool branch_taken_0x33d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D114u;
        // 0x33d118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d114) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D11Cu;
label_33d11c:
    // 0x33d11c: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x33d11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33d120: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x33d120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x33d124: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x33D124u;
    {
        const bool branch_taken_0x33d124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D124u;
        // 0x33d128: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d124) {
            ctx->pc = 0x33D0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d0c0;
        }
    }
    ctx->pc = 0x33D12Cu;
    // 0x33d12c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33d12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d130:
    // 0x33d130: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33d130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d134: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33d134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d13c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33d13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d144: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x33d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33d148: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x33d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33d14c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D14Cu;
        // 0x33d150: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D154u;
    // 0x33d154: 0x0  nop
    ctx->pc = 0x33d154u;
    // NOP
    ctx->pc = 0x33d158u;
}
