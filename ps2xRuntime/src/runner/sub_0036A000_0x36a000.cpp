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

// Function: sub_0036A000
// Address: 0x36a000 - 0x36a1a0
void sub_0036A000_0x36a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A000_0x36a000");
#endif

    switch (ctx->pc) {
        case 0x36a038u: goto label_36a038;
        case 0x36a040u: goto label_36a040;
        case 0x36a054u: goto label_36a054;
        case 0x36a05cu: goto label_36a05c;
        case 0x36a070u: goto label_36a070;
        case 0x36a080u: goto label_36a080;
        case 0x36a098u: goto label_36a098;
        case 0x36a0a0u: goto label_36a0a0;
        case 0x36a0b8u: goto label_36a0b8;
        case 0x36a0d0u: goto label_36a0d0;
        case 0x36a0d8u: goto label_36a0d8;
        case 0x36a100u: goto label_36a100;
        case 0x36a108u: goto label_36a108;
        case 0x36a118u: goto label_36a118;
        case 0x36a12cu: goto label_36a12c;
        case 0x36a140u: goto label_36a140;
        case 0x36a150u: goto label_36a150;
        case 0x36a164u: goto label_36a164;
        default: break;
    }

    ctx->pc = 0x36a000u;

    // 0x36a000: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x36a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36a004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a008: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36a00c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36a010: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36a014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a018: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36a01c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36a020: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36a024: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x36a024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x36a028: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x36a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x36a02c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a030: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A030u;
    SET_GPR_U32(ctx, 31, 0x36A038u);
    ctx->pc = 0x36A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A030u;
    // 0x36a034: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A030u, 0x36A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A038u;
label_36a038:
    // 0x36a038: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A038u;
    SET_GPR_U32(ctx, 31, 0x36A040u);
    ctx->pc = 0x36A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A038u;
    // 0x36a03c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A038u, 0x36A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A040u;
label_36a040:
    // 0x36a040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a04c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A04Cu;
    SET_GPR_U32(ctx, 31, 0x36A054u);
    ctx->pc = 0x36A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A04Cu;
    // 0x36a050: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A04Cu, 0x36A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A054u;
label_36a054:
    // 0x36a054: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A054u;
    SET_GPR_U32(ctx, 31, 0x36A05Cu);
    ctx->pc = 0x36A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A054u;
    // 0x36a058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A054u, 0x36A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A05Cu;
label_36a05c:
    // 0x36a05c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36a05cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a064: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36a064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a068: 0xc102488  jal         func_409220
    ctx->pc = 0x36A068u;
    SET_GPR_U32(ctx, 31, 0x36A070u);
    ctx->pc = 0x36A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A068u;
    // 0x36a06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36A068u, 0x36A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A070u;
label_36a070:
    // 0x36a070: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36a070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a074: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x36a074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36a078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a07c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36a07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36a080:
    // 0x36a080: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a088: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36a088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a08c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a090: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A090u;
    SET_GPR_U32(ctx, 31, 0x36A098u);
    ctx->pc = 0x36A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A090u;
    // 0x36a094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A090u, 0x36A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A098u;
label_36a098:
    // 0x36a098: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A098u;
    SET_GPR_U32(ctx, 31, 0x36A0A0u);
    ctx->pc = 0x36A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A098u;
    // 0x36a09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A098u, 0x36A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0A0u;
label_36a0a0:
    // 0x36a0a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a0a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a0a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A0A8u;
    {
        const bool branch_taken_0x36a0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0A8u;
        // 0x36a0ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0a8) {
            ctx->pc = 0x36A080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a080;
        }
    }
    ctx->pc = 0x36A0B0u;
    // 0x36a0b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0b4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36a0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36a0b8:
    // 0x36a0b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a0bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a0c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0c8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A0C8u;
    SET_GPR_U32(ctx, 31, 0x36A0D0u);
    ctx->pc = 0x36A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0C8u;
    // 0x36a0cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A0C8u, 0x36A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0D0u;
label_36a0d0:
    // 0x36a0d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A0D0u;
    SET_GPR_U32(ctx, 31, 0x36A0D8u);
    ctx->pc = 0x36A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0D0u;
    // 0x36a0d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A0D0u, 0x36A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0D8u;
label_36a0d8:
    // 0x36a0d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a0dc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36a0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36a0e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A0E0u;
    {
        const bool branch_taken_0x36a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0E0u;
        // 0x36a0e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0e0) {
            ctx->pc = 0x36A0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a0b8;
        }
    }
    ctx->pc = 0x36A0E8u;
    // 0x36a0e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36a0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x36a0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36a0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0f8: 0xc08a35c  jal         func_228D70
    ctx->pc = 0x36A0F8u;
    SET_GPR_U32(ctx, 31, 0x36A100u);
    ctx->pc = 0x36A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0F8u;
    // 0x36a0fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D70u, 0x36A0F8u, 0x36A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A100u;
label_36a100:
    // 0x36a100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a104: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a108:
    // 0x36a108: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36a10c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a110: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A110u;
    SET_GPR_U32(ctx, 31, 0x36A118u);
    ctx->pc = 0x36A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A110u;
    // 0x36a114: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A110u, 0x36A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A118u;
label_36a118:
    // 0x36a118: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a11c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a120: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a124: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A124u;
    SET_GPR_U32(ctx, 31, 0x36A12Cu);
    ctx->pc = 0x36A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A124u;
    // 0x36a128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A124u, 0x36A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A12Cu;
label_36a12c:
    // 0x36a12c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A130u;
    {
        const bool branch_taken_0x36a130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A130u;
        // 0x36a134: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a130) {
            ctx->pc = 0x36A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a108;
        }
    }
    ctx->pc = 0x36A138u;
    // 0x36a138: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a13c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a140:
    // 0x36a140: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x36a144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a148: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A148u;
    SET_GPR_U32(ctx, 31, 0x36A150u);
    ctx->pc = 0x36A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A148u;
    // 0x36a14c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A148u, 0x36A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A150u;
label_36a150:
    // 0x36a150: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a158: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a15c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A15Cu;
    SET_GPR_U32(ctx, 31, 0x36A164u);
    ctx->pc = 0x36A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A15Cu;
    // 0x36a160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A15Cu, 0x36A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A164u;
label_36a164:
    // 0x36a164: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36a164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36a168: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A168u;
    {
        const bool branch_taken_0x36a168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A168u;
        // 0x36a16c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a168) {
            ctx->pc = 0x36A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a140;
        }
    }
    ctx->pc = 0x36A170u;
    // 0x36a170: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36a170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36a174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a178: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36a17c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36a17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36a180: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36a180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a184: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36a184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36a188: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x36a188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a18c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x36a18cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a194: 0x3e00008  jr          $ra
    ctx->pc = 0x36A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A194u;
        // 0x36a198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A19Cu;
    // 0x36a19c: 0x0  nop
    ctx->pc = 0x36a19cu;
    // NOP
    ctx->pc = 0x36a1a0u;
}
