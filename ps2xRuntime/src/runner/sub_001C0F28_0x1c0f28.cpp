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

// Function: sub_001C0F28
// Address: 0x1c0f28 - 0x1c1228
void sub_001C0F28_0x1c0f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0F28_0x1c0f28");
#endif

    switch (ctx->pc) {
        case 0x1c0f68u: goto label_1c0f68;
        case 0x1c0f70u: goto label_1c0f70;
        case 0x1c0f94u: goto label_1c0f94;
        case 0x1c0fb8u: goto label_1c0fb8;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fd8u: goto label_1c0fd8;
        case 0x1c108cu: goto label_1c108c;
        case 0x1c10acu: goto label_1c10ac;
        case 0x1c10e0u: goto label_1c10e0;
        case 0x1c1118u: goto label_1c1118;
        case 0x1c1130u: goto label_1c1130;
        case 0x1c1148u: goto label_1c1148;
        case 0x1c1170u: goto label_1c1170;
        case 0x1c1188u: goto label_1c1188;
        case 0x1c1190u: goto label_1c1190;
        case 0x1c1198u: goto label_1c1198;
        case 0x1c11e0u: goto label_1c11e0;
        case 0x1c11f4u: goto label_1c11f4;
        default: break;
    }

    ctx->pc = 0x1c0f28u;

    // 0x1c0f28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c0f2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0f30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c0f30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c0f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c0f38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c0f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c0f3c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c0f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c0f40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c0f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c0f48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f4c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c0f50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1c0f54: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1c0f58: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1c0f5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c0f60: 0xc06fc24  jal         func_1BF090
    ctx->pc = 0x1C0F60u;
    SET_GPR_U32(ctx, 31, 0x1C0F68u);
    ctx->pc = 0x1C0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F60u;
    // 0x1c0f64: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF090u, 0x1C0F60u, 0x1C0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F68u;
label_1c0f68:
    // 0x1c0f68: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1c0f68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1c0f6c: 0x0  nop
    ctx->pc = 0x1c0f6cu;
    // NOP
label_1c0f70:
    // 0x1c0f70: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x1c0f74: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1c0f78: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0f7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0F7Cu;
    {
        const bool branch_taken_0x1c0f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f7c) {
            ctx->pc = 0x1C0FA8u;
            goto label_1c0fa8;
        }
    }
    ctx->pc = 0x1C0F84u;
    // 0x1c0f84: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c0f88: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1c0f8c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F94u);
    ctx->pc = 0x1C0F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F8Cu;
    // 0x1c0f90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C0F8Cu, 0x1C0F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F94u;
label_1c0f94:
    // 0x1c0f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f98: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1c0f9c: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1c0fa0: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C0FA0u;
    {
        const bool branch_taken_0x1c0fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0fa0) {
            ctx->pc = 0x1C0FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FA0u;
            // 0x1c0fa4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0f70;
        }
    }
    ctx->pc = 0x1C0FA8u;
label_1c0fa8:
    // 0x1c0fa8: 0x52200093  beql        $s1, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x1C0FA8u;
    {
        const bool branch_taken_0x1c0fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fa8) {
            ctx->pc = 0x1C0FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FA8u;
            // 0x1c0fac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C11F8u;
            goto label_1c11f8;
        }
    }
    ctx->pc = 0x1C0FB0u;
    // 0x1c0fb0: 0xc08a01c  jal         func_228070
    ctx->pc = 0x1C0FB0u;
    SET_GPR_U32(ctx, 31, 0x1C0FB8u);
    ctx->pc = 0x1C0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FB0u;
    // 0x1c0fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x1C0FB0u, 0x1C0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FB8u;
label_1c0fb8:
    // 0x1c0fb8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0FB8u;
    {
        const bool branch_taken_0x1c0fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fb8) {
            ctx->pc = 0x1C0FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FB8u;
            // 0x1c0fbc: 0x8ea300f0  lw          $v1, 0xF0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FE4u;
            goto label_1c0fe4;
        }
    }
    ctx->pc = 0x1C0FC0u;
    // 0x1c0fc0: 0xc08a024  jal         func_228090
    ctx->pc = 0x1C0FC0u;
    SET_GPR_U32(ctx, 31, 0x1C0FC8u);
    ctx->pc = 0x1C0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FC0u;
    // 0x1c0fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x1C0FC0u, 0x1C0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0FC8u;
    {
        const bool branch_taken_0x1c0fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fc8) {
            ctx->pc = 0x1C0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0FC8u;
            // 0x1c0fcc: 0x8ea300f0  lw          $v1, 0xF0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FE4u;
            goto label_1c0fe4;
        }
    }
    ctx->pc = 0x1C0FD0u;
    // 0x1c0fd0: 0xc08a03c  jal         func_2280F0
    ctx->pc = 0x1C0FD0u;
    SET_GPR_U32(ctx, 31, 0x1C0FD8u);
    ctx->pc = 0x1C0FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FD0u;
    // 0x1c0fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280F0u, 0x1C0FD0u, 0x1C0FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FD8u;
label_1c0fd8:
    // 0x1c0fd8: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1C0FD8u;
    {
        const bool branch_taken_0x1c0fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FD8u;
        // 0x1c0fdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fd8) {
            ctx->pc = 0x1C11E8u;
            goto label_1c11e8;
        }
    }
    ctx->pc = 0x1C0FE0u;
    // 0x1c0fe0: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x1c0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_1c0fe4:
    // 0x1c0fe4: 0x24120090  addiu       $s2, $zero, 0x90
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c0fe8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x1c0fec: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x1c0ff0: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1c0ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c0ff4: 0x26102e50  addiu       $s0, $s0, 0x2E50
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11856));
    // 0x1c0ff8: 0xc682e920  lwc1        $f2, -0x16E0($s4)
    ctx->pc = 0x1c0ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294961440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0ffc: 0x26a40640  addiu       $a0, $s5, 0x640
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x1c1000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1004: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1008: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1c1008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c100c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c100cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c1010: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1c1010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c1014: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x1c1014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c1018: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1c1018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c101c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1c101cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1020: 0x26b10200  addiu       $s1, $s5, 0x200
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x1c1024: 0x26b30100  addiu       $s3, $s5, 0x100
    ctx->pc = 0x1c1024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1c1028: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x1c1028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x1c102c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1c102cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1030: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x1c1030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1034: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x1c1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1038: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x1c1038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x1c103c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1c103cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c1040: 0x7ea20020  sq          $v0, 0x20($s5)
    ctx->pc = 0x1c1040u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    // 0x1c1044: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x1c1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1048: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c1048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c104c: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x1c104cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x1c1050: 0xc4e10030  lwc1        $f1, 0x30($a3)
    ctx->pc = 0x1c1050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1054: 0xe6a10080  swc1        $f1, 0x80($s5)
    ctx->pc = 0x1c1054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 128), bits); }
    // 0x1c1058: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x1c1058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c105c: 0xe6a00084  swc1        $f0, 0x84($s5)
    ctx->pc = 0x1c105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
    // 0x1c1060: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x1c1060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1c1064: 0x7ea20090  sq          $v0, 0x90($s5)
    ctx->pc = 0x1c1064u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 144), GPR_VEC(ctx, 2));
    // 0x1c1068: 0xc6a00098  lwc1        $f0, 0x98($s5)
    ctx->pc = 0x1c1068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c106c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c1070: 0xe6a00098  swc1        $f0, 0x98($s5)
    ctx->pc = 0x1c1070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
    // 0x1c1074: 0x78620080  lq          $v0, 0x80($v1)
    ctx->pc = 0x1c1074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1c1078: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c107c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1080: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c1080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c1084: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1C1084u;
    SET_GPR_U32(ctx, 31, 0x1C108Cu);
    ctx->pc = 0x1C1088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1084u;
    // 0x1c1088: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1C1084u, 0x1C108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C108Cu;
label_1c108c:
    // 0x1c108c: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x1c108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1c1090: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c1090u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c1094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1c109cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c10a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c10a4: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1C10A4u;
    SET_GPR_U32(ctx, 31, 0x1C10ACu);
    ctx->pc = 0x1C10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10A4u;
    // 0x1c10a8: 0xc44c0050  lwc1        $f12, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C10A4u, 0x1C10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x1c10acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1c10b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c10b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10b4: 0xc681e920  lwc1        $f1, -0x16E0($s4)
    ctx->pc = 0x1c10b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294961440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10bc: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x1c10bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c10c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10c4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c10c8: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x1c10c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1c10cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c10ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c10d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c10d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c10d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c10d8: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1C10D8u;
    SET_GPR_U32(ctx, 31, 0x1C10E0u);
    ctx->pc = 0x1C10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10D8u;
    // 0x1c10dc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1C10D8u, 0x1C10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10E0u;
label_1c10e0:
    // 0x1c10e0: 0xc6a00834  lwc1        $f0, 0x834($s5)
    ctx->pc = 0x1c10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c10e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10e8: 0xc683e920  lwc1        $f3, -0x16E0($s4)
    ctx->pc = 0x1c10e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294961440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c10ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c10ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10f0: 0xc6a20830  lwc1        $f2, 0x830($s5)
    ctx->pc = 0x1c10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c10f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c10f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c10fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c10fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1104: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c1104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1108: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1c1108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c110c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c110cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c1110: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1C1110u;
    SET_GPR_U32(ctx, 31, 0x1C1118u);
    ctx->pc = 0x1C1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1110u;
    // 0x1c1114: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1C1110u, 0x1C1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1118u;
label_1c1118:
    // 0x1c1118: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c111c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1120: 0xc44ce910  lwc1        $f12, -0x16F0($v0)
    ctx->pc = 0x1c1120u;
    { uint32_t bits = FAST_READ32(0x50E910u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1128: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1C1128u;
    SET_GPR_U32(ctx, 31, 0x1C1130u);
    ctx->pc = 0x1C112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1128u;
    // 0x1c112c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C1128u, 0x1C1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1130u;
label_1c1130:
    // 0x1c1130: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c1134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1138: 0xc44ce914  lwc1        $f12, -0x16EC($v0)
    ctx->pc = 0x1c1138u;
    { uint32_t bits = FAST_READ32(0x50E914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c113c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1140: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1C1140u;
    SET_GPR_U32(ctx, 31, 0x1C1148u);
    ctx->pc = 0x1C1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1140u;
    // 0x1c1144: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1C1140u, 0x1C1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1148u;
label_1c1148:
    // 0x1c1148: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c114c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C114Cu;
    {
        const bool branch_taken_0x1c114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114Cu;
        // 0x1c1150: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c114c) {
            ctx->pc = 0x1C115Cu;
            goto label_1c115c;
        }
    }
    ctx->pc = 0x1C1154u;
    // 0x1c1154: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1154u;
    {
        const bool branch_taken_0x1c1154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1154) {
            ctx->pc = 0x1C1158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1154u;
            // 0x1c1158: 0x8ea2084c  lw          $v0, 0x84C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1178u;
            goto label_1c1178;
        }
    }
    ctx->pc = 0x1C115Cu;
label_1c115c:
    // 0x1c115c: 0x8ea2084c  lw          $v0, 0x84C($s5)
    ctx->pc = 0x1c115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2124)));
    // 0x1c1160: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1160u;
    {
        const bool branch_taken_0x1c1160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1160) {
            ctx->pc = 0x1C1188u;
            goto label_1c1188;
        }
    }
    ctx->pc = 0x1C1168u;
    // 0x1c1168: 0xc0702ec  jal         func_1C0BB0
    ctx->pc = 0x1C1168u;
    SET_GPR_U32(ctx, 31, 0x1C1170u);
    ctx->pc = 0x1C116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1168u;
    // 0x1c116c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BB0u, 0x1C1168u, 0x1C1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1170u;
label_1c1170:
    // 0x1c1170: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1170u;
    {
        const bool branch_taken_0x1c1170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1170) {
            ctx->pc = 0x1C1188u;
            goto label_1c1188;
        }
    }
    ctx->pc = 0x1C1178u;
label_1c1178:
    // 0x1c1178: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1178u;
    {
        const bool branch_taken_0x1c1178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1178) {
            ctx->pc = 0x1C1188u;
            goto label_1c1188;
        }
    }
    ctx->pc = 0x1C1180u;
    // 0x1c1180: 0xc0702ec  jal         func_1C0BB0
    ctx->pc = 0x1C1180u;
    SET_GPR_U32(ctx, 31, 0x1C1188u);
    ctx->pc = 0x1C1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1180u;
    // 0x1c1184: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BB0u, 0x1C1180u, 0x1C1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1188u;
label_1c1188:
    // 0x1c1188: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1C1188u;
    SET_GPR_U32(ctx, 31, 0x1C1190u);
    ctx->pc = 0x1C118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1188u;
    // 0x1c118c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1C1188u, 0x1C1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1190u;
label_1c1190:
    // 0x1c1190: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1C1190u;
    SET_GPR_U32(ctx, 31, 0x1C1198u);
    ctx->pc = 0x1C1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1190u;
    // 0x1c1194: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1C1190u, 0x1C1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1198u;
label_1c1198:
    // 0x1c1198: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c119c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c119cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c11a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c11a4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c11a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C11A8u;
    {
        const bool branch_taken_0x1c11a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A8u;
        // 0x1c11ac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a8) {
            ctx->pc = 0x1C11BCu;
            goto label_1c11bc;
        }
    }
    ctx->pc = 0x1C11B0u;
    // 0x1c11b0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c11b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c11b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C11B4u;
    {
        const bool branch_taken_0x1c11b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B4u;
        // 0x1c11b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11b4) {
            ctx->pc = 0x1C11D8u;
            goto label_1c11d8;
        }
    }
    ctx->pc = 0x1C11BCu;
label_1c11bc:
    // 0x1c11bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C11BCu;
    {
        const bool branch_taken_0x1c11bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11BCu;
        // 0x1c11c0: 0x26a20240  addiu       $v0, $s5, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11bc) {
            ctx->pc = 0x1C11D8u;
            goto label_1c11d8;
        }
    }
    ctx->pc = 0x1C11C4u;
    // 0x1c11c4: 0x26a30140  addiu       $v1, $s5, 0x140
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x1c11c8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1c11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c11cc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1c11ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1c11d0: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1c11d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c11d4: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x1c11d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_1c11d8:
    // 0x1c11d8: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1C11D8u;
    SET_GPR_U32(ctx, 31, 0x1C11E0u);
    ctx->pc = 0x1C11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11D8u;
    // 0x1c11dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1C11D8u, 0x1C11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11E0u;
label_1c11e0:
    // 0x1c11e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C11E0u;
    {
        const bool branch_taken_0x1c11e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11E0u;
        // 0x1c11e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11e0) {
            ctx->pc = 0x1C11F8u;
            goto label_1c11f8;
        }
    }
    ctx->pc = 0x1C11E8u;
label_1c11e8:
    // 0x1c11e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c11ec: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C11ECu;
    SET_GPR_U32(ctx, 31, 0x1C11F4u);
    ctx->pc = 0x1C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11ECu;
    // 0x1c11f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFCC0u, 0x1C11ECu, 0x1C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11F4u;
label_1c11f4:
    // 0x1c11f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c11f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c11f8:
    // 0x1c11f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c11f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c11fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c11fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1200: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c1200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1204: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c1204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1208: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c1208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c120c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c120cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1210: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c1210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1214: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c1214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c121c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1220: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1220u;
        // 0x1c1224: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1228u;
}
