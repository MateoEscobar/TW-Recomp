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

// Function: sub_004B1368
// Address: 0x4b1368 - 0x4b13f8
void sub_004B1368_0x4b1368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1368_0x4b1368");
#endif

    switch (ctx->pc) {
        case 0x4b139cu: goto label_4b139c;
        case 0x4b13b0u: goto label_4b13b0;
        case 0x4b13dcu: goto label_4b13dc;
        default: break;
    }

    ctx->pc = 0x4b1368u;

    // 0x4b1368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b136c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b1370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b1374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1378: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4b1378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4b137c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4B137Cu;
    {
        const bool branch_taken_0x4b137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b137c) {
            ctx->pc = 0x4B1380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B137Cu;
            // 0x4b1380: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B13A8u;
            goto label_4b13a8;
        }
    }
    ctx->pc = 0x4B1384u;
    // 0x4b1384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b1384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b138c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B138Cu;
    {
        const bool branch_taken_0x4b138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b138c) {
            ctx->pc = 0x4B1390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B138Cu;
            // 0x4b1390: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B13A8u;
            goto label_4b13a8;
        }
    }
    ctx->pc = 0x4B1394u;
    // 0x4b1394: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B1394u;
    SET_GPR_U32(ctx, 31, 0x4B139Cu);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B1394u, 0x4B139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B139Cu;
label_4b139c:
    // 0x4b139c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4b139cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4b13a0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4b13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4b13a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4b13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4b13a8:
    // 0x4b13a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B13A8u;
    {
        const bool branch_taken_0x4b13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B13A8u;
        // 0x4b13ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b13a8) {
            ctx->pc = 0x4B13CCu;
            goto label_4b13cc;
        }
    }
    ctx->pc = 0x4B13B0u;
label_4b13b0:
    // 0x4b13b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4b13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4b13b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b13b8: 0x0  nop
    ctx->pc = 0x4b13b8u;
    // NOP
    // 0x4b13bc: 0x0  nop
    ctx->pc = 0x4b13bcu;
    // NOP
    // 0x4b13c0: 0x0  nop
    ctx->pc = 0x4b13c0u;
    // NOP
    // 0x4b13c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B13C4u;
    {
        const bool branch_taken_0x4b13c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b13c4) {
            ctx->pc = 0x4B13B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b13b0;
        }
    }
    ctx->pc = 0x4B13CCu;
label_4b13cc:
    // 0x4b13cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B13CCu;
    {
        const bool branch_taken_0x4b13cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b13cc) {
            ctx->pc = 0x4B13D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B13CCu;
            // 0x4b13d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B13E4u;
            goto label_4b13e4;
        }
    }
    ctx->pc = 0x4B13D4u;
    // 0x4b13d4: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B13D4u;
    SET_GPR_U32(ctx, 31, 0x4B13DCu);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B13D4u, 0x4B13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B13DCu;
label_4b13dc:
    // 0x4b13dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4b13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4b13e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b13e4:
    // 0x4b13e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b13e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b13e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b13e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b13ec: 0x812c222  j           func_4B0888
    ctx->pc = 0x4B13ECu;
    ctx->pc = 0x4B13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B13ECu;
    // 0x4b13f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0888u;
    sub_004B0888_0x4b0888(rdram, ctx, runtime); return;
    ctx->pc = 0x4B13F4u;
    // 0x4b13f4: 0x0  nop
    ctx->pc = 0x4b13f4u;
    // NOP
    ctx->pc = 0x4b13f8u;
}
