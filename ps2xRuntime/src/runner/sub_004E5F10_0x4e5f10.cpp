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

// Function: sub_004E5F10
// Address: 0x4e5f10 - 0x4e6038
void sub_004E5F10_0x4e5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5F10_0x4e5f10");
#endif

    switch (ctx->pc) {
        case 0x4e5f5cu: goto label_4e5f5c;
        case 0x4e5f78u: goto label_4e5f78;
        case 0x4e5f94u: goto label_4e5f94;
        case 0x4e5fa4u: goto label_4e5fa4;
        case 0x4e5facu: goto label_4e5fac;
        case 0x4e5fb8u: goto label_4e5fb8;
        case 0x4e5fe8u: goto label_4e5fe8;
        case 0x4e6008u: goto label_4e6008;
        default: break;
    }

    ctx->pc = 0x4e5f10u;

    // 0x4e5f10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4e5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4e5f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e5f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f18: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4e5f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4e5f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e5f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4e5f24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e5f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f28: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4e5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4e5f2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4e5f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f30: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4e5f30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f34: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4e5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4e5f38: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4e5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4e5f3c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4e5f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4e5f40: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4e5f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4e5f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e5f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f48: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4e5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4e5f4c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4e5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4e5f50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e5f54: 0xc139776  jal         func_4E5DD8
    ctx->pc = 0x4E5F54u;
    SET_GPR_U32(ctx, 31, 0x4E5F5Cu);
    ctx->pc = 0x4E5F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5F54u;
    // 0x4e5f58: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5DD8u, 0x4E5F54u, 0x4E5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5F5Cu;
label_4e5f5c:
    // 0x4e5f5c: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x4e5f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4e5f60: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4E5F60u;
    {
        const bool branch_taken_0x4e5f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5F60u;
        // 0x4e5f64: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5f60) {
            ctx->pc = 0x4E5FF8u;
            goto label_4e5ff8;
        }
    }
    ctx->pc = 0x4E5F68u;
    // 0x4e5f68: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x4e5f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f6c: 0x2b3b823  subu        $s7, $s5, $s3
    ctx->pc = 0x4e5f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x4e5f70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5f74: 0x0  nop
    ctx->pc = 0x4e5f74u;
    // NOP
label_4e5f78:
    // 0x4e5f78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e5f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f7c: 0x8fd0489c  lw          $s0, 0x489C($fp)
    ctx->pc = 0x4e5f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
    // 0x4e5f80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5f84: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5f88: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4e5f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5f8c: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5F8Cu;
    SET_GPR_U32(ctx, 31, 0x4E5F94u);
    ctx->pc = 0x4E5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5F8Cu;
    // 0x4e5f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5F8Cu, 0x4E5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5F94u;
label_4e5f94:
    // 0x4e5f94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f9c: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5F9Cu;
    SET_GPR_U32(ctx, 31, 0x4E5FA4u);
    ctx->pc = 0x4E5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5F9Cu;
    // 0x4e5fa0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5F9Cu, 0x4E5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5FA4u;
label_4e5fa4:
    // 0x4e5fa4: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5FA4u;
    SET_GPR_U32(ctx, 31, 0x4E5FACu);
    ctx->pc = 0x4E5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5FA4u;
    // 0x4e5fa8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5FA4u, 0x4E5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5FACu;
label_4e5fac:
    // 0x4e5fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e5facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5fb0: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5FB0u;
    SET_GPR_U32(ctx, 31, 0x4E5FB8u);
    ctx->pc = 0x4E5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5FB0u;
    // 0x4e5fb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5FB0u, 0x4E5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5FB8u;
label_4e5fb8:
    // 0x4e5fb8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e5fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e5fbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e5fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e5fc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e5fc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e5fc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E5FC4u;
    {
        const bool branch_taken_0x4e5fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5FC4u;
        // 0x4e5fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5fc4) {
            ctx->pc = 0x4E5FE8u;
            goto label_4e5fe8;
        }
    }
    ctx->pc = 0x4E5FCCu;
    // 0x4e5fcc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5fd0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4e5fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e5fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5fd8: 0x173083  sra         $a2, $s7, 2
    ctx->pc = 0x4e5fd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 23), 2));
    // 0x4e5fdc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e5fe0: 0xc139724  jal         func_4E5C90
    ctx->pc = 0x4E5FE0u;
    SET_GPR_U32(ctx, 31, 0x4E5FE8u);
    ctx->pc = 0x4E5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5FE0u;
    // 0x4e5fe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5C90u, 0x4E5FE0u, 0x4E5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5FE8u;
label_4e5fe8:
    // 0x4e5fe8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4e5fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4e5fec: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x4e5fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4e5ff0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4E5FF0u;
    {
        const bool branch_taken_0x4e5ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e5ff0) {
            ctx->pc = 0x4E5FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5FF0u;
            // 0x4e5ff4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5f78;
        }
    }
    ctx->pc = 0x4E5FF8u;
label_4e5ff8:
    // 0x4e5ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ffc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e5ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6000: 0xc13979a  jal         func_4E5E68
    ctx->pc = 0x4E6000u;
    SET_GPR_U32(ctx, 31, 0x4E6008u);
    ctx->pc = 0x4E6004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6000u;
    // 0x4e6004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5E68u, 0x4E6000u, 0x4E6008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6008u;
label_4e6008:
    // 0x4e6008: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4e6008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4e600c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4e600cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4e6010: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4e6010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e6014: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4e6014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e6018: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4e6018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e601c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e601cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e6020: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4e6020u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e6024: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4e6024u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e6028: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4e6028u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e602c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6030: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6030u;
        // 0x4e6034: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6038u;
}
