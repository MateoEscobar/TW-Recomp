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

// Function: sub_001B93A8
// Address: 0x1b93a8 - 0x1b9478
void sub_001B93A8_0x1b93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B93A8_0x1b93a8");
#endif

    switch (ctx->pc) {
        case 0x1b93ecu: goto label_1b93ec;
        case 0x1b93fcu: goto label_1b93fc;
        case 0x1b9434u: goto label_1b9434;
        default: break;
    }

    ctx->pc = 0x1b93a8u;

    // 0x1b93a8: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x1b93ac: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x1b93acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
    // 0x1b93b0: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x1b93b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
    // 0x1b93b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b93b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93b8: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x1b93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
    // 0x1b93bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b93bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93c0: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x1b93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
    // 0x1b93c4: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x1b93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x1b93c8: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1b93cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B93CCu;
    {
        const bool branch_taken_0x1b93cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93CCu;
        // 0x1b93d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93cc) {
            ctx->pc = 0x1B9400u;
            goto label_1b9400;
        }
    }
    ctx->pc = 0x1B93D4u;
    // 0x1b93d4: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x1b93d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b93d8: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x1b93d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1b93dc: 0xa3a003ff  sb          $zero, 0x3FF($sp)
    ctx->pc = 0x1b93dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1023), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b93e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93e4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1B93E4u;
    SET_GPR_U32(ctx, 31, 0x1B93ECu);
    ctx->pc = 0x1B93E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93E4u;
    // 0x1b93e8: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1B93E4u, 0x1B93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93ECu;
label_1b93ec:
    // 0x1b93ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b93ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f4: 0xc06eb08  jal         func_1BAC20
    ctx->pc = 0x1B93F4u;
    SET_GPR_U32(ctx, 31, 0x1B93FCu);
    ctx->pc = 0x1B93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93F4u;
    // 0x1b93f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x1B93F4u, 0x1B93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93FCu;
label_1b93fc:
    // 0x1b93fc: 0xae3d0068  sw          $sp, 0x68($s1)
    ctx->pc = 0x1b93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 29));
label_1b9400:
    // 0x1b9400: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b9400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9404: 0x27a30420  addiu       $v1, $sp, 0x420
    ctx->pc = 0x1b9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x1b9408: 0xa3a50420  sb          $a1, 0x420($sp)
    ctx->pc = 0x1b9408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1056), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b940c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b9410: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b9410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b9414: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b9414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9418: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1b9418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b941c: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1b9420: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x1b9420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b9424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b942c: 0xc06e580  jal         func_1B9600
    ctx->pc = 0x1B942Cu;
    SET_GPR_U32(ctx, 31, 0x1B9434u);
    ctx->pc = 0x1B9430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B942Cu;
    // 0x1b9430: 0x8fa70420  lw          $a3, 0x420($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9600u, 0x1B942Cu, 0x1B9434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9434u;
label_1b9434:
    // 0x1b9434: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x1b9434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1b9438: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x1b9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1b943c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B943Cu;
    {
        const bool branch_taken_0x1b943c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B943Cu;
        // 0x1b9440: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b943c) {
            ctx->pc = 0x1B944Cu;
            goto label_1b944c;
        }
    }
    ctx->pc = 0x1B9444u;
    // 0x1b9444: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x1b9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1b9448: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x1b9448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_1b944c:
    // 0x1b944c: 0x7ba30400  lq          $v1, 0x400($sp)
    ctx->pc = 0x1b944cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1b9450: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b9450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9454: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x1b9454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1b9458: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x1b9458u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x1b945c: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x1b945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1b9460: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x1b9460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1b9464: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x1b9464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1b9468: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x1b9468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1b946c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B946Cu;
        // 0x1b9470: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9474u;
    // 0x1b9474: 0x0  nop
    ctx->pc = 0x1b9474u;
    // NOP
    ctx->pc = 0x1b9478u;
}
