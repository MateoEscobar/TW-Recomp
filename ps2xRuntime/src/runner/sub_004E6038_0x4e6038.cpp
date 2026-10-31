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

// Function: sub_004E6038
// Address: 0x4e6038 - 0x4e6168
void sub_004E6038_0x4e6038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6038_0x4e6038");
#endif

    switch (ctx->pc) {
        case 0x4e6068u: goto label_4e6068;
        case 0x4e6070u: goto label_4e6070;
        case 0x4e608cu: goto label_4e608c;
        case 0x4e609cu: goto label_4e609c;
        case 0x4e60a4u: goto label_4e60a4;
        case 0x4e60b0u: goto label_4e60b0;
        case 0x4e60c8u: goto label_4e60c8;
        case 0x4e60e4u: goto label_4e60e4;
        case 0x4e60f4u: goto label_4e60f4;
        case 0x4e60fcu: goto label_4e60fc;
        case 0x4e6108u: goto label_4e6108;
        default: break;
    }

    ctx->pc = 0x4e6038u;

    // 0x4e6038: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e6038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4e603c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4e6040: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e6040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e6044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e6044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e6048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4e604c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e604cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6050: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e6050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4e6054: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4e6054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6058: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e6058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4e605c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x4e605cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x4e6060: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e6060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4e6064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e6068:
    // 0x4e6068: 0x2651fffc  addiu       $s1, $s2, -0x4
    ctx->pc = 0x4e6068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4e606c: 0x0  nop
    ctx->pc = 0x4e606cu;
    // NOP
label_4e6070:
    // 0x4e6070: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e6074: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6078: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e6078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e607c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e607cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6080: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e6080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e6084: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6084u;
    SET_GPR_U32(ctx, 31, 0x4E608Cu);
    ctx->pc = 0x4E6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6084u;
    // 0x4e6088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6084u, 0x4E608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E608Cu;
label_4e608c:
    // 0x4e608c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e608cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6094: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6094u;
    SET_GPR_U32(ctx, 31, 0x4E609Cu);
    ctx->pc = 0x4E6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6094u;
    // 0x4e6098: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6094u, 0x4E609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E609Cu;
label_4e609c:
    // 0x4e609c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E609Cu;
    SET_GPR_U32(ctx, 31, 0x4E60A4u);
    ctx->pc = 0x4E60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E609Cu;
    // 0x4e60a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E609Cu, 0x4E60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E60A4u;
label_4e60a4:
    // 0x4e60a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e60a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e60a8: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E60A8u;
    SET_GPR_U32(ctx, 31, 0x4E60B0u);
    ctx->pc = 0x4E60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E60A8u;
    // 0x4e60ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E60A8u, 0x4E60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E60B0u;
label_4e60b0:
    // 0x4e60b0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e60b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e60b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e60b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e60b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e60b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e60bc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4E60BCu;
    {
        const bool branch_taken_0x4e60bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e60bc) {
            ctx->pc = 0x4E60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E60BCu;
            // 0x4e60c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6070;
        }
    }
    ctx->pc = 0x4E60C4u;
    // 0x4e60c4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4e60c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e60c8:
    // 0x4e60c8: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e60c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e60cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e60ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e60d0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e60d4: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e60d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e60d8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4e60d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e60dc: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E60DCu;
    SET_GPR_U32(ctx, 31, 0x4E60E4u);
    ctx->pc = 0x4E60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E60DCu;
    // 0x4e60e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E60DCu, 0x4E60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E60E4u;
label_4e60e4:
    // 0x4e60e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e60e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e60e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e60ec: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E60ECu;
    SET_GPR_U32(ctx, 31, 0x4E60F4u);
    ctx->pc = 0x4E60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E60ECu;
    // 0x4e60f0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E60ECu, 0x4E60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E60F4u;
label_4e60f4:
    // 0x4e60f4: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E60F4u;
    SET_GPR_U32(ctx, 31, 0x4E60FCu);
    ctx->pc = 0x4E60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E60F4u;
    // 0x4e60f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E60F4u, 0x4E60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E60FCu;
label_4e60fc:
    // 0x4e60fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e60fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6100: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6100u;
    SET_GPR_U32(ctx, 31, 0x4E6108u);
    ctx->pc = 0x4E6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6100u;
    // 0x4e6104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6100u, 0x4E6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6108u;
label_4e6108:
    // 0x4e6108: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e610c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e6110: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e6110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e6114: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4E6114u;
    {
        const bool branch_taken_0x4e6114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6114) {
            ctx->pc = 0x4E6118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6114u;
            // 0x4e6118: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E60C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e60c8;
        }
    }
    ctx->pc = 0x4E611Cu;
    // 0x4e611c: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x4e611cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4e6120: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E6120u;
    {
        const bool branch_taken_0x4e6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6120u;
        // 0x4e6124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6120) {
            ctx->pc = 0x4E6140u;
            goto label_4e6140;
        }
    }
    ctx->pc = 0x4E6128u;
    // 0x4e6128: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e612c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e6130: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e6130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e6134: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e6134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e6138: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x4E6138u;
    {
        const bool branch_taken_0x4e6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6138u;
        // 0x4e613c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6138) {
            ctx->pc = 0x4E6068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6068;
        }
    }
    ctx->pc = 0x4E6140u;
label_4e6140:
    // 0x4e6140: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e6140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e6144: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e6144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e6148: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e6148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e614c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e614cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e6150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e6150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e6154: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e6154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e6158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e6158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e615c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E615Cu;
        // 0x4e6160: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6164u;
    // 0x4e6164: 0x0  nop
    ctx->pc = 0x4e6164u;
    // NOP
    ctx->pc = 0x4e6168u;
}
