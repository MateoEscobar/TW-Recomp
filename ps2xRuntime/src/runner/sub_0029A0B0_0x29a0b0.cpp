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

// Function: sub_0029A0B0
// Address: 0x29a0b0 - 0x29a1a8
void sub_0029A0B0_0x29a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0B0_0x29a0b0");
#endif

    switch (ctx->pc) {
        case 0x29a0f4u: goto label_29a0f4;
        case 0x29a110u: goto label_29a110;
        case 0x29a134u: goto label_29a134;
        case 0x29a160u: goto label_29a160;
        case 0x29a188u: goto label_29a188;
        default: break;
    }

    ctx->pc = 0x29a0b0u;

    // 0x29a0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a0b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29a0b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29a0bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29a0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a0c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29a0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0cc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x29a0ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29a0d0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x29a0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29a0d4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x29a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x29a0d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x29a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x29a0dc: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x29a0e0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x29a0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a0e4: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29A0E4u;
    {
        const bool branch_taken_0x29a0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0E4u;
        // 0x29a0e8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0e4) {
            ctx->pc = 0x29A188u;
            goto label_29a188;
        }
    }
    ctx->pc = 0x29A0ECu;
    // 0x29a0ec: 0xc08750a  jal         func_21D428
    ctx->pc = 0x29A0ECu;
    SET_GPR_U32(ctx, 31, 0x29A0F4u);
    ctx->pc = 0x29A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A0ECu;
    // 0x29a0f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x29A0ECu, 0x29A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A0F4u;
label_29a0f4:
    // 0x29a0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0f8: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x29A0F8u;
    {
        const bool branch_taken_0x29a0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0F8u;
        // 0x29a0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0f8) {
            ctx->pc = 0x29A188u;
            goto label_29a188;
        }
    }
    ctx->pc = 0x29A100u;
    // 0x29a100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a104: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x29a104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a108: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x29A108u;
    SET_GPR_U32(ctx, 31, 0x29A110u);
    ctx->pc = 0x29A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A108u;
    // 0x29a10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x29A108u, 0x29A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A110u;
label_29a110:
    // 0x29a110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29a114: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29a114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29a118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a11c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a120: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x29a120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x29a124: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x29a124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x29a128: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29a128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29a12c: 0xc0a5776  jal         func_295DD8
    ctx->pc = 0x29A12Cu;
    SET_GPR_U32(ctx, 31, 0x29A134u);
    ctx->pc = 0x29A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A12Cu;
    // 0x29a130: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x29A12Cu, 0x29A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A134u;
label_29a134:
    // 0x29a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a13c: 0xa2020274  sb          $v0, 0x274($s0)
    ctx->pc = 0x29a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a144: 0xa2020275  sb          $v0, 0x275($s0)
    ctx->pc = 0x29a144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 629), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a148: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29a148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a14c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29a14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29a150: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x29a150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29a154: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29a154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x29a158: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x29A158u;
    SET_GPR_U32(ctx, 31, 0x29A160u);
    ctx->pc = 0x29A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A158u;
    // 0x29a15c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x29A158u, 0x29A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A160u;
label_29a160:
    // 0x29a160: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29a160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29a164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a16c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x29a16cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29a170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a174: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x29a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29a178: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29a178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a17c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x29a17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x29a180: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x29A180u;
    SET_GPR_U32(ctx, 31, 0x29A188u);
    ctx->pc = 0x29A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A180u;
    // 0x29a184: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x29A180u, 0x29A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A188u;
label_29a188:
    // 0x29a188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29a188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a18c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29a18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a194: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x29a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a198: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x29a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A19Cu;
        // 0x29a1a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A1A4u;
    // 0x29a1a4: 0x0  nop
    ctx->pc = 0x29a1a4u;
    // NOP
    ctx->pc = 0x29a1a8u;
}
