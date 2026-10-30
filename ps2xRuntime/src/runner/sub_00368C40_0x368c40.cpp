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

// Function: sub_00368C40
// Address: 0x368c40 - 0x368ea0
void sub_00368C40_0x368c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368C40_0x368c40");
#endif

    switch (ctx->pc) {
        case 0x368c90u: goto label_368c90;
        case 0x368c98u: goto label_368c98;
        case 0x368cacu: goto label_368cac;
        case 0x368cb4u: goto label_368cb4;
        case 0x368cc8u: goto label_368cc8;
        case 0x368cd0u: goto label_368cd0;
        case 0x368ce4u: goto label_368ce4;
        case 0x368cecu: goto label_368cec;
        case 0x368d00u: goto label_368d00;
        case 0x368d08u: goto label_368d08;
        case 0x368d1cu: goto label_368d1c;
        case 0x368d24u: goto label_368d24;
        case 0x368d38u: goto label_368d38;
        case 0x368d40u: goto label_368d40;
        case 0x368d54u: goto label_368d54;
        case 0x368d5cu: goto label_368d5c;
        case 0x368d70u: goto label_368d70;
        case 0x368d78u: goto label_368d78;
        case 0x368d8cu: goto label_368d8c;
        case 0x368d94u: goto label_368d94;
        case 0x368da0u: goto label_368da0;
        case 0x368db8u: goto label_368db8;
        case 0x368dc0u: goto label_368dc0;
        case 0x368e00u: goto label_368e00;
        case 0x368e08u: goto label_368e08;
        case 0x368e1cu: goto label_368e1c;
        case 0x368e34u: goto label_368e34;
        case 0x368e48u: goto label_368e48;
        default: break;
    }

    ctx->pc = 0x368c40u;

    // 0x368c40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x368c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x368c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368c48: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x368c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x368c4c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x368c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x368c50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x368c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x368c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x368c5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x368c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x368c60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x368c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x368c64: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x368c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x368c68: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x368c68u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x368c6c: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x368c6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x368c70: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x368c70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x368c74: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x368c74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x368c78: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x368c78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x368c7c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x368c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x368c80: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x368c80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x368c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368c88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368C88u;
    SET_GPR_U32(ctx, 31, 0x368C90u);
    ctx->pc = 0x368C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C88u;
    // 0x368c8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368C88u, 0x368C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C90u;
label_368c90:
    // 0x368c90: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368C90u;
    SET_GPR_U32(ctx, 31, 0x368C98u);
    ctx->pc = 0x368C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C90u;
    // 0x368c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368C90u, 0x368C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C98u;
label_368c98:
    // 0x368c98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ca4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368CA4u;
    SET_GPR_U32(ctx, 31, 0x368CACu);
    ctx->pc = 0x368CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CA4u;
    // 0x368ca8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368CA4u, 0x368CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CACu;
label_368cac:
    // 0x368cac: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368CACu;
    SET_GPR_U32(ctx, 31, 0x368CB4u);
    ctx->pc = 0x368CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CACu;
    // 0x368cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368CACu, 0x368CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CB4u;
label_368cb4:
    // 0x368cb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368cb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x368cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368cbc: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x368cbcu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x368cc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368CC0u;
    SET_GPR_U32(ctx, 31, 0x368CC8u);
    ctx->pc = 0x368CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CC0u;
    // 0x368cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368CC0u, 0x368CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CC8u;
label_368cc8:
    // 0x368cc8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368CC8u;
    SET_GPR_U32(ctx, 31, 0x368CD0u);
    ctx->pc = 0x368CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CC8u;
    // 0x368ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368CC8u, 0x368CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CD0u;
label_368cd0:
    // 0x368cd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368cd4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x368cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368cd8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x368cd8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x368cdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368CDCu;
    SET_GPR_U32(ctx, 31, 0x368CE4u);
    ctx->pc = 0x368CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CDCu;
    // 0x368ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368CDCu, 0x368CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CE4u;
label_368ce4:
    // 0x368ce4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368CE4u;
    SET_GPR_U32(ctx, 31, 0x368CECu);
    ctx->pc = 0x368CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CE4u;
    // 0x368ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368CE4u, 0x368CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CECu;
label_368cec:
    // 0x368cec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368cf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x368cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x368cf4: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x368cf4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x368cf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368CF8u;
    SET_GPR_U32(ctx, 31, 0x368D00u);
    ctx->pc = 0x368CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CF8u;
    // 0x368cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368CF8u, 0x368D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D00u;
label_368d00:
    // 0x368d00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368D00u;
    SET_GPR_U32(ctx, 31, 0x368D08u);
    ctx->pc = 0x368D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D00u;
    // 0x368d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368D00u, 0x368D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D08u;
label_368d08:
    // 0x368d08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x368d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x368d10: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x368d10u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x368d14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368D14u;
    SET_GPR_U32(ctx, 31, 0x368D1Cu);
    ctx->pc = 0x368D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D14u;
    // 0x368d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368D14u, 0x368D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D1Cu;
label_368d1c:
    // 0x368d1c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368D1Cu;
    SET_GPR_U32(ctx, 31, 0x368D24u);
    ctx->pc = 0x368D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D1Cu;
    // 0x368d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368D1Cu, 0x368D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D24u;
label_368d24:
    // 0x368d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d28: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x368d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x368d2c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x368d2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x368d30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368D30u;
    SET_GPR_U32(ctx, 31, 0x368D38u);
    ctx->pc = 0x368D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D30u;
    // 0x368d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368D30u, 0x368D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D38u;
label_368d38:
    // 0x368d38: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368D38u;
    SET_GPR_U32(ctx, 31, 0x368D40u);
    ctx->pc = 0x368D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D38u;
    // 0x368d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368D38u, 0x368D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D40u;
label_368d40:
    // 0x368d40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x368d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x368d48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x368d48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x368d4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368D4Cu;
    SET_GPR_U32(ctx, 31, 0x368D54u);
    ctx->pc = 0x368D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D4Cu;
    // 0x368d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368D4Cu, 0x368D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D54u;
label_368d54:
    // 0x368d54: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368D54u;
    SET_GPR_U32(ctx, 31, 0x368D5Cu);
    ctx->pc = 0x368D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D54u;
    // 0x368d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368D54u, 0x368D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D5Cu;
label_368d5c:
    // 0x368d5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x368d5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x368d60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d64: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x368d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x368d68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368D68u;
    SET_GPR_U32(ctx, 31, 0x368D70u);
    ctx->pc = 0x368D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D68u;
    // 0x368d6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368D68u, 0x368D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D70u;
label_368d70:
    // 0x368d70: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368D70u;
    SET_GPR_U32(ctx, 31, 0x368D78u);
    ctx->pc = 0x368D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D70u;
    // 0x368d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368D70u, 0x368D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D78u;
label_368d78:
    // 0x368d78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d80: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x368d84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368D84u;
    SET_GPR_U32(ctx, 31, 0x368D8Cu);
    ctx->pc = 0x368D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D84u;
    // 0x368d88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368D84u, 0x368D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D8Cu;
label_368d8c:
    // 0x368d8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368D8Cu;
    SET_GPR_U32(ctx, 31, 0x368D94u);
    ctx->pc = 0x368D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D8Cu;
    // 0x368d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368D8Cu, 0x368D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D94u;
label_368d94:
    // 0x368d94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x368d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d9c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x368d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_368da0:
    // 0x368da0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368dac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368db0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368DB0u;
    SET_GPR_U32(ctx, 31, 0x368DB8u);
    ctx->pc = 0x368DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368DB0u;
    // 0x368db4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368DB0u, 0x368DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DB8u;
label_368db8:
    // 0x368db8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368DB8u;
    SET_GPR_U32(ctx, 31, 0x368DC0u);
    ctx->pc = 0x368DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368DB8u;
    // 0x368dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368DB8u, 0x368DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DC0u;
label_368dc0:
    // 0x368dc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x368dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x368dc4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x368dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x368dc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368DC8u;
    {
        const bool branch_taken_0x368dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DC8u;
        // 0x368dcc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368dc8) {
            ctx->pc = 0x368DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368da0;
        }
    }
    ctx->pc = 0x368DD0u;
    // 0x368dd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x368dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x368dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368dd8: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x368dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x368ddc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x368ddcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x368de0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x368de0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x368de4: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x368de4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x368de8: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x368de8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x368dec: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x368decu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x368df0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x368df0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x368df4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x368df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368df8: 0xc0637c0  jal         func_18DF00
    ctx->pc = 0x368DF8u;
    SET_GPR_U32(ctx, 31, 0x368E00u);
    ctx->pc = 0x368DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368DF8u;
    // 0x368dfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF00u, 0x368DF8u, 0x368E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E00u;
label_368e00:
    // 0x368e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e04: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x368e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_368e08:
    // 0x368e08: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x368e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368e0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x368e10: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368e14: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x368E14u;
    SET_GPR_U32(ctx, 31, 0x368E1Cu);
    ctx->pc = 0x368E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E14u;
    // 0x368e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x368E14u, 0x368E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E1Cu;
label_368e1c:
    // 0x368e1c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368E1Cu;
    {
        const bool branch_taken_0x368e1c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x368E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E1Cu;
        // 0x368e20: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e1c) {
            ctx->pc = 0x368E38u;
            goto label_368e38;
        }
    }
    ctx->pc = 0x368E24u;
    // 0x368e24: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x368e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x368e28: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x368e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x368e2c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x368E2Cu;
    SET_GPR_U32(ctx, 31, 0x368E34u);
    ctx->pc = 0x368E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E2Cu;
    // 0x368e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x368E2Cu, 0x368E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E34u;
label_368e34:
    // 0x368e34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368e38:
    // 0x368e38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e40: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368E40u;
    SET_GPR_U32(ctx, 31, 0x368E48u);
    ctx->pc = 0x368E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E40u;
    // 0x368e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368E40u, 0x368E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E48u;
label_368e48:
    // 0x368e48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e4c: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x368e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x368e50: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x368E50u;
    {
        const bool branch_taken_0x368e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E50u;
        // 0x368e54: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e50) {
            ctx->pc = 0x368E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368e08;
        }
    }
    ctx->pc = 0x368E58u;
    // 0x368e58: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x368e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e60: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x368e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368e64: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x368e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368e68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x368e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368e6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x368e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368e70: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x368e70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368e78: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x368e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x368e7c: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x368e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x368e80: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x368e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x368e84: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x368e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x368e88: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x368e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x368e8c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x368e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x368e90: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x368e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368e94: 0x3e00008  jr          $ra
    ctx->pc = 0x368E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E94u;
        // 0x368e98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368E9Cu;
    // 0x368e9c: 0x0  nop
    ctx->pc = 0x368e9cu;
    // NOP
    ctx->pc = 0x368ea0u;
}
