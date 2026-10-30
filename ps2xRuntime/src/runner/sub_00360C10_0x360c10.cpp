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

// Function: sub_00360C10
// Address: 0x360c10 - 0x360d98
void sub_00360C10_0x360c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360C10_0x360c10");
#endif

    switch (ctx->pc) {
        case 0x360c50u: goto label_360c50;
        case 0x360c58u: goto label_360c58;
        case 0x360c64u: goto label_360c64;
        case 0x360c7cu: goto label_360c7c;
        case 0x360c94u: goto label_360c94;
        case 0x360c9cu: goto label_360c9c;
        case 0x360cb0u: goto label_360cb0;
        case 0x360cc4u: goto label_360cc4;
        case 0x360cccu: goto label_360ccc;
        case 0x360ce0u: goto label_360ce0;
        case 0x360ce8u: goto label_360ce8;
        case 0x360cfcu: goto label_360cfc;
        case 0x360d04u: goto label_360d04;
        case 0x360d18u: goto label_360d18;
        case 0x360d20u: goto label_360d20;
        case 0x360d34u: goto label_360d34;
        case 0x360d5cu: goto label_360d5c;
        default: break;
    }

    ctx->pc = 0x360c10u;

    // 0x360c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x360c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x360c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360c18: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x360c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x360c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x360c20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c24: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x360c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x360c28: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x360c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x360c2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x360c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x360c30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x360c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x360c34: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x360c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x360c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x360c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x360c3c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x360c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x360c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360c44: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x360c44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x360c48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360C48u;
    SET_GPR_U32(ctx, 31, 0x360C50u);
    ctx->pc = 0x360C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C48u;
    // 0x360c4c: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360C48u, 0x360C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C50u;
label_360c50:
    // 0x360c50: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360C50u;
    SET_GPR_U32(ctx, 31, 0x360C58u);
    ctx->pc = 0x360C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C50u;
    // 0x360c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360C50u, 0x360C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C58u;
label_360c58:
    // 0x360c58: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x360c58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c5c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x360C5Cu;
    SET_GPR_U32(ctx, 31, 0x360C64u);
    ctx->pc = 0x360C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C5Cu;
    // 0x360c60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x360C5Cu, 0x360C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C64u;
label_360c64:
    // 0x360c64: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x360c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x360c68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360C68u;
    {
        const bool branch_taken_0x360c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C68u;
        // 0x360c6c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c68) {
            ctx->pc = 0x360C80u;
            goto label_360c80;
        }
    }
    ctx->pc = 0x360C70u;
    // 0x360c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x360c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c74: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x360C74u;
    SET_GPR_U32(ctx, 31, 0x360C7Cu);
    ctx->pc = 0x360C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C74u;
    // 0x360c78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x360C74u, 0x360C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C7Cu;
label_360c7c:
    // 0x360c7c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x360c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360c80:
    // 0x360c80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360c88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360c8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360C8Cu;
    SET_GPR_U32(ctx, 31, 0x360C94u);
    ctx->pc = 0x360C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C8Cu;
    // 0x360c90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360C8Cu, 0x360C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C94u;
label_360c94:
    // 0x360c94: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360C94u;
    SET_GPR_U32(ctx, 31, 0x360C9Cu);
    ctx->pc = 0x360C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C94u;
    // 0x360c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360C94u, 0x360C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C9Cu;
label_360c9c:
    // 0x360c9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x360c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ca0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x360ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ca4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360ca8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360CA8u;
    SET_GPR_U32(ctx, 31, 0x360CB0u);
    ctx->pc = 0x360CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CA8u;
    // 0x360cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360CA8u, 0x360CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CB0u;
label_360cb0:
    // 0x360cb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cb4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x360cb4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360cb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360cbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360CBCu;
    SET_GPR_U32(ctx, 31, 0x360CC4u);
    ctx->pc = 0x360CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CBCu;
    // 0x360cc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360CBCu, 0x360CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CC4u;
label_360cc4:
    // 0x360cc4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360CC4u;
    SET_GPR_U32(ctx, 31, 0x360CCCu);
    ctx->pc = 0x360CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CC4u;
    // 0x360cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360CC4u, 0x360CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CCCu;
label_360ccc:
    // 0x360ccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360cd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360CD8u;
    SET_GPR_U32(ctx, 31, 0x360CE0u);
    ctx->pc = 0x360CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CD8u;
    // 0x360cdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360CD8u, 0x360CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CE0u;
label_360ce0:
    // 0x360ce0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360CE0u;
    SET_GPR_U32(ctx, 31, 0x360CE8u);
    ctx->pc = 0x360CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CE0u;
    // 0x360ce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360CE0u, 0x360CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CE8u;
label_360ce8:
    // 0x360ce8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x360ce8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360cec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cf0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x360cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x360cf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360CF4u;
    SET_GPR_U32(ctx, 31, 0x360CFCu);
    ctx->pc = 0x360CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CF4u;
    // 0x360cf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360CF4u, 0x360CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CFCu;
label_360cfc:
    // 0x360cfc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360CFCu;
    SET_GPR_U32(ctx, 31, 0x360D04u);
    ctx->pc = 0x360D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CFCu;
    // 0x360d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360CFCu, 0x360D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D04u;
label_360d04:
    // 0x360d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x360d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d0c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x360d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x360d10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360D10u;
    SET_GPR_U32(ctx, 31, 0x360D18u);
    ctx->pc = 0x360D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D10u;
    // 0x360d14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360D10u, 0x360D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D18u;
label_360d18:
    // 0x360d18: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360D18u;
    SET_GPR_U32(ctx, 31, 0x360D20u);
    ctx->pc = 0x360D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D18u;
    // 0x360d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360D18u, 0x360D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D20u;
label_360d20:
    // 0x360d20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360d20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360d24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x360d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x360d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x360d2c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360D2Cu;
    SET_GPR_U32(ctx, 31, 0x360D34u);
    ctx->pc = 0x360D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D2Cu;
    // 0x360d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360D2Cu, 0x360D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D34u;
label_360d34:
    // 0x360d34: 0x2502b  sltu        $t2, $zero, $v0
    ctx->pc = 0x360d34u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360d38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x360d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x360d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d40: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x360d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x360d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x360d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x360d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x360d50: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x360d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d54: 0xc0b8450  jal         func_2E1140
    ctx->pc = 0x360D54u;
    SET_GPR_U32(ctx, 31, 0x360D5Cu);
    ctx->pc = 0x360D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D54u;
    // 0x360d58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1140u, 0x360D54u, 0x360D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D5Cu;
label_360d5c:
    // 0x360d5c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x360d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x360d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d64: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x360d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x360d68: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x360d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360d6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x360d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x360d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360d74: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x360d74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360d78: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x360d78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360d7c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x360d7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d84: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x360d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360d88: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x360d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x360D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D8Cu;
        // 0x360d90: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360D94u;
    // 0x360d94: 0x0  nop
    ctx->pc = 0x360d94u;
    // NOP
    ctx->pc = 0x360d98u;
}
