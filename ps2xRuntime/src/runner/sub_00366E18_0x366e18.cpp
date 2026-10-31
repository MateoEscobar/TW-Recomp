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

// Function: sub_00366E18
// Address: 0x366e18 - 0x366f90
void sub_00366E18_0x366e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366E18_0x366e18");
#endif

    switch (ctx->pc) {
        case 0x366e54u: goto label_366e54;
        case 0x366e5cu: goto label_366e5c;
        case 0x366e70u: goto label_366e70;
        case 0x366e78u: goto label_366e78;
        case 0x366e8cu: goto label_366e8c;
        case 0x366e94u: goto label_366e94;
        case 0x366ea8u: goto label_366ea8;
        case 0x366eb0u: goto label_366eb0;
        case 0x366ec4u: goto label_366ec4;
        case 0x366ed0u: goto label_366ed0;
        case 0x366ee8u: goto label_366ee8;
        case 0x366ef0u: goto label_366ef0;
        case 0x366f1cu: goto label_366f1c;
        case 0x366f28u: goto label_366f28;
        case 0x366f30u: goto label_366f30;
        case 0x366f40u: goto label_366f40;
        case 0x366f54u: goto label_366f54;
        default: break;
    }

    ctx->pc = 0x366e18u;

    // 0x366e18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x366e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x366e1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366e20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x366e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x366e24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x366e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x366e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x366e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x366e34: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x366e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x366e38: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x366e38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x366e3c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x366e3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x366e40: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x366e40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x366e44: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x366e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x366e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366e4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366E4Cu;
    SET_GPR_U32(ctx, 31, 0x366E54u);
    ctx->pc = 0x366E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E4Cu;
    // 0x366e50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366E4Cu, 0x366E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E54u;
label_366e54:
    // 0x366e54: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366E54u;
    SET_GPR_U32(ctx, 31, 0x366E5Cu);
    ctx->pc = 0x366E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E54u;
    // 0x366e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366E54u, 0x366E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E5Cu;
label_366e5c:
    // 0x366e5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366e64: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x366e64u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x366e68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366E68u;
    SET_GPR_U32(ctx, 31, 0x366E70u);
    ctx->pc = 0x366E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E68u;
    // 0x366e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366E68u, 0x366E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E70u;
label_366e70:
    // 0x366e70: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366E70u;
    SET_GPR_U32(ctx, 31, 0x366E78u);
    ctx->pc = 0x366E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E70u;
    // 0x366e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366E70u, 0x366E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E78u;
label_366e78:
    // 0x366e78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x366e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366e80: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366e80u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x366e84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366E84u;
    SET_GPR_U32(ctx, 31, 0x366E8Cu);
    ctx->pc = 0x366E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E84u;
    // 0x366e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366E84u, 0x366E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E8Cu;
label_366e8c:
    // 0x366e8c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366E8Cu;
    SET_GPR_U32(ctx, 31, 0x366E94u);
    ctx->pc = 0x366E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E8Cu;
    // 0x366e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366E8Cu, 0x366E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E94u;
label_366e94:
    // 0x366e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366e9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x366e9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366ea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366EA0u;
    SET_GPR_U32(ctx, 31, 0x366EA8u);
    ctx->pc = 0x366EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EA0u;
    // 0x366ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366EA0u, 0x366EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EA8u;
label_366ea8:
    // 0x366ea8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366EA8u;
    SET_GPR_U32(ctx, 31, 0x366EB0u);
    ctx->pc = 0x366EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EA8u;
    // 0x366eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366EA8u, 0x366EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EB0u;
label_366eb0:
    // 0x366eb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366eb8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x366eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366ebc: 0xc102488  jal         func_409220
    ctx->pc = 0x366EBCu;
    SET_GPR_U32(ctx, 31, 0x366EC4u);
    ctx->pc = 0x366EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EBCu;
    // 0x366ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366EBCu, 0x366EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EC4u;
label_366ec4:
    // 0x366ec4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x366ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ec8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ecc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x366eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_366ed0:
    // 0x366ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ed8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366edc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ee0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366EE0u;
    SET_GPR_U32(ctx, 31, 0x366EE8u);
    ctx->pc = 0x366EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EE0u;
    // 0x366ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366EE0u, 0x366EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EE8u;
label_366ee8:
    // 0x366ee8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366EE8u;
    SET_GPR_U32(ctx, 31, 0x366EF0u);
    ctx->pc = 0x366EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EE8u;
    // 0x366eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366EE8u, 0x366EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EF0u;
label_366ef0:
    // 0x366ef0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366ef4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366ef8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366EF8u;
    {
        const bool branch_taken_0x366ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EF8u;
        // 0x366efc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ef8) {
            ctx->pc = 0x366ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ed0;
        }
    }
    ctx->pc = 0x366F00u;
    // 0x366f00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f04: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x366f04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x366f08: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x366f08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x366f0c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x366f0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x366f10: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x366f10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x366f14: 0xc0472ec  jal         func_11CBB0
    ctx->pc = 0x366F14u;
    SET_GPR_U32(ctx, 31, 0x366F1Cu);
    ctx->pc = 0x366F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F14u;
    // 0x366f18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CBB0u, 0x366F14u, 0x366F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F1Cu;
label_366f1c:
    // 0x366f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x366f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f20: 0xc102562  jal         func_409588
    ctx->pc = 0x366F20u;
    SET_GPR_U32(ctx, 31, 0x366F28u);
    ctx->pc = 0x366F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F20u;
    // 0x366f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x366F20u, 0x366F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F28u;
label_366f28:
    // 0x366f28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x366f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_366f30:
    // 0x366f30: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x366f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x366f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366f38: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366F38u;
    SET_GPR_U32(ctx, 31, 0x366F40u);
    ctx->pc = 0x366F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F38u;
    // 0x366f3c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366F38u, 0x366F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F40u;
label_366f40:
    // 0x366f40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f4c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x366F4Cu;
    SET_GPR_U32(ctx, 31, 0x366F54u);
    ctx->pc = 0x366F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F4Cu;
    // 0x366f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x366F4Cu, 0x366F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F54u;
label_366f54:
    // 0x366f54: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366f58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366F58u;
    {
        const bool branch_taken_0x366f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F58u;
        // 0x366f5c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f58) {
            ctx->pc = 0x366F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366f30;
        }
    }
    ctx->pc = 0x366F60u;
    // 0x366f60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x366f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x366f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x366f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x366f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366f70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x366f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366f78: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x366f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x366f7c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x366f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x366f80: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x366f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366f84: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x366f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366f88: 0x3e00008  jr          $ra
    ctx->pc = 0x366F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F88u;
        // 0x366f8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366F90u;
}
