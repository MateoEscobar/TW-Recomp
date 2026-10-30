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

// Function: sub_003D38E0
// Address: 0x3d38e0 - 0x3d3968
void sub_003D38E0_0x3d38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D38E0_0x3d38e0");
#endif

    switch (ctx->pc) {
        case 0x3d38e0u: goto label_3d38e0;
        case 0x3d38e4u: goto label_3d38e4;
        case 0x3d38e8u: goto label_3d38e8;
        case 0x3d38ecu: goto label_3d38ec;
        case 0x3d38f0u: goto label_3d38f0;
        case 0x3d38f4u: goto label_3d38f4;
        case 0x3d38f8u: goto label_3d38f8;
        case 0x3d38fcu: goto label_3d38fc;
        case 0x3d3900u: goto label_3d3900;
        case 0x3d3904u: goto label_3d3904;
        case 0x3d3908u: goto label_3d3908;
        case 0x3d390cu: goto label_3d390c;
        case 0x3d3910u: goto label_3d3910;
        case 0x3d3914u: goto label_3d3914;
        case 0x3d3918u: goto label_3d3918;
        case 0x3d391cu: goto label_3d391c;
        case 0x3d3920u: goto label_3d3920;
        case 0x3d3924u: goto label_3d3924;
        case 0x3d3928u: goto label_3d3928;
        case 0x3d392cu: goto label_3d392c;
        case 0x3d3930u: goto label_3d3930;
        case 0x3d3934u: goto label_3d3934;
        case 0x3d3938u: goto label_3d3938;
        case 0x3d393cu: goto label_3d393c;
        case 0x3d3940u: goto label_3d3940;
        case 0x3d3944u: goto label_3d3944;
        case 0x3d3948u: goto label_3d3948;
        case 0x3d394cu: goto label_3d394c;
        case 0x3d3950u: goto label_3d3950;
        case 0x3d3954u: goto label_3d3954;
        case 0x3d3958u: goto label_3d3958;
        case 0x3d395cu: goto label_3d395c;
        case 0x3d3960u: goto label_3d3960;
        case 0x3d3964u: goto label_3d3964;
        default: break;
    }

    ctx->pc = 0x3d38e0u;

label_3d38e0:
    // 0x3d38e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d38e4:
    // 0x3d38e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d38e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d38e8:
    // 0x3d38e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d38ec:
    // 0x3d38ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d38ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d38f0:
    // 0x3d38f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d38f4:
    // 0x3d38f4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d38f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d38f8:
    // 0x3d38f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d38fc:
    // 0x3d38fc: 0x40f809  jalr        $v0
label_3d3900:
    if (ctx->pc == 0x3D3900u) {
        ctx->pc = 0x3D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38FCu;
        // 0x3d3900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3904u;
        goto label_3d3904;
    }
    ctx->pc = 0x3D38FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3904u);
        ctx->pc = 0x3D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38FCu;
        // 0x3d3900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D38FCu, 0x3D3904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3904u;
label_3d3904:
    // 0x3d3904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3908:
    // 0x3d3908: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d3908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3d390c:
    // 0x3d390c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3d3910:
    if (ctx->pc == 0x3D3910u) {
        ctx->pc = 0x3D3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D390Cu;
        // 0x3d3910: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3914u;
        goto label_3d3914;
    }
    ctx->pc = 0x3D390Cu;
    {
        const bool branch_taken_0x3d390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d390c) {
            ctx->pc = 0x3D3910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D390Cu;
            // 0x3d3910: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D391Cu;
            goto label_3d391c;
        }
    }
    ctx->pc = 0x3D3914u;
label_3d3914:
    // 0x3d3914: 0x10000010  b           . + 4 + (0x10 << 2)
label_3d3918:
    if (ctx->pc == 0x3D3918u) {
        ctx->pc = 0x3D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3914u;
        // 0x3d3918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D391Cu;
        goto label_3d391c;
    }
    ctx->pc = 0x3D3914u;
    {
        const bool branch_taken_0x3d3914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3914u;
        // 0x3d3918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3914) {
            ctx->pc = 0x3D3958u;
            goto label_3d3958;
        }
    }
    ctx->pc = 0x3D391Cu;
label_3d391c:
    // 0x3d391c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3920:
    // 0x3d3920: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3d3924:
    if (ctx->pc == 0x3D3924u) {
        ctx->pc = 0x3D3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3920u;
        // 0x3d3924: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3928u;
        goto label_3d3928;
    }
    ctx->pc = 0x3D3920u;
    {
        const bool branch_taken_0x3d3920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3920) {
            ctx->pc = 0x3D3924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3920u;
            // 0x3d3924: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3934u;
            goto label_3d3934;
        }
    }
    ctx->pc = 0x3D3928u;
label_3d3928:
    // 0x3d3928: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d392c:
    // 0x3d392c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d3930:
    // 0x3d3930: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3934:
    // 0x3d3934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d3934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d3938:
    // 0x3d3938: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3d393c:
    if (ctx->pc == 0x3D393Cu) {
        ctx->pc = 0x3D393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3938u;
        // 0x3d393c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3940u;
        goto label_3d3940;
    }
    ctx->pc = 0x3D3938u;
    {
        const bool branch_taken_0x3d3938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3938) {
            ctx->pc = 0x3D393Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3938u;
            // 0x3d393c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D394Cu;
            goto label_3d394c;
        }
    }
    ctx->pc = 0x3D3940u;
label_3d3940:
    // 0x3d3940: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3d3940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_3d3944:
    // 0x3d3944: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3d3944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3d3948:
    // 0x3d3948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d394c:
    // 0x3d394c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3950:
    // 0x3d3950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d3954:
    // 0x3d3954: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3d3954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3d3958:
    // 0x3d3958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d3958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d395c:
    // 0x3d395c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d395cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3960:
    // 0x3d3960: 0x3e00008  jr          $ra
label_3d3964:
    if (ctx->pc == 0x3D3964u) {
        ctx->pc = 0x3D3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3960u;
        // 0x3d3964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3968u;
        goto label_fallthrough_0x3d3960;
    }
    ctx->pc = 0x3D3960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3960u;
        // 0x3d3964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d3960:
    ctx->pc = 0x3D3968u;
}
