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

// Function: sub_00384398
// Address: 0x384398 - 0x384480
void sub_00384398_0x384398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384398_0x384398");
#endif

    switch (ctx->pc) {
        case 0x3843c4u: goto label_3843c4;
        case 0x3843ccu: goto label_3843cc;
        case 0x3843e0u: goto label_3843e0;
        case 0x3843f0u: goto label_3843f0;
        case 0x384408u: goto label_384408;
        case 0x384428u: goto label_384428;
        case 0x384430u: goto label_384430;
        case 0x38444cu: goto label_38444c;
        default: break;
    }

    ctx->pc = 0x384398u;

    // 0x384398: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x384398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38439c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3843a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3843a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3843a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3843a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3843a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3843ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3843acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3843b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3843b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3843b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3843b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3843b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3843b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3843bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3843BCu;
    SET_GPR_U32(ctx, 31, 0x3843C4u);
    ctx->pc = 0x3843C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843BCu;
    // 0x3843c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3843BCu, 0x3843C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843C4u;
label_3843c4:
    // 0x3843c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3843C4u;
    SET_GPR_U32(ctx, 31, 0x3843CCu);
    ctx->pc = 0x3843C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843C4u;
    // 0x3843c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3843C4u, 0x3843CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843CCu;
label_3843cc:
    // 0x3843cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3843ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3843d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3843d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3843d8: 0xc102488  jal         func_409220
    ctx->pc = 0x3843D8u;
    SET_GPR_U32(ctx, 31, 0x3843E0u);
    ctx->pc = 0x3843DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843D8u;
    // 0x3843dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3843D8u, 0x3843E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843E0u;
label_3843e0:
    // 0x3843e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3843e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3843e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843e8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3843e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843ec: 0x0  nop
    ctx->pc = 0x3843ecu;
    // NOP
label_3843f0:
    // 0x3843f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3843f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3843f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3843f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3843f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3843fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3843fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384400: 0xc10250e  jal         func_409438
    ctx->pc = 0x384400u;
    SET_GPR_U32(ctx, 31, 0x384408u);
    ctx->pc = 0x384404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384400u;
    // 0x384404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409438u, 0x384400u, 0x384408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384408u;
label_384408:
    // 0x384408: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38440c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x38440cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x384410: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x384410u;
    {
        const bool branch_taken_0x384410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384410u;
        // 0x384414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384410) {
            ctx->pc = 0x3843F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3843f0;
        }
    }
    ctx->pc = 0x384418u;
    // 0x384418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x384418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38441c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384420: 0xc0e43a2  jal         func_390E88
    ctx->pc = 0x384420u;
    SET_GPR_U32(ctx, 31, 0x384428u);
    ctx->pc = 0x384424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384420u;
    // 0x384424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E88u, 0x384420u, 0x384428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384428u;
label_384428:
    // 0x384428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38442c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x38442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_384430:
    // 0x384430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384434: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x384434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x384438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38443c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x38443cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x384440: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x384440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384444: 0xc102592  jal         func_409648
    ctx->pc = 0x384444u;
    SET_GPR_U32(ctx, 31, 0x38444Cu);
    ctx->pc = 0x384448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384444u;
    // 0x384448: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409648u, 0x384444u, 0x38444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38444Cu;
label_38444c:
    // 0x38444c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x38444cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x384450: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x384450u;
    {
        const bool branch_taken_0x384450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384450u;
        // 0x384454: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384450) {
            ctx->pc = 0x384430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384430;
        }
    }
    ctx->pc = 0x384458u;
    // 0x384458: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x384458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38445c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38445cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384460: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x384460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x384464: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x384464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384468: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x384468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38446c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x38446cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384474: 0x3e00008  jr          $ra
    ctx->pc = 0x384474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384474u;
        // 0x384478: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38447Cu;
    // 0x38447c: 0x0  nop
    ctx->pc = 0x38447cu;
    // NOP
    ctx->pc = 0x384480u;
}
