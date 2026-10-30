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

// Function: sub_00416F08
// Address: 0x416f08 - 0x417028
void sub_00416F08_0x416f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416F08_0x416f08");
#endif

    switch (ctx->pc) {
        case 0x416f44u: goto label_416f44;
        case 0x416f78u: goto label_416f78;
        case 0x416f80u: goto label_416f80;
        case 0x416facu: goto label_416fac;
        case 0x416fb8u: goto label_416fb8;
        case 0x416fc8u: goto label_416fc8;
        case 0x416fd4u: goto label_416fd4;
        case 0x416ff4u: goto label_416ff4;
        default: break;
    }

    ctx->pc = 0x416f08u;

    // 0x416f08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x416f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x416f0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x416f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x416f10: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x416f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x416f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x416f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x416f1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x416f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x416f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x416f24: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x416f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x416f28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x416f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f2c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x416f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x416f30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x416f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f34: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x416f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x416f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x416f3c: 0xc087502  jal         func_21D408
    ctx->pc = 0x416F3Cu;
    SET_GPR_U32(ctx, 31, 0x416F44u);
    ctx->pc = 0x416F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416F3Cu;
    // 0x416f40: 0x24150008  addiu       $s5, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x416F3Cu, 0x416F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416F44u;
label_416f44:
    // 0x416f44: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x416f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x416f48: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x416f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x416f4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x416f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x416f50: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x416f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x416f54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x416f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f58: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x416f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x416f5c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x416f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x416f60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x416f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x416f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x416f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x416f68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x416f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x416f6c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x416F6Cu;
    {
        const bool branch_taken_0x416f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416F6Cu;
        // 0x416f70: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416f6c) {
            ctx->pc = 0x416FECu;
            goto label_416fec;
        }
    }
    ctx->pc = 0x416F74u;
    // 0x416f74: 0x0  nop
    ctx->pc = 0x416f74u;
    // NOP
label_416f78:
    // 0x416f78: 0xc105774  jal         func_415DD0
    ctx->pc = 0x416F78u;
    SET_GPR_U32(ctx, 31, 0x416F80u);
    ctx->pc = 0x416F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416F78u;
    // 0x416f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x416F78u, 0x416F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416F80u;
label_416f80:
    // 0x416f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x416f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416f84: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x416f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x416f88: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x416F88u;
    {
        const bool branch_taken_0x416f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416f88) {
            ctx->pc = 0x416F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416F88u;
            // 0x416f8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416FECu;
            goto label_416fec;
        }
    }
    ctx->pc = 0x416F90u;
    // 0x416f90: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x416f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x416f94: 0x54520015  bnel        $v0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x416F94u;
    {
        const bool branch_taken_0x416f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x416f94) {
            ctx->pc = 0x416F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416F94u;
            // 0x416f98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416FECu;
            goto label_416fec;
        }
    }
    ctx->pc = 0x416F9Cu;
    // 0x416f9c: 0x16550008  bne         $s2, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x416F9Cu;
    {
        const bool branch_taken_0x416f9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x416f9c) {
            ctx->pc = 0x416FC0u;
            goto label_416fc0;
        }
    }
    ctx->pc = 0x416FA4u;
    // 0x416fa4: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x416FA4u;
    SET_GPR_U32(ctx, 31, 0x416FACu);
    ctx->pc = 0x416FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416FA4u;
    // 0x416fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x416FA4u, 0x416FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416FACu;
label_416fac:
    // 0x416fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x416facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416fb0: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x416FB0u;
    SET_GPR_U32(ctx, 31, 0x416FB8u);
    ctx->pc = 0x416FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416FB0u;
    // 0x416fb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x416FB0u, 0x416FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416FB8u;
label_416fb8:
    // 0x416fb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x416FB8u;
    {
        const bool branch_taken_0x416fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416fb8) {
            ctx->pc = 0x416FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416FB8u;
            // 0x416fbc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416FECu;
            goto label_416fec;
        }
    }
    ctx->pc = 0x416FC0u;
label_416fc0:
    // 0x416fc0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x416FC0u;
    SET_GPR_U32(ctx, 31, 0x416FC8u);
    ctx->pc = 0x416FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416FC0u;
    // 0x416fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x416FC0u, 0x416FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416FC8u;
label_416fc8:
    // 0x416fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x416fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416fcc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x416FCCu;
    SET_GPR_U32(ctx, 31, 0x416FD4u);
    ctx->pc = 0x416FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416FCCu;
    // 0x416fd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x416FCCu, 0x416FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416FD4u;
label_416fd4:
    // 0x416fd4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x416fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x416fd8: 0x0  nop
    ctx->pc = 0x416fd8u;
    // NOP
    // 0x416fdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x416FDCu;
    {
        const bool branch_taken_0x416fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416FDCu;
        // 0x416fe0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416fdc) {
            ctx->pc = 0x416FECu;
            goto label_416fec;
        }
    }
    ctx->pc = 0x416FE4u;
    // 0x416fe4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x416fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416fe8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x416fe8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_416fec:
    // 0x416fec: 0xc10574c  jal         func_415D30
    ctx->pc = 0x416FECu;
    SET_GPR_U32(ctx, 31, 0x416FF4u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x416FECu, 0x416FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416FF4u;
label_416ff4:
    // 0x416ff4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x416ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x416ff8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x416FF8u;
    {
        const bool branch_taken_0x416ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416FF8u;
        // 0x416ffc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416ff8) {
            ctx->pc = 0x416F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416f78;
        }
    }
    ctx->pc = 0x417000u;
    // 0x417000: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x417000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x417004: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x417004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x417008: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x417008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41700c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41700cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417010: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x417010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x417014: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x417014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41701c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x41701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x417020: 0x3e00008  jr          $ra
    ctx->pc = 0x417020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417020u;
        // 0x417024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417028u;
}
