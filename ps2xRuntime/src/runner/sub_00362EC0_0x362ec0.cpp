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

// Function: sub_00362EC0
// Address: 0x362ec0 - 0x363018
void sub_00362EC0_0x362ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362EC0_0x362ec0");
#endif

    switch (ctx->pc) {
        case 0x362ef8u: goto label_362ef8;
        case 0x362f00u: goto label_362f00;
        case 0x362f14u: goto label_362f14;
        case 0x362f1cu: goto label_362f1c;
        case 0x362f34u: goto label_362f34;
        case 0x362f3cu: goto label_362f3c;
        case 0x362f50u: goto label_362f50;
        case 0x362f58u: goto label_362f58;
        case 0x362f68u: goto label_362f68;
        case 0x362f80u: goto label_362f80;
        case 0x362f88u: goto label_362f88;
        case 0x362fb0u: goto label_362fb0;
        case 0x362fb8u: goto label_362fb8;
        case 0x362fc8u: goto label_362fc8;
        case 0x362fdcu: goto label_362fdc;
        default: break;
    }

    ctx->pc = 0x362ec0u;

    // 0x362ec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x362ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362ec8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x362ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x362ecc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x362eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x362ed0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x362ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ed8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x362ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x362edc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x362edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x362ee0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x362ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362ee4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x362ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x362ee8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x362ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x362eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x362ef0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362EF0u;
    SET_GPR_U32(ctx, 31, 0x362EF8u);
    ctx->pc = 0x362EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EF0u;
    // 0x362ef4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362EF0u, 0x362EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EF8u;
label_362ef8:
    // 0x362ef8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362EF8u;
    SET_GPR_U32(ctx, 31, 0x362F00u);
    ctx->pc = 0x362EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EF8u;
    // 0x362efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362EF8u, 0x362F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F00u;
label_362f00:
    // 0x362f00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362F0Cu;
    SET_GPR_U32(ctx, 31, 0x362F14u);
    ctx->pc = 0x362F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F0Cu;
    // 0x362f10: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362F0Cu, 0x362F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F14u;
label_362f14:
    // 0x362f14: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362F14u;
    SET_GPR_U32(ctx, 31, 0x362F1Cu);
    ctx->pc = 0x362F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F14u;
    // 0x362f18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362F14u, 0x362F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F1Cu;
label_362f1c:
    // 0x362f1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x362f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362f20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362F2Cu;
    SET_GPR_U32(ctx, 31, 0x362F34u);
    ctx->pc = 0x362F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F2Cu;
    // 0x362f30: 0x2ac03  sra         $s5, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362F2Cu, 0x362F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F34u;
label_362f34:
    // 0x362f34: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362F34u;
    SET_GPR_U32(ctx, 31, 0x362F3Cu);
    ctx->pc = 0x362F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F34u;
    // 0x362f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362F34u, 0x362F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F3Cu;
label_362f3c:
    // 0x362f3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362f48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362F48u;
    SET_GPR_U32(ctx, 31, 0x362F50u);
    ctx->pc = 0x362F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F48u;
    // 0x362f4c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362F48u, 0x362F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F50u;
label_362f50:
    // 0x362f50: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362F50u;
    SET_GPR_U32(ctx, 31, 0x362F58u);
    ctx->pc = 0x362F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F50u;
    // 0x362f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362F50u, 0x362F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F58u;
label_362f58:
    // 0x362f58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f60: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x362f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f64: 0x0  nop
    ctx->pc = 0x362f64u;
    // NOP
label_362f68:
    // 0x362f68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x362f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362f74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f78: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x362F78u;
    SET_GPR_U32(ctx, 31, 0x362F80u);
    ctx->pc = 0x362F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F78u;
    // 0x362f7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x362F78u, 0x362F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F80u;
label_362f80:
    // 0x362f80: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362F80u;
    SET_GPR_U32(ctx, 31, 0x362F88u);
    ctx->pc = 0x362F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F80u;
    // 0x362f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362F80u, 0x362F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F88u;
label_362f88:
    // 0x362f88: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x362f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x362f8c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x362f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x362f90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x362F90u;
    {
        const bool branch_taken_0x362f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F90u;
        // 0x362f94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f90) {
            ctx->pc = 0x362F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362f68;
        }
    }
    ctx->pc = 0x362F98u;
    // 0x362f98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x362f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362f9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x362f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fa0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x362fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fa4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x362fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fa8: 0xc0a9f42  jal         func_2A7D08
    ctx->pc = 0x362FA8u;
    SET_GPR_U32(ctx, 31, 0x362FB0u);
    ctx->pc = 0x362FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362FA8u;
    // 0x362fac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D08u, 0x362FA8u, 0x362FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FB0u;
label_362fb0:
    // 0x362fb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fb4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x362fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_362fb8:
    // 0x362fb8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x362fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x362fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x362fc0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x362FC0u;
    SET_GPR_U32(ctx, 31, 0x362FC8u);
    ctx->pc = 0x362FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362FC0u;
    // 0x362fc4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x362FC0u, 0x362FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FC8u;
label_362fc8:
    // 0x362fc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x362fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362fd4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x362FD4u;
    SET_GPR_U32(ctx, 31, 0x362FDCu);
    ctx->pc = 0x362FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362FD4u;
    // 0x362fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x362FD4u, 0x362FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FDCu;
label_362fdc:
    // 0x362fdc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x362fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x362fe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x362FE0u;
    {
        const bool branch_taken_0x362fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FE0u;
        // 0x362fe4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fe0) {
            ctx->pc = 0x362FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362fb8;
        }
    }
    ctx->pc = 0x362FE8u;
    // 0x362fe8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x362fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ff0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x362ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362ff4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x362ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362ff8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x362ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362ffc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x362ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363000: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x363000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363004: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x363004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36300c: 0x3e00008  jr          $ra
    ctx->pc = 0x36300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36300Cu;
        // 0x363010: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363014u;
    // 0x363014: 0x0  nop
    ctx->pc = 0x363014u;
    // NOP
    ctx->pc = 0x363018u;
}
