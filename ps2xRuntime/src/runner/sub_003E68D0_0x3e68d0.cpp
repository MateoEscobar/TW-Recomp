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

// Function: sub_003E68D0
// Address: 0x3e68d0 - 0x3e69a0
void sub_003E68D0_0x3e68d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E68D0_0x3e68d0");
#endif

    switch (ctx->pc) {
        case 0x3e68fcu: goto label_3e68fc;
        case 0x3e6908u: goto label_3e6908;
        case 0x3e6974u: goto label_3e6974;
        case 0x3e6984u: goto label_3e6984;
        default: break;
    }

    ctx->pc = 0x3e68d0u;

    // 0x3e68d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e68d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e68d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e68d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3e68d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e68d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3e68dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e68dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e68e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e68e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e68e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3e68ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e68ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e68f4: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E68F4u;
    SET_GPR_U32(ctx, 31, 0x3E68FCu);
    ctx->pc = 0x3E68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E68F4u;
    // 0x3e68f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E68F4u, 0x3E68FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68FCu;
label_3e68fc:
    // 0x3e68fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e68fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6900: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6900u;
    SET_GPR_U32(ctx, 31, 0x3E6908u);
    ctx->pc = 0x3E6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6900u;
    // 0x3e6904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6900u, 0x3E6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6908u;
label_3e6908:
    // 0x3e6908: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e6908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e690c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6910: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6910u;
    {
        const bool branch_taken_0x3e6910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6910u;
        // 0x3e6914: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6910) {
            ctx->pc = 0x3E6924u;
            goto label_3e6924;
        }
    }
    ctx->pc = 0x3E6918u;
    // 0x3e6918: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e691c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3e691cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3e6920: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e6924:
    // 0x3e6924: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E6924u;
    {
        const bool branch_taken_0x3e6924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6924) {
            ctx->pc = 0x3E6928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6924u;
            // 0x3e6928: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6950u;
            goto label_3e6950;
        }
    }
    ctx->pc = 0x3E692Cu;
    // 0x3e692c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e6930: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e6930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6934: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3e6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3e6938: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e6938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x3e693c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3e693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3e6940: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x3e6940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x3e6944: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e6944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x3e6948: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e6948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x3e694c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3e694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3e6950:
    // 0x3e6950: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e6950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6954: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x3e6958: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e6958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3e695c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e6960: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e6964: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x3e6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x3e6968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e6968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e696c: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E696Cu;
    SET_GPR_U32(ctx, 31, 0x3E6974u);
    ctx->pc = 0x3E6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E696Cu;
    // 0x3e6970: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E696Cu, 0x3E6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6974u;
label_3e6974:
    // 0x3e6974: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e6974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e6978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e6978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e697c: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E697Cu;
    SET_GPR_U32(ctx, 31, 0x3E6984u);
    ctx->pc = 0x3E6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E697Cu;
    // 0x3e6980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E697Cu, 0x3E6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6984u;
label_3e6984:
    // 0x3e6984: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e6984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e6988: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e6988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e698c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e698cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6990: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e6990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e6994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6998: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6998u;
        // 0x3e699c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E69A0u;
}
