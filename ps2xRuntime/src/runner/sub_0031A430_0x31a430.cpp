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

// Function: sub_0031A430
// Address: 0x31a430 - 0x31a518
void sub_0031A430_0x31a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A430_0x31a430");
#endif

    switch (ctx->pc) {
        case 0x31a498u: goto label_31a498;
        case 0x31a4d8u: goto label_31a4d8;
        default: break;
    }

    ctx->pc = 0x31a430u;

    // 0x31a430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31a434: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31a434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31a438: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31a43c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31a440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31a440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a444: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31a448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31a44c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x31a44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a450: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x31a450u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31a454: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31a454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a458: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x31a458u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31a45c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x31a45cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x31a460: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31a460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31a464: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x31a464u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x31a468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a46c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31a46cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31a470: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x31a470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x31a474: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31a474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x31a478: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a47c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x31a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x31a480: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x31a480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x31a484: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x31a484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x31a488: 0xa2400018  sb          $zero, 0x18($s2)
    ctx->pc = 0x31a488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a48c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x31a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x31a490: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31A490u;
    SET_GPR_U32(ctx, 31, 0x31A498u);
    ctx->pc = 0x31A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A490u;
    // 0x31a494: 0xae490008  sw          $t1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31A490u, 0x31A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A498u;
label_31a498:
    // 0x31a498: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31a49c: 0xe6540020  swc1        $f20, 0x20($s2)
    ctx->pc = 0x31a49cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x31a4a0: 0x24423da0  addiu       $v0, $v0, 0x3DA0
    ctx->pc = 0x31a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15776));
    // 0x31a4a4: 0xe6550024  swc1        $f21, 0x24($s2)
    ctx->pc = 0x31a4a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x31a4a8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x31a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x31a4ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a4b0: 0xe6560028  swc1        $f22, 0x28($s2)
    ctx->pc = 0x31a4b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x31a4b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4b8: 0xa2510050  sb          $s1, 0x50($s2)
    ctx->pc = 0x31a4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 80), (uint8_t)GPR_U32(ctx, 17));
    // 0x31a4bc: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x31a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x31a4c0: 0xa2500051  sb          $s0, 0x51($s2)
    ctx->pc = 0x31a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 81), (uint8_t)GPR_U32(ctx, 16));
    // 0x31a4c4: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x31a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x31a4c8: 0xa2400052  sb          $zero, 0x52($s2)
    ctx->pc = 0x31a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a4cc: 0xa2400053  sb          $zero, 0x53($s2)
    ctx->pc = 0x31a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a4d0: 0xa2400054  sb          $zero, 0x54($s2)
    ctx->pc = 0x31a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a4d4: 0x0  nop
    ctx->pc = 0x31a4d4u;
    // NOP
label_31a4d8:
    // 0x31a4d8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x31a4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x31a4dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31a4e0: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x31a4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31a4e4: 0x0  nop
    ctx->pc = 0x31a4e4u;
    // NOP
    // 0x31a4e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A4E8u;
    {
        const bool branch_taken_0x31a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4E8u;
        // 0x31a4ec: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4e8) {
            ctx->pc = 0x31A4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a4d8;
        }
    }
    ctx->pc = 0x31A4F0u;
    // 0x31a4f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31a4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31a4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a4f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31a4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a4fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31a4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a504: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x31a504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31a508: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x31a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31a50c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a510: 0x3e00008  jr          $ra
    ctx->pc = 0x31A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A510u;
        // 0x31a514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A518u;
}
