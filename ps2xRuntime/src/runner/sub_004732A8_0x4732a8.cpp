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

// Function: sub_004732A8
// Address: 0x4732a8 - 0x473388
void sub_004732A8_0x4732a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004732A8_0x4732a8");
#endif

    switch (ctx->pc) {
        case 0x4732e4u: goto label_4732e4;
        case 0x473328u: goto label_473328;
        case 0x473360u: goto label_473360;
        default: break;
    }

    ctx->pc = 0x4732a8u;

    // 0x4732a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4732a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4732ac: 0xaf858900  sw          $a1, -0x7700($gp)
    ctx->pc = 0x4732acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 5));
    // 0x4732b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4732b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4732b4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4732b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x4732b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4732b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4732bc: 0x8f858528  lw          $a1, -0x7AD8($gp)
    ctx->pc = 0x4732bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x4732c0: 0x8f87852c  lw          $a3, -0x7AD4($gp)
    ctx->pc = 0x4732c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935852)));
    // 0x4732c4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4732c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4732c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4732c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4732cc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4732ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4732d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4732d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4732d4: 0x2508a3e8  addiu       $t0, $t0, -0x5C18
    ctx->pc = 0x4732d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943720));
    // 0x4732d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4732d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4732dc: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4732DCu;
    SET_GPR_U32(ctx, 31, 0x4732E4u);
    ctx->pc = 0x4732E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4732DCu;
    // 0x4732e0: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4732DCu, 0x4732E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4732E4u;
label_4732e4:
    // 0x4732e4: 0x8f848900  lw          $a0, -0x7700($gp)
    ctx->pc = 0x4732e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x4732e8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4732e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4732ec: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x4732ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4732f0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4732f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4732F4u;
    {
        const bool branch_taken_0x4732f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4732F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4732F4u;
        // 0x4732f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4732f4) {
            ctx->pc = 0x473304u;
            goto label_473304;
        }
    }
    ctx->pc = 0x4732FCu;
    // 0x4732fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4732FCu;
    {
        const bool branch_taken_0x4732fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4732FCu;
        // 0x473300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4732fc) {
            ctx->pc = 0x473370u;
            goto label_473370;
        }
    }
    ctx->pc = 0x473304u;
label_473304:
    // 0x473304: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x473304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x473308: 0x8f858530  lw          $a1, -0x7AD0($gp)
    ctx->pc = 0x473308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x47330c: 0x8f878534  lw          $a3, -0x7ACC($gp)
    ctx->pc = 0x47330cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935860)));
    // 0x473310: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x473310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x473314: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x473314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x473318: 0x2508a410  addiu       $t0, $t0, -0x5BF0
    ctx->pc = 0x473318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943760));
    // 0x47331c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x47331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x473320: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x473320u;
    SET_GPR_U32(ctx, 31, 0x473328u);
    ctx->pc = 0x473324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473320u;
    // 0x473324: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x473320u, 0x473328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473328u;
label_473328:
    // 0x473328: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x47332c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x47332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x473330: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x473330u;
    {
        const bool branch_taken_0x473330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473330u;
        // 0x473334: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473330) {
            ctx->pc = 0x473358u;
            goto label_473358;
        }
    }
    ctx->pc = 0x473338u;
    // 0x473338: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x473338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x47333c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x473340: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x473340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x473344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x473344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x473348: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x473348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x47334c: 0xaf838904  sw          $v1, -0x76FC($gp)
    ctx->pc = 0x47334cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 3));
    // 0x473350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x473350u;
    {
        const bool branch_taken_0x473350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473350u;
        // 0x473354: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473350) {
            ctx->pc = 0x473370u;
            goto label_473370;
        }
    }
    ctx->pc = 0x473358u;
label_473358:
    // 0x473358: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x473358u;
    SET_GPR_U32(ctx, 31, 0x473360u);
    ctx->pc = 0x47335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473358u;
    // 0x47335c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x473358u, 0x473360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473360u;
label_473360:
    // 0x473360: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x473364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x473364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473368: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x473368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x47336c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47336cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_473370:
    // 0x473370: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x473370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47337c: 0x3e00008  jr          $ra
    ctx->pc = 0x47337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47337Cu;
        // 0x473380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47337Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473384u;
    // 0x473384: 0x0  nop
    ctx->pc = 0x473384u;
    // NOP
    ctx->pc = 0x473388u;
}
