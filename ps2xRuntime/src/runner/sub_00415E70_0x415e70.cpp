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

// Function: sub_00415E70
// Address: 0x415e70 - 0x415fa0
void sub_00415E70_0x415e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415E70_0x415e70");
#endif

    switch (ctx->pc) {
        case 0x415ee8u: goto label_415ee8;
        case 0x415ef4u: goto label_415ef4;
        case 0x415f54u: goto label_415f54;
        case 0x415f60u: goto label_415f60;
        case 0x415f70u: goto label_415f70;
        default: break;
    }

    ctx->pc = 0x415e70u;

    // 0x415e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x415e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x415e74: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x415e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x415e78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x415e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x415e7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x415e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x415e80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x415e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x415e84: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x415e84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
    // 0x415e88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x415e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x415e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x415e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x415e94: 0x78c00  sll         $s1, $a3, 16
    ctx->pc = 0x415e94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x415e98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x415e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x415e9c: 0x89400  sll         $s2, $t0, 16
    ctx->pc = 0x415e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x415ea0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x415ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x415ea4: 0x254a4b98  addiu       $t2, $t2, 0x4B98
    ctx->pc = 0x415ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19352));
    // 0x415ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x415eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x415eb0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x415eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x415eb4: 0x24635e68  addiu       $v1, $v1, 0x5E68
    ctx->pc = 0x415eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24168));
    // 0x415eb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x415eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415ebc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x415ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415ec0: 0xae0a004c  sw          $t2, 0x4C($s0)
    ctx->pc = 0x415ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 10));
    // 0x415ec4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x415ec4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x415ec8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x415ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x415ecc: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x415eccu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x415ed0: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x415ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x415ed4: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x415ed4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x415ed8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x415ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x415edc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x415edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x415ee0: 0xc105804  jal         func_416010
    ctx->pc = 0x415EE0u;
    SET_GPR_U32(ctx, 31, 0x415EE8u);
    ctx->pc = 0x415EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415EE0u;
    // 0x415ee4: 0x2615004c  addiu       $s5, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416010u, 0x415EE0u, 0x415EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415EE8u;
label_415ee8:
    // 0x415ee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x415ee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x415eec: 0xc105894  jal         func_416250
    ctx->pc = 0x415EECu;
    SET_GPR_U32(ctx, 31, 0x415EF4u);
    ctx->pc = 0x415EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415EECu;
    // 0x415ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416250u, 0x415EECu, 0x415EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415EF4u;
label_415ef4:
    // 0x415ef4: 0xa61100d0  sh          $s1, 0xD0($s0)
    ctx->pc = 0x415ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 208), (uint16_t)GPR_U32(ctx, 17));
    // 0x415ef8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x415ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x415efc: 0xae1200d8  sw          $s2, 0xD8($s0)
    ctx->pc = 0x415efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 18));
    // 0x415f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x415f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x415f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x415f08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x415f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x415f0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x415f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x415f10: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x415f10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x415f14: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x415f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x415f18: 0xae140048  sw          $s4, 0x48($s0)
    ctx->pc = 0x415f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 20));
    // 0x415f1c: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x415f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x415f20: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x415f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x415f24: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x415f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x415f28: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x415f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x415f2c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x415f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415f30: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x415f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x415f34: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x415f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x415f38: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x415f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x415f3c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x415f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x415f40: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x415f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x415f44: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x415f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x415f48: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x415f48u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511790u));
    // 0x415f4c: 0xc0e3fbe  jal         func_38FEF8
    ctx->pc = 0x415F4Cu;
    SET_GPR_U32(ctx, 31, 0x415F54u);
    ctx->pc = 0x415F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415F4Cu;
    // 0x415f50: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FEF8u, 0x415F4Cu, 0x415F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415F54u;
label_415f54:
    // 0x415f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415f58: 0xc0e3ff4  jal         func_38FFD0
    ctx->pc = 0x415F58u;
    SET_GPR_U32(ctx, 31, 0x415F60u);
    ctx->pc = 0x415F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415F58u;
    // 0x415f5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x415F58u, 0x415F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415F60u;
label_415f60:
    // 0x415f60: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x415f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x415f64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x415f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415f68: 0xc0e1284  jal         func_384A10
    ctx->pc = 0x415F68u;
    SET_GPR_U32(ctx, 31, 0x415F70u);
    ctx->pc = 0x415F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415F68u;
    // 0x415f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x415F68u, 0x415F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415F70u;
label_415f70:
    // 0x415f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x415f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415f74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x415f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x415f78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x415f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x415f7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x415f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415f80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x415f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x415f84: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x415f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415f88: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x415f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415f90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x415f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x415f94: 0x3e00008  jr          $ra
    ctx->pc = 0x415F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415F94u;
        // 0x415f98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415F9Cu;
    // 0x415f9c: 0x0  nop
    ctx->pc = 0x415f9cu;
    // NOP
    ctx->pc = 0x415fa0u;
}
