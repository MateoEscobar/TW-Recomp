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

// Function: sub_00362C00
// Address: 0x362c00 - 0x362d68
void sub_00362C00_0x362c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362C00_0x362c00");
#endif

    switch (ctx->pc) {
        case 0x362c40u: goto label_362c40;
        case 0x362c48u: goto label_362c48;
        case 0x362c5cu: goto label_362c5c;
        case 0x362c74u: goto label_362c74;
        case 0x362c7cu: goto label_362c7c;
        case 0x362c94u: goto label_362c94;
        case 0x362c9cu: goto label_362c9c;
        case 0x362cb0u: goto label_362cb0;
        case 0x362cb8u: goto label_362cb8;
        case 0x362cccu: goto label_362ccc;
        case 0x362cd4u: goto label_362cd4;
        case 0x362ce8u: goto label_362ce8;
        case 0x362cf0u: goto label_362cf0;
        case 0x362d04u: goto label_362d04;
        case 0x362d0cu: goto label_362d0c;
        case 0x362d30u: goto label_362d30;
        default: break;
    }

    ctx->pc = 0x362c00u;

    // 0x362c00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x362c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x362c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362c08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x362c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x362c0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x362c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x362c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x362c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x362c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x362c1c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x362c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x362c20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c24: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x362c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x362c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362c2c: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x362c2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x362c30: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x362c30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x362c34: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x362c34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x362c38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362C38u;
    SET_GPR_U32(ctx, 31, 0x362C40u);
    ctx->pc = 0x362C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C38u;
    // 0x362c3c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362C38u, 0x362C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C40u;
label_362c40:
    // 0x362c40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362C40u;
    SET_GPR_U32(ctx, 31, 0x362C48u);
    ctx->pc = 0x362C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C40u;
    // 0x362c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362C40u, 0x362C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C48u;
label_362c48:
    // 0x362c48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x362c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362c54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x362C54u;
    SET_GPR_U32(ctx, 31, 0x362C5Cu);
    ctx->pc = 0x362C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C54u;
    // 0x362c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x362C54u, 0x362C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C5Cu;
label_362c5c:
    // 0x362c5c: 0x34068038  ori         $a2, $zero, 0x8038
    ctx->pc = 0x362c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x362c60: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x362c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x362c64: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x362c64u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x362c68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362c6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362C6Cu;
    SET_GPR_U32(ctx, 31, 0x362C74u);
    ctx->pc = 0x362C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C6Cu;
    // 0x362c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362C6Cu, 0x362C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C74u;
label_362c74:
    // 0x362c74: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362C74u;
    SET_GPR_U32(ctx, 31, 0x362C7Cu);
    ctx->pc = 0x362C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C74u;
    // 0x362c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362C74u, 0x362C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C7Cu;
label_362c7c:
    // 0x362c7c: 0x34068058  ori         $a2, $zero, 0x8058
    ctx->pc = 0x362c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32856);
    // 0x362c80: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x362c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x362c84: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x362c84u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x362c88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362c8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362C8Cu;
    SET_GPR_U32(ctx, 31, 0x362C94u);
    ctx->pc = 0x362C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C8Cu;
    // 0x362c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362C8Cu, 0x362C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C94u;
label_362c94:
    // 0x362c94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362C94u;
    SET_GPR_U32(ctx, 31, 0x362C9Cu);
    ctx->pc = 0x362C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C94u;
    // 0x362c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362C94u, 0x362C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C9Cu;
label_362c9c:
    // 0x362c9c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x362c9cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x362ca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ca4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362ca8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362CA8u;
    SET_GPR_U32(ctx, 31, 0x362CB0u);
    ctx->pc = 0x362CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CA8u;
    // 0x362cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362CA8u, 0x362CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CB0u;
label_362cb0:
    // 0x362cb0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362CB0u;
    SET_GPR_U32(ctx, 31, 0x362CB8u);
    ctx->pc = 0x362CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CB0u;
    // 0x362cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362CB0u, 0x362CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CB8u;
label_362cb8:
    // 0x362cb8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x362cb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x362cbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x362cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362cc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362CC4u;
    SET_GPR_U32(ctx, 31, 0x362CCCu);
    ctx->pc = 0x362CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CC4u;
    // 0x362cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362CC4u, 0x362CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CCCu;
label_362ccc:
    // 0x362ccc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362CCCu;
    SET_GPR_U32(ctx, 31, 0x362CD4u);
    ctx->pc = 0x362CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CCCu;
    // 0x362cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362CCCu, 0x362CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CD4u;
label_362cd4:
    // 0x362cd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x362cd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x362cd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cdc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x362cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x362ce0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362CE0u;
    SET_GPR_U32(ctx, 31, 0x362CE8u);
    ctx->pc = 0x362CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CE0u;
    // 0x362ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362CE0u, 0x362CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CE8u;
label_362ce8:
    // 0x362ce8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362CE8u;
    SET_GPR_U32(ctx, 31, 0x362CF0u);
    ctx->pc = 0x362CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CE8u;
    // 0x362cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362CE8u, 0x362CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CF0u;
label_362cf0:
    // 0x362cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cfc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362CFCu;
    SET_GPR_U32(ctx, 31, 0x362D04u);
    ctx->pc = 0x362D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CFCu;
    // 0x362d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362CFCu, 0x362D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D04u;
label_362d04:
    // 0x362d04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362D04u;
    SET_GPR_U32(ctx, 31, 0x362D0Cu);
    ctx->pc = 0x362D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D04u;
    // 0x362d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362D04u, 0x362D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D0Cu;
label_362d0c:
    // 0x362d0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x362d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x362d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x362d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d18: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x362d18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x362d1c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x362d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x362d20: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x362d20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x362d24: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x362d24u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x362d28: 0xc0b8c24  jal         func_2E3090
    ctx->pc = 0x362D28u;
    SET_GPR_U32(ctx, 31, 0x362D30u);
    ctx->pc = 0x362D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D28u;
    // 0x362d2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x362D28u, 0x362D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D30u;
label_362d30:
    // 0x362d30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x362d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x362d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362d3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x362d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362d40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x362d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362d44: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x362d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362d4c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x362d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x362d50: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x362d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x362d54: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x362d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x362d58: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x362d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x362d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x362D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D5Cu;
        // 0x362d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362D64u;
    // 0x362d64: 0x0  nop
    ctx->pc = 0x362d64u;
    // NOP
    ctx->pc = 0x362d68u;
}
