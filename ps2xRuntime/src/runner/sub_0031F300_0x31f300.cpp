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

// Function: sub_0031F300
// Address: 0x31f300 - 0x31f410
void sub_0031F300_0x31f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F300_0x31f300");
#endif

    switch (ctx->pc) {
        case 0x31f380u: goto label_31f380;
        default: break;
    }

    ctx->pc = 0x31f300u;

    // 0x31f300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31f304: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31f304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31f308: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x31f30c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31f310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f314: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31f314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x31f318: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31f318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x31f31c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31f31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31f320: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31f320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31f324: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31f324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x31f328: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x31f328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f32c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x31f330: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x31f330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f334: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x31f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x31f338: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x31f338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f340: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x31f340u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f344: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x31f344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x31f348: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31f348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31f34c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31f34cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31f350: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31f350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31f354: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x31f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f358: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x31f358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x31f35c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31f360: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31f360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31f364: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31f364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31f368: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31f368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31f36c: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31f36cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f370: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x31f370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31f374: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x31f374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x31f378: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31F378u;
    SET_GPR_U32(ctx, 31, 0x31F380u);
    ctx->pc = 0x31F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F378u;
    // 0x31f37c: 0x8fb300b0  lw          $s3, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31F378u, 0x31F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F380u;
label_31f380:
    // 0x31f380: 0xa2140040  sb          $s4, 0x40($s0)
    ctx->pc = 0x31f380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 20));
    // 0x31f384: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31f388: 0xa2110041  sb          $s1, 0x41($s0)
    ctx->pc = 0x31f388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 17));
    // 0x31f38c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31f390: 0xa2120042  sb          $s2, 0x42($s0)
    ctx->pc = 0x31f390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 18));
    // 0x31f394: 0x24424100  addiu       $v0, $v0, 0x4100
    ctx->pc = 0x31f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16640));
    // 0x31f398: 0xa2130043  sb          $s3, 0x43($s0)
    ctx->pc = 0x31f398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 19));
    // 0x31f39c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f3a0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31f3a4: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x31f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x31f3a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3ac: 0xae170020  sw          $s7, 0x20($s0)
    ctx->pc = 0x31f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
    // 0x31f3b0: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x31f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
    // 0x31f3b4: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x31f3b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x31f3b8: 0xa6150032  sh          $s5, 0x32($s0)
    ctx->pc = 0x31f3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 21));
    // 0x31f3bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x31f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x31f3c0: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x31f3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f3c4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x31f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x31f3c8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x31f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x31f3cc: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x31f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x31f3d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31f3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f3d4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x31f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x31f3d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31f3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f3dc: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x31f3e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31f3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f3e4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x31f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x31f3e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f3ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31f3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f3f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31f3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f3f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31f3f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f3f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x31f3f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f400: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x31f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31f404: 0x3e00008  jr          $ra
    ctx->pc = 0x31F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F404u;
        // 0x31f408: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F40Cu;
    // 0x31f40c: 0x0  nop
    ctx->pc = 0x31f40cu;
    // NOP
    ctx->pc = 0x31f410u;
}
