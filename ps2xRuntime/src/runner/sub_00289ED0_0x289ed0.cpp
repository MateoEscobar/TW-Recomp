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

// Function: sub_00289ED0
// Address: 0x289ed0 - 0x28a248
void sub_00289ED0_0x289ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289ED0_0x289ed0");
#endif

    switch (ctx->pc) {
        case 0x289f18u: goto label_289f18;
        case 0x289f3cu: goto label_289f3c;
        case 0x289f50u: goto label_289f50;
        case 0x289f60u: goto label_289f60;
        case 0x289f70u: goto label_289f70;
        case 0x289fb0u: goto label_289fb0;
        case 0x289fccu: goto label_289fcc;
        case 0x289fe4u: goto label_289fe4;
        case 0x289ff0u: goto label_289ff0;
        case 0x289ff8u: goto label_289ff8;
        case 0x28a000u: goto label_28a000;
        case 0x28a010u: goto label_28a010;
        case 0x28a018u: goto label_28a018;
        case 0x28a020u: goto label_28a020;
        case 0x28a030u: goto label_28a030;
        case 0x28a070u: goto label_28a070;
        case 0x28a078u: goto label_28a078;
        case 0x28a0b0u: goto label_28a0b0;
        case 0x28a0e0u: goto label_28a0e0;
        case 0x28a0f0u: goto label_28a0f0;
        case 0x28a108u: goto label_28a108;
        case 0x28a174u: goto label_28a174;
        case 0x28a180u: goto label_28a180;
        case 0x28a1b0u: goto label_28a1b0;
        case 0x28a1dcu: goto label_28a1dc;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a210u: goto label_28a210;
        default: break;
    }

    ctx->pc = 0x289ed0u;

    // 0x289ed0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x289ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x289ed4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x289ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x289ed8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x289ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x289edc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x289edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ee0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x289ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x289ee4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ee8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x289ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x289eec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x289eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ef0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x289ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x289ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x289ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ef8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x289ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x289efc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x289efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x289f00: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x289f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x289f04: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x289f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x289f08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x289f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x289f0c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x289f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x289f10: 0xc087502  jal         func_21D408
    ctx->pc = 0x289F10u;
    SET_GPR_U32(ctx, 31, 0x289F18u);
    ctx->pc = 0x289F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F10u;
    // 0x289f14: 0xafa70040  sw          $a3, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x289F10u, 0x289F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F18u;
label_289f18:
    // 0x289f18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x289f18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f1c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x289f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x289f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289F20u;
    {
        const bool branch_taken_0x289f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F20u;
        // 0x289f24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f20) {
            ctx->pc = 0x289F34u;
            goto label_289f34;
        }
    }
    ctx->pc = 0x289F28u;
    // 0x289f28: 0x92e20009  lbu         $v0, 0x9($s7)
    ctx->pc = 0x289f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9)));
    // 0x289f2c: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x289F2Cu;
    {
        const bool branch_taken_0x289f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F2Cu;
        // 0x289f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f2c) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x289F34u;
label_289f34:
    // 0x289f34: 0xc088a92  jal         func_222A48
    ctx->pc = 0x289F34u;
    SET_GPR_U32(ctx, 31, 0x289F3Cu);
    ctx->pc = 0x289F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F34u;
    // 0x289f38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x289F34u, 0x289F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F3Cu;
label_289f3c:
    // 0x289f3c: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x289F3Cu;
    {
        const bool branch_taken_0x289f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F3Cu;
        // 0x289f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f3c) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x289F44u;
    // 0x289f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x289f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f48: 0xc088a92  jal         func_222A48
    ctx->pc = 0x289F48u;
    SET_GPR_U32(ctx, 31, 0x289F50u);
    ctx->pc = 0x289F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F48u;
    // 0x289f4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x289F48u, 0x289F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F50u;
label_289f50:
    // 0x289f50: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x289F50u;
    {
        const bool branch_taken_0x289f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F50u;
        // 0x289f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f50) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x289F58u;
    // 0x289f58: 0xc0894e4  jal         func_225390
    ctx->pc = 0x289F58u;
    SET_GPR_U32(ctx, 31, 0x289F60u);
    ctx->pc = 0x289F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F58u;
    // 0x289f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225390u, 0x289F58u, 0x289F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F60u;
label_289f60:
    // 0x289f60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289F60u;
    {
        const bool branch_taken_0x289f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F60u;
        // 0x289f64: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f60) {
            ctx->pc = 0x289F78u;
            goto label_289f78;
        }
    }
    ctx->pc = 0x289F68u;
    // 0x289f68: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x289F68u;
    {
        const bool branch_taken_0x289f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F68u;
        // 0x289f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f68) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x289F70u;
label_289f70:
    // 0x289f70: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x289F70u;
    {
        const bool branch_taken_0x289f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F70u;
        // 0x289f74: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f70) {
            ctx->pc = 0x28A0C8u;
            goto label_28a0c8;
        }
    }
    ctx->pc = 0x289F78u;
label_289f78:
    // 0x289f78: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x289f78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x289f7c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x289f80: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x289f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x289f84: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x289f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289f88: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x289f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289f8c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x289f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x289f90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x289f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289f94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x289f98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x289f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x289f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289fa0: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x289fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x289fa4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x289fa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fa8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x289FA8u;
    SET_GPR_U32(ctx, 31, 0x289FB0u);
    ctx->pc = 0x289FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FA8u;
    // 0x289fac: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289FA8u, 0x289FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FB0u;
label_289fb0:
    // 0x289fb0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x289fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289fb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fb8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x289fbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x289fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x289fc4: 0xc0cdb82  jal         func_336E08
    ctx->pc = 0x289FC4u;
    SET_GPR_U32(ctx, 31, 0x289FCCu);
    ctx->pc = 0x289FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FC4u;
    // 0x289fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E08u, 0x289FC4u, 0x289FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FCCu;
label_289fcc:
    // 0x289fcc: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x289fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x289fd0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x289fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x289fd4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x289fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x289fd8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x289fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x289fdc: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x289FDCu;
    SET_GPR_U32(ctx, 31, 0x289FE4u);
    ctx->pc = 0x289FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FDCu;
    // 0x289fe0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x289FDCu, 0x289FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FE4u;
label_289fe4:
    // 0x289fe4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x289fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289fe8: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x289FE8u;
    SET_GPR_U32(ctx, 31, 0x289FF0u);
    ctx->pc = 0x289FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FE8u;
    // 0x289fec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x289FE8u, 0x289FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FF0u;
label_289ff0:
    // 0x289ff0: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x289FF0u;
    SET_GPR_U32(ctx, 31, 0x289FF8u);
    ctx->pc = 0x289FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FF0u;
    // 0x289ff4: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x289FF0u, 0x289FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FF8u;
label_289ff8:
    // 0x289ff8: 0xc0a7ace  jal         func_29EB38
    ctx->pc = 0x289FF8u;
    SET_GPR_U32(ctx, 31, 0x28A000u);
    ctx->pc = 0x289FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FF8u;
    // 0x289ffc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB38u, 0x289FF8u, 0x28A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A000u;
label_28a000:
    // 0x28a000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a008: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x28A008u;
    SET_GPR_U32(ctx, 31, 0x28A010u);
    ctx->pc = 0x28A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A008u;
    // 0x28a00c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x28A008u, 0x28A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A010u;
label_28a010:
    // 0x28a010: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x28A010u;
    SET_GPR_U32(ctx, 31, 0x28A018u);
    ctx->pc = 0x28A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A010u;
    // 0x28a014: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x28A010u, 0x28A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A018u;
label_28a018:
    // 0x28a018: 0xc0a7ace  jal         func_29EB38
    ctx->pc = 0x28A018u;
    SET_GPR_U32(ctx, 31, 0x28A020u);
    ctx->pc = 0x28A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A018u;
    // 0x28a01c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB38u, 0x28A018u, 0x28A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A020u;
label_28a020:
    // 0x28a020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28a020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a028: 0xc0a7b24  jal         func_29EC90
    ctx->pc = 0x28A028u;
    SET_GPR_U32(ctx, 31, 0x28A030u);
    ctx->pc = 0x28A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A028u;
    // 0x28a02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EC90u, 0x28A028u, 0x28A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A030u;
label_28a030:
    // 0x28a030: 0x2609fffe  addiu       $t1, $s0, -0x2
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x28a034: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28a038: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x28a03c: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x28a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a040: 0x26070003  addiu       $a3, $s0, 0x3
    ctx->pc = 0x28a040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x28a044: 0x26080004  addiu       $t0, $s0, 0x4
    ctx->pc = 0x28a044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28a048: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x28a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x28a04c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28a04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a050: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x28a050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x28a054: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x28a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x28a058: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x28a058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x28a05c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x28a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x28a060: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x28a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x28a064: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x28a064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x28a068: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x28A068u;
    SET_GPR_U32(ctx, 31, 0x28A070u);
    ctx->pc = 0x28A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A068u;
    // 0x28a06c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x28A068u, 0x28A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A070u;
label_28a070:
    // 0x28a070: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28a070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a074: 0x0  nop
    ctx->pc = 0x28a074u;
    // NOP
label_28a078:
    // 0x28a078: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28a07c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A07Cu;
    {
        const bool branch_taken_0x28a07c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28a07c) {
            ctx->pc = 0x28A080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A07Cu;
            // 0x28a080: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A090u;
            goto label_28a090;
        }
    }
    ctx->pc = 0x28A084u;
    // 0x28a084: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x28a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28a088: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28a088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28a08c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a090:
    // 0x28a090: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x28a090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28a094: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A094u;
    {
        const bool branch_taken_0x28a094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a094) {
            ctx->pc = 0x28A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A094u;
            // 0x28a098: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A0A8u;
            goto label_28a0a8;
        }
    }
    ctx->pc = 0x28A09Cu;
    // 0x28a09c: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x28a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x28a0a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28a0a4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a0a8:
    // 0x28a0a8: 0xc0a7a92  jal         func_29EA48
    ctx->pc = 0x28A0A8u;
    SET_GPR_U32(ctx, 31, 0x28A0B0u);
    ctx->pc = 0x28A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0A8u;
    // 0x28a0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x28A0A8u, 0x28A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0B0u;
label_28a0b0:
    // 0x28a0b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a0b4: 0x1043ffae  beq         $v0, $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x28A0B4u;
    {
        const bool branch_taken_0x28a0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0B4u;
        // 0x28a0b8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0b4) {
            ctx->pc = 0x289F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289f70;
        }
    }
    ctx->pc = 0x28A0BCu;
    // 0x28a0bc: 0x2ec20007  sltiu       $v0, $s6, 0x7
    ctx->pc = 0x28a0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x28a0c0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28A0C0u;
    {
        const bool branch_taken_0x28a0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0C0u;
        // 0x28a0c4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0c0) {
            ctx->pc = 0x28A078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a078;
        }
    }
    ctx->pc = 0x28A0C8u;
label_28a0c8:
    // 0x28a0c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28a0cc: 0x16a20016  bne         $s5, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28A0CCu;
    {
        const bool branch_taken_0x28a0cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0CCu;
        // 0x28a0d0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0cc) {
            ctx->pc = 0x28A128u;
            goto label_28a128;
        }
    }
    ctx->pc = 0x28A0D4u;
    // 0x28a0d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28a0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28a0d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a0dc: 0x0  nop
    ctx->pc = 0x28a0dcu;
    // NOP
label_28a0e0:
    // 0x28a0e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a0e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x28a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28a0e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28A0E8u;
    SET_GPR_U32(ctx, 31, 0x28A0F0u);
    ctx->pc = 0x28A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0E8u;
    // 0x28a0ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28A0E8u, 0x28A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0F0u;
label_28a0f0:
    // 0x28a0f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A0F0u;
    {
        const bool branch_taken_0x28a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0F0u;
        // 0x28a0f4: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0f0) {
            ctx->pc = 0x28A110u;
            goto label_28a110;
        }
    }
    ctx->pc = 0x28A0F8u;
    // 0x28a0f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a100: 0xc0a2892  jal         func_28A248
    ctx->pc = 0x28A100u;
    SET_GPR_U32(ctx, 31, 0x28A108u);
    ctx->pc = 0x28A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A100u;
    // 0x28a104: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x28A100u, 0x28A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A108u;
label_28a108:
    // 0x28a108: 0x10530042  beq         $v0, $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x28A108u;
    {
        const bool branch_taken_0x28a108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x28A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A108u;
        // 0x28a10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a108) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x28A110u;
label_28a110:
    // 0x28a110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28a110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a114: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x28a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x28a118: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28A118u;
    {
        const bool branch_taken_0x28a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A118u;
        // 0x28a11c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a118) {
            ctx->pc = 0x28A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a0e0;
        }
    }
    ctx->pc = 0x28A120u;
    // 0x28a120: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28A120u;
    {
        const bool branch_taken_0x28a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A120u;
        // 0x28a124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a120) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x28A128u;
label_28a128:
    // 0x28a128: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A128u;
    {
        const bool branch_taken_0x28a128 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x28A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A128u;
        // 0x28a12c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a128) {
            ctx->pc = 0x28A144u;
            goto label_28a144;
        }
    }
    ctx->pc = 0x28A130u;
    // 0x28a130: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28a130u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a134: 0x0  nop
    ctx->pc = 0x28a134u;
    // NOP
    // 0x28a138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a13c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28A13Cu;
    {
        const bool branch_taken_0x28a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A13Cu;
        // 0x28a140: 0xc44c1a80  lwc1        $f12, 0x1A80($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a13c) {
            ctx->pc = 0x28A168u;
            goto label_28a168;
        }
    }
    ctx->pc = 0x28A144u;
label_28a144:
    // 0x28a144: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x28a144u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x28a148: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x28a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x28a14c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a154: 0x0  nop
    ctx->pc = 0x28a154u;
    // NOP
    // 0x28a158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a15c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28a160: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x28a160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28a164: 0xc44c1a80  lwc1        $f12, 0x1A80($v0)
    ctx->pc = 0x28a164u;
    { uint32_t bits = FAST_READ32(0x561A80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28a168:
    // 0x28a168: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a168u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a16c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x28A16Cu;
    SET_GPR_U32(ctx, 31, 0x28A174u);
    ctx->pc = 0x28A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A16Cu;
    // 0x28a170: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x28A16Cu, 0x28A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A174u;
label_28a174:
    // 0x28a174: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28a174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x28a178: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x28A178u;
    SET_GPR_U32(ctx, 31, 0x28A180u);
    ctx->pc = 0x28A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A178u;
    // 0x28a17c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28A178u, 0x28A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A180u;
label_28a180:
    // 0x28a180: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a188: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28A188u;
    {
        const bool branch_taken_0x28a188 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A188u;
        // 0x28a18c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a188) {
            ctx->pc = 0x28A218u;
            goto label_28a218;
        }
    }
    ctx->pc = 0x28A190u;
    // 0x28a190: 0x87c40092  lh          $a0, 0x92($fp)
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 146)));
    // 0x28a194: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28a194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x28a198: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x28a198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x28a19c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1a0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x28a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x28a1a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1a8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x28A1A8u;
    SET_GPR_U32(ctx, 31, 0x28A1B0u);
    ctx->pc = 0x28A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1A8u;
    // 0x28a1ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28A1A8u, 0x28A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1B0u;
label_28a1b0:
    // 0x28a1b0: 0x83c201b0  lb          $v0, 0x1B0($fp)
    ctx->pc = 0x28a1b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 432)));
    // 0x28a1b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28a1b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28a1b8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x28a1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28a1bc: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A1BCu;
    {
        const bool branch_taken_0x28a1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x28a1bc) {
            ctx->pc = 0x28A1D4u;
            goto label_28a1d4;
        }
    }
    ctx->pc = 0x28A1C4u;
    // 0x28a1c4: 0x8fc201a8  lw          $v0, 0x1A8($fp)
    ctx->pc = 0x28a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 424)));
    // 0x28a1c8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x28a1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1cc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x28a1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28a1d0: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x28a1d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_28a1d4:
    // 0x28a1d4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x28A1D4u;
    SET_GPR_U32(ctx, 31, 0x28A1DCu);
    ctx->pc = 0x28A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1D4u;
    // 0x28a1d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x28A1D4u, 0x28A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1DCu;
label_28a1dc:
    // 0x28a1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1e0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x28A1E0u;
    {
        const bool branch_taken_0x28a1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1E0u;
        // 0x28a1e4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1e0) {
            ctx->pc = 0x28A210u;
            goto label_28a210;
        }
    }
    ctx->pc = 0x28A1E8u;
    // 0x28a1e8: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x28a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x28a1ec: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x28A1ECu;
    SET_GPR_U32(ctx, 31, 0x28A1F4u);
    ctx->pc = 0x28A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1ECu;
    // 0x28a1f0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x28A1ECu, 0x28A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1F4u;
label_28a1f4:
    // 0x28a1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28a1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1fc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28a1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28a200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28a204: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a208: 0xc0bf95a  jal         func_2FE568
    ctx->pc = 0x28A208u;
    SET_GPR_U32(ctx, 31, 0x28A210u);
    ctx->pc = 0x28A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A208u;
    // 0x28a20c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE568u, 0x28A208u, 0x28A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A210u;
label_28a210:
    // 0x28a210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a214:
    // 0x28a214: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28a214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28a218:
    // 0x28a218: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28a218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a21c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28a21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a220: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28a220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a224: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28a224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a228: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28a228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a22c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28a22cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a230: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28a230u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a234: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x28a234u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28a238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a23c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x28a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a240: 0x3e00008  jr          $ra
    ctx->pc = 0x28A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A240u;
        // 0x28a244: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A248u;
}
