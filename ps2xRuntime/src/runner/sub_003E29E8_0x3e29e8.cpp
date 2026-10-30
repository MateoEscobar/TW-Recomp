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

// Function: sub_003E29E8
// Address: 0x3e29e8 - 0x3e2d90
void sub_003E29E8_0x3e29e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E29E8_0x3e29e8");
#endif

    switch (ctx->pc) {
        case 0x3e2a24u: goto label_3e2a24;
        case 0x3e2a30u: goto label_3e2a30;
        case 0x3e2a3cu: goto label_3e2a3c;
        case 0x3e2a44u: goto label_3e2a44;
        case 0x3e2a50u: goto label_3e2a50;
        case 0x3e2a5cu: goto label_3e2a5c;
        case 0x3e2a68u: goto label_3e2a68;
        case 0x3e2a74u: goto label_3e2a74;
        case 0x3e2a84u: goto label_3e2a84;
        case 0x3e2a98u: goto label_3e2a98;
        case 0x3e2aacu: goto label_3e2aac;
        case 0x3e2ac0u: goto label_3e2ac0;
        case 0x3e2ad8u: goto label_3e2ad8;
        case 0x3e2af4u: goto label_3e2af4;
        case 0x3e2becu: goto label_3e2bec;
        case 0x3e2c04u: goto label_3e2c04;
        case 0x3e2c20u: goto label_3e2c20;
        case 0x3e2c38u: goto label_3e2c38;
        case 0x3e2c54u: goto label_3e2c54;
        case 0x3e2c8cu: goto label_3e2c8c;
        case 0x3e2ca8u: goto label_3e2ca8;
        case 0x3e2cb4u: goto label_3e2cb4;
        case 0x3e2ce4u: goto label_3e2ce4;
        case 0x3e2cecu: goto label_3e2cec;
        case 0x3e2d10u: goto label_3e2d10;
        case 0x3e2d28u: goto label_3e2d28;
        case 0x3e2d30u: goto label_3e2d30;
        case 0x3e2d38u: goto label_3e2d38;
        case 0x3e2d5cu: goto label_3e2d5c;
        default: break;
    }

    ctx->pc = 0x3e29e8u;

    // 0x3e29e8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3e29e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x3e29ec: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3e29ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x3e29f0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3e29f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x3e29f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e29f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e29f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e29fc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3e29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x3e2a00: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3e2a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x3e2a04: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3e2a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x3e2a08: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x3e2a08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x3e2a0c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x3e2a0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x3e2a10: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x3e2a10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3e2a14: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x3e2a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3e2a18: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x3e2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x3e2a1c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E2A1Cu;
    SET_GPR_U32(ctx, 31, 0x3E2A24u);
    ctx->pc = 0x3E2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A1Cu;
    // 0x3e2a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2A1Cu, 0x3E2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A24u;
label_3e2a24:
    // 0x3e2a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a28: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E2A28u;
    SET_GPR_U32(ctx, 31, 0x3E2A30u);
    ctx->pc = 0x3E2A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A28u;
    // 0x3e2a2c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2A28u, 0x3E2A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A30u;
label_3e2a30:
    // 0x3e2a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a34: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E2A34u;
    SET_GPR_U32(ctx, 31, 0x3E2A3Cu);
    ctx->pc = 0x3E2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A34u;
    // 0x3e2a38: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2A34u, 0x3E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A3Cu;
label_3e2a3c:
    // 0x3e2a3c: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E2A3Cu;
    SET_GPR_U32(ctx, 31, 0x3E2A44u);
    ctx->pc = 0x3E2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A3Cu;
    // 0x3e2a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E2A3Cu, 0x3E2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A44u;
label_3e2a44:
    // 0x3e2a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a48: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E2A48u;
    SET_GPR_U32(ctx, 31, 0x3E2A50u);
    ctx->pc = 0x3E2A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A48u;
    // 0x3e2a4c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E2A48u, 0x3E2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A50u;
label_3e2a50:
    // 0x3e2a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a54: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E2A54u;
    SET_GPR_U32(ctx, 31, 0x3E2A5Cu);
    ctx->pc = 0x3E2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A54u;
    // 0x3e2a58: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E2A54u, 0x3E2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A5Cu;
label_3e2a5c:
    // 0x3e2a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a60: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E2A60u;
    SET_GPR_U32(ctx, 31, 0x3E2A68u);
    ctx->pc = 0x3E2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A60u;
    // 0x3e2a64: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E2A60u, 0x3E2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A68u;
label_3e2a68:
    // 0x3e2a68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e2a68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e2a6c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E2A6Cu;
    SET_GPR_U32(ctx, 31, 0x3E2A74u);
    ctx->pc = 0x3E2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A6Cu;
    // 0x3e2a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2A6Cu, 0x3E2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A74u;
label_3e2a74:
    // 0x3e2a74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e2a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e2a7c: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E2A7Cu;
    SET_GPR_U32(ctx, 31, 0x3E2A84u);
    ctx->pc = 0x3E2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A7Cu;
    // 0x3e2a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E2A7Cu, 0x3E2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A84u;
label_3e2a84:
    // 0x3e2a84: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e2a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2a88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e2a8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e2a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a90: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E2A90u;
    SET_GPR_U32(ctx, 31, 0x3E2A98u);
    ctx->pc = 0x3E2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2A90u;
    // 0x3e2a94: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E2A90u, 0x3E2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2A98u;
label_3e2a98:
    // 0x3e2a98: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e2a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2a9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e2aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e2aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2aa4: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E2AA4u;
    SET_GPR_U32(ctx, 31, 0x3E2AACu);
    ctx->pc = 0x3E2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AA4u;
    // 0x3e2aa8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E2AA4u, 0x3E2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2AACu;
label_3e2aac:
    // 0x3e2aac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e2aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ab4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3e2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3e2ab8: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3E2AB8u;
    SET_GPR_U32(ctx, 31, 0x3E2AC0u);
    ctx->pc = 0x3E2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AB8u;
    // 0x3e2abc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E2AB8u, 0x3E2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2AC0u;
label_3e2ac0:
    // 0x3e2ac0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x3e2ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3e2ac4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e2ac8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3e2ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e2acc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e2accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ad0: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x3E2AD0u;
    SET_GPR_U32(ctx, 31, 0x3E2AD8u);
    ctx->pc = 0x3E2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AD0u;
    // 0x3e2ad4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E2AD0u, 0x3E2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2AD8u;
label_3e2ad8:
    // 0x3e2ad8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3e2ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e2adc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e2adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e2ae0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e2ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ae4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e2ae8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3e2ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3e2aec: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x3E2AECu;
    SET_GPR_U32(ctx, 31, 0x3E2AF4u);
    ctx->pc = 0x3E2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2AECu;
    // 0x3e2af0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E2AECu, 0x3E2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2AF4u;
label_3e2af4:
    // 0x3e2af4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3e2af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e2af8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e2afc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e2afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3e2b00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3e2b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3e2b04: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e2b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e2b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e2b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b10: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3e2b10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3e2b14: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x3e2b14u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e2b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2b1c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x3e2b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3e2b20: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3e2b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3e2b24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3e2b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e2b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e2b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b30: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3e2b30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3e2b34: 0x0  nop
    ctx->pc = 0x3e2b34u;
    // NOP
    // 0x3e2b38: 0x0  nop
    ctx->pc = 0x3e2b38u;
    // NOP
    // 0x3e2b3c: 0x46010044  c1          0x10044
    ctx->pc = 0x3e2b3cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3e2b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2b44: 0x0  nop
    ctx->pc = 0x3e2b44u;
    // NOP
    // 0x3e2b48: 0x0  nop
    ctx->pc = 0x3e2b48u;
    // NOP
    // 0x3e2b4c: 0x46000004  c1          0x4
    ctx->pc = 0x3e2b4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3e2b50: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3e2b54: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x3e2b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e2b58: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3e2b5c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x3e2b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3e2b60: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3e2b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3e2b64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e2b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3e2b68: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3e2b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3e2b6c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e2b6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e2b70: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3e2b70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b74: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3e2b74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3e2b78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e2b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3e2b7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e2b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2b80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3e2b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3e2b84: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3e2b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b88: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3e2b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b8c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3e2b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b90: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3e2b90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3e2b94: 0x4a0003bf  vwaitq
    ctx->pc = 0x3e2b94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3e2b98: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3e2b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e2b9c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x3e2b9cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e2ba0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3e2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3e2ba4: 0x7e270070  sq          $a3, 0x70($s1)
    ctx->pc = 0x3e2ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 7));
    // 0x3e2ba8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3e2ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3e2bac: 0x7e260080  sq          $a2, 0x80($s1)
    ctx->pc = 0x3e2bacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 6));
    // 0x3e2bb0: 0x1058025  or          $s0, $t0, $a1
    ctx->pc = 0x3e2bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x3e2bb4: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x3e2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x3e2bb8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3e2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e2bbc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3e2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3e2bc0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3e2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3e2bc4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x3e2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x3e2bc8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3e2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3e2bcc: 0x7fa600c0  sq          $a2, 0xC0($sp)
    ctx->pc = 0x3e2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    // 0x3e2bd0: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3e2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x3e2bd4: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3e2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3e2bd8: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3e2bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3e2bdc: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x3e2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x3e2be0: 0xe62000cc  swc1        $f0, 0xCC($s1)
    ctx->pc = 0x3e2be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
    // 0x3e2be4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x3E2BE4u;
    SET_GPR_U32(ctx, 31, 0x3E2BECu);
    ctx->pc = 0x3E2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2BE4u;
    // 0x3e2be8: 0xe62100d4  swc1        $f1, 0xD4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E2BE4u, 0x3E2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2BECu;
label_3e2bec:
    // 0x3e2bec: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3e2becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e2bf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e2bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e2bf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e2bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2bf8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3e2bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e2bfc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x3E2BFCu;
    SET_GPR_U32(ctx, 31, 0x3E2C04u);
    ctx->pc = 0x3E2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2BFCu;
    // 0x3e2c00: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E2BFCu, 0x3E2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C04u;
label_3e2c04:
    // 0x3e2c04: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3e2c04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e2c08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e2c0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e2c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3e2c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e2c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2c14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e2c18: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x3E2C18u;
    SET_GPR_U32(ctx, 31, 0x3E2C20u);
    ctx->pc = 0x3E2C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C18u;
    // 0x3e2c1c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E2C18u, 0x3E2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C20u;
label_3e2c20:
    // 0x3e2c20: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3e2c20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e2c24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e2c28: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e2c2c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3e2c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e2c30: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x3E2C30u;
    SET_GPR_U32(ctx, 31, 0x3E2C38u);
    ctx->pc = 0x3E2C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C30u;
    // 0x3e2c34: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E2C30u, 0x3E2C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C38u;
label_3e2c38:
    // 0x3e2c38: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3e2c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e2c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e2c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c44: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x3e2c48: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3e2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3e2c4c: 0xc0e931e  jal         func_3A4C78
    ctx->pc = 0x3E2C4Cu;
    SET_GPR_U32(ctx, 31, 0x3E2C54u);
    ctx->pc = 0x3E2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C4Cu;
    // 0x3e2c50: 0x7e2200a0  sq          $v0, 0xA0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C78u, 0x3E2C4Cu, 0x3E2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C54u;
label_3e2c54:
    // 0x3e2c54: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3e2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e2c58: 0x56430010  bnel        $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E2C58u;
    {
        const bool branch_taken_0x3e2c58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2c58) {
            ctx->pc = 0x3E2C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2C58u;
            // 0x3e2c5c: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2C9Cu;
            goto label_3e2c9c;
        }
    }
    ctx->pc = 0x3E2C60u;
    // 0x3e2c60: 0x7a2200a0  lq          $v0, 0xA0($s1)
    ctx->pc = 0x3e2c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3e2c64: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3e2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x3e2c68: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x3e2c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c6c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3e2c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e2c70: 0xc62c00cc  lwc1        $f12, 0xCC($s1)
    ctx->pc = 0x3e2c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e2c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e2c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2c78: 0x460c0328  max.s       $f12, $f0, $f12
    ctx->pc = 0x3e2c78u;
    ctx->f[12] = std::max(ctx->f[0], ctx->f[12]);
    // 0x3e2c7c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3e2c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3e2c80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e2c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2c84: 0xc0e93a2  jal         func_3A4E88
    ctx->pc = 0x3E2C84u;
    SET_GPR_U32(ctx, 31, 0x3E2C8Cu);
    ctx->pc = 0x3E2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C84u;
    // 0x3e2c88: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3E2C84u, 0x3E2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C8Cu;
label_3e2c8c:
    // 0x3e2c8c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e2c90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e2c94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2C94u;
    {
        const bool branch_taken_0x3e2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C94u;
        // 0x3e2c98: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c94) {
            ctx->pc = 0x3E2CB4u;
            goto label_3e2cb4;
        }
    }
    ctx->pc = 0x3E2C9Cu;
label_3e2c9c:
    // 0x3e2c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ca0: 0xc0e9352  jal         func_3A4D48
    ctx->pc = 0x3E2CA0u;
    SET_GPR_U32(ctx, 31, 0x3E2CA8u);
    ctx->pc = 0x3E2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CA0u;
    // 0x3e2ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D48u, 0x3E2CA0u, 0x3E2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CA8u;
label_3e2ca8:
    // 0x3e2ca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e2ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cac: 0xc0e9404  jal         func_3A5010
    ctx->pc = 0x3E2CACu;
    SET_GPR_U32(ctx, 31, 0x3E2CB4u);
    ctx->pc = 0x3E2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CACu;
    // 0x3e2cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E2CACu, 0x3E2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CB4u;
label_3e2cb4:
    // 0x3e2cb4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e2cb8: 0xe63400b8  swc1        $f20, 0xB8($s1)
    ctx->pc = 0x3e2cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x3e2cbc: 0x344280e0  ori         $v0, $v0, 0x80E0
    ctx->pc = 0x3e2cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32992);
    // 0x3e2cc0: 0xe63500bc  swc1        $f21, 0xBC($s1)
    ctx->pc = 0x3e2cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x3e2cc4: 0xe63600c0  swc1        $f22, 0xC0($s1)
    ctx->pc = 0x3e2cc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x3e2cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e2cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ccc: 0xe63700c4  swc1        $f23, 0xC4($s1)
    ctx->pc = 0x3e2cccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x3e2cd0: 0xae3000c8  sw          $s0, 0xC8($s1)
    ctx->pc = 0x3e2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
    // 0x3e2cd4: 0xae3300d8  sw          $s3, 0xD8($s1)
    ctx->pc = 0x3e2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 19));
    // 0x3e2cd8: 0xae3400dc  sw          $s4, 0xDC($s1)
    ctx->pc = 0x3e2cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 20));
    // 0x3e2cdc: 0xc0e91da  jal         func_3A4768
    ctx->pc = 0x3E2CDCu;
    SET_GPR_U32(ctx, 31, 0x3E2CE4u);
    ctx->pc = 0x3E2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CDCu;
    // 0x3e2ce0: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3E2CDCu, 0x3E2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CE4u;
label_3e2ce4:
    // 0x3e2ce4: 0xc0e91da  jal         func_3A4768
    ctx->pc = 0x3E2CE4u;
    SET_GPR_U32(ctx, 31, 0x3E2CECu);
    ctx->pc = 0x3E2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CE4u;
    // 0x3e2ce8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3E2CE4u, 0x3E2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CECu;
label_3e2cec:
    // 0x3e2cec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3e2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e2cf0: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2CF0u;
    {
        const bool branch_taken_0x3e2cf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CF0u;
        // 0x3e2cf4: 0x2642ffef  addiu       $v0, $s2, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2cf0) {
            ctx->pc = 0x3E2D14u;
            goto label_3e2d14;
        }
    }
    ctx->pc = 0x3E2CF8u;
    // 0x3e2cf8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e2cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d00: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x3e2d04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e2d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3e2d08: 0xc0e94b2  jal         func_3A52C8
    ctx->pc = 0x3E2D08u;
    SET_GPR_U32(ctx, 31, 0x3E2D10u);
    ctx->pc = 0x3E2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D08u;
    // 0x3e2d0c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52C8u, 0x3E2D08u, 0x3E2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D10u;
label_3e2d10:
    // 0x3e2d10: 0x2642ffef  addiu       $v0, $s2, -0x11
    ctx->pc = 0x3e2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967279));
label_3e2d14:
    // 0x3e2d14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3e2d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2d18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E2D18u;
    {
        const bool branch_taken_0x3e2d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D18u;
        // 0x3e2d1c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d18) {
            ctx->pc = 0x3E2D60u;
            goto label_3e2d60;
        }
    }
    ctx->pc = 0x3E2D20u;
    // 0x3e2d20: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3E2D20u;
    SET_GPR_U32(ctx, 31, 0x3E2D28u);
    ctx->pc = 0x3E2D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D20u;
    // 0x3e2d24: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2D20u, 0x3E2D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D28u;
label_3e2d28:
    // 0x3e2d28: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3E2D28u;
    SET_GPR_U32(ctx, 31, 0x3E2D30u);
    ctx->pc = 0x3E2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D28u;
    // 0x3e2d2c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2D28u, 0x3E2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D30u;
label_3e2d30:
    // 0x3e2d30: 0xc0e94d0  jal         func_3A5340
    ctx->pc = 0x3E2D30u;
    SET_GPR_U32(ctx, 31, 0x3E2D38u);
    ctx->pc = 0x3E2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D30u;
    // 0x3e2d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3E2D30u, 0x3E2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D38u;
label_3e2d38:
    // 0x3e2d38: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3e2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e2d3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3e2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3e2d40: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3e2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e2d44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e2d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e2d48: 0x16440004  bne         $s2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2D48u;
    {
        const bool branch_taken_0x3e2d48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D48u;
        // 0x3e2d4c: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d48) {
            ctx->pc = 0x3E2D5Cu;
            goto label_3e2d5c;
        }
    }
    ctx->pc = 0x3E2D50u;
    // 0x3e2d50: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3e2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3e2d54: 0xc0e91f0  jal         func_3A47C0
    ctx->pc = 0x3E2D54u;
    SET_GPR_U32(ctx, 31, 0x3E2D5Cu);
    ctx->pc = 0x3E2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D54u;
    // 0x3e2d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3E2D54u, 0x3E2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D5Cu;
label_3e2d5c:
    // 0x3e2d5c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3e2d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3e2d60:
    // 0x3e2d60: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3e2d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3e2d64: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3e2d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e2d68: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3e2d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3e2d6c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3e2d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3e2d70: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x3e2d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3e2d74: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x3e2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3e2d78: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x3e2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3e2d7c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x3e2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3e2d80: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3e2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e2d84: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D84u;
        // 0x3e2d88: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2D8Cu;
    // 0x3e2d8c: 0x0  nop
    ctx->pc = 0x3e2d8cu;
    // NOP
    ctx->pc = 0x3e2d90u;
}
